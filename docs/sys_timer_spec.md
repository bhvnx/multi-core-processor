# System Timer Specification

> Design spec for `rtl/sys_timer.v`. Register map is the authoritative definition in `rtl/memory_map.vh`.
> Reference: RISC-V Privileged Architecture Specification §3.1.10 (machine-mode timer).

---

## 1. Overview

`sys_timer` implements the RISC-V machine-mode timer interface. One shared 64-bit free-running counter (`MTIME`) increments on every clock cycle. Four independent 64-bit compare registers (`MTIMECMP[0:3]`, one per core) fire `irq_timer[N]` when `MTIME >= MTIMECMP[N]`.

It sits on the peripheral data bus at base address `0x1001_0000`, reached via `addr_decoder` as the `timer` target.

**Key features:**
- 64-bit free-running `MTIME` counter, shared across all 4 cores
- 4 × 64-bit `MTIMECMP` registers, one per core
- Combinational, level-sensitive IRQ per core — no latching or edge detection
- 1-cycle bus response; matches the UART/spinlock bus interface
- `MTIMECMP` reset to `0xFFFF_FFFF_FFFF_FFFF` — no spurious IRQ at boot
- IRQ outputs feed each core's `IRQ[0]` and PLIC sources 2–5

---

## 2. Module Interface

```verilog
module sys_timer (
    input  wire        clk,
    input  wire        resetn,

    // Bus interface (from addr_decoder; mem_addr[7:0] is register offset)
    input  wire        mem_valid,
    input  wire [ 7:0] mem_addr,
    input  wire [31:0] mem_wdata,
    input  wire [ 3:0] mem_wstrb,
    output reg         mem_ready,
    output reg  [31:0] mem_rdata,

    // Per-core timer IRQ — level-sensitive, one per core
    output wire [ 3:0] irq_timer
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
| `irq_timer` | out | 4 | Per-core IRQ; `irq_timer[N]` asserts when `MTIME >= MTIMECMP[N]` |

---

## 3. Internal Architecture

### 3.1 MTIME counter

A single 64-bit register that increments by 1 on every rising clock edge. Shared by all four cores; read-only from the bus. No prescaler or enable — the increment rate equals the system clock frequency (Q1 open: assumed 50 MHz; `TIMER_CORE_STRIDE` = 0x10 from `memory_map.vh`).

```verilog
always @(posedge clk)
    if (!resetn) mtime <= 64'd0;
    else         mtime <= mtime + 64'd1;
```

### 3.2 MTIMECMP registers

Four independent 64-bit registers indexed 0–3, each split across a low half (`[31:0]`) and a high half (`[63:32]`) for 32-bit bus access. Writes to either half are latched independently on the bus write cycle.

**Write ordering:** Firmware must write `MTIMECMP_LO` before `MTIMECMP_HI`. Writing `HI` first creates an intermediate 64-bit value (`new_HI : old_LO`) that may still trigger an IRQ. Writing `LO` first keeps the intermediate value safely in the future.

### 3.3 IRQ logic

Purely combinational:

```verilog
assign irq_timer[N] = (mtime >= mtimecmp[N]);
```

The compare is unsigned 64-bit. No edge detection or status register. The signal stays asserted until firmware raises `MTIMECMP` above `MTIME`.

### 3.4 Register select

`mem_addr[7:0]` is decoded as:

| Bits | Field | Meaning |
|---|---|---|
| `[7:6]` | Unused | Always `2'b00` within the 256-byte peripheral window |
| `[5:4]` | Core index | Selects `mtimecmp[0]`–`mtimecmp[3]` |
| `[3:2]` | Register select | `2'b00`=MTIME_LO, `2'b01`=MTIME_HI, `2'b10`=MTIMECMP_LO, `2'b11`=MTIMECMP_HI |
| `[1:0]` | Byte lane | Ignored; all registers are 32-bit word-aligned |

`MTIME_LO` and `MTIME_HI` alias across all four core blocks — `addr[5:4]` is irrelevant for those two offsets; the RTL reads `mtime` directly in all cases.

---

## 4. Register Map

Base address: `0x1001_0000`. Core N's block starts at `base + N × 0x10` (`TIMER_CORE_STRIDE`).

