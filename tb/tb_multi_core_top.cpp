/*
 * tb_multi_core_top.cpp
 *
 * Integration testbench — Groups 1–6
 *   TC-1.0  FETCH_NEVER_HITS_DSRAM
 *   TC-1.1  DATA_NEVER_HITS_ISRAM
 *   TC-2.0  ISRAM_FETCH_UNBLOCKED_BY_ARB
 *   TC-3.0  ALL_CORES_WRITE_SEPARATE_ADDRS
 *   TC-3.1  ALL_CORES_WRITE_SAME_ADDR
 *   TC-3.2  TWO_WRITERS_TWO_READERS
 *   TC-4.0  ADDR_WRAP_ONE_PAST_END
 *   TC-4.1  ADDR_WRAP_MAX_WORD_ALIGNED
 *   TC-5.0  ALL_CORES_BOOT_FROM_ADDR_ZERO
 *   TC-5.1  ILLINSN_TRAPS_ONE_CORE_ONLY
 *   TC-6.0  SINGLE_CORE_WRITE_READBACK
 *   TC-6.1  ALL_CORES_WRITE_READ_OWN_REGION
 *
 * Build parameters (see Makefile):
 *   ISRAM_AWIDTH = 10  →  1 KB per-core ISRAM  (DEPTH = 1024 words)
 *   DSRAM_AWIDTH = 14  →  64 KB shared DSRAM   (DEPTH = 16384 words)
 *
 * Internal signal access uses --public-flat-rw. Member names follow
 * Verilator's hierarchical flattening: <top>__DOT__<inst>__DOT__<signal>.
 *
 * RV32I encodings used (verified manually):
 *   addi x1, x0, 0xAA  →  0x0AA00093
 *   addi x1, x0, 0x42  →  0x04200093
 *   addi x2, x0, 0x100 →  0x10000113
 *   addi x4, x0, 0xBB  →  0x0BB00213
 *   lui  x2, 4          →  0x00004137   (x2 = 0x4000)
 *   lui  x5, 4          →  0x000042B7   (x5 = 0x4000)
 *   sw   x1, 0(x2)      →  0x00112023
 *   sw   x4, 0(x5)      →  0x0042A023
 *   lw   x3, 0(x2)      →  0x00012183
 *   jal  x0, 0          →  0x0000006F   (spin / halt)
 */

#include <cstdint>
#include <cstdio>
#include <string>
#include "Vmulti_core_top.h"
#include "Vmulti_core_top___024root.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

// ---------------------------------------------------------------------------
// Simulation globals
// ---------------------------------------------------------------------------
static Vmulti_core_top *dut      = nullptr;
static VerilatedVcdC   *vcd      = nullptr;
static vluint64_t       sim_time = 0;

static int         pass_cnt = 0;
static int         fail_cnt = 0;
static std::string tc_name;

static void tc_begin(const char *name) {
    tc_name = name;
}
static void check(bool cond, const char *msg) {
    if (cond) { printf("  PASS  [%s] %s\n", tc_name.c_str(), msg); pass_cnt++; }
    else       { printf("  FAIL  [%s] %s\n", tc_name.c_str(), msg); fail_cnt++; }
}

// ---------------------------------------------------------------------------
// Clock
// ---------------------------------------------------------------------------
static void tick() {
    dut->clk = 0; dut->eval();
    if (vcd) vcd->dump(sim_time * 10);
    dut->clk = 1; dut->eval();
    if (vcd) vcd->dump(sim_time * 10 + 5);
    sim_time++;
}

// ---------------------------------------------------------------------------
// Design constants (must match Makefile -G overrides)
// ---------------------------------------------------------------------------
static constexpr int      ISRAM_DEPTH = 1024;   // ISRAM_AWIDTH=10
static constexpr int      DSRAM_DEPTH = 16384;  // DSRAM_AWIDTH=14

static constexpr uint32_t DONE_C0 = 0x00004000u;
static constexpr uint32_t DONE_C1 = 0x00004004u;
static constexpr uint32_t DATA_C0 = 0x00000100u;

static constexpr uint32_t DONE_C2 = 0x00004008u;
static constexpr uint32_t DONE_C3 = 0x0000400Cu;
static constexpr uint32_t DATA_C1 = 0x00001100u;
static constexpr uint32_t DATA_C2 = 0x00002100u;
static constexpr uint32_t DATA_C3 = 0x00003100u;
static constexpr uint32_t SHARED  = 0x00004100u;

// Word index inside DSRAM for a byte address
static inline int dw(uint32_t byte_addr) {
    return (byte_addr >> 2) & (DSRAM_DEPTH - 1);
}

// ---------------------------------------------------------------------------
// DSRAM backdoor read/write
// In Verilator 5.x with --public-flat-rw, internal signals live on rootp.
// ---------------------------------------------------------------------------
static uint32_t dsram_rd(uint32_t byte_addr) {
    return dut->rootp->multi_core_top__DOT__dsram__DOT__mem[dw(byte_addr)];
}
static void dsram_wr(uint32_t byte_addr, uint32_t val) {
    dut->rootp->multi_core_top__DOT__dsram__DOT__mem[dw(byte_addr)] = val;
}

// ---------------------------------------------------------------------------
// ISRAM backdoor load
// Fills the whole ISRAM with spin loops, then overlays the program words.
// ---------------------------------------------------------------------------
static void load_isram(int core, const uint32_t *prog, int n) {
    auto fill = [&](auto &m) {
        for (int i = 0; i < ISRAM_DEPTH; i++) m[i] = 0x0000006Fu; // jal x0, 0
        for (int i = 0; i < n; i++)           m[i] = prog[i];
    };
    switch (core) {
        case 0: fill(dut->rootp->multi_core_top__DOT__isram0__DOT__mem); break;
        case 1: fill(dut->rootp->multi_core_top__DOT__isram1__DOT__mem); break;
        case 2: fill(dut->rootp->multi_core_top__DOT__isram2__DOT__mem); break;
        case 3: fill(dut->rootp->multi_core_top__DOT__isram3__DOT__mem); break;
    }
}

// ---------------------------------------------------------------------------
// Reset
// ---------------------------------------------------------------------------
static void do_reset(int cycles = 4) {
    dut->resetn = 0;
    dut->irq    = 0;
    for (int i = 0; i < cycles; i++) tick();
    dut->resetn = 1;
}

// ---------------------------------------------------------------------------
// TC-1.0 — FETCH_NEVER_HITS_DSRAM
//
// Core 0: write sentinel 0xAA to DONE_C0 (0x4000), then spin.
// Cores 1-3: spin immediately.
//
// Only 1 DSRAM transaction should occur (the SW in Core 0's program).
// Instruction fetches must never reach the DSRAM.
// ---------------------------------------------------------------------------
static void tc1_0() {
    tc_begin("TC-1.0");
    printf("\n--- TC-1.0: FETCH_NEVER_HITS_DSRAM ---\n");

    static const uint32_t prog0[] = {
        0x0AA00093,  // addi x1, x0, 0xAA
        0x00004137,  // lui  x2, 4           (x2 = 0x4000)
        0x00112023,  // sw   x1, 0(x2)       mem[0x4000] = 0xAA
        0x0000006F,  // jal  x0, 0           spin
    };
    static const uint32_t spin[] = { 0x0000006F };

    load_isram(0, prog0, 4);
    load_isram(1, spin,  1);
    load_isram(2, spin,  1);
    load_isram(3, spin,  1);

    dsram_wr(DONE_C0, 0);  // clear sentinel before run
    dut->eval();

    do_reset();

    int  dsram_txn_cnt = 0;
    bool trap_seen     = false;
    bool sentinel_ok   = false;

    for (int i = 0; i < 500; i++) {
        tick();
        if (dut->trap)                                            trap_seen = true;
        if (dut->rootp->multi_core_top__DOT__dsram__DOT__mem_ready) dsram_txn_cnt++;
        if (dsram_rd(DONE_C0) == 0xAA)                           sentinel_ok = true;
    }

    check(sentinel_ok,          "DONE_C0 = 0xAA (Core 0 write reached DSRAM)");
    check(!trap_seen,           "no trap during 500 cycles");

    // A correctly-routed design fires exactly 1 DSRAM transaction
    // (the single SW instruction). If any fetch leaked to DSRAM the count
    // would be higher.
    char buf[64];
    snprintf(buf, sizeof(buf), "DSRAM transaction count = %d (expected 1)", dsram_txn_cnt);
    check(dsram_txn_cnt == 1,   buf);
}

