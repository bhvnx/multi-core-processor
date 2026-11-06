# UART Controller — Block-Level Test Plan

> Tests are derived from `docs/uart_spec.md`. All cycle counts assume 50 MHz system clock
> (BAUD_DIV default = 434 for 115200 bps). Adjust proportionally if clock frequency changes.
> Tests are independent of RTL implementation — drive inputs, observe outputs at the module boundary.

---

## Clock Cycle Reference

All timing is derived from BAUD_DIV. Use these formulas before writing any test stimulus.

```
TX baud pulse period  = BAUD_DIV clock cycles            (one pulse per bit)
RX baud pulse period  = BAUD_DIV >> 3 clock cycles       (8× oversampling)
                      = floor(BAUD_DIV / 8)

One UART bit period (TX drive) = BAUD_DIV cycles

RX start-bit confirm  = 4 × (BAUD_DIV >> 3) cycles after falling edge
RX mid-bit sample     = every 8 × (BAUD_DIV >> 3) cycles from start-bit confirm
```

**Computed values at BAUD_DIV = 434 (115200 bps, 50 MHz):**

| Quantity | Formula | Value (cycles) |
|---|---|---|
| TX baud period | `BAUD_DIV` | 434 |
| RX baud period | `BAUD_DIV >> 3` | 54 |
| RX start-bit confirm offset | `4 × 54` | 216 |
| RX bit-to-bit sample spacing | `8 × 54` | 432 |
| Full 8N1 TX frame (no parity) | `10 × 434` | 4340 |
| Full 8N1 TX frame (+ parity) | `11 × 434` | 4774 |
| Full 8N1 RX frame (no parity, from falling edge to DONE) | `4×54 + 10×8×54` | `216 + 4320 = 4536` |
| Full 8N1 RX frame (+ parity) | `4×54 + 11×8×54` | `216 + 4752 = 4968` |

> At 9600 bps (BAUD_DIV = 5208): TX period = 5208 cycles, RX period = 651 cycles.
> At 115200 bps with ±5% tolerance: acceptable TX period range = 413–455 cycles.

---

## Test Groups

| Group | ID range | Focus |
|---|---|---|
| Reset & defaults | T-RST | Power-on register values, idle line state |
| Baud generator | T-BDG | TX pulse period, RX pulse period, BAUD_DIV write |
| TX path | T-TX | Frame format, bit order, parity, back-to-back |
| TX FIFO | T-TXF | Depth, full/overflow, IRQ, back-pressure |
| RX path | T-RX | Frame reception, oversampling, glitch rejection |
| RX FIFO | T-RXF | Depth, overflow, dequeue ordering, IRQ |
| Register access | T-REG | Read/write correctness, sticky flag clear |
| Parity | T-PAR | Even, odd, none; parity error detection |
| Error conditions | T-ERR | Framing error, parity error, RX overflow |
| IRQ | T-IRQ | Assert / deassert conditions for IRQ[2] and IRQ[3] |
| Corner cases | T-COR | Boundary conditions, stress scenarios |

---

## T-RST: Reset and Defaults

**T-RST-01 — Post-reset idle state**
- Apply `resetn=0` for 5 cycles then `resetn=1`
- Verify `uart_tx = 1` (line idles high)
- Verify `mem_ready = 0`
- Verify `irq_rx = 0`, `irq_tx = 0`

**T-RST-02 — STATUS register reset value**
- Read STATUS (`mem_addr=0x08`, `mem_wstrb=0`)
- Expect `0x00000001` — only TX_READY[0] set (TX FIFO empty = not full = ready)

**T-RST-03 — BAUD_DIV reset value**
- Read BAUD_DIV (`mem_addr=0x0C`)
- Expect `0x000001B2` (= 434)

**T-RST-04 — IRQ_EN and PARITY_CFG reset to 0**
- Read IRQ_EN (`0x10`), expect `0x00000000`
- Read PARITY_CFG (`0x14`), expect `0x00000000`

---

## T-BDG: Baud Generator Timing

These tests verify the baud counter period in clock cycles. Count rising-edge-to-rising-edge between consecutive `baud_tx` and `baud_rx` pulses (observable via TX line transitions or a testbench probe).

