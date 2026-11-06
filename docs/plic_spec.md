# PLIC Specification

> Design spec for `rtl/plic.v` (not yet implemented). Register map is the authoritative definition in `rtl/memory_map.vh`.
> Reference: §5.4 and §6 of `docs/spec.md`. Simplified PLIC — not fully RISC-V PLIC spec compliant.

---

## 1. Overview

The Platform-Level Interrupt Controller (PLIC) is the central interrupt routing hub for the multi-core system. It aggregates 8 interrupt sources (6 active in Phase 1), filters them per-core through enable masks and priority levels, and delivers the highest-priority pending interrupt to each core's PicoRV32 IRQ lines.

It sits on the peripheral data bus at base address `0x1003_0000`, reached via `addr_decoder` as the `plic` target.

**Key features:**
- 8 interrupt sources (IDs 0–7); 6 active in Phase 1, 2 reserved for Phase 2
- Per-core enable masks — each core independently enables/disables individual sources
- 4-bit priority per source, packed into one 32-bit register
- Per-core claim registers — read returns the highest pending enabled source ID; write acknowledges and clears it
- 1-cycle bus response; matches all other peripheral bus interfaces
- All enable masks reset to `0` (no interrupts enabled at boot)

**Relationship to PicoRV32 IRQ lines:**
The PLIC feeds the PicoRV32 `irq[31:0]` input vector. The timer IRQ (`irq_timer`) bypasses the PLIC and connects directly to `IRQ[0]` on each core (§6 of `spec.md`). The PLIC handles the remaining sources and drives `IRQ[2]` (UART RX) and `IRQ[3]` (UART TX).

---

## 2. Interrupt Sources

| Source ID | Signal | Description | PicoRV32 IRQ |
|---|---|---|---|
| 0 | `irq_uart_rx` | UART RX data available | `IRQ[2]` |
| 1 | `irq_uart_tx` | UART TX FIFO empty | `IRQ[3]` |
| 2 | `irq_timer[0]` | MTIMECMP match — core 0 | `IRQ[0]` (direct) |
| 3 | `irq_timer[1]` | MTIMECMP match — core 1 | `IRQ[0]` (direct) |
| 4 | `irq_timer[2]` | MTIMECMP match — core 2 | `IRQ[0]` (direct) |
| 5 | `irq_timer[3]` | MTIMECMP match — core 3 | `IRQ[0]` (direct) |
| 6 | *(reserved)* | GPIO — Phase 2 | — |
| 7 | *(reserved)* | SPI — Phase 2 | — |

> **Note:** Timer sources (IDs 2–5) appear in `PENDING` and can be read/claimed via the PLIC, but they also drive `IRQ[0]` directly on each core. Firmware should handle timer IRQs via `IRQ[0]`, not via the PLIC claim path.

---

## 3. Module Interface

```verilog
module plic (
    input  wire        clk,
    input  wire        resetn,

    // Bus interface (from addr_decoder; mem_addr[7:0] is register offset)
    input  wire        mem_valid,
    input  wire [ 7:0] mem_addr,
    input  wire [31:0] mem_wdata,
    input  wire [ 3:0] mem_wstrb,
    output reg         mem_ready,
    output reg  [31:0] mem_rdata,

    // Interrupt source inputs (level-sensitive, from peripherals)
    input  wire        irq_uart_rx,     // source 0
    input  wire        irq_uart_tx,     // source 1
    input  wire [ 3:0] irq_timer,       // sources 2–5 (irq_timer[N] = core N)

    // Per-core IRQ outputs to PicoRV32 irq[31:0]
    output wire [31:0] core0_irq,
    output wire [31:0] core1_irq,
    output wire [31:0] core2_irq,
    output wire [31:0] core3_irq
);
```

| Signal | Dir | Width | Description |
|---|---|---|---|
| `clk` | in | 1 | System clock |
| `resetn` | in | 1 | Active-low synchronous reset |
| `mem_valid` | in | 1 | Bus request present |
| `mem_addr` | in | 8 | Register offset (`in_addr[7:0]` from `addr_decoder`) |
| `mem_wdata` | in | 32 | Write data |
| `mem_wstrb` | in | 4 | Write strobes; `4'b0` = read |
| `mem_ready` | out | 1 | Acknowledgement; asserted for one cycle |
| `mem_rdata` | out | 32 | Read data; valid when `mem_ready` is high |
| `irq_uart_rx` | in | 1 | UART RX interrupt (source 0) |
| `irq_uart_tx` | in | 1 | UART TX interrupt (source 1) |
| `irq_timer` | in | 4 | Timer IRQs (sources 2–5); `irq_timer[N]` = core N |
| `core0_irq` | out | 32 | PicoRV32 `irq[31:0]` for core 0 |
| `core1_irq` | out | 32 | PicoRV32 `irq[31:0]` for core 1 |
| `core2_irq` | out | 32 | PicoRV32 `irq[31:0]` for core 2 |
| `core3_irq` | out | 32 | PicoRV32 `irq[31:0]` for core 3 |

---

## 4. Internal Architecture

### 4.1 Source aggregation

The 8 raw interrupt inputs are assembled into a single 8-bit vector:

```verilog
wire [7:0] src = {2'b00,                   // [7:6] reserved
                  irq_timer[3],             // [5]
                  irq_timer[2],             // [4]
                  irq_timer[1],             // [3]
                  irq_timer[0],             // [2]
                  irq_uart_tx,              // [1]
                  irq_uart_rx};             // [0]
```

All inputs are level-sensitive. The PLIC samples `src` combinationally; no edge detection.

### 4.2 PENDING register