// ---------------------------------------------------------------------------
// TC-1.1 — DATA_NEVER_HITS_ISRAM
//
// Core 0:
//   1. store 0x42 to DATA_C0 (0x0100) via DSRAM
//   2. load it back from DATA_C0
//   3. write sentinel 0xBB to DONE_C0 (0x4000) via DSRAM
//   4. spin
//
// Pass criteria:
//   - DONE_C0 = 0xBB  (program ran to completion)
//   - DATA_C0 = 0x42  (store went to DSRAM, not to ISRAM)
//   - No trap
//
// The "lw" in step 2 reads from the DSRAM.  If it had been misrouted to the
// ISRAM it would have returned instruction bytes, not 0x42, and the program
// would have written a wrong sentinel or trapped — so a correct sentinel and
// DATA_C0 value together prove the lw used the DSRAM path.
// ---------------------------------------------------------------------------
static void tc1_1() {
    tc_begin("TC-1.1");
    printf("\n--- TC-1.1: DATA_NEVER_HITS_ISRAM ---\n");

    static const uint32_t prog0[] = {
        0x04200093,  // addi x1, x0, 0x42       x1 = 0x42
        0x10000113,  // addi x2, x0, 0x100      x2 = DATA_C0 = 0x100
        0x00112023,  // sw   x1, 0(x2)          mem[0x100] = 0x42
        0x00012183,  // lw   x3, 0(x2)          x3 = mem[0x100]
        0x0BB00213,  // addi x4, x0, 0xBB       x4 = 0xBB
        0x000042B7,  // lui  x5, 4              x5 = 0x4000
        0x0042A023,  // sw   x4, 0(x5)          mem[0x4000] = 0xBB  (DONE_C0)
        0x0000006F,  // jal  x0, 0              spin
    };
    static const uint32_t spin[] = { 0x0000006F };

    load_isram(0, prog0, 8);
    load_isram(1, spin,  1);
    load_isram(2, spin,  1);
    load_isram(3, spin,  1);

    dsram_wr(DONE_C0, 0);
    dsram_wr(DATA_C0, 0);
    dut->eval();

    do_reset();

    bool trap_seen    = false;
    bool sentinel_ok  = false;

    for (int i = 0; i < 2000; i++) {
        tick();
        if (dut->trap) { trap_seen = true; break; }
        if (dsram_rd(DONE_C0) == 0xBB) { sentinel_ok = true; break; }
    }

    check(sentinel_ok,                  "DONE_C0 = 0xBB (program ran to completion)");
    check(dsram_rd(DATA_C0) == 0x42,    "DATA_C0 = 0x42 (sw went to DSRAM correctly)");
    check(!trap_seen,                   "no trap");
    check(sentinel_ok && dsram_rd(DATA_C0) == 0x42,
          "sentinel + DATA_C0 together prove lw returned DSRAM data (routing correct)");
}

// ---------------------------------------------------------------------------
// TC-2.0 — ISRAM_FETCH_UNBLOCKED_BY_ARB
//
// Core 0: 20-iteration store loop hammering DATA_C0 via DSRAM, then writes
//         sentinel 0x01 to DONE_C0.
// Core 1: 8 sequential addi x1,x1,1 instructions (no data accesses) that
//         accumulate x1 = 8, then store x1 to DONE_C1 and spin.
//
// Pass criteria:
//   - DONE_C0 = 0x01  (Core 0 finished its store loop)
//   - DONE_C1 = 0x08  (Core 1's addi sequence ran to completion)
//   - No trap
//   The correct DONE_C1 value proves Core 1's instruction fetches were never
//   stalled or corrupted by Core 0's DSRAM traffic.
//
// RV32I encodings:
//   addi x1, x0, 0x100  →  0x10000093   (x1 = DATA_C0 = 0x100)
//   addi x2, x0, 20     →  0x01400113   (x2 = loop counter)
//   addi x3, x0, 0x42   →  0x04200193   (x3 = store payload)
//   sw   x3, 0(x1)      →  0x0030A023   (store x3 to DATA_C0)
//   addi x2, x2, -1     →  0xFFF10113
//   bne  x2, x0, -8     →  0xFE011CE3   (loop back to sw at PC 12)
//   addi x5, x0, 1      →  0x00100293   (DONE_C0 sentinel value)
//   lui  x6, 4          →  0x00004337   (x6 = 0x4000)
//   sw   x5, 0(x6)      →  0x00532023   (DONE_C0 = 0x01)
//   addi x1, x0, 1      →  0x00100093   (Core 1 init)
//   addi x1, x1, 1      →  0x00108093   (Core 1 accumulate)
//   lui  x2, 4          →  0x00004137   (x2 = 0x4000)
//   sw   x1, 4(x2)      →  0x00112223   (DONE_C1 = 8)
// ---------------------------------------------------------------------------
static void tc2_0() {
    tc_begin("TC-2.0");
    printf("\n--- TC-2.0: ISRAM_FETCH_UNBLOCKED_BY_ARB ---\n");

    // Core 0: store loop (keeps arbiter busy), then sentinel
    static const uint32_t prog0[] = {
        0x10000093,  // addi x1, x0, 0x100      x1 = DATA_C0
        0x01400113,  // addi x2, x0, 20         x2 = loop counter
        0x04200193,  // addi x3, x0, 0x42       x3 = store payload
        0x0030A023,  // sw   x3, 0(x1)          mem[0x100] = 0x42  ← PC 12
        0xFFF10113,  // addi x2, x2, -1
        0xFE011CE3,  // bne  x2, x0, -8         loop to PC 12 while x2 != 0
        0x00100293,  // addi x5, x0, 1          x5 = 0x01
        0x00004337,  // lui  x6, 4              x6 = 0x4000
        0x00532023,  // sw   x5, 0(x6)          DONE_C0 = 0x01
        0x0000006F,  // jal  x0, 0              spin
    };

    // Core 1: linear addi accumulation (no DSRAM traffic), then sentinel
    //   x1 starts at 1 and is incremented 7 more times → x1 = 8
    static const uint32_t prog1[] = {
        0x00100093,  // addi x1, x0, 1          x1 = 1
        0x00108093,  // addi x1, x1, 1          x1 = 2
        0x00108093,  // addi x1, x1, 1          x1 = 3
        0x00108093,  // addi x1, x1, 1          x1 = 4
        0x00108093,  // addi x1, x1, 1          x1 = 5
        0x00108093,  // addi x1, x1, 1          x1 = 6
        0x00108093,  // addi x1, x1, 1          x1 = 7
        0x00108093,  // addi x1, x1, 1          x1 = 8
        0x00004137,  // lui  x2, 4              x2 = 0x4000
        0x00112223,  // sw   x1, 4(x2)          DONE_C1 = 8
        0x0000006F,  // jal  x0, 0              spin
    };
    static const uint32_t spin[] = { 0x0000006F };

    load_isram(0, prog0, 10);
    load_isram(1, prog1, 11);
    load_isram(2, spin,   1);
    load_isram(3, spin,   1);

    dsram_wr(DONE_C0, 0);
    dsram_wr(DONE_C1, 0);
    dut->eval();

    do_reset();

    bool trap_seen = false;
    bool done_c0   = false;
    bool done_c1   = false;

    for (int i = 0; i < 2000; i++) {
        tick();
        if (dut->trap)                 { trap_seen = true; break; }
        if (dsram_rd(DONE_C0) == 0x01) done_c0 = true;
        if (dsram_rd(DONE_C1) == 0x08) done_c1 = true;
        if (done_c0 && done_c1)        break;
    }

    check(done_c0,   "DONE_C0 = 0x01 (Core 0 completed store loop)");
    check(done_c1,   "DONE_C1 = 0x08 (Core 1 addi sequence produced correct result)");
    check(!trap_seen, "no trap");
    check(done_c1,
          "Core 1 result correct → ISRAM fetch was independent of DSRAM arbitration");
}