**T-BDG-01 — TX baud pulse period at default BAUD_DIV=434**
- Write one byte to TX_DATA; monitor `uart_tx`
- Measure: number of `clk` cycles from start-bit falling edge to next falling edge (D0)
- Expected: **434 cycles** ± 1 (counter starts at BAUD_DIV-1 → 0)

**T-BDG-02 — RX baud pulse period at default BAUD_DIV=434**
- Drive `uart_rx` with a start bit; probe internally or infer from RX FSM state transitions
- Expected RX pulse period: **54 cycles** (434 >> 3)
- Verify start-bit confirm happens **216 cycles** after the falling edge of start bit

**T-BDG-03 — TX period after BAUD_DIV reprogrammed to 868 (57600 bps)**
- Write BAUD_DIV = 868 while TX idle (`STATUS[2]=0`) and RX idle (`STATUS[3]=0`)
- Transmit one byte; measure bit period
- Expected: **868 cycles** per bit

**T-BDG-04 — RX period after BAUD_DIV=868**
- Expected RX pulse: `868 >> 3 = 108` cycles
- Start-bit confirm offset: `4 × 108 = 432` cycles

**T-BDG-05 — BAUD_DIV=1 edge case**
- Write BAUD_DIV = 1
- Counter reloads every cycle; TX and RX pulse every clock cycle
- Verify no hang or X-propagation

---

## T-TX: Transmitter Path

**T-TX-01 — Basic 8N1 frame, no parity (0x55 = 0101_0101)**
- Write `0x55` to TX_DATA
- Monitor `uart_tx`; verify frame timing:

```
Cycle 0:        Start bit   uart_tx = 0  (1 × 434 cycles)
Cycle 434:      D0 = 1      uart_tx = 1  (1 × 434 cycles)
Cycle 868:      D1 = 0      uart_tx = 0
Cycle 1302:     D2 = 1      uart_tx = 1
Cycle 1736:     D3 = 0      uart_tx = 0
Cycle 2170:     D4 = 1      uart_tx = 1
Cycle 2604:     D5 = 0      uart_tx = 0
Cycle 3038:     D6 = 1      uart_tx = 1
Cycle 3472:     D7 = 0      uart_tx = 0
Cycle 3906:     Stop bit    uart_tx = 1
Cycle 4340:     Idle        uart_tx = 1
```

**T-TX-02 — LSb-first bit ordering (0xAA = 1010_1010)**
- Expect D0=0, D1=1, D2=0, D3=1, D4=0, D5=1, D6=0, D7=1

**T-TX-03 — All zeros (0x00)**
- 8 data bits all low; stop bit restores line high

**T-TX-04 — All ones (0xFF)**
- 8 data bits all high; indistinguishable from idle except for start bit

**T-TX-05 — Back-to-back frames**
- Write two bytes to TX_DATA with no gap
- Verify second start bit begins exactly 1 TX baud period after first stop bit ends (no extra idle cycle between consecutive frames when FIFO has data)

**T-TX-06 — BAUD_DIV reprogrammed mid-idle**
- Change BAUD_DIV while `STATUS[2]=0`
- Transmit frame immediately after; verify bit period matches new BAUD_DIV

---

## T-TXF: TX FIFO

**T-TXF-01 — FIFO empty on reset**
- After reset: STATUS[0] (TX_READY) = 1, STATUS[2] (TX_BUSY) = 0

**T-TXF-02 — Fill FIFO to depth 16**
- Write 16 bytes to TX_DATA in consecutive bus cycles
- After 16th write: STATUS[0] should deassert (TX_READY=0, FIFO full)
- Verify all 16 bytes appear on `uart_tx` in order

**T-TXF-03 — 17th write dropped on full FIFO**
- With FIFO full: write a 17th byte (STATUS[0]=0, so firmware should not do this, but test the hardware guard)
- Verify `uart_tx` sequence contains exactly 16 bytes (17th is silently dropped)
- Note: spec says "write dropped silently"; no sticky flag for TX overflow

**T-TXF-04 — TX_READY de-asserts exactly at depth 16**
- Write bytes one at a time; check STATUS[0] after each write
- STATUS[0] must remain 1 for writes 1–15; deassert after write 16

