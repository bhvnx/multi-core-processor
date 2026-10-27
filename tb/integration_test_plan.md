Integration Test Plan — `multi_core_top`

## Scope

Tests in this section drive the full `multi_core_top` module: 4 PicoRV32 cores,
4 private instruction SRAMs (ISRAMs), 1 bus arbiter, and 1 shared data SRAM
(DSRAM). The primary tool is pre-loading ISRAMs with RV32I machine code and
observing DSRAM state after execution.

## Test Environment

- **ISRAM pre-load**: before releasing reset the testbench writes 32-bit words
  directly into the ISRAM array of each core via Verilator backdoor access.
- **Completion detection**: each program ends with a `jal x0, 0` (spin loop)
  after writing a per-core **done sentinel** to a fixed DSRAM address. The
  testbench polls those addresses and times out if a sentinel never appears.
- **Timeout**: 2000 clock cycles per test; a timeout is a FAIL.
- **Trap monitoring**: `trap[3:0]` is sampled every cycle. Any unexpected trap
  is a FAIL.
- **Parameters used**: `ISRAM_AWIDTH = 10` (1 KB per core, fast sim),
  `DSRAM_AWIDTH = 14` (64 KB shared, still covers full address map).

## Sentinel / address conventions

| Symbol | Address | Used for |
|--------|---------|----------|
| `DONE_C0` | `0x0000_4000` | Core 0 done sentinel |
| `DONE_C1` | `0x0000_4004` | Core 1 done sentinel |
| `DONE_C2` | `0x0000_4008` | Core 2 done sentinel |
| `DONE_C3` | `0x0000_400C` | Core 3 done sentinel |
| `DATA_C0` | `0x0000_0100` | Core 0 private data write target |
| `DATA_C1` | `0x0000_1100` | Core 1 private data write target |
| `DATA_C2` | `0x0000_2100` | Core 2 private data write target |
| `DATA_C3` | `0x0000_3100` | Core 3 private data write target |
| `SHARED`  | `0x0000_4100` | Single shared address used by all cores |

## RV32I instruction encodings used in programs

| Assembly | Encoding | Notes |
|----------|----------|-------|
| `addi x1, x0, imm` | varies | load small immediate into x1 |
| `lui x2, upper` | varies | load 20-bit upper immediate into x2 |
| `addi x2, x2, lower` | varies | add lower 12 bits to x2 |
| `sw x1, 0(x2)` | `0x00112023` (imm=0) | store x1 to address in x2 |
| `lw x3, 0(x2)` | `0x00012183` (imm=0) | load from address in x2 into x3 |
| `sw x3, 4(x2)` | `0x00312223` (imm=4) | store x3 to x2+4 |
| `jal x0, 0` | `0x0000006F` | spin loop (halt) |

---

## Test Cases

---

### Group 1 — Routing: mem_instr gate correctness

Verify that instruction fetches always go to the private ISRAM and never
appear on the arbiter/DSRAM path, and vice versa for data accesses.

#### TC-1.0 — FETCH_NEVER_HITS_DSRAM

**Setup:** Load Core 0 ISRAM with a 4-instruction program that writes one
sentinel to DSRAM (`DONE_C0 = 0xAA`) then spins. Cores 1–3 ISRAMs hold only
spin loops (no data ops).

**Stimulus:** Release reset, run 500 cycles.

**Pass criteria:**
- `DONE_C0` in DSRAM reads `0xAA` (Core 0 write completed)
- Total number of `dsram_valid` pulses observed equals the number of data
  store/load instructions in the program (≤ 2). No extra transactions from
  instruction fetches.
- `trap[3:0]` remains `0` throughout.

---

#### TC-1.1 — DATA_NEVER_HITS_ISRAM

**Setup:** Load Core 0 ISRAM with a program that performs a store to `DATA_C0`
and a load back from `DATA_C0`, then writes sentinel `0xBB` to `DONE_C0`.

**Stimulus:** Release reset, run until sentinel appears or timeout.

**Pass criteria:**
- `DONE_C0` = `0xBB`
- `DATA_C0` contains the value stored by the program
- No store transaction ever targets the ISRAM address range (`mem_instr=1`
  transactions are read-only from the core's perspective; a write with
  `mem_instr=1` must never occur)

---

### Group 2 — Instruction fetches independent of DSRAM arbitration

Verify that a core stalled waiting for a DSRAM grant does not block other
cores from fetching their own instructions.

#### TC-2.0 — ISRAM_FETCH_UNBLOCKED_BY_ARB

**Setup:**
- Core 0 ISRAM: tight loop that repeatedly stores to `DATA_C0` (keeps the
  arbiter busy for many cycles), then writes `DONE_C0 = 0x01` and spins.
- Core 1 ISRAM: a long linear sequence of `addi` instructions (no data
  accesses) that accumulates a result in a register, then stores the result
  to `DONE_C1` and spins.

**Stimulus:** Release reset. Run until both `DONE_C0` and `DONE_C1` appear.

