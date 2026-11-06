# Multi-Core PicoRV32 — Detailed Design Specification

> Source of truth for HW/FW interface details. See `README.md` for the overview and block diagram.
> Reference spec: `RISCV_HW_FW_Interface_Spec_v1.2.docx` (DRAFT 1.1, 2026-10-27, Bhavana HW / Brunda FW)

---

## 1. PicoRV32 Core Configuration

Each of the 4 cores is an instance of `picorv32` from [rtl/picorv32.v](../rtl/picorv32.v).

| Parameter | Value | Reason |
|---|---|---|
| `ENABLE_REGS_16_31` | 1 | Full RV32I register file |
| `ENABLE_MUL` | 1 | Software multiply support |
| `ENABLE_DIV` | 1 | Software divide support |
| `ENABLE_IRQ` | 1 | Per-core interrupt handling |
| `ENABLE_IRQ_TIMER` | 0 | Disabled for now; IRQ[1] kept reserved so the built-in timer can be enabled later without renumbering |
| `CATCH_MISALIGN` | 1 | Trap misaligned accesses |
| `CATCH_ILLINSN` | 1 | Trap illegal instructions |
| `COMPRESSED_ISA` | 0 | RV32I only (no RVC) |
| `PROGADDR_RESET` | TBD | Per-core boot address |
| `STACKADDR` | TBD | Per-core stack pointer |

Each core drives the standard PicoRV32 memory bus:
- **Request:** `mem_valid`, `mem_addr`, `mem_wdata`, `mem_wstrb`, `mem_instr`
- **Response:** `mem_ready`, `mem_rdata`

---

## 2. Bus Arbiter

[rtl/bus_arbiter.v](../rtl/bus_arbiter.v) sits between the 4 cores and the single shared memory port.

### Inputs
- 4× `mem_valid` — one per core indicating a pending memory request
- 4× `mem_addr[31:0]` — address from each core
- 4× `mem_wdata[31:0]` — write data from each core
- 4× `mem_wstrb[3:0]` — write strobes from each core
- 4× `mem_instr` — instruction-fetch flag from each core
- `mem_ready` — acknowledgement from downstream (via addr decoder)

### Outputs
- 4× `mem_ready` — forwarded ready signal to the selected core (others held low)
- `grant_id[1:0]` — index of the core currently holding the bus (fed to addr_decoder for Core ID register)
- `mem_valid` — forwarded to addr decoder (high when any core is granted and requesting)
- `mem_addr[31:0]`, `mem_wdata[31:0]`, `mem_wstrb[3:0]`, `mem_instr` — muxed from the granted core
- `mem_rdata[31:0]` — broadcast from downstream to all cores (only the granted core acts on it)

### Arbitration Policy

**Round-Robin:**

The arbiter cycles through cores 0→1→2→3→0. A core is skipped if `mem_valid == 0`. The pointer advances only after the current grant completes (`mem_ready` asserted).

```
Priority pointer: next_grant
On each completed transaction:
  scan from (next_grant + 1) mod 4 onwards
  grant to first core with mem_valid == 1
  update next_grant
```

**Properties:**
- Starvation-free: every core is guaranteed service within 4 transactions
- No priority inversion between cores
- Single-cycle grant decision (combinational priority logic)

**Future policies (not in scope for v1):** weighted round-robin, LRU, fixed priority with aging

---

## 3. Address Decoder

[rtl/addr_decoder.v](../rtl/addr_decoder.v) sits between the bus arbiter output and all downstream targets.

### What it does
1. Decodes `in_addr` into a one-hot target select
2. Gates each target's `mem_valid` so only the selected target sees a request
3. Muxes `mem_ready` / `mem_rdata` back to the arbiter from the responding target

Address, wdata, and wstrb are shared wires — each target receives the same signals; only valid is gated. Targets use `in_addr[7:0]` as their register offset.

### Special handling
- **Core ID** (`0xFFFF_FFFC`) — handled inline; returns `grant_id` (the granted core index) with zero latency. Firmware reads this to get `mhartid`.
- **GPIO stub** (`0x1004_0xxx`) — address decoded and acknowledged immediately with `rdata=0`; prevents the Phase-2-reserved block from aliasing into DSRAM.
- **Unmapped addresses** — acknowledged immediately with `rdata=0`; the granted core never hangs.

### Decode conditions

All constants are defined in [rtl/memory_map.vh](../rtl/memory_map.vh).

| Target | Bits compared | Match value |
|---|---|---|
| DSRAM | `addr[31:16]` | `16'h0000` |
| UART | `addr[31:8]` | `24'h10_0000` |
| Timer | `addr[31:8]` | `24'h10_0100` |
| Spinlock | `addr[31:8]` | `24'h10_0200` |
| PLIC | `addr[31:8]` | `24'h10_0300` |
| GPIO | `addr[31:8]` | `24'h10_0400` |
| Core ID | `addr[31:2]` | `30'h3FFF_FFFF` |

