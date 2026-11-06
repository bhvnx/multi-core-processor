# UART Controller Specification

> Design spec for `rtl/uart.v`. Register map is the authoritative definition in `rtl/memory_map.vh`.
> Reference: chipmunklogic.com UART Controller v1.1 design; adapted for this project's bus interface and IRQ system.

---

## 1. Overview

The UART controller implements full-duplex asynchronous serial communication at a configurable baud rate. It sits on the peripheral data bus at base address `0x1000_0000` and signals the PicoRV32 cores via IRQ[2] (RX) and IRQ[3] (TX).

**Key features:**
- Full duplex — TX and RX operate independently
- 8-bit data, 1 start bit, 1 stop bit (8N1 baseline)
- Configurable parity: none / even / odd
- Configurable baud rate via BAUD_DIV register
- 16-entry TX and RX FIFOs
- 2-flop CDC synchroniser on the RX serial line
- Error detection: framing error, parity error
- IRQ on TX FIFO empty and RX data available

---

## 2. UART Protocol

### 2.1 Packet format

```
  Idle  Start  D0  D1  D2  D3  D4  D5  D6  D7  [Parity]  Stop  Idle
  ────┐   ┌────┐   ┌────────── 8 data bits (LSb first) ─────┐         ┌────
      │   │    └───┘                                         └─────────┘
      └───┘
       1       8 (LSb→MSb)                               opt.    1
      bit         bits                                   bit    bit
```

- **Idle:** line held high
- **Start bit:** one bit period low — signals start of frame
- **Data bits:** 8 bits, LSb transmitted first
- **Parity bit** (optional): computed over the 8 data bits
- **Stop bit:** one bit period high — signals end of frame; a low stop bit is a framing error

### 2.2 Baud rate and clock

UART is asynchronous — no shared clock, no handshake between devices. The baud rate must be agreed by both ends.

Supported baud rates (at 50 MHz system clock):

| Baud rate | BAUD_DIV value | Actual baud | Error |
|---|---|---|---|
| 9600 | 5208 | 9600.6 | <0.01% |
| 19200 | 2604 | 19200.3 | <0.01% |
| 57600 | 868 | 57603 | <0.01% |
| 115200 | 434 | 115207 | <0.01% |

> Formula: `BAUD_DIV = clk_freq / baud_rate` (round to nearest integer). Q1 open: clock frequency not confirmed; 50 MHz assumed, default BAUD_DIV reset value = 434.

**Baud rate tolerance:** The receiver tolerates ±5% error between its own sampling clock and the transmitter's baud rate. This is a standard UART constraint derived from the 8× oversampling geometry — the accumulated phase error across one full frame (76 sampling cycles to reach the middle of the stop bit) must stay within half a bit period.

---

## 3. Architecture

Three sub-modules:

```
                       ┌─────────────────────────────────────┐
  Bus interface ──────►│         UART Controller             │
  (mem_valid,          │                                     │
   mem_addr,           │  ┌──────────┐    ┌────────────────┐ │───► TX (serial out)
   mem_wdata,          │  │   UART   │    │  Baud          │ │
   mem_wstrb,          │  │   TX     │◄───│  Generator     │ │◄─── RX (serial in)
   mem_ready,          │  └──────────┘    │  (pulse-based) │ │
   mem_rdata)          │                  │                │ │
                       │  ┌──────────┐    │  TX: ÷BAUD_DIV │ │───► irq[2] (RX ready)
  IRQ ◄────────────────│  │   UART   │◄───│  RX: ÷BAUD_DIV │ │───► irq[3] (TX empty)
                       │  │   RX     │    │      ÷8        │ │
                       │  │  +CDC    │    └────────────────┘ │
                       │  └──────────┘                       │
                       └─────────────────────────────────────┘
```

### 3.1 Baud Generator

Generates enable pulses (not divided clocks) to drive TX and RX state machines. Using pulses rather than a divided clock is correct RTL practice — a flip-flop clock divider creates a non-primary clock that causes timing analysis problems, especially on FPGAs.

- **TX baud pulse:** one pulse per bit period = `clk_freq / BAUD_DIV` Hz
- **RX baud pulse:** 8× faster = `clk_freq / (BAUD_DIV / 8)` Hz — drives the oversampler

