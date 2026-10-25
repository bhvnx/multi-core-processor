# Multi-Core PicoRV32 Processor — Design Specification

## Overview

This project implements a symmetric multi-core processor consisting of **4 PicoRV32 RV32I cores** sharing a single memory space. A **bus arbiter** mediates access to the shared memory bus, ensuring only one core transacts at a time while the others wait or continue local operation.

---

## System Architecture

```
  ┌───────────────┐  ┌───────────────┐  ┌───────────────┐  ┌───────────────┐
  │    Core 0     │  │    Core 1     │  │    Core 2     │  │    Core 3     │
  │   picorv32    │  │   picorv32    │  │   picorv32    │  │   picorv32    │
  └──┬──────────┬─┘  └──┬──────────┬─┘  └──┬──────────┬─┘  └──┬──────────┬─┘
     │mem_instr │        │mem_instr │        │mem_instr │        │mem_instr │
     │  =1      │=0      │  =1      │=0      │  =1      │=0      │  =1      │=0
     ▼          │        ▼          │        ▼          │        ▼          │
  ┌──────────┐  │     ┌──────────┐  │     ┌──────────┐  │     ┌──────────┐  │
  │  ISRAM 0 │  │     │  ISRAM 1 │  │     │  ISRAM 2 │  │     │  ISRAM 3 │  │
  │  16 KB   │  │     │  16 KB   │  │     │  16 KB   │  │     │  16 KB   │  │
  │ (private)│  │     │ (private)│  │     │ (private)│  │     │ (private)│  │
  └──────────┘  │     └──────────┘  │     └──────────┘  │     └──────────┘  │
                │                   │                   │                   │
                └───────────────────┴───────────────────┴───────────────────┘
                                            │
                                   ┌────────▼────────┐
                                   │   Bus Arbiter   │
                                   │  (round-robin)  │
                                   └────────┬────────┘
                                            │
                                   ┌────────▼────────┐
                                   │  Shared Data    │
                                   │    SRAM 64 KB   │
                                   └─────────────────┘
```

---

## Components

### 1. PicoRV32 Cores (×4)

Each core is an instance of the `picorv32` module from [rtl/picorv32.v](rtl/picorv32.v).

**Planned configuration per core:**

| Parameter | Value | Reason |
|---|---|---|
| `ENABLE_REGS_16_31` | 1 | Full RV32I register file |
| `ENABLE_MUL` | 1 | Software multiply support |
| `ENABLE_DIV` | 1 | Software divide support |
| `ENABLE_IRQ` | 1 | Per-core interrupt handling |
| `ENABLE_IRQ_TIMER` | 1 | Hardware timer per core |
| `CATCH_MISALIGN` | 1 | Trap misaligned accesses |
| `CATCH_ILLINSN` | 1 | Trap illegal instructions |
| `COMPRESSED_ISA` | 0 | RV32I only (no RVC) |
| `PROGADDR_RESET` | TBD | Per-core boot address |
| `STACKADDR` | TBD | Per-core stack pointer |

Each core drives the standard PicoRV32 memory bus:
- **Request:** `mem_valid`, `mem_addr`, `mem_wdata`, `mem_wstrb`, `mem_instr`
- **Response:** `mem_ready`, `mem_rdata`

---

### 2. Bus Arbiter

The arbiter sits between the 4 cores and the single shared memory port. It selects one requesting core per cycle to service.

#### Inputs
- 4× `mem_valid` — one per core indicating a pending memory request
- 4× `mem_addr[31:0]` — address from each core
- 4× `mem_wdata[31:0]` — write data from each core
- 4× `mem_wstrb[3:0]` — write strobes from each core
- 4× `mem_instr` — instruction-fetch flag from each core
- `mem_ready` — acknowledgement from shared memory

#### Outputs
- 4× `mem_ready` — forwarded ready signal to the selected core (others held low)
- `mem_valid` — forwarded to shared memory (high when any core is granted and requesting)
- `mem_addr[31:0]`, `mem_wdata[31:0]`, `mem_wstrb[3:0]`, `mem_instr` — muxed from the granted core
- `mem_rdata[31:0]` — broadcast from shared memory to all cores (only the granted core acts on it)

#### Arbitration Policy

**Baseline: Round-Robin**

The arbiter cycles through cores 0→1→2→3→0 in order. A core is skipped if it has no pending request (`mem_valid == 0`). The counter advances only after the current grant completes (`mem_ready` asserted).

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

#### Future Arbitration Policies (not in scope for v1)
- Weighted round-robin (assign more slots to higher-priority cores)
- Least-recently-used
- Fixed priority with aging

---

### 3. Memory Architecture