---

## 4. Memory Architecture

### Design: distributed instruction SRAMs + one shared data SRAM

Each core has a private instruction SRAM it accesses directly (no arbitration). The shared data SRAM is accessed through the bus arbiter. Routing is done at the per-core level using `mem_instr`:

```
mem_instr == 1  →  routed to that core's private ISRAM
mem_instr == 0  →  routed to bus arbiter → addr decoder → shared DSRAM (or peripherals)
```

Instruction fetches never block data accesses; each core can fetch its next instruction while another core waits for a data response.

### Instruction SRAMs (×4, private)

| Property | Value |
|---|---|
| Width | 32 bits |
| Depth | 16 KB (`SRAM_AWIDTH = 14`) |
| Interface | PicoRV32 native (valid/ready) |
| Latency | 1 cycle |
| Arbitration | None — core has exclusive access |

Each core's `PROGADDR_RESET` is `0x0000_0000` locally (the SRAM's own address space starts at zero from the core's perspective).

### Shared Data SRAM (×1)

| Property | Value |
|---|---|
| Width | 32 bits |
| Depth | 64 KB (`SRAM_AWIDTH = 16`) |
| Interface | PicoRV32 native (valid/ready) |
| Latency | 1 cycle + arbitration wait |
| Base address | `0x0000_0000` (from arbiter's perspective) |

### Full Address Map

```
Instruction SRAMs (private — each core sees its own):
  0x0000_0000 – 0x0000_3FFF   16 KB  (direct, no arbiter)

Data bus address space (all cores, via arbiter → addr decoder):
  0x0000_0000 – 0x0000_FFFF   64 KB  Shared data SRAM          addr[31:16] == 0x0000
    ├── 0x0000_0000 – 0x0000_0FFF   Core 0 stack / locals
    ├── 0x0000_1000 – 0x0000_1FFF   Core 1 stack / locals
    ├── 0x0000_2000 – 0x0000_2FFF   Core 2 stack / locals
    ├── 0x0000_3000 – 0x0000_3FFF   Core 3 stack / locals
    └── 0x0000_4000 – 0x0000_FFFF   Inter-core shared (mailboxes, IPC)

  0x1000_0000 – 0x1000_00FF  256 B  UART 0 (console)           addr[31:8] == 0x10_0000
  0x1001_0000 – 0x1001_00FF  256 B  System timer (MTIME+CMP)   addr[31:8] == 0x10_0100
  0x1002_0000 – 0x1002_00FF  256 B  Hardware spinlocks (×8)    addr[31:8] == 0x10_0200
  0x1003_0000 – 0x1003_00FF  256 B  PLIC / IRQ controller      addr[31:8] == 0x10_0300
  0x1004_0000 – 0x1004_00FF  256 B  GPIO  [Phase 2 — reserved] addr[31:8] == 0x10_0400
  0xFFFF_FFFC – 0xFFFF_FFFF    4 B  Core ID register (mhartid) addr[31:2] == 0x3FFF_FFFF
```

> The instruction and data address spaces are separate physical memories. `STACKADDR` points into the data SRAM range. All base addresses are defined in `rtl/memory_map.vh`; firmware's `memory_map.h` must mirror them exactly.

---

## 5. Peripheral Register Maps

All base addresses and register offsets are in [rtl/memory_map.vh](../rtl/memory_map.vh). This section is a human-readable summary.

### 5.1 UART (base `0x1000_0000`) — §3.2.1

| Offset | Name | Access | Description |
|---|---|---|---|
| `0x00` | `TX_DATA` | W | Byte to transmit [7:0]; poll STATUS[0] first |
| `0x04` | `RX_DATA` | R | Received byte [7:0]; bit[31]=1 means valid |
| `0x08` | `STATUS` | R | bit[0]=TX ready (FIFO not full), bit[1]=RX available |
| `0x0C` | `BAUD_DIV` | R/W | baud = clk_freq / BAUD_DIV; default 434 (50 MHz / 115200) |
| `0x10` | `IRQ_EN` | R/W | bit[0]=TX-empty IRQ en, bit[1]=RX-ready IRQ en; reset=0 |

FIFO depth: 16 bytes TX and RX (Q7 open — not confirmed).

### 5.2 System Timer (base `0x1001_0000`) — §3.2.2

One shared 64-bit MTIME counter; four independent MTIMECMP registers. Core N's registers start at `base + N × 0x10`.

| Offset within core block | Name | Access | Description |
|---|---|---|---|
| `+0x0` | `MTIME_LO` | R | Lower 32 bits of shared free-running counter |
| `+0x4` | `MTIME_HI` | R | Upper 32 bits of shared free-running counter |
| `+0x8` | `MTIMECMP_LO` | R/W | Lower 32 bits of per-core compare register |
| `+0xC` | `MTIMECMP_HI` | R/W | Upper 32 bits; IRQ[0] fires when MTIME ≥ MTIMECMP |

MTIMECMP reset value: `0xFFFF_FFFF_FFFF_FFFF` (no spurious IRQ at boot).

### 5.3 Hardware Spinlocks (base `0x1002_0000`) — §3.2.3

8 locks; `LOCK[n]` at offset `n × 4`.

- **Read:** atomically test-and-set — returns 0 (acquired, was free) or 1 (busy)
- **Write 0:** release; writing 1 has no effect

Offsets `0x20–0xFF` reserved for up to 56 additional locks (Q5 open — 8 locks sufficient?).

### 5.4 PLIC (base `0x1003_0000`) — §3.2.4

| Offset | Name | Access | Description |
|---|---|---|---|
| `0x00` | `PENDING` | R | bits[7:0] = pending interrupt sources (un-claimed) |
| `0x04` | `ENABLE0` | R/W | enable mask for core 0; bit N enables source N; reset=0 |
| `0x08` | `ENABLE1` | R/W | enable mask for core 1 |
| `0x0C` | `ENABLE2` | R/W | enable mask for core 2 |
| `0x10` | `ENABLE3` | R/W | enable mask for core 3 |
| `0x14` | `PRIORITY` | R/W | 4-bit priority per source, packed: bits[3:0]=src0…bits[31:28]=src7 |
| `0x18` | `CLAIM0` | R/W | core 0: read=highest pending enabled source ID (0=none); write=ack |
| `0x1C` | `CLAIM1` | R/W | core 1 |
| `0x20` | `CLAIM2` | R/W | core 2 |
| `0x24` | `CLAIM3` | R/W | core 3 |

> **Note:** PRIORITY moved from `+0x10` → `+0x14` vs. v1.0 to remove conflict with ENABLE3.

**PLIC source IDs:**

| ID | Source |
|---|---|
| 0 | UART RX data available |
| 1 | UART TX FIFO empty |
| 2 | Timer MTIMECMP match — core 0 |
| 3 | Timer MTIMECMP match — core 1 |
| 4 | Timer MTIMECMP match — core 2 |
| 5 | Timer MTIMECMP match — core 3 |
| 6–7 | Reserved — Phase 2 (GPIO, SPI) |

---

## 6. PicoRV32 IRQ Line Assignments

| IRQ | Source | Notes |
|---|---|---|
| IRQ[0] | External timer (MTIMECMP match) | Highest priority |
| IRQ[1] | *(reserved)* | PicoRV32 built-in timer (`ENABLE_IRQ_TIMER`). Currently disabled; kept free to avoid renumbering if enabled later. |
| IRQ[2] | UART RX data available | |
| IRQ[3] | UART TX FIFO empty | |
| IRQ[4] | Spinlock released | Phase 2 — tie to 0 for now |
| IRQ[5:31] | *(reserved)* | Tie to 0 |

---

## 7. Top-Level Interface

The top-level module (`multi_core_top`) exposes:

| Signal | Direction | Width | Description |
|---|---|---|---|
| `clk` | in | 1 | System clock |
| `resetn` | in | 1 | Active-low synchronous reset |
| `trap` | out | 4 | Per-core trap signals |
| `irq` | in | 32 | IRQ lines (shared across cores, TBD) |

Internal connectivity between the arbiter and memory is not exposed externally.

---

## 8. Open Design Questions

| # | Question | Options | Status |
|---|---|---|---|
| Q1 | Clock frequency | Recommended 50 MHz; BAUD_DIV=434 | Not confirmed |
| Q2 | Peripheral base addresses (§3.1) | As in memory_map.vh | Needs Marpa FW sign-off |
| Q3 | MTIME topology | One shared counter, 4 independent MTIMECMP | Not confirmed |
| Q4 | ENABLE_IRQ_TIMER | 0 on all cores | **Closed** |
| Q5 | Spinlock count | 8 for Phase 1 | Not confirmed |
| Q6 | GPIO phase | Deferred to Phase 2; address 0x1004_0000 reserved | Not confirmed |
| Q7 | UART FIFO depth | 16 bytes each | Not confirmed |
| — | Boot address per core | All at 0x0, per-core region, or shared reset vector | Open |
| — | Stack placement | Private per-core stacks vs. shared region | Open |
| — | IRQ routing | Independent per-core lines vs. shared with SW dispatch | Open |
| — | Arbitration fairness | Round-robin vs. weighted | Open (round-robin for v1) |
| — | Memory latency model | 1-cycle, 2-cycle, or variable | Open (1-cycle for v1) |