`PENDING[7:0]` reflects which sources are currently asserted **and not yet claimed**. A source bit is set when `src[N]` is high and cleared when firmware writes an acknowledge to `CLAIM[core]`. Because sources are level-sensitive, `PENDING[N]` re-asserts if the peripheral is still asserting its IRQ after the claim (firmware must service the peripheral before acknowledging).

### 4.3 Enable masks

Four 8-bit registers, one per core (`enable[0:3]`). `enable[C][N] == 1` means core C will see source N in its `PENDING` view and `CLAIM` result. Reset value: `8'b0` (all sources masked).

### 4.4 Priority

One 4-bit priority field per source, packed into a single 32-bit register:

```
PRIORITY[3:0]   = priority of source 0
PRIORITY[7:4]   = priority of source 1
...
PRIORITY[31:28] = priority of source 7
```

Priority 15 is highest, priority 0 is lowest. When two enabled pending sources have equal priority, the lower source ID wins (fixed tie-break).

### 4.5 CLAIM registers

Each core has a `CLAIM` register. On **read**, it returns the source ID of the highest-priority pending enabled source for that core (0 if none). On **write**, the value written is treated as a source ID acknowledgement — `PENDING[N]` is cleared for that source.

The claim read does not automatically clear `PENDING`; the explicit write-ack is required. This prevents an IRQ from being silently dropped if firmware reads `CLAIM` but crashes before servicing the source.

---

## 5. Register Map

Base address: `0x1003_0000`.

| Offset | Name | Access | Reset | Description |
|---|---|---|---|---|
| `0x00` | `PENDING` | R | `0x00` | bits[7:0] = pending interrupt sources (un-claimed) |
| `0x04` | `ENABLE0` | R/W | `0x00` | Enable mask for core 0; bit N enables source N |
| `0x08` | `ENABLE1` | R/W | `0x00` | Enable mask for core 1 |
| `0x0C` | `ENABLE2` | R/W | `0x00` | Enable mask for core 2 |
| `0x10` | `ENABLE3` | R/W | `0x00` | Enable mask for core 3 |
| `0x14` | `PRIORITY` | R/W | `0x00` | 4-bit priority per source, packed; bits[3:0]=src0…bits[31:28]=src7 |
| `0x18` | `CLAIM0` | R/W | — | Core 0: read=highest pending enabled ID (0=none); write=ack |
| `0x1C` | `CLAIM1` | R/W | — | Core 1 |
| `0x20` | `CLAIM2` | R/W | — | Core 2 |
| `0x24` | `CLAIM3` | R/W | — | Core 3 |
| `0x28`–`0xFF` | — | — | — | Reserved |

> `PRIORITY` moved from `+0x10` → `+0x14` vs. v1.0 to remove the conflict with `ENABLE3`.

---

## 6. IRQ Output Routing

The PLIC drives a full 32-bit `irq[31:0]` vector per core. Only the bits corresponding to active, enabled, pending sources are asserted. The PicoRV32 IRQ line assignments are:

| `irq` bit | Source | Notes |
|---|---|---|
| `IRQ[0]` | Timer (direct from `sys_timer`) | Bypasses PLIC; wired directly |
| `IRQ[1]` | *(reserved)* | PicoRV32 built-in timer; keep free |
| `IRQ[2]` | UART RX (PLIC source 0) | Driven by PLIC |
| `IRQ[3]` | UART TX (PLIC source 1) | Driven by PLIC |
| `IRQ[4]` | Spinlock released | Phase 2; tie to 0 for now |
| `IRQ[5:31]` | *(reserved)* | Tie to 0 |

For core N:

```verilog
assign coreN_irq[0]    = irq_timer[N];           // direct — not through PLIC
assign coreN_irq[2]    = pending[0] & enable[N][0];  // UART RX
assign coreN_irq[3]    = pending[1] & enable[N][1];  // UART TX
assign coreN_irq[31:4] = 28'b0;                  // reserved
assign coreN_irq[1]    = 1'b0;                   // reserved
```

---

## 7. Firmware Interrupt Handling Flow

```
1. PicoRV32 fires IRQ → firmware IRQ handler entered
2. Read CLAIM[N]      → get source ID of highest-priority pending source
3. If source ID == 0  → spurious; return
4. Service the source (read UART RX FIFO, etc.)
5. Write CLAIM[N] = source ID  → acknowledge; clears PENDING[source ID]
6. Return from IRQ handler
```

If the peripheral is still asserting its IRQ after step 5 (e.g., UART RX FIFO still has data), `PENDING[N]` will re-assert and the IRQ will fire again — this is expected level-sensitive behaviour.

---

## 8. Reset Behavior

Reset is active-low synchronous (`resetn`). On de-assertion:

| Register | Reset value | Reason |
|---|---|---|
| `pending` | `8'h00` | No pending interrupts at boot |
| `enable[0:3]` | `8'h00` | All sources masked; firmware enables explicitly |
| `priority` | `32'h00` | All priorities zero |
| `mem_ready` | `1'b0` | No transaction in flight |
| `mem_rdata` | `32'h0` | No stale read data |

---

## 9. Bus Protocol

`plic` follows the same PicoRV32-native valid/ready handshake as all other peripherals. All transactions complete in 1 cycle.

```
Cycle 0:  mem_valid=1, mem_addr=<offset>
          mem_wstrb=4'b0        → read
          mem_wstrb!=4'b0       → write
Cycle 1:  mem_ready=1, mem_rdata=<register value on read>
Cycle 2:  mem_ready=0
```

`mem_ready` is generated under `mem_valid && !mem_ready` to prevent double-ack if `mem_valid` stays high.