Implementation: a down-counter reloaded from BAUD_DIV on each underflow; the reload generates the pulse.

### 3.2 UART Transmitter

**FSM states:**

| State | Description |
|---|---|
| `IDLE` | Line held high; waits for data in TX FIFO |
| `START` | Drives TX low for one baud period (start bit) |
| `DATA` | Shifts out D0–D7 LSb-first, one bit per baud pulse |
| `PARITY` | Transmits computed parity bit (skipped if parity=NONE) |
| `STOP` | Drives TX high for one baud period (stop bit); then returns to IDLE |

The transmitter reads from the TX FIFO at the start of each new frame. It asserts `tx_fifo_empty_irq` (→ IRQ[3]) when the FIFO drains to zero.

### 3.3 UART Receiver

**CDC synchroniser:** The incoming RX line is clocked by an external unrelated clock. A 2-flop synchroniser resolves metastability before the signal enters any combinational logic.

**Start bit detection:** The receiver idles monitoring for a falling edge on the synchronised RX line. On detecting low, it waits 4 RX baud pulses (half a bit period) and re-samples. If still low, the start bit is confirmed; if high, it was a glitch and the receiver resets.

**Oversampling:** The receiver uses 8× oversampling — it samples each bit 8 times and takes the sample at the mid-point (pulse 4 of 8) to maximise setup/hold margin against transmitter clock drift.

**FSM states:**

| State | Description |
|---|---|
| `IDLE` | Waiting for start bit (falling edge on RX) |
| `START` | Confirming start bit at mid-point (4 RX pulses in) |
| `DATA` | Sampling D0–D7 at mid-point of each bit period |
| `PARITY` | Sampling parity bit; computes expected vs. received |
| `STOP` | Sampling stop bit; flags framing error if stop bit = 0 |
| `DONE` | Writes received byte + error flags to RX FIFO; returns to IDLE |

The receiver asserts `rx_data_ready_irq` (→ IRQ[2]) when data is written to the RX FIFO.

### 3.4 FIFOs

Both TX and RX use 16-entry × 8-bit FIFOs.

| Property | TX FIFO | RX FIFO |
|---|---|---|
| Depth | 16 entries | 16 entries |
| Width | 8 bits | 8 bits (+ 2 error flag bits) |
| Write side | Bus write to TX_DATA | UART RX FSM on DONE |
| Read side | UART TX FSM on frame start | Bus read of RX_DATA |
| Full condition | STATUS[0] = 0 (TX not ready) | — |
| Non-empty condition | — | STATUS[1] = 1 (RX available) |
| Overflow | Write dropped silently; TX_FULL sticky in STATUS | Write dropped; RX_OVF sticky in STATUS |

> Q7 open: FIFO depth 16 assumed but not confirmed with FW team.

---

## 4. Register Map

Base address: `0x1000_0000`. All registers are 32-bit word-addressed; byte enables (`mem_wstrb`) respected on writes.

| Offset | Name | Access | Reset | Description |
|---|---|---|---|---|
| `0x00` | `TX_DATA` | W | — | Byte to transmit in bits[7:0]. Firmware must check STATUS[0]=1 before writing. If FIFO is full, write is dropped. |
| `0x04` | `RX_DATA` | R | — | bits[7:0] = received data byte; bit[31]=1 means the read is valid (FIFO non-empty). Reading dequeues one entry. |
| `0x08` | `STATUS` | R | `0x0001` | See §4.1 |
| `0x0C` | `BAUD_DIV` | R/W | `434` | Integer divider: `baud = clk_freq / BAUD_DIV`. Must not be written while a frame is in flight (TX busy or RX active). |
| `0x10` | `IRQ_EN` | R/W | `0x0000` | See §4.2 |
| `0x14` | `PARITY_CFG` | R/W | `0x0000` | bits[1:0]: `00`=none, `01`=odd, `10`=even |

### 4.1 STATUS register (`0x08`, read-only)