**T-TXF-05 — TX_READY re-asserts as FIFO drains**
- With FIFO full: allow TX FSM to drain one byte
- After one frame completes (~4340 cycles at 115200 bps): STATUS[0] must be 1 again

**T-TXF-06 — IRQ[3] behaviour (TX empty)**
- Enable TX IRQ: write IRQ_EN[0]=1
- Load 1 byte; IRQ[3] should be low (FIFO non-empty)
- Wait for frame to complete: IRQ[3] asserts (FIFO empty)
- Write another byte: IRQ[3] deasserts immediately (FIFO non-empty again)

**T-TXF-07 — IRQ[3] stays low when IRQ_EN[0]=0**
- Load then drain FIFO with IRQ_EN[0]=0; verify irq_tx remains 0 throughout

**T-TXF-08 — FIFO ordering (FIFO is FIFO, not LIFO)**
- Write bytes 0x01, 0x02, 0x03 in order
- Verify `uart_tx` transmits 0x01 first, 0x02 second, 0x03 third

---

## T-RX: Receiver Path

Drive `uart_rx` from the testbench at the UART bit rate. Apply stimulus manually timed to `clk`.

**Stimulus helper — drive one frame at BAUD_DIV=434:**
```
Bit period = 434 cycles
Cycle 0:          uart_rx = 0  (start bit)
Cycle 434:        uart_rx = D0
Cycle 868:        uart_rx = D1
...
Cycle 3472:       uart_rx = D7
Cycle 3906:       uart_rx = 1  (stop bit)
Cycle 4340:       uart_rx = 1  (idle)
```

**T-RX-01 — Basic 8N1 receive, no parity (send 0xA5 = 1010_0101)**
- Drive frame as above with data 0xA5
- Wait for STATUS[1] (RX_AVAIL) to assert
- Read RX_DATA; expect `0x800000A5` (bit[31]=1, data=0xA5)

**T-RX-02 — Start-bit glitch rejection**
- Drive `uart_rx` low for only 100 cycles (< 216 cycle confirm threshold), then high
- Verify STATUS[1] never asserts — receiver ignores the glitch

**T-RX-03 — Mid-bit sampling alignment**
- Send 0x55 (alternating bits); measure the cycle at which STATUS[1] asserts
- Expected: `4 × 54 + 10 × 8 × 54 = 4536` cycles after the start-bit falling edge
- Tolerance: ±54 cycles (one RX baud period)

**T-RX-04 — Back-to-back frames**
- Drive two frames with no gap (second start bit immediately after first stop bit)
- Both bytes must appear in RX FIFO in order

**T-RX-05 — Transmitter baud rate at +5% tolerance**
- Drive `uart_rx` at bit period = `434 × 1.05 = 456` cycles per bit (slower transmitter)
- Verify byte is received correctly (receiver must tolerate within ±5%)

**T-RX-06 — Transmitter baud rate at −5% tolerance**
- Drive `uart_rx` at bit period = `434 × 0.95 = 412` cycles per bit (faster transmitter)
- Verify byte is received correctly

---

## T-RXF: RX FIFO

**T-RXF-01 — FIFO empty on reset**
- After reset: STATUS[1] (RX_AVAIL) = 0

**T-RXF-02 — Fill FIFO to depth 16**
- Drive 16 frames back-to-back on `uart_rx`
- Verify STATUS[1] asserts after the first frame is written to FIFO
- After 16 frames: FIFO full (depth = 16)
- Verify STATUS[6] (RX_OVF) = 0 (not yet overflowed)

**T-RXF-03 — 17th received byte triggers RX_OVF**
- With FIFO full: drive a 17th frame on `uart_rx`
- Verify STATUS[6] (RX_OVF) = 1 after the 17th frame completes
- Verify the 17th byte is NOT dequeued by subsequent reads (first 16 are intact)

**T-RXF-04 — RX_OVF sticky: persists until STATUS write**
- RX_OVF set from T-RXF-03
- Drain FIFO by reading RX_DATA 16 times
- Verify STATUS[6] still = 1 (sticky, not cleared by reads)
- Write any value to STATUS (`mem_addr=0x08, mem_wstrb!=0`)
- Verify STATUS[6] = 0