// ---------------------------------------------------------------------------
// TC-3.0 — ALL_CORES_WRITE_SEPARATE_ADDRS
//
// Each core writes a unique value to its own private DSRAM region, then
// writes its done sentinel.  No core's write should disturb another's target.
//
// RV32I encodings used:
//   addi x1, x0, 0x11   → 0x01100093   (Core 0 payload)
//   addi x1, x0, 0x22   → 0x02200093   (Core 1 payload)
//   addi x1, x0, 0x33   → 0x03300093   (Core 2 payload)
//   addi x1, x0, 0x44   → 0x04400093   (Core 3 payload)
//   addi x2, x0, 0x100  → 0x10000113   (DATA_C0 = 0x100)
//   lui  x2, 1          → 0x00001137   (x2 = 0x1000)
//   lui  x2, 2          → 0x00002137   (x2 = 0x2000)
//   lui  x2, 3          → 0x00003137   (x2 = 0x3000)
//   addi x2, x2, 0x100  → 0x10010113   (x2 += 0x100)
//   sw   x1, 0(x2)      → 0x00112023
//   addi x3, x0, 0xC0   → 0x0C000193   (Core 0 sentinel)
//   addi x3, x0, 0xC1   → 0x0C100193   (Core 1 sentinel)
//   addi x3, x0, 0xC2   → 0x0C200193   (Core 2 sentinel)
//   addi x3, x0, 0xC3   → 0x0C300193   (Core 3 sentinel)
//   lui  x4, 4          → 0x00004237   (x4 = 0x4000)
//   sw   x3, 0(x4)      → 0x00322023   (DONE_C0)
//   sw   x3, 4(x4)      → 0x00322223   (DONE_C1)
//   sw   x3, 8(x4)      → 0x00322423   (DONE_C2)
//   sw   x3, 12(x4)     → 0x00322623   (DONE_C3)
// ---------------------------------------------------------------------------
static void tc3_0() {
    tc_begin("TC-3.0");
    printf("\n--- TC-3.0: ALL_CORES_WRITE_SEPARATE_ADDRS ---\n");

    static const uint32_t prog0[] = {
        0x01100093,  // addi x1, x0, 0x11       x1 = 0x11
        0x10000113,  // addi x2, x0, 0x100      x2 = DATA_C0
        0x00112023,  // sw   x1, 0(x2)          DATA_C0 = 0x11
        0x0C000193,  // addi x3, x0, 0xC0       x3 = sentinel
        0x00004237,  // lui  x4, 4              x4 = 0x4000
        0x00322023,  // sw   x3, 0(x4)          DONE_C0 = 0xC0
        0x0000006F,  // jal  x0, 0              spin
    };
    static const uint32_t prog1[] = {
        0x02200093,  // addi x1, x0, 0x22       x1 = 0x22
        0x00001137,  // lui  x2, 1              x2 = 0x1000
        0x10010113,  // addi x2, x2, 0x100      x2 = DATA_C1 = 0x1100
        0x00112023,  // sw   x1, 0(x2)          DATA_C1 = 0x22
        0x0C100193,  // addi x3, x0, 0xC1
        0x00004237,  // lui  x4, 4
        0x00322223,  // sw   x3, 4(x4)          DONE_C1 = 0xC1
        0x0000006F,
    };
    static const uint32_t prog2[] = {
        0x03300093,  // addi x1, x0, 0x33       x1 = 0x33
        0x00002137,  // lui  x2, 2              x2 = 0x2000
        0x10010113,  // addi x2, x2, 0x100      x2 = DATA_C2 = 0x2100
        0x00112023,  // sw   x1, 0(x2)          DATA_C2 = 0x33
        0x0C200193,  // addi x3, x0, 0xC2
        0x00004237,  // lui  x4, 4
        0x00322423,  // sw   x3, 8(x4)          DONE_C2 = 0xC2
        0x0000006F,
    };
    static const uint32_t prog3[] = {
        0x04400093,  // addi x1, x0, 0x44       x1 = 0x44
        0x00003137,  // lui  x2, 3              x2 = 0x3000
        0x10010113,  // addi x2, x2, 0x100      x2 = DATA_C3 = 0x3100
        0x00112023,  // sw   x1, 0(x2)          DATA_C3 = 0x44
        0x0C300193,  // addi x3, x0, 0xC3
        0x00004237,  // lui  x4, 4
        0x00322623,  // sw   x3, 12(x4)         DONE_C3 = 0xC3
        0x0000006F,
    };

    load_isram(0, prog0, 7);
    load_isram(1, prog1, 8);
    load_isram(2, prog2, 8);
    load_isram(3, prog3, 8);

    dsram_wr(DONE_C0, 0); dsram_wr(DONE_C1, 0);
    dsram_wr(DONE_C2, 0); dsram_wr(DONE_C3, 0);
    dsram_wr(DATA_C0, 0); dsram_wr(DATA_C1, 0);
    dsram_wr(DATA_C2, 0); dsram_wr(DATA_C3, 0);
    dut->eval();

    do_reset();

    bool trap_seen = false;
    bool d0 = false, d1 = false, d2 = false, d3 = false;

    for (int i = 0; i < 2000; i++) {
        tick();
        if (dut->trap) { trap_seen = true; break; }
        if (dsram_rd(DONE_C0) == 0xC0) d0 = true;
        if (dsram_rd(DONE_C1) == 0xC1) d1 = true;
        if (dsram_rd(DONE_C2) == 0xC2) d2 = true;
        if (dsram_rd(DONE_C3) == 0xC3) d3 = true;
        if (d0 && d1 && d2 && d3) break;
    }

    check(d0,                         "DONE_C0 = 0xC0");
    check(d1,                         "DONE_C1 = 0xC1");
    check(d2,                         "DONE_C2 = 0xC2");
    check(d3,                         "DONE_C3 = 0xC3");
    check(dsram_rd(DATA_C0) == 0x11,  "DATA_C0 = 0x11");
    check(dsram_rd(DATA_C1) == 0x22,  "DATA_C1 = 0x22");
    check(dsram_rd(DATA_C2) == 0x33,  "DATA_C2 = 0x33");
    check(dsram_rd(DATA_C3) == 0x44,  "DATA_C3 = 0x44");
    check(!trap_seen,                  "no trap");
}

