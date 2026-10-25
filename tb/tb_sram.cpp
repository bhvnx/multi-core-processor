/*
 * tb_sram.cpp
 *
 * Verilator C++ testbench for sram.v
 * Covers Groups 1-6 from block_test_plans.md (SRAM section)
 *
 * Interface under test:
 *   mem_wstrb == 4'b0000  → read
 *   mem_wstrb != 4'b0000  → write (each bit enables one byte lane)
 *   Latency: mem_ready fires exactly 1 cycle after mem_valid
 *   mem_ready is a single-cycle pulse; self-clears when valid drops
 *
 * Timing model
 * ------------
 * Unlike the bus arbiter, the SRAM drives mem_ready itself.
 * The testbench only drives inputs and samples outputs after posedge.
 *
 *   tick() → posedge → DUT registers update → read dut->mem_ready here
 *
 * SRAM_AWIDTH is overridden to 8 (256 words, 1 KB) for fast simulation.
 * All test addresses are well within this range.
 */

#include <cstdint>
#include <cstdio>
#include <cstring>
#include <string>
#include "Vsram.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

// ---------------------------------------------------------------------------
// Simulation globals
// ---------------------------------------------------------------------------
static Vsram         *dut      = nullptr;
static VerilatedVcdC *vcd      = nullptr;
static vluint64_t     sim_time = 0;

// ---------------------------------------------------------------------------
// Test framework
// ---------------------------------------------------------------------------
static int         pass_cnt = 0;
static int         fail_cnt = 0;
static std::string current_tc;

static void tc_begin(const std::string &name) {
    current_tc = name;
}

static void check(bool cond, const std::string &msg) {
    if (cond) {
        printf("  PASS  [%s] %s\n", current_tc.c_str(), msg.c_str());
        pass_cnt++;
    } else {
        printf("  FAIL  [%s] %s\n", current_tc.c_str(), msg.c_str());
        fail_cnt++;
    }
}

// ---------------------------------------------------------------------------
// Clock
// ---------------------------------------------------------------------------
static void tick() {
    dut->clk = 0;
    dut->eval();
    if (vcd) vcd->dump(sim_time * 10);

    dut->clk = 1;
    dut->eval();
    if (vcd) vcd->dump(sim_time * 10 + 5);

    sim_time++;
}

static void idle_reset() {
    dut->mem_valid = 0;
    dut->mem_addr  = 0;
    dut->mem_wdata = 0;
    dut->mem_wstrb = 0;
    tick(); tick();
}

// ---------------------------------------------------------------------------
// Transaction helpers
// ---------------------------------------------------------------------------
struct TxResult {
    bool     ready;
    uint32_t rdata;
    int      cycles; // ticks until mem_ready fired
};

static TxResult do_txn(uint32_t addr, uint32_t wdata, uint8_t wstrb,
                        int timeout = 10) {
    dut->mem_valid = 1;
    dut->mem_addr  = addr;
    dut->mem_wdata = wdata;
    dut->mem_wstrb = wstrb;

    for (int i = 0; i < timeout; i++) {
        tick();
        if (dut->mem_ready) {
            uint32_t rd = dut->mem_rdata;
            dut->mem_valid = 0;
            return {true, rd, i + 1};
        }
    }
    dut->mem_valid = 0;
    return {false, 0, -1};
}

static TxResult do_read(uint32_t addr) {
    return do_txn(addr, 0, 0x0);
}

static TxResult do_write(uint32_t addr, uint32_t wdata, uint8_t wstrb = 0xF) {
    return do_txn(addr, wdata, wstrb);
}

// Apply byte-enable mask: returns (old & ~mask) | (new & mask)
static uint32_t apply_wstrb(uint32_t old_val, uint32_t new_val, uint8_t wstrb) {
    uint32_t result = old_val;
    for (int b = 0; b < 4; b++) {
        if (wstrb & (1 << b)) {
            uint32_t mask = 0xFFu << (b * 8);
            result = (result & ~mask) | (new_val & mask);
        }
    }
    return result;
}