This design uses **distributed instruction SRAMs + one shared data SRAM**.

Each core has a private instruction SRAM it accesses directly (no arbitration). The shared data SRAM is accessed through the bus arbiter. Routing is done at the per-core level using `mem_instr`:

```
mem_instr == 1  →  routed to that core's private instruction SRAM
mem_instr == 0  →  routed to the bus arbiter → shared data SRAM
```

This means instruction fetches never block data accesses, and each core can fetch its next instruction while another core is waiting for a data response from the arbiter.

#### Instruction SRAMs (×4, private)

One instance of `sram.v` per core, not visible to any other core.

| Property | Value |
|---|---|
| Width | 32 bits |
| Depth | 16 KB (`SRAM_AWIDTH = 14`) |
| Interface | PicoRV32 native (valid/ready) |
| Latency | 1 cycle |
| Arbitration | None — core has exclusive access |

Each core's `PROGADDR_RESET` is set to `0x0000_0000` locally (the SRAM's own address space starts at zero from the core's perspective, since the core talks directly to its private SRAM).

#### Shared Data SRAM (×1)

Single instance of `sram.v`, accessed by all cores through the bus arbiter.

| Property | Value |
|---|---|
| Width | 32 bits |
| Depth | 64 KB (`SRAM_AWIDTH = 16`) |
| Interface | PicoRV32 native (valid/ready) |
| Latency | 1 cycle + arbitration wait |
| Base address | `0x0000_0000` (from arbiter's perspective) |

#### Address Map

```
Per-core instruction SRAM (each core sees its own private space):
  0x0000_0000 – 0x0000_3FFF   Instructions (16 KB, private to each core)

Shared data SRAM (all cores, via arbiter):
  0x0000_0000 – 0x0000_FFFF   Shared data region (64 KB)
    ├── 0x0000_0000 – 0x0000_0FFF   Core 0 private stack / local vars
    ├── 0x0000_1000 – 0x0000_1FFF   Core 1 private stack / local vars
    ├── 0x0000_2000 – 0x0000_2FFF   Core 2 private stack / local vars
    ├── 0x0000_3000 – 0x0000_3FFF   Core 3 private stack / local vars
    └── 0x0000_4000 – 0x0000_FFFF   Inter-core shared region (mailboxes, locks)
```

> Note: the instruction and data address spaces are separate physical memories. A core's `STACKADDR` parameter points into the shared data SRAM address range.

---

## Top-Level Interface

The top-level module (`multi_core_top`) exposes:

| Signal | Direction | Width | Description |
|---|---|---|---|
| `clk` | in | 1 | System clock |
| `resetn` | in | 1 | Active-low synchronous reset |
| `trap` | out | 4 | Per-core trap signals |
| `irq` | in | 32 | IRQ lines (shared across cores, TBD) |

Internal connectivity between the arbiter and memory is not exposed externally.

---

## Key Design Decisions (open)

| # | Decision | Options | Status |
|---|---|---|---|
| 1 | Boot address per core | All start at 0x0, each at its own region, or a shared reset vector that branches | Open |
| 2 | Stack placement | Private per-core stacks vs. shared stack region | Open |
| 3 | IRQ routing | Each core gets independent IRQ lines vs. shared lines with software dispatch | Open |
| 4 | Arbitration fairness | Pure round-robin vs. weighted | Open (round-robin for v1) |
| 5 | Memory latency model | 1-cycle, 2-cycle, or variable | Open (1-cycle for v1) |
| 6 | Inter-core synchronisation | Spinlocks in shared memory? Hardware mutex? | Open |

---

## Implementation Phases

### Phase 1 — Design Spec (current)
- [x] System block diagram
- [x] Component interface definitions
- [x] Arbitration policy specification
- [x] Memory map sketch
- [ ] Finalise open decisions above

### Phase 2 — RTL
- [ ] Bus arbiter module (`rtl/bus_arbiter.v`)
- [ ] Top-level integration (`rtl/multi_core_top.v`)
- [ ] Shared memory model (`rtl/shared_mem.v`)

### Phase 3 — Verification
- [ ] Arbitration testbench — all 4 cores requesting simultaneously
- [ ] Round-robin fairness check
- [ ] Memory read/write correctness per core
- [ ] Trap / IRQ behaviour under contention

---

## File Structure

```
multi-core-processor/
├── README.md               ← this file (design spec)
└── rtl/
    ├── picorv32.v          ← PicoRV32 core (upstream, do not modify)
    ├── sram.v              ← parameterised SRAM (instruction + data use)
    ├── bus_arbiter.v       ← round-robin arbiter for shared data SRAM
    └── multi_core_top.v    ← to be created in Phase 2
```