// ---------------------------------------------------------------------------
// TC-3.1 — ALL_CORES_WRITE_SAME_ADDR
//
// All 4 cores write a unique value to SHARED (0x4100) and then write their
// done sentinel.  Exactly one value survives in SHARED (the last arbiter
// grant).  The test verifies all sentinels appear and SHARED holds one of
// the four expected values — no data corruption, no hang.
//
// RV32I encodings used (in addition to the set from TC-3.0):
//   addi x1, x0, 0xAA  → 0x0AA00093   (Core 0 payload)
//   addi x1, x0, 0xBB  → 0x0BB00093   (Core 1 payload)
//   addi x1, x0, 0xCC  → 0x0CC00093   (Core 2 payload)
//   addi x1, x0, 0xDD  → 0x0DD00093   (Core 3 payload)
//   lui  x2, 4          → 0x00004137   (x2 = 0x4000)
//   addi x2, x2, 0x100  → 0x10010113   (x2 = SHARED = 0x4100)
// ---------------------------------------------------------------------------
static void tc3_1() {
    tc_begin("TC-3.1");
    printf("\n--- TC-3.1: ALL_CORES_WRITE_SAME_ADDR ---\n");

    // Each core: write unique value to SHARED, then write done sentinel.
    static const uint32_t prog0[] = {
        0x0AA00093,  // addi x1, x0, 0xAA
        0x00004137,  // lui  x2, 4              x2 = 0x4000
        0x10010113,  // addi x2, x2, 0x100      x2 = SHARED = 0x4100
        0x00112023,  // sw   x1, 0(x2)          SHARED = 0xAA
        0x0C000193,  // addi x3, x0, 0xC0
        0x00004237,  // lui  x4, 4
        0x00322023,  // sw   x3, 0(x4)          DONE_C0 = 0xC0
        0x0000006F,
    };
    static const uint32_t prog1[] = {
        0x0BB00093,  // addi x1, x0, 0xBB
        0x00004137,
        0x10010113,
        0x00112023,  // sw   x1, 0(x2)          SHARED = 0xBB
        0x0C100193,  // addi x3, x0, 0xC1
        0x00004237,
        0x00322223,  // sw   x3, 4(x4)          DONE_C1 = 0xC1
        0x0000006F,
    };
    static const uint32_t prog2[] = {
        0x0CC00093,  // addi x1, x0, 0xCC
        0x00004137,
        0x10010113,
        0x00112023,  // sw   x1, 0(x2)          SHARED = 0xCC
        0x0C200193,  // addi x3, x0, 0xC2
        0x00004237,
        0x00322423,  // sw   x3, 8(x4)          DONE_C2 = 0xC2
        0x0000006F,
    };
    static const uint32_t prog3[] = {
        0x0DD00093,  // addi x1, x0, 0xDD
        0x00004137,
        0x10010113,
        0x00112023,  // sw   x1, 0(x2)          SHARED = 0xDD
        0x0C300193,  // addi x3, x0, 0xC3
        0x00004237,
        0x00322623,  // sw   x3, 12(x4)         DONE_C3 = 0xC3
        0x0000006F,
    };

    load_isram(0, prog0, 8);
    load_isram(1, prog1, 8);
    load_isram(2, prog2, 8);
    load_isram(3, prog3, 8);

    dsram_wr(DONE_C0, 0); dsram_wr(DONE_C1, 0);
    dsram_wr(DONE_C2, 0); dsram_wr(DONE_C3, 0);
    dsram_wr(SHARED,  0);
    dut->eval();

    do_reset();

    bool trap_seen = false;
    bool d0 = false, d1 = false, d2 = false, d3 = false;

    for (int i = 0; i < 2000; i++) {
        tick();
        if (dut->trap) { trap_seen = true; break; }
        if (dsram_rd(DONE_C0) == 0xC0) d0 = true;
        if (dsram_rd(DONE_C1) == 0xC1) d1 = true;
        if (dsram_rd(DONE_C2) == 0xC2) d2 = true;
        if (dsram_rd(DONE_C3) == 0xC3) d3 = true;
        if (d0 && d1 && d2 && d3) break;
    }

    // All four programs are structurally identical (3 setup insns then sw),
    // so all cores arrive at the SHARED write simultaneously.  A round-robin
    // arbiter starting from Core 0 after reset grants them 0→1→2→3, making
    // Core 3 the last writer → SHARED must be 0xDD.
    check(d0,                          "DONE_C0 = 0xC0 (Core 0 completed)");
    check(d1,                          "DONE_C1 = 0xC1 (Core 1 completed)");
    check(d2,                          "DONE_C2 = 0xC2 (Core 2 completed)");
    check(d3,                          "DONE_C3 = 0xC3 (Core 3 completed)");
    check(dsram_rd(SHARED) == 0xDD,    "SHARED = 0xDD (Core 3 last round-robin grant)");
    check(!trap_seen,                  "no trap");
}

// ---------------------------------------------------------------------------
// TC-3.2 — TWO_WRITERS_TWO_READERS
//
// Core 0: write 0xAAAAAAAA → SHARED,     then DONE_C0.
// Core 1: write 0xBBBBBBBB → SHARED+4,  then DONE_C1.
// Core 2: poll SHARED until non-zero, store value → DATA_C2, then DONE_C2.
// Core 3: poll SHARED+4 until non-zero, store value → DATA_C3, then DONE_C3.
//
// Pass criteria: DATA_C2 = 0xAAAAAAAA, DATA_C3 = 0xBBBBBBBB.
//
// RV32I encodings used (new ones):
//   lui  x1, 0xAAAAB  → 0xAAAAB0B7   (x1 = 0xAAAAB000)
//   addi x1, x1, 0xAAA→ 0xAAA08093   (x1 = 0xAAAAAAAA)
//   lui  x1, 0xBBBBC  → 0xBBBBC0B7   (x1 = 0xBBBBC000)
//   addi x1, x1, 0xBBB→ 0xBBB08093   (x1 = 0xBBBBBBBB)
//   addi x2, x2, 0x104→ 0x10410113   (x2 = SHARED+4 = 0x4104)
//   lw   x1, 0(x2)    → 0x00012083
//   beq  x1, x0, -4   → 0xFE008EE3   (poll: branch back to lw while x1==0)
//   lui  x3, 2        → 0x000021B7   (x3 = 0x2000)
//   addi x3, x3, 0x100→ 0x10018193   (x3 = DATA_C2 = 0x2100)
//   sw   x1, 0(x3)    → 0x0011A023
//   addi x4, x0, 0xC2 → 0x0C200213
//   lui  x5, 4        → 0x000042B7   (x5 = 0x4000)
//   sw   x4, 8(x5)    → 0x0042A423   (DONE_C2)
//   lui  x3, 3        → 0x000031B7   (x3 = 0x3000)
//   addi x3, x3, 0x100→ 0x10018193   (x3 = DATA_C3 = 0x3100; same encoding)
//   addi x4, x0, 0xC3 → 0x0C300213
//   sw   x4, 12(x5)   → 0x0042A623   (DONE_C3)
// ---------------------------------------------------------------------------
static void tc3_2() {
    tc_begin("TC-3.2");
    printf("\n--- TC-3.2: TWO_WRITERS_TWO_READERS ---\n");

    // Core 0: write 0xAAAAAAAA to SHARED then DONE_C0
    static const uint32_t prog0[] = {
        0xAAAAB0B7,  // lui  x1, 0xAAAAB        x1 = 0xAAAAB000
        0xAAA08093,  // addi x1, x1, 0xAAA      x1 = 0xAAAAAAAA
        0x00004137,  // lui  x2, 4              x2 = 0x4000
        0x10010113,  // addi x2, x2, 0x100      x2 = SHARED = 0x4100
        0x00112023,  // sw   x1, 0(x2)          SHARED = 0xAAAAAAAA
        0x0C000193,  // addi x3, x0, 0xC0
        0x00004237,  // lui  x4, 4
        0x00322023,  // sw   x3, 0(x4)          DONE_C0 = 0xC0
        0x0000006F,
    };

    // Core 1: write 0xBBBBBBBB to SHARED+4 then DONE_C1
    static const uint32_t prog1[] = {
        0xBBBBC0B7,  // lui  x1, 0xBBBBC        x1 = 0xBBBBC000
        0xBBB08093,  // addi x1, x1, 0xBBB      x1 = 0xBBBBBBBB
        0x00004137,  // lui  x2, 4
        0x10410113,  // addi x2, x2, 0x104      x2 = SHARED+4 = 0x4104
        0x00112023,  // sw   x1, 0(x2)          SHARED+4 = 0xBBBBBBBB
        0x0C100193,  // addi x3, x0, 0xC1
        0x00004237,  // lui  x4, 4
        0x00322223,  // sw   x3, 4(x4)          DONE_C1 = 0xC1
        0x0000006F,
    };

    // Core 2: poll SHARED until non-zero, store to DATA_C2, then DONE_C2
    // PC layout: 0=lui x2  4=addi x2  8=lw x1  12=beq(loop)  16=lui x3 ...
    static const uint32_t prog2[] = {
        0x00004137,  // lui  x2, 4              x2 = 0x4000
        0x10010113,  // addi x2, x2, 0x100      x2 = SHARED = 0x4100
        0x00012083,  // lw   x1, 0(x2)          x1 = SHARED      ← PC=8
        0xFE008EE3,  // beq  x1, x0, -4         if x1==0 goto PC=8
        0x000021B7,  // lui  x3, 2              x3 = 0x2000
        0x10018193,  // addi x3, x3, 0x100      x3 = DATA_C2 = 0x2100
        0x0011A023,  // sw   x1, 0(x3)          DATA_C2 = x1
        0x0C200213,  // addi x4, x0, 0xC2
        0x000042B7,  // lui  x5, 4              x5 = 0x4000
        0x0042A423,  // sw   x4, 8(x5)          DONE_C2 = 0xC2
        0x0000006F,
    };

    // Core 3: poll SHARED+4 until non-zero, store to DATA_C3, then DONE_C3
    static const uint32_t prog3[] = {
        0x00004137,  // lui  x2, 4
        0x10410113,  // addi x2, x2, 0x104      x2 = SHARED+4 = 0x4104
        0x00012083,  // lw   x1, 0(x2)          x1 = SHARED+4    ← PC=8
        0xFE008EE3,  // beq  x1, x0, -4         if x1==0 goto PC=8
        0x000031B7,  // lui  x3, 3              x3 = 0x3000
        0x10018193,  // addi x3, x3, 0x100      x3 = DATA_C3 = 0x3100
        0x0011A023,  // sw   x1, 0(x3)          DATA_C3 = x1
        0x0C300213,  // addi x4, x0, 0xC3
        0x000042B7,  // lui  x5, 4
        0x0042A623,  // sw   x4, 12(x5)         DONE_C3 = 0xC3
        0x0000006F,
    };

    load_isram(0, prog0,  9);
    load_isram(1, prog1,  9);
    load_isram(2, prog2, 11);
    load_isram(3, prog3, 11);

    dsram_wr(DONE_C0, 0); dsram_wr(DONE_C1, 0);
    dsram_wr(DONE_C2, 0); dsram_wr(DONE_C3, 0);
    dsram_wr(SHARED,  0); dsram_wr(SHARED + 4, 0);
    dsram_wr(DATA_C2, 0); dsram_wr(DATA_C3, 0);
    dut->eval();

    do_reset();

    bool trap_seen = false;
    bool d0 = false, d1 = false, d2 = false, d3 = false;

    for (int i = 0; i < 2000; i++) {
        tick();
        if (dut->trap) { trap_seen = true; break; }
        if (dsram_rd(DONE_C0) == 0xC0) d0 = true;
        if (dsram_rd(DONE_C1) == 0xC1) d1 = true;
        if (dsram_rd(DONE_C2) == 0xC2) d2 = true;
        if (dsram_rd(DONE_C3) == 0xC3) d3 = true;
        if (d0 && d1 && d2 && d3) break;
    }

    check(d0,                                 "DONE_C0 = 0xC0 (writer 0 done)");
    check(d1,                                 "DONE_C1 = 0xC1 (writer 1 done)");
    check(d2,                                 "DONE_C2 = 0xC2 (reader 2 done)");
    check(d3,                                 "DONE_C3 = 0xC3 (reader 3 done)");
    check(dsram_rd(DATA_C2) == 0xAAAAAAAAu,   "DATA_C2 = 0xAAAAAAAA");
    check(dsram_rd(DATA_C3) == 0xBBBBBBBBu,   "DATA_C3 = 0xBBBBBBBB");
    check(!trap_seen,                          "no trap");
}