// ---------------------------------------------------------------------------
// Group 1 — Basic Read and Write
// ---------------------------------------------------------------------------
static void test_group1() {
    printf("\n--- Group 1: Basic Read and Write ---\n");

    // TC-1.0 — write then read same address
    tc_begin("TC-1.0");
    idle_reset();
    {
        TxResult w = do_write(0x00, 0xDEADBEEF);
        check(w.ready,               "write completed");
        check(w.cycles == 1,         "write: ready in 1 cycle");

        // One idle tick so mem_ready self-clears before the read
        tick();

        TxResult r = do_read(0x00);
        check(r.ready,               "read completed");
        check(r.cycles == 1,         "read: ready in 1 cycle");
        check(r.rdata == 0xDEADBEEF, "read returns written value");
    }

    // TC-1.1 — write to 3 different addresses, read back in order
    tc_begin("TC-1.1");
    idle_reset();
    {
        do_write(0x00, 0x11111111);
        do_write(0x04, 0x22222222);
        do_write(0x08, 0x33333333);

        TxResult r0 = do_read(0x00);
        TxResult r1 = do_read(0x04);
        TxResult r2 = do_read(0x08);

        check(r0.ready && r0.rdata == 0x11111111, "addr 0x00 correct");
        check(r1.ready && r1.rdata == 0x22222222, "addr 0x04 correct");
        check(r2.ready && r2.rdata == 0x33333333, "addr 0x08 correct");
    }

    // TC-1.2 — read uninitialised address (no value check, only handshake)
    tc_begin("TC-1.2");
    idle_reset();
    {
        TxResult r = do_read(0x3F0); // address never written
        check(r.ready,       "read from uninitialised address completes");
        check(r.cycles == 1, "handshake still 1 cycle");
    }
}

// ---------------------------------------------------------------------------
// Group 2 — Byte Enable Writes
// ---------------------------------------------------------------------------
static void test_group2() {
    printf("\n--- Group 2: Byte Enable Writes ---\n");

    const uint8_t  wstrb_cases[] = {0x1, 0x2, 0x4, 0x8,
                                     0x3, 0xC, 0x5, 0xA, 0xF};
    const char    *tc_names[]    = {"TC-2.0","TC-2.1","TC-2.2","TC-2.3",
                                    "TC-2.4","TC-2.5","TC-2.6","TC-2.7",
                                    "TC-2.8"};
    const uint32_t PREFILL = 0xFFFFFFFF;
    const uint32_t WDATA   = 0xA5A5A5A5;
    const uint32_t BASE    = 0x40; // separate address block for this group

    for (int i = 0; i < 9; i++) {
        tc_begin(tc_names[i]);
        idle_reset();

        uint32_t addr = BASE + i * 4;
        uint8_t  ws   = wstrb_cases[i];

        // Pre-fill with all-ones
        do_write(addr, PREFILL, 0xF);

        // Partial write
        do_write(addr, WDATA, ws);

        // Read back and verify
        TxResult r = do_read(addr);
        uint32_t expected = apply_wstrb(PREFILL, WDATA, ws);

        char buf[80];
        snprintf(buf, sizeof(buf),
                 "wstrb=0x%X: rdata=0x%08X expected=0x%08X",
                 ws, r.rdata, expected);
        check(r.ready && r.rdata == expected, buf);
    }

    // TC-2.9 — partial write preserves unwritten bytes from prior full write
    tc_begin("TC-2.9");
    idle_reset();
    {
        do_write(0x80, 0x12345678, 0xF); // full write
        do_write(0x80, 0xABCDEF00, 0x1); // byte 0 only → only LSB changes

        TxResult r = do_read(0x80);
        // Expected: byte0=0x00 (new), bytes 1-3=0x34,0x56,0x78 (preserved)
        uint32_t expected = apply_wstrb(0x12345678, 0xABCDEF00, 0x1);
        char buf[80];
        snprintf(buf, sizeof(buf),
                 "rdata=0x%08X expected=0x%08X", r.rdata, expected);
        check(r.ready && r.rdata == expected, buf);
    }
}