| Bit | Name | Description |
|---|---|---|
| 0 | `TX_READY` | 1 = TX FIFO has space (not full); safe to write TX_DATA |
| 1 | `RX_AVAIL` | 1 = RX FIFO has data; safe to read RX_DATA |
| 2 | `TX_BUSY` | 1 = a frame is currently being transmitted |
| 3 | `RX_BUSY` | 1 = a frame is currently being received |
| 4 | `FRAME_ERR` | Sticky: stop bit was 0 on last received frame; write any value to STATUS to clear |
| 5 | `PARITY_ERR` | Sticky: parity mismatch on last received frame; write any value to STATUS to clear |
| 6 | `RX_OVF` | Sticky: RX FIFO overflow (data was dropped); write any value to STATUS to clear |
| 31:7 | — | Reserved, reads 0 |

### 4.2 IRQ_EN register (`0x10`, read/write)

| Bit | Name | IRQ line | Description |
|---|---|---|---|
| 0 | `TX_IRQ_EN` | IRQ[3] | 1 = assert IRQ[3] when TX FIFO becomes empty |
| 1 | `RX_IRQ_EN` | IRQ[2] | 1 = assert IRQ[2] when RX FIFO receives a byte |
| 31:2 | — | — | Reserved, writes ignored |

Both IRQs are level-sensitive and held until the firmware services the condition (reads RX_DATA / writes TX_DATA).

---

## 5. Signal Interface (module ports)

```verilog
module uart (
    input  wire        clk,
    input  wire        resetn,

    // Bus interface (from addr_decoder)
    input  wire        mem_valid,
    input  wire [31:0] mem_addr,
    input  wire [31:0] mem_wdata,
    input  wire [ 3:0] mem_wstrb,
    output wire        mem_ready,
    output wire [31:0] mem_rdata,

    // IRQ outputs (to PicoRV32 irq[])
    output wire        irq_rx,       // → irq[2]
    output wire        irq_tx,       // → irq[3]

    // Serial interface
    output wire        uart_tx,
    input  wire        uart_rx
);
```

The module uses `mem_addr[7:0]` as the register offset (consistent with all other peripherals). `mem_valid` is already gated by `addr_decoder` so the module treats every `mem_valid=1` as addressed to itself.

---

## 6. Firmware Usage

### Polling TX (no IRQ)

```c
// Wait for TX FIFO space, then send
while (!(UART_STATUS & 0x1));   // poll TX_READY
UART_TX_DATA = byte;
```

### Polling RX (no IRQ)

```c
// Wait for data, then read
while (!(UART_STATUS & 0x2));   // poll RX_AVAIL
uint8_t byte = UART_RX_DATA & 0xFF;
```

### IRQ-driven RX

1. Enable: `UART_IRQ_EN |= 0x2;`
2. In IRQ handler (triggered on IRQ[2]): read `RX_DATA` until `STATUS[1]=0`
3. IRQ clears automatically when FIFO is drained

### Baud rate configuration

```c
// At 50 MHz: 115200 bps
UART_BAUD_DIV = 434;

// At 50 MHz: 9600 bps
UART_BAUD_DIV = 5208;
```

Write BAUD_DIV only while STATUS[2]=0 (TX not busy) and STATUS[3]=0 (RX not busy).

---

## 7. Error Handling

| Error | Hardware flag | Cause | Firmware action |
|---|---|---|---|
| Framing error | STATUS[4] `FRAME_ERR` | Stop bit sampled as 0 | Discard received byte; write STATUS to clear |
| Parity error | STATUS[5] `PARITY_ERR` | Computed parity ≠ received parity | Discard received byte; write STATUS to clear |
| RX overflow | STATUS[6] `RX_OVF` | RX FIFO full when new byte arrived | Byte dropped; write STATUS to clear; adjust polling rate |

Error flags are sticky — they hold until firmware explicitly clears them by writing (any value) to the STATUS register.

---

## 8. Open Questions

| # | Question | Current assumption |
|---|---|---|
| Q1 | System clock frequency | 50 MHz (BAUD_DIV default = 434 for 115200) |
| Q7 | FIFO depth | 16 entries each direction |
| — | Parity feature required for Phase 1? | PARITY_CFG register included; can be tied to NONE if not needed |
| — | Number of stop bits | 1 stop bit assumed; 2-stop-bit mode deferred |
| — | RX FIFO error flags stored per-entry or global sticky? | Global sticky assumed; per-entry requires wider FIFO |
