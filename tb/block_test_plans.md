# Block-Level Test Plans

This file consolidates all unit-level test plans for the multi-core processor RTL blocks.

---

# 1. Bus Arbiter — Test Plan

## Arbiter Specification (from README)

- 4 cores, one shared memory port
- Round-robin policy: scans from `(last_grant + 1) mod 4`, grants first
  requesting core found
- Grant pointer advances only after `mem_ready` is asserted
- Skips any core with `mem_valid == 0`
- Properties: starvation-free, no priority inversion, single-cycle grant decision

---

## Test Environment Assumptions

- Memory model stub: asserts `mem_ready` after a configurable number of cycles
  (default 1 cycle for most tests; multi-cycle used where noted)
- All tests check: correct grant selection, correct signal muxing to memory,
  correct `mem_ready` forwarding to granted core only, no spurious readys
  to non-granted cores

---

## Test Cases

---

### Group 1 — Single Core Requesting (4 tests)

Verifies the arbiter grants the only requesting core regardless of the
starting state of `next_grant`.

| TC | ID | Description | Initial `next_grant` | Requesting core | Expected grant |
|---|---|---|---|---|---|
| TC-1.0 | SINGLE_C0 | Only core 0 asserts `mem_valid` | 3 (reset state) | 0 | 0 |
| TC-1.1 | SINGLE_C1 | Only core 1 asserts `mem_valid` | 3 | 1 | 1 |
| TC-1.2 | SINGLE_C2 | Only core 2 asserts `mem_valid` | 3 | 2 | 2 |
| TC-1.3 | SINGLE_C3 | Only core 3 asserts `mem_valid` | 3 | 3 | 3 |

**Pass criteria:**
- Arbiter grants the requesting core within 1 clock of `mem_valid` going high
- `mem_valid` to memory goes high
- Address, wdata, wstrb, mem_instr forwarded from the correct core
- `mem_ready` pulse returned only to the granted core
- `next_grant` updated to granted core after transaction

---

### Group 2 — All 16 Possible Request Combinations

All non-zero combinations of `{core3_valid, core2_valid, core1_valid, core0_valid}`.
For each, `next_grant` starts at 3 (scan begins at core 0).

| TC | Request vector `[3:0]` | Active cores | Expected first grant |
|---|---|---|---|
| TC-2.1  | `4'b0001` | 0 | 0 |
| TC-2.2  | `4'b0010` | 1 | 1 |
| TC-2.3  | `4'b0011` | 0,1 | 0 |
| TC-2.4  | `4'b0100` | 2 | 2 |
| TC-2.5  | `4'b0101` | 0,2 | 0 |
| TC-2.6  | `4'b0110` | 1,2 | 1 |
| TC-2.7  | `4'b0111` | 0,1,2 | 0 |
| TC-2.8  | `4'b1000` | 3 | 3 |
| TC-2.9  | `4'b1001` | 0,3 | 0 |
| TC-2.10 | `4'b1010` | 1,3 | 1 |
| TC-2.11 | `4'b1011` | 0,1,3 | 0 |
| TC-2.12 | `4'b1100` | 2,3 | 2 |
| TC-2.13 | `4'b1101` | 0,2,3 | 0 |
| TC-2.14 | `4'b1110` | 1,2,3 | 1 |
| TC-2.15 | `4'b1111` | 0,1,2,3 | 0 |

> TC-2.0 (`4'b0000`, no requests) is covered in Group 5.

For each TC in this group, after the first grant completes, all remaining
requesting cores are serviced in round-robin order and the grant sequence
is verified end-to-end.

**Pass criteria (per TC):**
- First grant matches expected column
- Each subsequent grant is the next requesting core in the scan order
  `(last_grant + 1) mod 4`, skipping non-requesting cores
- No core granted twice before all other requesting cores are served once

---

### Group 3 — Round-Robin Rotation with All 4 Cores Active

Verifies the full rotation cycle under sustained load.

#### TC-3.0 — FULL_ROTATION_FROM_RESET
All 4 cores hold `mem_valid` high continuously.
`next_grant` starts at 3.