// ---------------------------------------------------------------------------
// Group 3 — Consecutive Operations to Different Addresses
// ---------------------------------------------------------------------------
static void test_group3() {
    printf("\n--- Group 3: Consecutive Operations, Different Addresses ---\n");

    // TC-3.0 — 4 consecutive writes back-to-back, then verify all
    tc_begin("TC-3.0");
    idle_reset();
    {
        uint32_t addrs[] = {0xA0, 0xA4, 0xA8, 0xAC};
        uint32_t vals[]  = {0x1111, 0x2222, 0x3333, 0x4444};
        bool all_ready = true;
        for (int i = 0; i < 4; i++) {
            TxResult w = do_write(addrs[i], vals[i]);
            if (!w.ready) all_ready = false;
        }
        check(all_ready, "all 4 writes completed");

        // Verify all 4 locations
        for (int i = 0; i < 4; i++) {
            TxResult r = do_read(addrs[i]);
            char buf[64];
            snprintf(buf, sizeof(buf),
                     "addr 0x%02X: rdata=0x%04X expected=0x%04X",
                     addrs[i], r.rdata, vals[i]);
            check(r.ready && r.rdata == vals[i], buf);
        }
    }

    // TC-3.1 — 4 consecutive reads from different addresses
    tc_begin("TC-3.1");
    // addresses and values already written in TC-3.0
    {
        uint32_t addrs[] = {0xA0, 0xA4, 0xA8, 0xAC};
        uint32_t vals[]  = {0x1111, 0x2222, 0x3333, 0x4444};
        for (int i = 0; i < 4; i++) {
            TxResult r = do_read(addrs[i]);
            char buf[64];
            snprintf(buf, sizeof(buf),
                     "consecutive read %d: addr=0x%02X rdata=0x%04X expected=0x%04X",
                     i, addrs[i], r.rdata, vals[i]);
            check(r.ready && r.rdata == vals[i], buf);
        }
    }

    // TC-3.2 — interleaved write/read across different addresses
    tc_begin("TC-3.2");
    idle_reset();
    {
        do_write(0xB0, 0xAAAA0000);
        do_write(0xB4, 0xBBBB0000);

        TxResult r0 = do_read(0xB0);
        TxResult r1 = do_read(0xB4);

        check(r0.ready && r0.rdata == 0xAAAA0000, "addr 0xB0 after interleave");
        check(r1.ready && r1.rdata == 0xBBBB0000, "addr 0xB4 after interleave");

        // Write again to 0xB0, read 0xB4 — 0xB4 must be undisturbed
        do_write(0xB0, 0xCCCC0000);
        TxResult r1b = do_read(0xB4);
        check(r1b.ready && r1b.rdata == 0xBBBB0000,
              "addr 0xB4 undisturbed after write to 0xB0");
    }
}

// ---------------------------------------------------------------------------
// Group 4 — Consecutive Operations to the Same Address
// ---------------------------------------------------------------------------
static void test_group4() {
    printf("\n--- Group 4: Consecutive Operations, Same Address ---\n");

    // TC-4.0 — overwrite same address; second write wins
    tc_begin("TC-4.0");
    idle_reset();
    {
        do_write(0xC0, 0xDEADBEEF);
        do_write(0xC0, 0xCAFEBABE); // overwrites

        TxResult r = do_read(0xC0);
        check(r.ready && r.rdata == 0xCAFEBABE,
              "second write wins (0xCAFEBABE)");
        check(r.rdata != 0xDEADBEEF,
              "first write value no longer visible");
    }

    // TC-4.1 — 4 writes to same address; last value retained
    tc_begin("TC-4.1");
    idle_reset();
    {
        uint32_t addr = 0xC4;
        for (uint32_t v = 1; v <= 4; v++) do_write(addr, v);

        TxResult r = do_read(addr);
        check(r.ready && r.rdata == 4,
              "last write value (4) retained after 4 writes");
    }

    // TC-4.2 — read-after-write same address, no idle cycle
    tc_begin("TC-4.2");
    idle_reset();
    {
        do_write(0xC8, 0xABCD1234);
        TxResult r = do_read(0xC8); // immediately after, no extra ticks
        check(r.ready && r.rdata == 0xABCD1234,
              "read immediately after write returns new data (no stale)");
    }
}