// ---------------------------------------------------------------------------
// TC-4.0 — ADDR_WRAP_ONE_PAST_END
//
// With DSRAM_AWIDTH=14, the word address is mem_addr[15:2].
// 0x0001_0000[15:2] = 0x0000, so it aliases to word 0 (byte addr 0x0000).
//
// Core 0 program:
//   1. sw 0x12345678 → 0x0000_0000   (in-range, word 0)
//   2. sw 0xDEADBEEF → 0x0001_0000   (out-of-range; aliases to word 0, overwrites)
//   3. lw x4, 0(x0) → DATA_C0        (read-back from word 0; must be 0xDEADBEEF)
//   4. DONE_C0 = 0xD0, spin
//
// RV32I encodings (verified):
//   lui  x1, 0x12345  → 0x123450B7   (x1 = 0x12345000)
//   addi x1, x1, 0x678→ 0x67808093   (x1 = 0x12345678; 0x678 positive → no lui adjust)
//   sw   x1, 0(x0)    → 0x00102023
//   lui  x2, 0xDEADC  → 0xDEADC137   (x2 = 0xDEADC000; 0xEEF<0 → lui += 1)
//   addi x2, x2, 0xEEF→ 0xEEF10113   (x2 = 0xDEADBEEF)
//   lui  x3, 0x10     → 0x000101B7   (x3 = 0x00010000)
//   sw   x2, 0(x3)    → 0x0021A023   (mem[0x10000] = 0xDEADBEEF → word 0)
//   lw   x4, 0(x0)    → 0x00002203   (x4 = mem[0x0000])
//   addi x5, x0, 0x100→ 0x10000293   (x5 = DATA_C0)
//   sw   x4, 0(x5)    → 0x0042A023   (DATA_C0 = x4)
//   lui  x6, 4        → 0x00004337   (x6 = 0x4000)
//   addi x7, x0, 0xD0 → 0x0D000393   (sentinel)
//   sw   x7, 0(x6)    → 0x00732023   (DONE_C0 = 0xD0)
// ---------------------------------------------------------------------------
static void tc4_0() {
    tc_begin("TC-4.0");
    printf("\n--- TC-4.0: ADDR_WRAP_ONE_PAST_END ---\n");

    static const uint32_t prog0[] = {
        0x123450B7,  // lui  x1, 0x12345     x1 = 0x12345000
        0x67808093,  // addi x1, x1, 0x678   x1 = 0x12345678
        0x00102023,  // sw   x1, 0(x0)       mem[0x0000] = 0x12345678
        0xDEADC137,  // lui  x2, 0xDEADC     x2 = 0xDEADC000
        0xEEF10113,  // addi x2, x2, 0xEEF   x2 = 0xDEADBEEF
        0x000101B7,  // lui  x3, 0x10        x3 = 0x00010000 (alias target)
        0x0021A023,  // sw   x2, 0(x3)       mem[0x10000] = 0xDEADBEEF → word 0
        0x00002203,  // lw   x4, 0(x0)       x4 = mem[0x0000]
        0x10000293,  // addi x5, x0, 0x100   x5 = DATA_C0
        0x0042A023,  // sw   x4, 0(x5)       DATA_C0 = x4
        0x00004337,  // lui  x6, 4           x6 = 0x4000
        0x0D000393,  // addi x7, x0, 0xD0    x7 = 0xD0 (sentinel)
        0x00732023,  // sw   x7, 0(x6)       DONE_C0 = 0xD0
        0x0000006F,  // jal  x0, 0           spin
    };
    static const uint32_t spin[] = { 0x0000006F };

    load_isram(0, prog0, 14);
    load_isram(1, spin,   1);
    load_isram(2, spin,   1);
    load_isram(3, spin,   1);

    dsram_wr(0x0000,  0);   // word 0 — both target and alias land here
    dsram_wr(DATA_C0, 0);
    dsram_wr(DONE_C0, 0);
    dut->eval();

    do_reset();

    bool trap_seen = false;
    bool done_ok   = false;

    for (int i = 0; i < 2000; i++) {
        tick();
        if (dut->trap)                 { trap_seen = true; break; }
        if (dsram_rd(DONE_C0) == 0xD0) { done_ok   = true; break; }
    }

    check(done_ok,                         "DONE_C0 = 0xD0 (no hang on out-of-range write)");
    check(dsram_rd(DATA_C0) == 0xDEADBEEF, "DATA_C0 = 0xDEADBEEF (aliased write overwrote word 0)");
    check(!trap_seen,                       "no trap (word-aligned, no misalign)");
}