| Offset | Core | Name | Access | Reset | Description |
|---|---|---|---|---|---|
| `0x00` | 0 | `MTIME_LO` | R | `0x0000_0000` | Lower 32 bits of shared MTIME counter |
| `0x04` | 0 | `MTIME_HI` | R | `0x0000_0000` | Upper 32 bits of shared MTIME counter |
| `0x08` | 0 | `MTIMECMP_LO` | R/W | `0xFFFF_FFFF` | Lower 32 bits of core 0 compare register |
| `0x0C` | 0 | `MTIMECMP_HI` | R/W | `0xFFFF_FFFF` | Upper 32 bits; IRQ fires when MTIME ≥ MTIMECMP |
| `0x10` | 1 | `MTIME_LO` | R | `0x0000_0000` | Alias of shared MTIME_LO |
| `0x14` | 1 | `MTIME_HI` | R | `0x0000_0000` | Alias of shared MTIME_HI |
| `0x18` | 1 | `MTIMECMP_LO` | R/W | `0xFFFF_FFFF` | Lower 32 bits of core 1 compare register |
| `0x1C` | 1 | `MTIMECMP_HI` | R/W | `0xFFFF_FFFF` | Upper 32 bits |
| `0x20` | 2 | `MTIME_LO` | R | `0x0000_0000` | Alias of shared MTIME_LO |
| `0x24` | 2 | `MTIME_HI` | R | `0x0000_0000` | Alias of shared MTIME_HI |
| `0x28` | 2 | `MTIMECMP_LO` | R/W | `0xFFFF_FFFF` | Lower 32 bits of core 2 compare register |
| `0x2C` | 2 | `MTIMECMP_HI` | R/W | `0xFFFF_FFFF` | Upper 32 bits |
| `0x30` | 3 | `MTIME_LO` | R | `0x0000_0000` | Alias of shared MTIME_LO |
| `0x34` | 3 | `MTIME_HI` | R | `0x0000_0000` | Alias of shared MTIME_HI |
| `0x38` | 3 | `MTIMECMP_LO` | R/W | `0xFFFF_FFFF` | Lower 32 bits of core 3 compare register |
| `0x3C` | 3 | `MTIMECMP_HI` | R/W | `0xFFFF_FFFF` | Upper 32 bits |

Offsets `0x40`–`0xFF` reserved. Writes to `MTIME_LO` or `MTIME_HI` are silently ignored.

---

## 5. IRQ Routing

| `irq_timer` bit | Core | PicoRV32 IRQ line | PLIC source ID |
|---|---|---|---|
| `[0]` | 0 | `IRQ[0]` | 2 (`PLIC_SRC_TIMER0`) |
| `[1]` | 1 | `IRQ[0]` | 3 (`PLIC_SRC_TIMER1`) |
| `[2]` | 2 | `IRQ[0]` | 4 (`PLIC_SRC_TIMER2`) |
| `[3]` | 3 | `IRQ[0]` | 5 (`PLIC_SRC_TIMER3`) |

IRQ[0] is the highest-priority external IRQ per the PicoRV32 IRQ assignments (§6 of `spec.md`). IRQ[1] is reserved for the PicoRV32 built-in countdown timer (`ENABLE_IRQ_TIMER`), which is currently disabled.

---

## 6. Reset Behavior

Reset is active-low synchronous (`resetn`). On the cycle after de-assertion:

| Register | Reset value | Reason |
|---|---|---|
| `mtime` | `64'h0000_0000_0000_0000` | Counter starts from zero |
| `mtimecmp[0:3]` | `64'hFFFF_FFFF_FFFF_FFFF` | Prevents spurious IRQ before firmware sets a deadline |
| `mem_ready` | `1'b0` | No transaction in flight |
| `mem_rdata` | `32'h0` | No stale read data |

Because `irq_timer[N]` is combinational, it is `0` immediately after reset (`mtime=0 < mtimecmp=all-ones`).

---

## 7. Bus Protocol

`sys_timer` follows the PicoRV32-native valid/ready handshake used by all peripherals.

### 7.1 Read (1 cycle)

```
Cycle 0:  mem_valid=1, mem_wstrb=4'b0, mem_addr=<offset>
Cycle 1:  mem_ready=1, mem_rdata=<register value>   ← latched by core
Cycle 2:  mem_ready=0
```

### 7.2 Write (1 cycle)

```
Cycle 0:  mem_valid=1, mem_wstrb!=4'b0, mem_addr=<offset>, mem_wdata=<value>
Cycle 1:  mem_ready=1   ← register updated on this edge
Cycle 2:  mem_ready=0
```

### 7.3 Double-ack guard

`mem_ready` is generated under `mem_valid && !mem_ready`, preventing a second ack if the upstream master holds `mem_valid` high:

```verilog
if (mem_valid && !mem_ready) begin
    mem_ready <= 1'b1;
    // register decode and rdata/write logic
end
```

All peripherals in this design respond in exactly 1 cycle; there are no multi-cycle stalls.