Expected grant sequence: **0 → 1 → 2 → 3 → 0 → 1 → 2 → 3 → ...**

Run for 8 consecutive transactions. Verify:
- Grant cycles exactly through 0,1,2,3,0,1,2,3
- `next_grant` equals the last granted core after each transaction
- No core skipped, no core granted twice in a row

#### TC-3.1 — FULL_ROTATION_FROM_EACH_STARTING_POINT
Repeat TC-3.0 with `next_grant` initialised to 0, 1, and 2 (force via
reset sequence). Verify rotation always starts from `(next_grant + 1) mod 4`.

| Start `next_grant` | Expected first grant | Expected sequence |
|---|---|---|
| 0 | 1 | 1→2→3→0→1→... |
| 1 | 2 | 2→3→0→1→2→... |
| 2 | 3 | 3→0→1→2→3→... |
| 3 | 0 | 0→1→2→3→0→... |

---

### Group 4 — Priority Pointer Advances Past Non-Requesting Core

The current highest-priority candidate has `mem_valid == 0`; the arbiter
must skip it and grant the next requesting core.

#### TC-4.0 — SKIP_ONE_IDLE
`next_grant = 0`. Core 0 has no request. Cores 1, 2, 3 are requesting.

Scan: skip core 1 (index 1 = `(0+1) mod 4`)?

Wait — `next_grant = 0` means scan starts at core 1.
Core 1 is idle → skip. Core 2 is requesting → **grant core 2**.

| Step | `next_grant` | Requesting | Expected grant |
|---|---|---|---|
| 1 | 0 | `1,2,3` → core 1 idle | 2 |
| 2 | 2 | `1,2,3` → core 2 idle (now done) | 3 |
| 3 | 3 | `1,2,3` → | 1 |

#### TC-4.1 — SKIP_TWO_CONSECUTIVE_IDLE
`next_grant = 0`. Cores 1 and 2 are idle. Only core 3 is requesting.

Scan: core 1 idle → skip, core 2 idle → skip, core 3 requesting → **grant core 3**.

#### TC-4.2 — SKIP_THREE_IDLE
`next_grant = 1`. Cores 2, 3, 0 are all idle. Only core 1 is requesting.

Scan: core 2 idle → skip, core 3 idle → skip, core 0 idle → skip,
core 1 requesting → **grant core 1**.

Verifies the scan wraps around mod 4 correctly.

#### TC-4.3 — SKIP_WITH_WRAP
`next_grant = 2`. Cores 3 and 0 are idle. Cores 1 and 2 are requesting.

Scan from core 3: idle → skip. Core 0: idle → skip. Core 1: requesting → **grant core 1**.

Verifies wrap-around and that the scan does not re-grant the last winner
(core 2) when it is still active.

---

### Group 5 — No Requests (Idle Bus)

#### TC-5.0 — NO_REQUESTS_AT_RESET
All `mem_valid` inputs held low from reset. Verify:
- `mem_valid` to memory stays low
- `bus_busy` stays deasserted
- No `mem_ready` pulse to any core
- `next_grant` unchanged

#### TC-5.1 — REQUEST_AFTER_IDLE_PERIOD
All cores idle for 10 cycles, then core 2 asserts `mem_valid`.
Verify grant is issued to core 2 within 1 clock of the request.

---

### Group 6 — Multi-Cycle Memory Latency

Verifies the grant is held stable across a slow memory response.

#### TC-6.0 — HOLD_GRANT_2_CYCLES
Memory takes 2 cycles to assert `mem_ready`. All 4 cores requesting.
Verify:
- Grant does not change between the first and second cycle
- `mem_valid` to memory stays high throughout
- Correct core receives `mem_ready` on cycle 2
- Rotation advances correctly after completion

#### TC-6.1 — HOLD_GRANT_5_CYCLES
Same as TC-6.0 but memory latency is 5 cycles.
Verify grant stability for the full 5-cycle window.

---