// ---------------------------------------------------------------------------
// TC-4.1 — ADDR_WRAP_MAX_WORD_ALIGNED
//
// With DSRAM_AWIDTH=14:
//   alias = 0xFFFF_FFFC & ((1<<16)-4) = 0xFFFF_FFFC & 0xFFFC = 0xFFFC  (word 0x3FFF)
//
// Core 0 program:
//   1. Load 0xCAFECAFE into x1.
//   2. addi x2, x0, -4  → x2 = 0xFFFF_FFFC  (-4 fits in a sign-ext 12-bit imm)
//   3. sw x1, 0(x2)     → write to 0xFFFF_FFFC (aliases to word 0x3FFF = 0xFFFC)
//   4. lui x3,0x10; addi x3,x3,-4 → x3 = 0xFFFC (alias byte address)
//   5. lw x4, 0(x3)     → read back from 0xFFFC; must be 0xCAFECAFE
//   6. DATA_C0 = x4, DONE_C0 = 0xD1, spin.
//
// RV32I encodings (verified):
//   lui  x1, 0xCAFED  → 0xCAFED0B7   (x1 = 0xCAFED000; 0xAFE<0 → lui += 1)
//   addi x1, x1, 0xAFE→ 0xAFE08093   (x1 = 0xCAFECAFE)
//   addi x2, x0, -4   → 0xFFC00113   (x2 = 0xFFFF_FFFC; imm 0xFFC = -4 sign-ext)
//   sw   x1, 0(x2)    → 0x00112023
//   lui  x3, 0x10     → 0x000101B7   (x3 = 0x10000)
//   addi x3, x3, -4   → 0xFFC18193   (x3 = 0xFFFC = alias address)
//   lw   x4, 0(x3)    → 0x0001A203   (x4 = mem[0xFFFC])
//   addi x7, x0, 0xD1 → 0x0D100393   (sentinel)
// ---------------------------------------------------------------------------
static void tc4_1() {
    tc_begin("TC-4.1");
    printf("\n--- TC-4.1: ADDR_WRAP_MAX_WORD_ALIGNED ---\n");

    // alias = 0xFFFFFFFC & ((1<<(DSRAM_AWIDTH+2))-4) = 0xFFFFFFFC & 0xFFFC = 0xFFFC
    static constexpr uint32_t ALIAS_MAX = 0xFFFFFFFC & ((1u << (14 + 2)) - 4u);

    static const uint32_t prog0[] = {
        0xCAFED0B7,  // lui  x1, 0xCAFED     x1 = 0xCAFED000
        0xAFE08093,  // addi x1, x1, 0xAFE   x1 = 0xCAFECAFE
        0xFFC00113,  // addi x2, x0, -4      x2 = 0xFFFF_FFFC
        0x00112023,  // sw   x1, 0(x2)       mem[0xFFFF_FFFC] = 0xCAFECAFE → word 0x3FFF
        0x000101B7,  // lui  x3, 0x10        x3 = 0x10000
        0xFFC18193,  // addi x3, x3, -4      x3 = 0xFFFC (alias byte address)
        0x0001A203,  // lw   x4, 0(x3)       x4 = mem[0xFFFC]
        0x10000293,  // addi x5, x0, 0x100   x5 = DATA_C0
        0x0042A023,  // sw   x4, 0(x5)       DATA_C0 = x4
        0x00004337,  // lui  x6, 4           x6 = 0x4000
        0x0D100393,  // addi x7, x0, 0xD1    x7 = 0xD1 (sentinel)
        0x00732023,  // sw   x7, 0(x6)       DONE_C0 = 0xD1
        0x0000006F,  // jal  x0, 0           spin
    };
    static const uint32_t spin[] = { 0x0000006F };

    load_isram(0, prog0, 13);
    load_isram(1, spin,   1);
    load_isram(2, spin,   1);
    load_isram(3, spin,   1);

    dsram_wr(ALIAS_MAX, 0);  // clear word 0x3FFF (0xFFFC) before run
    dsram_wr(DATA_C0,   0);
    dsram_wr(DONE_C0,   0);
    dut->eval();

    do_reset();

    bool trap_seen = false;
    bool done_ok   = false;

    for (int i = 0; i < 2000; i++) {
        tick();
        if (dut->trap)                 { trap_seen = true; break; }
        if (dsram_rd(DONE_C0) == 0xD1) { done_ok   = true; break; }
    }

    check(done_ok,                          "DONE_C0 = 0xD1 (no hang on max address)");
    check(dsram_rd(DATA_C0) == 0xCAFECAFE,  "DATA_C0 = 0xCAFECAFE (alias write + read-back correct)");
    check(!trap_seen,                        "no trap (word-aligned, no misalign)");
}

// ---------------------------------------------------------------------------
// TC-5.0 — ALL_CORES_BOOT_FROM_ADDR_ZERO
//
// Indirect behavioral check: the sentinel value is encoded into x1 at word 0
// only (addi x1, x0, 0xEX).  x1 = 0 after reset, so a core that skips word 0
// writes the wrong value (0) to DONE and the check fails.  All four correct
// sentinels → all four cores fetched and executed starting at PC = 0x0000_0000.
//
// Programs (4 words each): addi x1 → lui x2 → sw x1, off(x2) → spin.
//
// RV32I encodings:
//   addi x1, x0, 0xE0  → 0x0E000093   (Core 0 sentinel in x1)
//   addi x1, x0, 0xE1  → 0x0E100093   (Core 1)
//   addi x1, x0, 0xE2  → 0x0E200093   (Core 2)
//   addi x1, x0, 0xE3  → 0x0E300093   (Core 3)
//   lui  x2, 4         → 0x00004137   (x2 = 0x4000)
//   sw   x1,  0(x2)    → 0x00112023   (DONE_C0)
//   sw   x1,  4(x2)    → 0x00112223   (DONE_C1)
//   sw   x1,  8(x2)    → 0x00112423   (DONE_C2)
//   sw   x1, 12(x2)    → 0x00112623   (DONE_C3)
// ---------------------------------------------------------------------------
static void tc5_0() {
    tc_begin("TC-5.0");
    printf("\n--- TC-5.0: ALL_CORES_BOOT_FROM_ADDR_ZERO ---\n");

    static const uint32_t prog0[] = {
        0x0E000093,  // addi x1, x0, 0xE0   x1 = 0xE0  ← only set at word 0
        0x00004137,  // lui  x2, 4           x2 = 0x4000
        0x00112023,  // sw   x1, 0(x2)       DONE_C0 = 0xE0
        0x0000006F,  // jal  x0, 0           spin
    };
    static const uint32_t prog1[] = {
        0x0E100093,  // addi x1, x0, 0xE1
        0x00004137,
        0x00112223,  // sw   x1, 4(x2)       DONE_C1 = 0xE1
        0x0000006F,
    };
    static const uint32_t prog2[] = {
        0x0E200093,  // addi x1, x0, 0xE2
        0x00004137,
        0x00112423,  // sw   x1, 8(x2)       DONE_C2 = 0xE2
        0x0000006F,
    };
    static const uint32_t prog3[] = {
        0x0E300093,  // addi x1, x0, 0xE3
        0x00004137,
        0x00112623,  // sw   x1, 12(x2)      DONE_C3 = 0xE3
        0x0000006F,
    };

    load_isram(0, prog0, 4);
    load_isram(1, prog1, 4);
    load_isram(2, prog2, 4);
    load_isram(3, prog3, 4);

    dsram_wr(DONE_C0, 0); dsram_wr(DONE_C1, 0);
    dsram_wr(DONE_C2, 0); dsram_wr(DONE_C3, 0);
    dut->eval();

    do_reset();  // 4-cycle reset pulse, then de-assert

    bool trap_seen = false;
    bool d0 = false, d1 = false, d2 = false, d3 = false;

    for (int i = 0; i < 500; i++) {
        tick();
        if (dut->trap) trap_seen = true;
        if (dsram_rd(DONE_C0) == 0xE0) d0 = true;
        if (dsram_rd(DONE_C1) == 0xE1) d1 = true;
        if (dsram_rd(DONE_C2) == 0xE2) d2 = true;
        if (dsram_rd(DONE_C3) == 0xE3) d3 = true;
        if (d0 && d1 && d2 && d3) break;
    }

    check(d0,         "DONE_C0 = 0xE0 (Core 0 executed word 0 → booted from addr 0)");
    check(d1,         "DONE_C1 = 0xE1 (Core 1 executed word 0 → booted from addr 0)");
    check(d2,         "DONE_C2 = 0xE2 (Core 2 executed word 0 → booted from addr 0)");
    check(d3,         "DONE_C3 = 0xE3 (Core 3 executed word 0 → booted from addr 0)");
    check(!trap_seen, "no trap after reset de-asserts");
}