// ---------------------------------------------------------------------------
// Group 5 — Handshake Protocol
// ---------------------------------------------------------------------------
static void test_group5() {
    printf("\n--- Group 5: Handshake Protocol ---\n");

    // TC-5.0 — ready latency is exactly 1 cycle
    tc_begin("TC-5.0");
    idle_reset();
    {
        dut->mem_valid = 1;
        dut->mem_addr  = 0xD0;
        dut->mem_wdata = 0x5A5A5A5A;
        dut->mem_wstrb = 0xF;

        // Verify ready is NOT high before the first tick
        check(dut->mem_ready == 0, "ready is 0 before posedge");

        tick(); // posedge N — mem_ready fires here
        check(dut->mem_ready == 1, "ready fires on cycle after valid");

        dut->mem_valid = 0;
        tick(); // posedge N+1 — ready must drop
        check(dut->mem_ready == 0, "ready drops to 0 one cycle later");
    }

    // TC-5.1 — ready is a single-cycle pulse
    tc_begin("TC-5.1");
    idle_reset();
    {
        TxResult w = do_write(0xD4, 0x11223344);
        check(w.ready && w.cycles == 1, "ready fires in exactly 1 cycle");

        // One more idle tick: ready must be 0
        tick();
        check(dut->mem_ready == 0, "ready is 0 on idle cycle after transaction");
        tick();
        check(dut->mem_ready == 0, "ready stays 0 with valid=0");
    }

    // TC-5.2 — no activity when valid is low
    tc_begin("TC-5.2");
    idle_reset();
    {
        bool spurious = false;
        for (int i = 0; i < 10; i++) {
            tick();
            if (dut->mem_ready) spurious = true;
        }
        check(!spurious, "mem_ready never high when mem_valid=0 for 10 cycles");
    }

    // TC-5.3 — back-to-back transactions (keep valid high, update inputs)
    // SRAM has a 1-cycle gap between consecutive transactions because
    // the !mem_ready guard prevents re-entry on the cycle ready fires.
    // Sequence: txn1 completes at cycle N, gap at N+1, txn2 at N+2.
    tc_begin("TC-5.3");
    idle_reset();
    {
        // Txn 1
        dut->mem_valid = 1;
        dut->mem_addr  = 0xE0;
        dut->mem_wdata = 0xAAAAAAAA;
        dut->mem_wstrb = 0xF;
        tick(); // cycle N: txn1 completes
        check(dut->mem_ready == 1, "txn1 ready");

        // Update inputs for txn2, keep valid high
        dut->mem_addr  = 0xE4;
        dut->mem_wdata = 0xBBBBBBBB;
        tick(); // cycle N+1: gap (ready=1 from prev → !mem_ready=0 → skip)
        check(dut->mem_ready == 0, "gap cycle: ready drops");

        tick(); // cycle N+2: txn2 completes
        check(dut->mem_ready == 1, "txn2 ready");
        dut->mem_valid = 0;

        // Verify both writes took effect
        TxResult r1 = do_read(0xE0);
        TxResult r2 = do_read(0xE4);
        check(r1.ready && r1.rdata == 0xAAAAAAAA, "txn1 data persisted");
        check(r2.ready && r2.rdata == 0xBBBBBBBB, "txn2 data persisted");
    }
}

// ---------------------------------------------------------------------------
// Group 6 — Address Boundary
// ---------------------------------------------------------------------------
static void test_group6() {
    printf("\n--- Group 6: Address Boundary ---\n");

    // SRAM_AWIDTH=8 → depth=256 words; last word addr = 255*4 = 0x3FC
    const uint32_t LAST_ADDR = (256 - 1) * 4;

    // TC-6.0 — first address (word 0)
    tc_begin("TC-6.0");
    idle_reset();
    {
        do_write(0x000, 0xF00DF00D);
        TxResult r = do_read(0x000);
        check(r.ready && r.rdata == 0xF00DF00D,
              "write and read at address 0x000 (first word)");
    }

    // TC-6.1 — last address
    tc_begin("TC-6.1");
    idle_reset();
    {
        do_write(LAST_ADDR, 0xBEEFCAFE);
        TxResult r = do_read(LAST_ADDR);
        char buf[64];
        snprintf(buf, sizeof(buf),
                 "write and read at 0x%03X (last word): rdata=0x%08X",
                 LAST_ADDR, r.rdata);
        check(r.ready && r.rdata == 0xBEEFCAFE, buf);
    }

    // TC-6.2 — 4 consecutive word-aligned addresses, no aliasing
    tc_begin("TC-6.2");
    idle_reset();
    {
        uint32_t addrs[] = {0x100, 0x104, 0x108, 0x10C};
        uint32_t vals[]  = {0xAABBCCDD, 0x11223344, 0xDEADC0DE, 0x0BADF00D};

        for (int i = 0; i < 4; i++) do_write(addrs[i], vals[i]);

        for (int i = 0; i < 4; i++) {
            TxResult r = do_read(addrs[i]);
            char buf[72];
            snprintf(buf, sizeof(buf),
                     "word-aligned addr 0x%03X: rdata=0x%08X expected=0x%08X",
                     addrs[i], r.rdata, vals[i]);
            check(r.ready && r.rdata == vals[i], buf);
        }
    }
}

// ---------------------------------------------------------------------------
// main
// ---------------------------------------------------------------------------
int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    dut = new Vsram;
    vcd = new VerilatedVcdC;
    dut->trace(vcd, 99);
    vcd->open("sram.vcd");

    test_group1();
    test_group2();
    test_group3();
    test_group4();
    test_group5();
    test_group6();

    printf("\n============================================\n");
    printf("  TOTAL  PASS: %d   FAIL: %d\n", pass_cnt, fail_cnt);
    printf("============================================\n");

    vcd->close();
    dut->final();
    delete vcd;
    delete dut;

    return fail_cnt ? 1 : 0;
}