### Group 7 — Starvation-Free Property

#### TC-7.0 — NO_STARVATION
Core 3 begins requesting on cycle 0. Cores 0, 1, 2 are also continuously
requesting. Starting from `next_grant = 3`.

Verify core 3 is granted **within 4 transactions** (the maximum possible
wait under round-robin with 4 cores).

Run for 20 transactions total and confirm no core waits more than 4 grants
without being served.

---

### Group 9 — Signal Mux Correctness

For each granted core, verify that the signals forwarded to memory are
exactly those of the granted core and not any other.

#### TC-9.0 — ADDRESS_MUX
Each core drives a distinct `mem_addr`. Verify `mem_addr` seen by memory
matches the granted core's address for every transaction in a 4-transaction
round-robin.

#### TC-9.1 — WDATA_WSTRB_MUX
Each core drives distinct `mem_wdata` and `mem_wstrb`. Same verification.

#### TC-9.2 — MEM_INSTR_MUX
Cores 0 and 2 drive `mem_instr = 1`; cores 1 and 3 drive `mem_instr = 0`.
Verify `mem_instr` to memory reflects the granted core's value on each grant.

#### TC-9.3 — READY_UNICAST
On each `mem_ready` pulse from memory, verify exactly one `core_mem_ready`
is high and it belongs to the currently granted core.

---

## Deferred to Integration Test Plan

| TC | Description | Reason deferred |
|---|---|---|
| DROP_BEFORE_READY | Core drops `mem_valid` mid-transaction before `mem_ready` arrives | Requires knowing PicoRV32's contract: the core never does this by design. Only meaningful when core + arbiter + SRAM run together. |

---

## Pass / Fail Criteria Summary

| Category | Criterion |
|---|---|
| Correctness | Grant always goes to the first requesting core in scan order |
| Rotation | `next_grant` advances to the last granted core after each transaction |
| Skip | Idle cores (mem_valid=0) are never granted |
| Stability | Grant does not change while `bus_busy` is high |
| Isolation | Non-granted cores never receive `mem_ready` |
| Mux | All forwarded signals match the granted core exactly |
| Starvation | No core waits more than 4 grants under full load |
| Idle | No spurious activity when all cores are idle |

---

---

# 2. SRAM — Test Plan

## Module Interface

```verilog
module sram #(
    parameter SRAM_AWIDTH = 14    // word address bits; depth = 2^SRAM_AWIDTH words
) (
    input  wire        clk,
    input  wire        mem_valid,  // request strobe
    output reg         mem_ready,  // 1-cycle completion pulse
    input  wire [31:0] mem_addr,   // byte address; word index = addr[AWIDTH+1:2]
    input  wire [31:0] mem_wdata,  // write data
    input  wire [ 3:0] mem_wstrb,  // byte enables: 0000=read, else write
    output reg  [31:0] mem_rdata   // read data (valid when mem_ready)
);
```

## SRAM Specification (from README)

- Single-port synchronous SRAM, 32-bit wide
- `mem_wstrb == 4'b0000` → read; any other value → write
- Each bit of `mem_wstrb` enables one byte lane (bit 0 = byte 0, bit 3 = byte 3)
- Latency: 1 cycle — `mem_ready` asserted the cycle after `mem_valid`
- `mem_ready` is a single-cycle pulse; it self-clears when `mem_valid` drops

---

## Test Cases

---

### Group 1 — Basic Read and Write

#### TC-1.0 — WRITE_THEN_READ_SAME_ADDR
Write a full 32-bit word to address `0x0000_0000` with `wstrb = 4'b1111`.
On the next cycle, read from the same address.

**Pass criteria:**
- `mem_ready` asserts exactly 1 cycle after each `mem_valid`
- `mem_rdata` matches the written word exactly

#### TC-1.1 — WRITE_THEN_READ_DIFFERENT_ADDR
Write distinct values to addresses `0x00`, `0x04`, `0x08`.
Read them back in order.

**Pass criteria:**
- Each read returns the value written to that specific address
- No cross-contamination between addresses