**T-RXF-05 — FIFO ordering**
- Drive frames with data 0x11, 0x22, 0x33
- Read RX_DATA three times; expect 0x11, 0x22, 0x33 in that order

**T-RXF-06 — Each read dequeues exactly one entry**
- Drive 3 frames; read RX_DATA once
- STATUS[1] must still be 1 (2 entries remain)
- Read twice more; STATUS[1] must be 0

**T-RXF-07 — Read from empty FIFO returns invalid**
- With FIFO empty (STATUS[1]=0): read RX_DATA
- Expect `mem_rdata[31] = 0` (read is invalid; no data dequeued)

**T-RXF-08 — IRQ[2] behaviour (RX data available)**
- Enable RX IRQ: write IRQ_EN[1]=1
- Drive one frame: irq_rx must assert when byte enters FIFO
- Read RX_DATA (drains FIFO): irq_rx must deassert
- Drive another frame: irq_rx asserts again

**T-RXF-09 — IRQ[2] stays low when IRQ_EN[1]=0**
- Receive data with IRQ_EN[1]=0; verify irq_rx remains 0

---

## T-REG: Register Access

**T-REG-01 — BAUD_DIV read-after-write**
- Write BAUD_DIV = 0x0100; read back; expect 0x00000100

**T-REG-02 — IRQ_EN write mask**
- Write IRQ_EN = 0xFFFFFFFF; read back; expect 0x00000003 (only bits[1:0] writable)

**T-REG-03 — PARITY_CFG write mask**
- Write PARITY_CFG = 0xFFFFFFFF; read back; expect 0x00000003

**T-REG-04 — STATUS sticky bits cleared by write**
- Trigger FRAME_ERR (T-ERR-01); verify STATUS[4]=1
- Write any value to STATUS; read STATUS; verify bits[6:4]=0

**T-REG-05 — STATUS is not writeable for data (write to STATUS only clears flags)**
- Write 0xDEADBEEF to STATUS; read back STATUS
- Verify only sticky bits[6:4] changed (cleared); bits[3:0] still reflect live state

**T-REG-06 — mem_ready one-cycle pulse**
- Assert `mem_valid` for a register read
- Verify `mem_ready` is high exactly one cycle later and returns low the cycle after

---

## T-PAR: Parity

**T-PAR-01 — Transmit with even parity**
- Write PARITY_CFG = 2'b10 (even)
- Write 0x55 (four 1s → even parity bit = 0) to TX_DATA
- Monitor `uart_tx`; expect parity bit = 0 at cycle 3906, stop bit at cycle 4340

**T-PAR-02 — Transmit with odd parity**
- Write PARITY_CFG = 2'b01
- Write 0x55 (four 1s → odd parity bit = 1); expect parity bit = 1

**T-PAR-03 — Receive even parity, correct**
- Configure PARITY_CFG = 2'b10
- Drive `uart_rx` with 0xA5 + correct even parity bit
- Read RX_DATA; expect valid byte, STATUS[5] (PARITY_ERR) = 0

**T-PAR-04 — Receive even parity, flipped parity bit**
- Drive `uart_rx` with 0xA5 + inverted parity bit (deliberate error)
- After frame: STATUS[5] = 1 (PARITY_ERR sticky)

**T-PAR-05 — PARITY_CFG=NONE ignores parity bit in received frame**
- Configure PARITY_CFG = 2'b00
- Drive `uart_rx` with 0x5A and an extra bit before stop bit (simulating parity from sender)
- Receiver must treat the extra bit as the stop bit window and not flag a parity error

---

## T-ERR: Error Conditions

**T-ERR-01 — Framing error: stop bit driven low**
- Drive `uart_rx` with a valid 8-bit frame but stop bit = 0 (line stays low)
- After frame: STATUS[4] (FRAME_ERR) = 1; STATUS[3] (RX_BUSY) = 0
- Write to STATUS to clear; verify STATUS[4] = 0

**T-ERR-02 — Framing error is sticky across multiple clean frames**
- Trigger framing error; then receive one clean frame
- Verify STATUS[4] still = 1 (not auto-cleared by a clean frame)

**T-ERR-03 — Framing error byte still written to RX FIFO**
- After a framing error, verify STATUS[1] (RX_AVAIL) = 1 (byte is in FIFO)
- Read RX_DATA; verify data is present (even if byte value is undefined)
- This confirms the receiver does not discard on error — firmware decides

