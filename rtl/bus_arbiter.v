/*
 * bus_arbiter.v — Round-robin bus arbiter for 4 PicoRV32 cores
 *
 * Sits between 4 PicoRV32 cores and a single shared memory port.
 * Grants one core at a time using a rotating priority pointer.
 * The pointer advances only after the current transaction completes
 * (mem_ready asserted), so a multi-cycle memory response is handled
 * correctly without re-arbitrating mid-transaction.
 */

`timescale 1 ns / 1 ps

module bus_arbiter (
    input  wire        clk,
    input  wire        resetn,

    // --- Core 0 ---
    input  wire        core0_mem_valid,
    input  wire        core0_mem_instr,
    input  wire [31:0] core0_mem_addr,
    input  wire [31:0] core0_mem_wdata,
    input  wire [ 3:0] core0_mem_wstrb,
    output wire        core0_mem_ready,
    output wire [31:0] core0_mem_rdata,

    // --- Core 1 ---
    input  wire        core1_mem_valid,
    input  wire        core1_mem_instr,
    input  wire [31:0] core1_mem_addr,
    input  wire [31:0] core1_mem_wdata,
    input  wire [ 3:0] core1_mem_wstrb,
    output wire        core1_mem_ready,
    output wire [31:0] core1_mem_rdata,

    // --- Core 2 ---
    input  wire        core2_mem_valid,
    input  wire        core2_mem_instr,
    input  wire [31:0] core2_mem_addr,
    input  wire [31:0] core2_mem_wdata,
    input  wire [ 3:0] core2_mem_wstrb,
    output wire        core2_mem_ready,
    output wire [31:0] core2_mem_rdata,

    // --- Core 3 ---
    input  wire        core3_mem_valid,
    input  wire        core3_mem_instr,
    input  wire [31:0] core3_mem_addr,
    input  wire [31:0] core3_mem_wdata,
    input  wire [ 3:0] core3_mem_wstrb,
    output wire        core3_mem_ready,
    output wire [31:0] core3_mem_rdata,

    // --- Shared memory port ---
    output reg         mem_valid,
    output reg         mem_instr,
    output reg  [31:0] mem_addr,
    output reg  [31:0] mem_wdata,
    output reg  [ 3:0] mem_wstrb,
    input  wire        mem_ready,
    input  wire [31:0] mem_rdata
);

    // -----------------------------------------------------------------------
    // Bundle per-core signals into arrays for cleaner indexing
    // -----------------------------------------------------------------------
    wire        core_valid [0:3];
    wire        core_instr [0:3];
    wire [31:0] core_addr  [0:3];
    wire [31:0] core_wdata [0:3];
    wire [ 3:0] core_wstrb [0:3];

    assign core_valid[0] = core0_mem_valid;
    assign core_valid[1] = core1_mem_valid;
    assign core_valid[2] = core2_mem_valid;
    assign core_valid[3] = core3_mem_valid;

    assign core_instr[0] = core0_mem_instr;
    assign core_instr[1] = core1_mem_instr;
    assign core_instr[2] = core2_mem_instr;
    assign core_instr[3] = core3_mem_instr;

    assign core_addr[0]  = core0_mem_addr;
    assign core_addr[1]  = core1_mem_addr;
    assign core_addr[2]  = core2_mem_addr;
    assign core_addr[3]  = core3_mem_addr;

    assign core_wdata[0] = core0_mem_wdata;
    assign core_wdata[1] = core1_mem_wdata;
    assign core_wdata[2] = core2_mem_wdata;
    assign core_wdata[3] = core3_mem_wdata;

    assign core_wstrb[0] = core0_mem_wstrb;
    assign core_wstrb[1] = core1_mem_wstrb;
    assign core_wstrb[2] = core2_mem_wstrb;
    assign core_wstrb[3] = core3_mem_wstrb;

    // -----------------------------------------------------------------------
    // Arbitration state
    //   grant      — index of the core currently holding the bus (0–3)
    //   bus_busy   — high while a granted transaction is in flight
    //   next_grant — rotating priority pointer, updated after each transaction
    // -----------------------------------------------------------------------
    reg [1:0] grant;
    reg       bus_busy;
    reg [1:0] next_grant;

    // -----------------------------------------------------------------------
    // Round-robin next-grant combinational logic
    //
    // Scans from (next_grant + 1) mod 4 and returns the first core
    // that has mem_valid asserted. If no core is requesting, found = 0
    // and the grant register is not updated.
    // -----------------------------------------------------------------------
    reg [1:0] rr_grant;
    reg       rr_found;
    integer   i;

    always @* begin
        rr_grant = next_grant;
        rr_found = 1'b0;
        for (i = 1; i <= 4; i = i + 1) begin
            if (!rr_found && core_valid[(next_grant + i) % 4]) begin
                rr_grant = (next_grant + i) % 4;
                rr_found = 1'b1;
            end
        end
    end

    // -----------------------------------------------------------------------
    // Grant register and bus-busy tracking
    // -----------------------------------------------------------------------
    always @(posedge clk) begin
        if (!resetn) begin
            grant      <= 2'd0;
            bus_busy   <= 1'b0;
            next_grant <= 2'd3; // first scan starts from core 0
        end else begin
            if (!bus_busy) begin
                // Bus is idle — arbitrate for the next request
                if (rr_found) begin
                    grant    <= rr_grant;
                    bus_busy <= 1'b1;
                end
            end else begin
                // Bus is busy — wait for memory to acknowledge
                if (mem_ready) begin
                    next_grant <= grant;   // advance the rotating pointer
                    bus_busy   <= 1'b0;
                end
            end
        end
    end

    // -----------------------------------------------------------------------
    // Output mux — drive shared memory port from the granted core
    // -----------------------------------------------------------------------
    always @* begin
        if (bus_busy) begin
            mem_valid = core_valid[grant];
            mem_instr = core_instr[grant];
            mem_addr  = core_addr [grant];
            mem_wdata = core_wdata[grant];
            mem_wstrb = core_wstrb[grant];
        end else begin
            mem_valid = 1'b0;
            mem_instr = 1'b0;
            mem_addr  = 32'b0;
            mem_wdata = 32'b0;
            mem_wstrb = 4'b0;
        end
    end

    // -----------------------------------------------------------------------
    // Ready and rdata — forward only to the granted core
    // -----------------------------------------------------------------------
    assign core0_mem_ready = bus_busy && (grant == 2'd0) && mem_ready;
    assign core1_mem_ready = bus_busy && (grant == 2'd1) && mem_ready;
    assign core2_mem_ready = bus_busy && (grant == 2'd2) && mem_ready;
    assign core3_mem_ready = bus_busy && (grant == 2'd3) && mem_ready;

    // rdata is broadcast; each core ignores it unless its own mem_ready is high
    assign core0_mem_rdata = mem_rdata;
    assign core1_mem_rdata = mem_rdata;
    assign core2_mem_rdata = mem_rdata;
    assign core3_mem_rdata = mem_rdata;

endmodule