#### TC-1.2 — READ_UNINITIALISED
Read from an address that has never been written.
(Behavioural — SRAM contents after power-up are undefined; test verifies
no hang and that `mem_ready` still fires. Value is not checked.)

**Pass criteria:**
- `mem_ready` asserts 1 cycle after `mem_valid`
- No timeout

---

### Group 2 — Byte Enable Writes

All TCs in this group: pre-write the target address with `0xFFFF_FFFF`
(wstrb=`4'b1111`), then perform a partial write with the byte pattern
under test, then read back and verify byte-level results.

| TC | `mem_wstrb` | Bytes written | Bytes preserved |
|---|---|---|---|
| TC-2.0 | `4'b0001` | byte 0 `[7:0]` | bytes 1, 2, 3 |
| TC-2.1 | `4'b0010` | byte 1 `[15:8]` | bytes 0, 2, 3 |
| TC-2.2 | `4'b0100` | byte 2 `[23:16]` | bytes 0, 1, 3 |
| TC-2.3 | `4'b1000` | byte 3 `[31:24]` | bytes 0, 1, 2 |
| TC-2.4 | `4'b0011` | bytes 0–1 (low halfword) | bytes 2, 3 |
| TC-2.5 | `4'b1100` | bytes 2–3 (high halfword) | bytes 0, 1 |
| TC-2.6 | `4'b0101` | bytes 0 and 2 | bytes 1 and 3 |
| TC-2.7 | `4'b1010` | bytes 1 and 3 | bytes 0 and 2 |
| TC-2.8 | `4'b1111` | all bytes | none |

Write value for all byte-enable tests: `0xA5A5_A5A5`
Pre-fill value: `0xFFFF_FFFF`

**Pass criteria (per TC):**
- Written bytes in `mem_rdata` equal the corresponding bytes of `0xA5A5_A5A5`
- Preserved bytes in `mem_rdata` remain `0xFF`
- `mem_ready` fires 1 cycle after each `mem_valid`

#### TC-2.9 — PARTIAL_WRITE_PRESERVES_UNWRITTEN_BYTES
Sequence: write `0x1234_5678` with `wstrb=4'b1111`, then write `0xABCD_EF00`
with `wstrb=4'b0001` (byte 0 only), then read back.

Expected: `mem_rdata = 0x1234_5600`
(byte 0 updated to `0x00`, bytes 1–3 unchanged from first write)

---

### Group 3 — Consecutive Operations to Different Addresses

#### TC-3.0 — CONSECUTIVE_WRITES_DIFFERENT_ADDRS
Issue 4 consecutive write transactions (back-to-back, no idle cycles) to
addresses `0x00`, `0x04`, `0x08`, `0x0C` with values `0x1111_1111`,
`0x2222_2222`, `0x3333_3333`, `0x4444_4444`.

**Pass criteria:**
- Each `mem_ready` fires 1 cycle after its `mem_valid`
- No transaction is dropped or merged
- Subsequent reads from all 4 addresses return correct values

#### TC-3.1 — CONSECUTIVE_READS_DIFFERENT_ADDRS
After TC-3.0 populates 4 locations, issue 4 consecutive reads back-to-back.

**Pass criteria:**
- `mem_rdata` matches the expected value for each address on its own cycle
- No data from the previous read bleeds into the next

#### TC-3.2 — ALTERNATING_WRITE_READ_DIFFERENT_ADDRS
Interleave writes and reads: write `0x04`, read `0x00`, write `0x08`, read `0x04`.

**Pass criteria:**
- Each read returns the value last written to that address
- Writes to one address do not disturb reads from another

---

### Group 4 — Consecutive Operations to the Same Address

#### TC-4.0 — WRITE_OVERWRITE_SAME_ADDR
Write `0xDEAD_BEEF` to address `0x10`, then write `0xCAFE_BABE` to the same
address. The SRAM's `!mem_ready` guard inserts a 1-cycle gap between any two
consecutive transactions; the second write lands after that gap. Then read back.