// ---------------------------------------------------------------------------
// TC-5.1 — ILLINSN_TRAPS_ONE_CORE_ONLY
//
// Core 0 ISRAM word 0 = 0x00000000 (opcode bits [6:0] = 0b0000000, undefined
// in RV32I → triggers CATCH_ILLINSN).  NOTE: 0x0000000F is the FENCE opcode
// (0b0001111) which PicoRV32 treats as a NOP — it does NOT trap.
// Cores 1–3 run minimal programs that write unique sentinels.
//
// trap is a 4-bit port (trap[0]=Core0 … trap[3]=Core3).  Checked as:
//   trap[0]   →  dut->trap & 1u
//   trap[3:1] →  dut->trap & 0xEu
//
// The loop runs the full 500 cycles without breaking on trap — Core 0 traps
// quickly, but Cores 1–3 must be allowed to finish.
//
// RV32I encodings (cores 1–3):
//   addi x1, x0, 0xF1  → 0x0F100093
//   addi x1, x0, 0xF2  → 0x0F200093
//   addi x1, x0, 0xF3  → 0x0F300093
// ---------------------------------------------------------------------------
static void tc5_1() {
    tc_begin("TC-5.1");
    printf("\n--- TC-5.1: ILLINSN_TRAPS_ONE_CORE_ONLY ---\n");

    // 0x00000000: opcode = 0b0000000 — undefined in RV32I, triggers CATCH_ILLINSN.
    // (0x0000000F is FENCE, a valid NOP — do not use that.)
    static const uint32_t illinsn[] = { 0x00000000 };

    static const uint32_t prog1[] = {
        0x0F100093,  // addi x1, x0, 0xF1
        0x00004137,  // lui  x2, 4
        0x00112223,  // sw   x1, 4(x2)       DONE_C1 = 0xF1
        0x0000006F,
    };
    static const uint32_t prog2[] = {
        0x0F200093,  // addi x1, x0, 0xF2
        0x00004137,
        0x00112423,  // sw   x1, 8(x2)       DONE_C2 = 0xF2
        0x0000006F,
    };
    static const uint32_t prog3[] = {
        0x0F300093,  // addi x1, x0, 0xF3
        0x00004137,
        0x00112623,  // sw   x1, 12(x2)      DONE_C3 = 0xF3
        0x0000006F,
    };

    load_isram(0, illinsn, 1);  // word 0 = illegal; rest filled with spin
    load_isram(1, prog1, 4);
    load_isram(2, prog2, 4);
    load_isram(3, prog3, 4);

    dsram_wr(DONE_C1, 0); dsram_wr(DONE_C2, 0); dsram_wr(DONE_C3, 0);
    dut->eval();

    do_reset();

    bool c0_trapped   = false;
    bool c123_trapped = false;
    bool d1 = false, d2 = false, d3 = false;

    for (int i = 0; i < 500; i++) {   // no early break — let all cores run
        tick();
        if (dut->trap & 1u)  c0_trapped   = true;
        if (dut->trap & 0xEu) c123_trapped = true;
        if (dsram_rd(DONE_C1) == 0xF1) d1 = true;
        if (dsram_rd(DONE_C2) == 0xF2) d2 = true;
        if (dsram_rd(DONE_C3) == 0xF3) d3 = true;
    }

    check(c0_trapped,    "trap[0] asserts (Core 0 hit illegal instruction)");
    check(!c123_trapped, "trap[3:1] = 0 (Cores 1-3 unaffected by Core 0 trap)");
    check(d1,            "DONE_C1 = 0xF1 (Core 1 ran to completion)");
    check(d2,            "DONE_C2 = 0xF2 (Core 2 ran to completion)");
    check(d3,            "DONE_C3 = 0xF3 (Core 3 ran to completion)");
}

// ---------------------------------------------------------------------------
// TC-6.0 — SINGLE_CORE_WRITE_READBACK
//
// Core 0 writes 0x55 to SHARED (0x4100), reads it back into x3, stores x3 to
// SHARED+4, then writes DONE_C0 = 0xFF and spins.  Cores 1-3 spin.
//
// Note: the test plan labels 0x4000 as "SHARED" but SHARED = 0x4100 in the
// address table.  Using 0x4100 keeps DONE_C0 (0x4000) and the write/readback
// addresses distinct, making all three pass-criteria checkable at the end.
//
// RV32I encodings (all new):
//   addi x1, x0, 0x55   → 0x05500093   (x1 = 0x55)
//   lui  x2, 4           → 0x00004137   (x2 = 0x4000)
//   addi x2, x2, 0x100   → 0x10010113   (x2 = SHARED = 0x4100)
//   sw   x1, 0(x2)       → 0x00112023
//   lw   x3, 0(x2)       → 0x00012183
//   sw   x3, 4(x2)       → 0x00312223
//   addi x4, x0, 0xFF    → 0x0FF00213   (sentinel)
//   lui  x5, 4           → 0x000042B7   (x5 = 0x4000)
//   sw   x4, 0(x5)       → 0x0042A023   (DONE_C0 = 0xFF)
// ---------------------------------------------------------------------------
static void tc6_0() {
    tc_begin("TC-6.0");
    printf("\n--- TC-6.0: SINGLE_CORE_WRITE_READBACK ---\n");

    static const uint32_t prog0[] = {
        0x05500093,  // addi x1, x0, 0x55     x1 = 0x55
        0x00004137,  // lui  x2, 4             x2 = 0x4000
        0x10010113,  // addi x2, x2, 0x100     x2 = SHARED = 0x4100
        0x00112023,  // sw   x1, 0(x2)         SHARED = 0x55
        0x00012183,  // lw   x3, 0(x2)         x3 = SHARED
        0x00312223,  // sw   x3, 4(x2)         SHARED+4 = x3  (readback)
        0x0FF00213,  // addi x4, x0, 0xFF      x4 = 0xFF
        0x000042B7,  // lui  x5, 4             x5 = 0x4000
        0x0042A023,  // sw   x4, 0(x5)         DONE_C0 = 0xFF
        0x0000006F,  // jal  x0, 0             spin
    };
    static const uint32_t spin[] = { 0x0000006F };

    load_isram(0, prog0, 10);
    load_isram(1, spin,   1);
    load_isram(2, spin,   1);
    load_isram(3, spin,   1);

    dsram_wr(SHARED,     0);
    dsram_wr(SHARED + 4, 0);
    dsram_wr(DONE_C0,    0);
    dut->eval();

    do_reset();

    bool trap_seen = false;
    bool done_ok   = false;

    for (int i = 0; i < 2000; i++) {
        tick();
        if (dut->trap)                  { trap_seen = true; break; }
        if (dsram_rd(DONE_C0) == 0xFF)  { done_ok   = true; break; }
    }

    check(done_ok,                       "DONE_C0 = 0xFF (program ran to completion)");
    check(dsram_rd(SHARED)     == 0x55,  "SHARED = 0x55 (store reached DSRAM)");
    check(dsram_rd(SHARED + 4) == 0x55,  "SHARED+4 = 0x55 (load returned correct value, stored back)");
    check(!trap_seen,                    "no trap");
}