**Pass criteria:**
- Both sentinels appear within timeout.
- `DONE_C1` equals the expected accumulated result (testbench can predict
  this from the number of `addi` steps).
- Demonstrates that Core 1's instruction stream completed independently of
  Core 0's DSRAM traffic.

---

### Group 3 — Concurrent DSRAM access by all 4 cores

#### TC-3.0 — ALL_CORES_WRITE_SEPARATE_ADDRS

**Setup:** Each core runs a program that writes a unique value to its private
data region then writes its done sentinel:

| Core | Writes value | To address | Sentinel |
|------|-------------|-----------|---------|
| 0 | `0x00000011` | `DATA_C0` | `DONE_C0 = 0xC0` |
| 1 | `0x00000022` | `DATA_C1` | `DONE_C1 = 0xC1` |
| 2 | `0x00000033` | `DATA_C2` | `DONE_C2 = 0xC2` |
| 3 | `0x00000044` | `DATA_C3` | `DONE_C3 = 0xC3` |

**Stimulus:** Release reset. Poll until all 4 sentinels appear or timeout.

**Pass criteria:**
- All 4 sentinel addresses contain their expected values.
- `DATA_C0` = `0x11`, `DATA_C1` = `0x22`, `DATA_C2` = `0x33`, `DATA_C3` = `0x44`.
- No core's write overwrites another core's target address.
- `trap[3:0]` = `0` throughout.

---

#### TC-3.1 — ALL_CORES_WRITE_SAME_ADDR

**Setup:** All 4 cores write a unique value to `SHARED` then write their done
sentinel. Round-robin order (starting from Core 0): Core 0 writes first, then
Core 1, Core 2, Core 3.

| Core | Writes to `SHARED` |
|------|-------------------|
| 0 | `0x000000AA` |
| 1 | `0x000000BB` |
| 2 | `0x000000CC` |
| 3 | `0x000000DD` |

**Stimulus:** Release reset. Poll until all 4 sentinels appear or timeout.

**Pass criteria:**
- All 4 sentinels appear.
- `SHARED` contains the value written by the **last** core to be granted
  (determined by the round-robin order at the time of the conflicting writes).
- Only one value survives; no intermediate value is visible after the last
  write.

---

#### TC-3.2 — TWO_WRITERS_TWO_READERS

**Setup:**
- Core 0: write `0xAAAAAAAA` to `SHARED`, then write `DONE_C0`.
- Core 1: write `0xBBBBBBBB` to `SHARED + 4`, then write `DONE_C1`.
- Core 2 (reader): waits in a polling loop reading `SHARED` until it sees a
  non-zero value, stores the value to `DATA_C2`, then writes `DONE_C2`.
- Core 3 (reader): same but polls `SHARED + 4`, stores to `DATA_C3`, writes
  `DONE_C3`.

**Stimulus:** Release reset. Poll until all 4 sentinels appear or timeout.

**Pass criteria:**
- `DATA_C2` = `0xAAAAAAAA`
- `DATA_C3` = `0xBBBBBBBB`
- Both readers received the correct data written by their paired writer.

---

### Group 4 — Out-of-range DSRAM address (address aliasing)

The DSRAM uses `mem_addr[DSRAM_AWIDTH+1:2]` as the word address. Bits above
`DSRAM_AWIDTH+1` are silently discarded. There is no bus error or trap for
out-of-range data addresses.

#### TC-4.0 — ADDR_WRAP_ONE_PAST_END

With `DSRAM_AWIDTH = 14`, the last in-range byte address is `0x0000_FFFC`
(word 16383). The address `0x0001_0000` has word bits `[15:0] = 0x0000`, so
it aliases to word 0 (`0x0000_0000`).

**Setup:** Core 0 program:
1. Write `0x12345678` to `0x0000_0000` (in-range, word 0).
2. Write `0xDEADBEEF` to `0x0001_0000` (out-of-range, aliases to word 0).
3. Read back from `0x0000_0000`, store result to `DATA_C0`.
4. Write `DONE_C0`.

**Stimulus:** Release reset. Poll until `DONE_C0` appears or timeout.

**Pass criteria:**
- `DONE_C0` appears within timeout (no hang).
- `DATA_C0` = `0xDEADBEEF` (the out-of-range write landed at word 0,
  overwriting the first write).
- `trap[0]` = `0` (word-aligned access, no misalign trap).

---

#### TC-4.1 — ADDR_WRAP_MAX_WORD_ALIGNED

Address `0xFFFF_FFFC` is word-aligned. Its word bits `[DSRAM_AWIDTH+1:2]`
alias to some word within the DSRAM.

**Setup:** Core 0 program:
1. Compute the alias address: `expected_alias = 0xFFFF_FFFC & ((1 << (DSRAM_AWIDTH+2)) - 4)`.
2. Write `0xCAFECAFE` to `0xFFFF_FFFC`.
3. Read back from the alias address, store to `DATA_C0`.
4. Write `DONE_C0`.

**Stimulus:** Release reset. Poll until `DONE_C0` or timeout.

