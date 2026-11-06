# Multi-Core PicoRV32 Processor

## Overview

This project implements a symmetric multi-core processor consisting of **4 PicoRV32 RV32I cores** sharing a single memory bus. A **bus arbiter** serialises access to the shared data SRAM and peripheral bus; an **address decoder** routes each transaction to the correct target. Each core has a private instruction SRAM so instruction fetches never stall behind data traffic.

For detailed component specs, register maps, and open design questions see [docs/spec.md](docs/spec.md).

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
                                   │  Addr Decoder   │
                                   └──┬──┬──┬──┬──┬──┘
                                      │  │  │  │  │
         ┌────────────────────────────┘  │  │  │  └──────────────────────┐
         │          ┌────────────────────┘  │  └────────────────┐        │
         │          │                    ┌──┘                   │        │
         ▼          ▼                    ▼                      ▼        ▼
  ┌───────────┐ ┌──────────┐ ┌───────────────┐ ┌─────────────┐ ┌──────────┐
  │   DSRAM   │ │   UART   │ │    Timer      │ │  Spinlocks  │ │   PLIC   │
  │   64 KB   │ │          │ │  MTIME +      │ │    (×8)     │ │          │
  └───────────┘ └──────────┘ │  MTIMECMP×4   │ └─────────────┘ └──────────┘
                             └───────────────┘
```

---

## Components

| Module | File | Description |
|---|---|---|
| PicoRV32 cores (×4) | `rtl/picorv32.v` | RV32I cores with IRQ; ENABLE_IRQ_TIMER=0, IRQ[1] reserved |
| ISRAM (×4) | `rtl/sram.v` | 16 KB private instruction SRAM per core |
| DSRAM | `rtl/sram.v` | 64 KB shared data SRAM, accessed via arbiter |
| Bus arbiter | `rtl/bus_arbiter.v` | Round-robin; exposes `grant_id[1:0]` for Core ID register |
| Address decoder | `rtl/addr_decoder.v` | Routes data-bus addresses to DSRAM / UART / timer / spinlock / PLIC |
| Memory map | `rtl/memory_map.vh` | Single source of truth for all base addresses and register offsets |
| UART | `rtl/uart.v` | Console UART, base `0x1000_0000`, 16-byte FIFOs, fires IRQ[2]/IRQ[3] |
| Timer | `rtl/timer.v` | Shared MTIME + 4 independent MTIMECMP, fires IRQ[0] |
| Spinlocks | `rtl/spinlock.v` | 8 atomic test-and-set locks, base `0x1002_0000` |
| PLIC | `rtl/plic.v` | Per-core IRQ enable/mask + claim, base `0x1003_0000` |
| Top level | `rtl/multi_core_top.v` | Wires all modules together |

---

## Implementation Phases

### Phase 1 — Design Spec
- [x] System block diagram
- [x] Component interface definitions
- [x] Arbitration policy specification
- [x] Full address map and register maps — see `RISCV_HW_FW_Interface_Spec_v1.2.docx`
- [ ] Resolve open questions Q1–Q3, Q5–Q7 from spec (clock freq, address sign-off, MTIME topology, spinlock count, GPIO phase, UART FIFO depth)

### Phase 2 — RTL (in progress)
- [x] Bus arbiter (`rtl/bus_arbiter.v`)
- [x] SRAM model (`rtl/sram.v`)
- [x] Top-level integration base (`rtl/multi_core_top.v`) — needs update for new peripherals
- [x] Memory map header (`rtl/memory_map.vh`)
- [x] Address decoder (`rtl/addr_decoder.v`)
- [ ] UART peripheral (`rtl/uart.v`)
- [ ] System timer (`rtl/timer.v`)
- [ ] Hardware spinlocks (`rtl/spinlock.v`)
- [ ] PLIC / IRQ controller (`rtl/plic.v`)
- [ ] Update `multi_core_top.v` to wire all new peripherals

### Phase 3 — Firmware
- [ ] `memory_map.h`, `startup.S`, `linker.ld`
- [ ] HAL: `uart.c/.h`, `timer.c/.h`, `spinlock.c/.h`, `ipc.c/.h`
- [ ] `main.c`

### Phase 4 — Verification
- [ ] Arbitration testbench — all 4 cores requesting simultaneously
- [ ] Address decoder routing correctness per region
- [ ] UART TX/RX loopback test
- [ ] Timer IRQ fires at correct interval
- [ ] Spinlock mutual exclusion under concurrent access
- [ ] PLIC routes interrupt to correct core only
- [ ] Boot protocol — core 0 inits, cores 1–3 release in sequence

---

## File Structure

```
multi-core-processor/
├── README.md
├── docs/
│   └── spec.md                 ← detailed component specs and register maps
├── RISCV_HW_FW_Interface_Spec_v1.2.docx  ← HW/FW interface specification
└── rtl/
    ├── memory_map.vh           ← base addresses + register offsets (single source of truth)
    ├── picorv32.v              ← PicoRV32 core (upstream, do not modify)
    ├── sram.v                  ← parameterised SRAM (used for ISRAM×4 and DSRAM×1)
    ├── bus_arbiter.v           ← round-robin arbiter for data bus
    ├── addr_decoder.v          ← routes data-bus addresses to DSRAM / UART / timer / spinlock / PLIC
    ├── multi_core_top.v        ← top-level integration (needs update for new peripherals)
    ├── uart.v                  ← [TODO] console UART, base 0x1000_0000
    ├── timer.v                 ← [TODO] MTIME + per-core MTIMECMP, base 0x1001_0000
    ├── spinlock.v              ← [TODO] 8 atomic test-and-set locks, base 0x1002_0000
    └── plic.v                  ← [TODO] per-core IRQ enable/mask, base 0x1003_0000
```