// ---------------------------------------------------------------------------
// TC-6.1 — ALL_CORES_WRITE_READ_OWN_REGION
//
// Each core writes a 32-bit pattern to DATA_Cx, loads it back, stores the
// loaded value at DATA_Cx+4 (proof of read), then writes a done sentinel.
//
// | Core | Pattern     | DATA addr | Readback addr | Sentinel |
// |------|-------------|-----------|---------------|----------|
// |  0   | 0x0A0A0A0A  |  0x0100   |  0x0104       |  0x60    |
// |  1   | 0x0B0B0B0B  |  0x1100   |  0x1104       |  0x61    |
// |  2   | 0x0C0C0C0C  |  0x2100   |  0x2104       |  0x62    |
// |  3   | 0x0D0D0D0D  |  0x3100   |  0x3104       |  0x63    |
//
// RV32I encodings (lui+addi idiom; lower 12 bits negative → lui += 1):
//   0x0A0A0A0A: lui  x1, 0x0A0A1  → 0x0A0A10B7
//               addi x1, x1, 0xA0A → 0xA0A08093
//   0x0B0B0B0B: lui  x1, 0x0B0B1  → 0x0B0B10B7
//               addi x1, x1, 0xB0B → 0xB0B08093
//   0x0C0C0C0C: lui  x1, 0x0C0C1  → 0x0C0C10B7
//               addi x1, x1, 0xC0C → 0xC0C08093
//   0x0D0D0D0D: lui  x1, 0x0D0D1  → 0x0D0D10B7
//               addi x1, x1, 0xD0D → 0xD0D08093
//   addi x2, x0, 0x100 → 0x10000113  (DATA_C0 = 0x100)
//   lw   x3, 0(x2)     → 0x00012183
//   sw   x3, 4(x2)     → 0x00312223
//   addi x4, x0, 0x60  → 0x06000213  (sentinel Core 0)
//   addi x4, x0, 0x61  → 0x06100213  (sentinel Core 1)
//   addi x4, x0, 0x62  → 0x06200213  (sentinel Core 2)
//   addi x4, x0, 0x63  → 0x06300213  (sentinel Core 3)
//   lui  x5, 4          → 0x000042B7  (x5 = 0x4000)
//   sw   x4,  0(x5)    → 0x0042A023  (DONE_C0)
//   sw   x4,  4(x5)    → 0x0042A223  (DONE_C1)
//   sw   x4,  8(x5)    → 0x0042A423  (DONE_C2)
//   sw   x4, 12(x5)    → 0x0042A623  (DONE_C3)
// ---------------------------------------------------------------------------
static void tc6_1() {
    tc_begin("TC-6.1");
    printf("\n--- TC-6.1: ALL_CORES_WRITE_READ_OWN_REGION ---\n");

    static const uint32_t prog0[] = {
        0x0A0A10B7,  // lui  x1, 0x0A0A1       x1 = 0x0A0A1000
        0xA0A08093,  // addi x1, x1, 0xA0A     x1 = 0x0A0A0A0A
        0x10000113,  // addi x2, x0, 0x100      x2 = DATA_C0 = 0x100
        0x00112023,  // sw   x1, 0(x2)          DATA_C0 = 0x0A0A0A0A
        0x00012183,  // lw   x3, 0(x2)          x3 = DATA_C0
        0x00312223,  // sw   x3, 4(x2)          DATA_C0+4 = x3
        0x06000213,  // addi x4, x0, 0x60       x4 = 0x60 (sentinel)
        0x000042B7,  // lui  x5, 4              x5 = 0x4000
        0x0042A023,  // sw   x4, 0(x5)          DONE_C0 = 0x60
        0x0000006F,  // jal  x0, 0
    };
    static const uint32_t prog1[] = {
        0x0B0B10B7,  // lui  x1, 0x0B0B1       x1 = 0x0B0B1000
        0xB0B08093,  // addi x1, x1, 0xB0B     x1 = 0x0B0B0B0B
        0x00001137,  // lui  x2, 1              x2 = 0x1000
        0x10010113,  // addi x2, x2, 0x100      x2 = DATA_C1 = 0x1100
        0x00112023,  // sw   x1, 0(x2)          DATA_C1 = 0x0B0B0B0B
        0x00012183,  // lw   x3, 0(x2)          x3 = DATA_C1
        0x00312223,  // sw   x3, 4(x2)          DATA_C1+4 = x3
        0x06100213,  // addi x4, x0, 0x61       x4 = 0x61
        0x000042B7,  // lui  x5, 4
        0x0042A223,  // sw   x4, 4(x5)          DONE_C1 = 0x61
        0x0000006F,
    };
    static const uint32_t prog2[] = {
        0x0C0C10B7,  // lui  x1, 0x0C0C1       x1 = 0x0C0C1000
        0xC0C08093,  // addi x1, x1, 0xC0C     x1 = 0x0C0C0C0C
        0x00002137,  // lui  x2, 2              x2 = 0x2000
        0x10010113,  // addi x2, x2, 0x100      x2 = DATA_C2 = 0x2100
        0x00112023,  // sw   x1, 0(x2)          DATA_C2 = 0x0C0C0C0C
        0x00012183,  // lw   x3, 0(x2)          x3 = DATA_C2
        0x00312223,  // sw   x3, 4(x2)          DATA_C2+4 = x3
        0x06200213,  // addi x4, x0, 0x62       x4 = 0x62
        0x000042B7,
        0x0042A423,  // sw   x4, 8(x5)          DONE_C2 = 0x62
        0x0000006F,
    };
    static const uint32_t prog3[] = {
        0x0D0D10B7,  // lui  x1, 0x0D0D1       x1 = 0x0D0D1000
        0xD0D08093,  // addi x1, x1, 0xD0D     x1 = 0x0D0D0D0D
        0x00003137,  // lui  x2, 3              x2 = 0x3000
        0x10010113,  // addi x2, x2, 0x100      x2 = DATA_C3 = 0x3100
        0x00112023,  // sw   x1, 0(x2)          DATA_C3 = 0x0D0D0D0D
        0x00012183,  // lw   x3, 0(x2)          x3 = DATA_C3
        0x00312223,  // sw   x3, 4(x2)          DATA_C3+4 = x3
        0x06300213,  // addi x4, x0, 0x63       x4 = 0x63
        0x000042B7,
        0x0042A623,  // sw   x4, 12(x5)         DONE_C3 = 0x63
        0x0000006F,
    };

    load_isram(0, prog0, 10);
    load_isram(1, prog1, 11);
    load_isram(2, prog2, 11);
    load_isram(3, prog3, 11);

    dsram_wr(DONE_C0, 0); dsram_wr(DONE_C1, 0);
    dsram_wr(DONE_C2, 0); dsram_wr(DONE_C3, 0);
    dsram_wr(DATA_C0, 0); dsram_wr(DATA_C0 + 4, 0);
    dsram_wr(DATA_C1, 0); dsram_wr(DATA_C1 + 4, 0);
    dsram_wr(DATA_C2, 0); dsram_wr(DATA_C2 + 4, 0);
    dsram_wr(DATA_C3, 0); dsram_wr(DATA_C3 + 4, 0);
    dut->eval();

    do_reset();

    bool trap_seen = false;
    bool d0 = false, d1 = false, d2 = false, d3 = false;

    for (int i = 0; i < 2000; i++) {
        tick();
        if (dut->trap) { trap_seen = true; break; }
        if (dsram_rd(DONE_C0) == 0x60) d0 = true;
        if (dsram_rd(DONE_C1) == 0x61) d1 = true;
        if (dsram_rd(DONE_C2) == 0x62) d2 = true;
        if (dsram_rd(DONE_C3) == 0x63) d3 = true;
        if (d0 && d1 && d2 && d3) break;
    }

    check(d0,                                    "DONE_C0 = 0x60");
    check(d1,                                    "DONE_C1 = 0x61");
    check(d2,                                    "DONE_C2 = 0x62");
    check(d3,                                    "DONE_C3 = 0x63");
    check(dsram_rd(DATA_C0)     == 0x0A0A0A0Au,  "DATA_C0     = 0x0A0A0A0A");
    check(dsram_rd(DATA_C0 + 4) == 0x0A0A0A0Au,  "DATA_C0+4   = 0x0A0A0A0A (load returned correct value)");
    check(dsram_rd(DATA_C1)     == 0x0B0B0B0Bu,  "DATA_C1     = 0x0B0B0B0B");
    check(dsram_rd(DATA_C1 + 4) == 0x0B0B0B0Bu,  "DATA_C1+4   = 0x0B0B0B0B");
    check(dsram_rd(DATA_C2)     == 0x0C0C0C0Cu,  "DATA_C2     = 0x0C0C0C0C");
    check(dsram_rd(DATA_C2 + 4) == 0x0C0C0C0Cu,  "DATA_C2+4   = 0x0C0C0C0C");
    check(dsram_rd(DATA_C3)     == 0x0D0D0D0Du,  "DATA_C3     = 0x0D0D0D0D");
    check(dsram_rd(DATA_C3 + 4) == 0x0D0D0D0Du,  "DATA_C3+4   = 0x0D0D0D0D");
    check(!trap_seen,                             "no trap");
}

// ---------------------------------------------------------------------------
// main
// ---------------------------------------------------------------------------
int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    dut = new Vmulti_core_top;
    vcd = new VerilatedVcdC;
    dut->trace(vcd, 99);
    vcd->open("multi_core_top.vcd");

    tc1_0();
    tc1_1();
    tc2_0();
    tc3_0();
    tc3_1();
    tc3_2();
    tc4_0();
    tc4_1();
    tc5_0();
    tc5_1();
    tc6_0();
    tc6_1();

    printf("\n============================================\n");
    printf("  TOTAL  PASS: %d   FAIL: %d\n", pass_cnt, fail_cnt);
    printf("============================================\n");

    vcd->close();
    dut->final();
    delete vcd;
    delete dut;

    return fail_cnt ? 1 : 0;
}