**Pass criteria:**
- `DONE_C0` appears within timeout (system does not hang on a max address).
- `DATA_C0` = `0xCAFECAFE` (write arrived at the aliased word).
- `trap[0]` = `0`.

---

### Group 5 — Reset and trap

#### TC-5.0 — ALL_CORES_BOOT_FROM_ADDR_ZERO

All cores have `PROGADDR_RESET = 0x0000_0000`. After reset is de-asserted,
each core must begin execution at `0x0000_0000`.

**Setup:** Load each ISRAM with a 4-word program:
1. `addi x1, x0, 0xEX` — encodes a unique sentinel value *only at word 0*.
2. `lui  x2, 4`         — load DONE address.
3. `sw   x1, off(x2)`   — write sentinel to DONE_CX.
4. `jal  x0, 0`         — spin.

All words beyond word 3 are filled with `jal x0, 0` (spin) by the backdoor
loader. Assert reset for 4 cycles, then de-assert.

**Stimulus:** Release reset. Run until all 4 done sentinels appear or timeout.

**Pass criteria:**
- `DONE_C0` = `0xE0`, `DONE_C1` = `0xE1`, `DONE_C2` = `0xE2`, `DONE_C3` = `0xE3`.

**Why this proves boot from address 0:**
`x1 = 0` after reset. The `addi` that writes the non-zero sentinel is the
instruction at word 0 only; no branch can re-visit it. A core that skips
word 0 stores 0 instead of `0xEX` → wrong sentinel → FAIL. A core that starts
at word 1 or later either stores the wrong value or spins forever in the
fill area. The only way to observe all four correct sentinels is if all four
cores executed starting at PC = `0x0000_0000`.

- `trap[3:0]` = `0` throughout.

---

#### TC-5.1 — ILLINSN_TRAPS_ONE_CORE_ONLY

**Setup:**
- Core 0 ISRAM word 0: `0x00000000` (opcode bits `[6:0] = 0b0000000`, undefined
  in RV32I, triggers `CATCH_ILLINSN`). Note: `0x0000000F` is the FENCE opcode
  and is treated as a NOP by PicoRV32 — it does **not** trap.
- Cores 1–3 ISRAMs: write sentinels then spin (valid programs).

**Stimulus:** Release reset. Run 500 cycles.

**Pass criteria:**
- `trap[0]` asserts (Core 0 hit illegal instruction).
- `trap[3:1]` = `0` (other cores unaffected).
- `DONE_C1`, `DONE_C2`, `DONE_C3` all appear within timeout (other cores
  continue executing normally after Core 0 traps).

---

### Group 6 — Write and read back via executing program

End-to-end test closest to real firmware: each core runs a multi-step program
involving instruction fetch, data write, data read, conditional branch, and
store of a computed result.

#### TC-6.0 — SINGLE_CORE_WRITE_READBACK

**Setup:** Core 0 program (others spin):
1. `addi x1, x0, 0x55` — x1 = 0x55
2. `lui x2, 4` — x2 = 0x4000 (`SHARED`)
3. `sw x1, 0(x2)` — DSRAM[0x4000] = 0x55
4. `lw x3, 0(x2)` — x3 = DSRAM[0x4000]
5. `sw x3, 4(x2)` — DSRAM[0x4004] = x3 (write-back of what was read)
6. Write `DONE_C0 = 0xFF`.
7. Spin.

**Pass criteria:**
- `DONE_C0` = `0xFF`
- `DSRAM[0x4000]` = `0x55`
- `DSRAM[0x4004]` = `0x55` (proving the load returned the correct value)

---

#### TC-6.1 — ALL_CORES_WRITE_READ_OWN_REGION

**Setup:** Each core runs a program:
1. Write a unique value to its private region (`DATA_Cx`).
2. Load from `DATA_Cx` into a register.
3. Store the loaded value at `DATA_Cx + 4` (proof of read-back).
4. Write done sentinel.

| Core | Writes | To | Reads back to |
|------|--------|----|---------------|
| 0 | `0x0A0A0A0A` | `DATA_C0` | `DATA_C0 + 4` |
| 1 | `0x0B0B0B0B` | `DATA_C1` | `DATA_C1 + 4` |
| 2 | `0x0C0C0C0C` | `DATA_C2` | `DATA_C2 + 4` |
| 3 | `0x0D0D0D0D` | `DATA_C3` | `DATA_C3 + 4` |

**Pass criteria:**
- All 4 done sentinels appear.
- For each core: `DATA_Cx + 4` == `DATA_Cx` (read-back value matches write).
- No cross-contamination between cores' private regions.

---

## Pass/Fail summary criteria

| Category | Criterion |
|----------|-----------|
| Routing | Instruction fetches never appear as DSRAM transactions |
| Isolation | Core X's ISRAM is inaccessible to Core Y |
| Arbitration | All cores get DSRAM access; no starvation within 2000 cycles |
| Data integrity | Every written value reads back correctly |
| Out-of-range | System does not hang; aliasing is predictable |
| Reset | All cores start at address 0x0000_0000 after reset |
| Trap isolation | A trap on one core does not affect other cores |
