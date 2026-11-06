`include "memory_map.vh"
`timescale 1 ns / 1 ps

/*
 * addr_decoder.v — data-bus address decoder
 *
 * Sits between the bus arbiter's output port and every downstream target
 * (DSRAM, UART, timer, spinlocks, PLIC).
 *
 * What this module does:
 *   1. Decode in_addr into a one-hot target select.
 *   2. Gate each target's mem_valid so only the selected target sees a request.
 *   3. Mux ready and rdata back to the arbiter from whichever target responded.
 *
 * Address/wdata/wstrb are shared wires — each target receives the same signals;
 * only valid is gated.  The targets use in_addr[7:0] as their register offset.
 *
 * Special cases:
 *   Core ID (0xFFFF_FFFC)  — handled inline; returns grant_id with zero latency.
 *   GPIO    (0x1004_0xxx)  — address reserved for Phase 2; acknowledged immediately
 *                            with rdata=0 so the reserved block does not alias DSRAM.
 *   Unmapped addresses     — acknowledged immediately with rdata=0 to prevent the
 *                            granted core from hanging indefinitely.
 */

module addr_decoder (
    // -------------------------------------------------------------------------
    // Upstream — from bus arbiter
    // -------------------------------------------------------------------------
    input  wire        in_valid,
    input  wire [31:0] in_addr,
    input  wire [31:0] in_wdata,
    input  wire [ 3:0] in_wstrb,
    output wire        in_ready,
    output wire [31:0] in_rdata,

    // -------------------------------------------------------------------------
    // DSRAM
    // -------------------------------------------------------------------------
    output wire        dsram_valid,
    input  wire        dsram_ready,
    input  wire [31:0] dsram_rdata,

    // -------------------------------------------------------------------------
    // UART
    // -------------------------------------------------------------------------
    output wire        uart_valid,
    input  wire        uart_ready,
    input  wire [31:0] uart_rdata,

    // -------------------------------------------------------------------------
    // System timer
    // -------------------------------------------------------------------------
    output wire        timer_valid,
    input  wire        timer_ready,
    input  wire [31:0] timer_rdata,

    // -------------------------------------------------------------------------
    // Hardware spinlocks
    // -------------------------------------------------------------------------
    output wire        spinlock_valid,
    input  wire        spinlock_ready,
    input  wire [31:0] spinlock_rdata,

    // -------------------------------------------------------------------------
    // PLIC
    // -------------------------------------------------------------------------
    output wire        plic_valid,
    input  wire        plic_ready,
    input  wire [31:0] plic_rdata,

    // -------------------------------------------------------------------------
    // Core ID — index of the core currently holding the bus (bus_arbiter.grant)
    // -------------------------------------------------------------------------
    input  wire [ 1:0] grant_id
);

    // =========================================================================
    // Address decode — one-hot selects
    //
    // Bit widths of the slice match the DEC_* constant widths in memory_map.vh:
    //   DEC_DSRAM   16-bit  → addr[31:16]
    //   DEC_UART0   24-bit  → addr[31:8]
    //   DEC_TIMER   24-bit  → addr[31:8]
    //   DEC_SPINLOCK 24-bit → addr[31:8]
    //   DEC_PLIC    24-bit  → addr[31:8]
    //   DEC_GPIO    24-bit  → addr[31:8]
    //   DEC_COREID  30-bit  → addr[31:2]
    // =========================================================================

    wire sel_dsram    = (in_addr[31:16] == `DEC_DSRAM);
    wire sel_uart     = (in_addr[31:8]  == `DEC_UART0);
    wire sel_timer    = (in_addr[31:8]  == `DEC_TIMER);
    wire sel_spinlock = (in_addr[31:8]  == `DEC_SPINLOCK);
    wire sel_plic     = (in_addr[31:8]  == `DEC_PLIC);
    wire sel_gpio     = (in_addr[31:8]  == `DEC_GPIO);     // Phase 2 — reserved
    wire sel_coreid   = (in_addr[31:2]  == `DEC_COREID);

    // Any recognised address — used to detect unmapped accesses
    wire sel_any = sel_dsram | sel_uart | sel_timer |
                   sel_spinlock | sel_plic | sel_gpio | sel_coreid;

    // =========================================================================
    // Gate valid to each downstream target
    // Core ID and GPIO have no target module — handled inline below.
    // =========================================================================

    assign dsram_valid    = in_valid & sel_dsram;
    assign uart_valid     = in_valid & sel_uart;
    assign timer_valid    = in_valid & sel_timer;
    assign spinlock_valid = in_valid & sel_spinlock;
    assign plic_valid     = in_valid & sel_plic;

    // =========================================================================
    // Ready mux
    //
    // Real targets (DSRAM, peripherals): wait for the target's ready.
    // Inline targets (Core ID, GPIO stub, unmapped): ready on the same cycle
    // as valid so the core is never stalled by a missing module.
    // =========================================================================

    assign in_ready =
        (sel_dsram    & dsram_ready)    |
        (sel_uart     & uart_ready)     |
        (sel_timer    & timer_ready)    |
        (sel_spinlock & spinlock_ready) |
        (sel_plic     & plic_ready)     |
        (sel_coreid   & in_valid)       |   // zero-latency inline register
        (sel_gpio     & in_valid)       |   // Phase 2 stub — ack immediately
        (~sel_any     & in_valid);          // unmapped — ack immediately

    // =========================================================================
    // Rdata mux — priority chain
    //
    // Addresses are non-overlapping by construction (see memory_map.vh), so at
    // most one sel_* is high at any time.  The chain is defensive.
    // =========================================================================

    assign in_rdata =
        sel_dsram    ? dsram_rdata         :
        sel_uart     ? uart_rdata          :
        sel_timer    ? timer_rdata         :
        sel_spinlock ? spinlock_rdata      :
        sel_plic     ? plic_rdata          :
        sel_coreid   ? {30'b0, grant_id}   :   // mhartid 0–3
        32'h0000_0000;                          // GPIO stub / unmapped

endmodule