**T-ERR-04 — BAUD_DIV written while TX busy has no effect mid-frame**
- Start a TX frame; write a new BAUD_DIV mid-transmission
- Verify the current frame completes at the original baud rate
- Next frame uses the new BAUD_DIV (spec says not to do this — confirm behaviour is not catastrophic)

---

## T-COR: Corner Cases

### FIFO boundary corners

**T-COR-01 — TX FIFO: write then immediately read back (single-entry round trip)**
- Write 1 byte; wait for `uart_tx` to begin (STATUS[2]=1)
- Read STATUS: TX_READY must be 1 again (FIFO popped, 1 slot freed before frame ends)

**T-COR-02 — TX FIFO: write exactly at the cycle FIFO drains from full**
- Fill FIFO to 16; wait until one frame completes (slot opens)
- Write a 17th byte at the first cycle STATUS[0] is 1
- Verify byte is accepted and transmitted

**T-COR-03 — RX FIFO: simultaneous push and pop**
- Fill RX FIFO to 15 entries; begin reading (pop) on the same cycle the 16th frame completes (push)
- Verify no overflow (STATUS[6]=0) and count stays at 15

**T-COR-04 — RX FIFO: read with valid=1 when FIFO is empty mid-drain**
- Drain FIFO to 1 entry; issue two consecutive reads
- First read: valid, returns data, dequeues entry
- Second read: `mem_rdata[31]=0` (invalid), FIFO not corrupted

### Baud generator corners

**T-COR-05 — BAUD_DIV = 8 (minimum meaningful, RX period = 1 cycle)**
- Write BAUD_DIV = 8; RX baud period = 1 cycle (maximum stress)
- Transmit and receive one frame; verify correct data

**T-COR-06 — BAUD_DIV = 0xFFFF (slowest rate)**
- Write BAUD_DIV = 65535; transmit one frame
- One bit period = 65535 cycles; total 8N1 frame = 655350 cycles (~13 ms at 50 MHz)
- Verify no counter overflow or FSM hang

**T-COR-07 — BAUD_DIV reprogrammed to same value (no glitch)**
- Write BAUD_DIV = 434 when it is already 434
- Verify no spurious TX pulse or RX sample event

### Reset during operation corners

**T-COR-08 — Reset asserted mid-TX frame**
- Begin transmitting; assert `resetn=0` after start bit
- After reset release: `uart_tx=1`, STATUS=0x0001, FIFO empty, no IRQs

**T-COR-09 — Reset asserted mid-RX frame**
- Begin driving a frame on `uart_rx`; assert `resetn=0` after D3
- After reset release: STATUS[1]=0, no partial byte in FIFO, STATUS[4/5/6]=0

### IRQ corners

**T-COR-10 — Both IRQs enabled simultaneously**
- Enable IRQ_EN[1:0] = 2'b11
- Fill TX FIFO with 1 byte; fill RX with 1 byte simultaneously
- Verify both irq_tx and irq_rx assert at the correct cycles independently

**T-COR-11 — IRQ_EN toggled while IRQ is active**
- Enable RX IRQ; receive byte; irq_rx asserts
- Write IRQ_EN[1]=0 while irq_rx is high
- Verify irq_rx deasserts immediately (level-gated by enable)
- Write IRQ_EN[1]=1 again; irq_rx re-asserts (data still in FIFO)

---

## Pass/Fail Criteria Summary

| Category | Pass condition |
|---|---|
| Baud generator | Measured cycle count within ±1 cycle of formula value |
| TX framing | All bit values and durations match spec timing table |
| RX sampling | Byte captured correctly at ±5% baud rate tolerance |
| TX FIFO | Exactly 16 entries; 17th silently dropped; order preserved |
| RX FIFO | Exactly 16 entries; 17th sets RX_OVF; order preserved; empty read returns bit[31]=0 |
| Error flags | All sticky; cleared only by STATUS write; independent of each other |
| IRQ | Level-sensitive; asserts/deasserts with FIFO state; gated by IRQ_EN |
| Reset | All registers return to spec reset values; FIFOs empty; TX line idles high |