**Pass criteria:**
- `mem_rdata = 0xCAFE_BABE` (second write wins)
- First value is not visible after the second write

#### TC-4.1 — MULTI_WRITE_SAME_ADDR
Issue 4 consecutive writes to address `0x14` with values `0x0000_0001`,
`0x0000_0002`, `0x0000_0003`, `0x0000_0004`. Then read back.

**Pass criteria:**
- `mem_rdata = 0x0000_0004` (last write value)

#### TC-4.2 — READ_AFTER_WRITE_SAME_ADDR_NO_STALE
Write `0xABCD_1234` to address `0x18`, then read from `0x18`. The SRAM's
`!mem_ready` guard inserts a 1-cycle gap before the read is accepted. Verify
the read returns the newly written value, not a stale one from before the write.

**Pass criteria:**
- `mem_rdata = 0xABCD_1234` — no stale value from before the write

---

### Group 5 — Handshake Protocol

#### TC-5.0 — READY_LATENCY_IS_ONE_CYCLE
Assert `mem_valid` for one cycle. Verify `mem_ready` goes high exactly on
the following cycle — not the same cycle, not two cycles later.

**Pass criteria:**
- Cycle N: `mem_valid = 1`, `mem_ready = 0`
- Cycle N+1: `mem_ready = 1`

#### TC-5.1 — READY_IS_SINGLE_CYCLE_PULSE
After `mem_ready` fires, drop `mem_valid`. Verify `mem_ready` drops to 0
on the next cycle and does not stay high.

**Pass criteria:**
- `mem_ready` is high for exactly 1 cycle
- `mem_ready` is 0 on all cycles where `mem_valid` is 0

#### TC-5.2 — NO_TRANSACTION_WHEN_VALID_LOW
Hold `mem_valid = 0` for 10 cycles. Verify `mem_ready` never goes high.

**Pass criteria:**
- `mem_ready = 0` for all 10 cycles

#### TC-5.3 — BACK_TO_BACK_TRANSACTIONS
Issue two write transactions immediately back-to-back (second `mem_valid`
goes high the same cycle the first `mem_ready` fires).

**Pass criteria:**
- Both transactions complete
- Each `mem_ready` fires exactly 1 cycle after its `mem_valid`
- Second transaction data is written correctly

---

### Group 6 — Address Boundary

#### TC-6.0 — FIRST_ADDRESS
Write and read at word address 0 (`mem_addr = 32'h0000_0000`).

**Pass criteria:** correct write and read; no timeout.

#### TC-6.1 — LAST_ADDRESS
Write and read at the last word address (`mem_addr = (2^SRAM_AWIDTH - 1) << 2`).

**Pass criteria:** correct write and read; no timeout.

#### TC-6.2 — WORD_ALIGNED_ACCESS
All accesses use word-aligned addresses (`addr[1:0] == 2'b00`).
Verify 4 reads from `0x00`, `0x04`, `0x08`, `0x0C` each return independent values.

**Pass criteria:** no address aliasing; each location stores its own value.

---

## Deferred to Integration Test Plan

| TC | Description | Reason deferred |
|---|---|---|
| OUT_OF_RANGE_ADDR | Access beyond `2^SRAM_AWIDTH` words | Address decode is a top-level concern; SRAM itself has no bounds check |
| CONCURRENT_ACCESS | Two masters writing simultaneously | Requires arbitration layer; not applicable to single-port SRAM in isolation |

---

## Pass / Fail Criteria Summary

| Category | Criterion |
|---|---|
| Write correctness | Written data readable at the same address |
| Read correctness | `mem_rdata` matches last write to that address |
| Byte enables | Only enabled bytes are written; disabled bytes are preserved |
| Latency | `mem_ready` fires exactly 1 cycle after `mem_valid` |
| Pulse | `mem_ready` is a single-cycle pulse; no spurious highs |
| Isolation | Writes to address A do not affect reads from address B |
| Overwrite | Last write to an address wins; no stale data |
| Boundaries | First and last address operate correctly |
