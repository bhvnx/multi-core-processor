# Hardware Spinlock Specification

> Design spec for `rtl/spinlock.v` (not yet implemented). Register map is the authoritative definition in `rtl/memory_map.vh`.
> Reference: §5.3 of `docs/spec.md` (Q5 open: 8 locks sufficient for Phase 1?).

---

## 1. Overview

The hardware spinlock peripheral provides 8 independent mutual-exclusion primitives for the 4 PicoRV32 cores. It sits on the peripheral data bus at base address `0x1002_0000`, reached via `addr_decoder` as the `spinlock` target.

Each lock is a single-bit state machine. A bus **read** atomically tests and sets the lock — returning `0` if the lock was free (and is now held) or `1` if it was already busy. A bus **write of `0`** releases the lock. Writing `1` has no effect.

**Key features:**
- 8 independent locks (`LOCK[0]`–`LOCK[7]`), each at offset `n × 4`
- Atomic test-and-set on read — no separate set instruction needed
- Release by writing `0`; write of `1` is a no-op (safe spurious write)
- 1-cycle bus response; matches the UART/timer bus interface
- All locks reset to free (`0`) on de-assertion of `resetn`
- Offsets `0x20`–`0xFF` reserved for up to 56 additional locks (Phase 2)

**What spinlocks do NOT do:** the hardware enforces nothing about which memory addresses are accessed while a lock is held. Mutual exclusion is a firmware-level software contract — both cores must voluntarily acquire the same lock before touching the same shared resource.

---

## 2. Module Interface

```verilog
module spinlock (
    input  wire        clk,
    input  wire        resetn,

    // Bus interface (from addr_decoder; mem_addr[7:0] is register offset)
    input  wire        mem_valid,
    input  wire [ 7:0] mem_addr,
    input  wire [31:0] mem_wdata,
    input  wire [ 3:0] mem_wstrb,
    output reg         mem_ready,
    output reg  [31:0] mem_rdata
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

No IRQ outputs — spinlocks are purely polled (firmware spins on reads until `0` is returned).

---

## 3. Internal Architecture

### 3.1 Lock state

8 single-bit registers, one per lock:

```verilog
reg [7:0] locks;   // locks[n]: 0 = free, 1 = held
```

### 3.2 Lock index

`mem_addr[4:2]` selects the lock (0–7). `mem_addr[1:0]` is ignored (word-aligned). `mem_addr[7:5]` is `3'b000` for the 8 Phase-1 locks; offsets `0x20`–`0xFF` are reserved.

### 3.3 Read — atomic test-and-set

A read checks the current state and sets the lock in the same clock cycle:

```verilog
// On a read of LOCK[n]:
mem_rdata <= {31'b0, locks[n]};   // return current state: 0=free, 1=busy
locks[n]  <= 1'b1;                // unconditionally mark as held
```

This is atomic at the bus level because the bus arbiter ensures only one core holds the bus at a time. The core that gets the grant sees `0` (and now owns the lock); any later reader sees `1` (busy) until the lock is released.

### 3.4 Write — release

A write of `0` to `LOCK[n]` clears the lock. A write of `1` is ignored:

```verilog
// On a write of LOCK[n]:
if (mem_wdata[0] == 1'b0)
    locks[n] <= 1'b0;   // release
// write of 1 → no effect
```

Writing `1` is a no-op to prevent a core from accidentally stealing a lock held by another core (a buggy release of `1` instead of `0` would have no effect rather than corrupting state).

---

## 4. Register Map

Base address: `0x1002_0000`. Each lock occupies one 32-bit word.

| Offset | Name | Access | Reset | Description |
|---|---|---|---|---|
| `0x00` | `LOCK0` | R/W | `0` | Lock 0; read=test-and-set, write 0=release |
| `0x04` | `LOCK1` | R/W | `0` | Lock 1 |
| `0x08` | `LOCK2` | R/W | `0` | Lock 2 |
| `0x0C` | `LOCK3` | R/W | `0` | Lock 3 |
| `0x10` | `LOCK4` | R/W | `0` | Lock 4 |
| `0x14` | `LOCK5` | R/W | `0` | Lock 5 |
| `0x18` | `LOCK6` | R/W | `0` | Lock 6 |
| `0x1C` | `LOCK7` | R/W | `0` | Lock 7 |
| `0x20`–`0xFF` | — | — | — | Reserved for up to 56 additional locks (Phase 2) |

Only `mem_rdata[0]` is meaningful on a read; bits `[31:1]` are always `0`.

---

## 5. Protocol and Firmware Usage

### 5.1 Acquire (spin until free)

```c
while (read(SPINLOCK_BASE + n * 4) != 0);
// lock n is now held by this core
```

The core reads in a tight loop until it receives `0`. Because the read is an atomic test-and-set, the first core to see `0` atomically claims the lock — no other core can receive `0` for the same lock until it is released.

### 5.2 Release

```c
write(SPINLOCK_BASE + n * 4, 0);
```

### 5.3 Suggested lock assignments (firmware convention)

The hardware assigns no meaning to individual locks. A suggested mapping for Phase 1:

| Lock | Suggested resource |
|---|---|
| `LOCK0` | Shared counter / inter-core flags |
| `LOCK1` | Mailbox / IPC region (`0x0000_4000`–`0x0000_FFFF`) |
| `LOCK2` | UART (single-core transmit at a time) |
| `LOCK3`–`LOCK7` | Available for firmware use |

This mapping is a software convention only; it must be documented and followed consistently by all cores.

---

## 6. Atomicity Guarantee

The test-and-set is atomic because:

1. The bus arbiter grants the bus to exactly one core at a time (round-robin).
2. A read transaction completes in 1 cycle — the arbiter does not context-switch between the read and the internal set.
3. No other core can observe or modify `locks[n]` between the read return and the set, because the bus is still held by the reading core for that single cycle.

This guarantee holds as long as firmware uses the bus read to acquire (not a software read-modify-write sequence in DSRAM).

---

## 7. Reset Behavior

Reset is active-low synchronous (`resetn`). On de-assertion all locks are cleared to free:

| Register | Reset value | Reason |
|---|---|---|
| `locks[7:0]` | `8'b0000_0000` | All locks free at boot |
| `mem_ready` | `1'b0` | No transaction in flight |
| `mem_rdata` | `32'h0` | No stale read data |

---

## 8. Bus Protocol

`spinlock` follows the same PicoRV32-native valid/ready handshake as all other peripherals. All transactions complete in 1 cycle.

```
Cycle 0:  mem_valid=1, mem_addr=<offset>
          mem_wstrb=4'b0        → read  (test-and-set)
          mem_wstrb!=4'b0       → write (release if mem_wdata[0]==0)
Cycle 1:  mem_ready=1, mem_rdata=<previous lock state on read>
Cycle 2:  mem_ready=0
```

`mem_ready` is generated under `mem_valid && !mem_ready` to prevent double-ack if the upstream master holds `mem_valid` high across cycles.
