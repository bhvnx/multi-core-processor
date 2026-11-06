`include "memory_map.vh"
`timescale 1 ns / 1 ps

/*
 * sys_timer.v — System timer (MTIME + MTIMECMP)
 *
 * Base address: MM_TIMER_BASE (0x1001_0000)
 * mem_addr[7:0] is the register offset; upper bits decoded by addr_decoder.
 *
 * Register layout (§5.2):
 *   One shared 64-bit free-running MTIME counter.
 *   Four independent 64-bit MTIMECMP registers, one per core.
 *   Core N's block starts at offset N × TIMER_CORE_STRIDE (0x10):
 *
 *     Offset  Register      Access  Description
 *     +0x0    MTIME_LO      R       lower 32 bits of shared MTIME counter
 *     +0x4    MTIME_HI      R       upper 32 bits of shared MTIME counter
 *     +0x8    MTIMECMP_LO   R/W     lower 32 bits of core-N compare register
 *     +0xC    MTIMECMP_HI   R/W     upper 32 bits; IRQ fires when MTIME >= MTIMECMP
 *
 * IRQ outputs (level-sensitive, one per core):
 *   irq_timer[N] asserts when mtime >= mtimecmp[N].
 *   Firmware clears the interrupt by writing a future value into MTIMECMP.
 *   These connect to PLIC sources PLIC_SRC_TIMER0–TIMER3 (IDs 2–5).
 *   They also drive each core's IRQ[0] line directly (§6).
 *
 * Notes:
 *   MTIMECMP reset value is 64'hFFFF_FFFF_FFFF_FFFF to prevent a spurious
 *   IRQ at boot before firmware programs a real deadline.
 *
 *   MTIME_LO and MTIME_HI are read-only; writes are silently ignored so that
 *   any mapped offset within a core's block still responds on the bus.
 *
 *   addr[5:4] selects the core block (0–3); addr[3:2] selects the register
 *   within that block.  addr[1:0] is ignored (all registers are 32-bit aligned).
 */

module sys_timer (
    input  wire        clk,
    input  wire        resetn,

    // Bus interface (from addr_decoder; mem_addr[7:0] is register offset)
    input  wire        mem_valid,
    input  wire [ 7:0] mem_addr,
    input  wire [31:0] mem_wdata,
    input  wire [ 3:0] mem_wstrb,
    output reg         mem_ready,
    output reg  [31:0] mem_rdata,

    // Per-core timer IRQ — level-sensitive, one per core
    // Connects to PLIC sources 2–5 and to each core's IRQ[0]
    output wire [ 3:0] irq_timer
);

// =========================================================================
// Shared 64-bit free-running counter
// =========================================================================
reg [63:0] mtime;

always @(posedge clk) begin
    if (!resetn)
        mtime <= 64'd0;
    else
        mtime <= mtime + 64'd1;
end

// =========================================================================
// Per-core MTIMECMP registers — reset to all-ones (no spurious IRQ at boot)
// =========================================================================
reg [63:0] mtimecmp [0:3];

integer i;
always @(posedge clk) begin
    if (!resetn) begin
        for (i = 0; i < 4; i = i + 1)
            mtimecmp[i] <= 64'hFFFF_FFFF_FFFF_FFFF;
    end else if (mem_valid && !mem_ready && (mem_wstrb != 4'b0)) begin
        // addr[5:4] = core index, addr[3:2] = register select
        case (mem_addr[3:2])
            2'b10: mtimecmp[mem_addr[5:4]][31: 0] <= mem_wdata;  // MTIMECMP_LO
            2'b11: mtimecmp[mem_addr[5:4]][63:32] <= mem_wdata;  // MTIMECMP_HI
            default: ;  // MTIME_LO / MTIME_HI are read-only; ignore writes
        endcase
    end
end

// =========================================================================
// Bus read and ready
// =========================================================================
always @(posedge clk) begin
    if (!resetn) begin
        mem_ready <= 1'b0;
        mem_rdata <= 32'd0;
    end else begin
        mem_ready <= 1'b0;

        if (mem_valid && !mem_ready) begin
            mem_ready <= 1'b1;

            case (mem_addr[3:2])
                2'b00: mem_rdata <= mtime[31: 0];                           // MTIME_LO
                2'b01: mem_rdata <= mtime[63:32];                           // MTIME_HI
                2'b10: mem_rdata <= mtimecmp[mem_addr[5:4]][31: 0];        // MTIMECMP_LO
                2'b11: mem_rdata <= mtimecmp[mem_addr[5:4]][63:32];        // MTIMECMP_HI
                default: mem_rdata <= 32'd0;
            endcase
        end
    end
end

// =========================================================================
// IRQ — level-sensitive; held until firmware writes a new MTIMECMP deadline
// =========================================================================
assign irq_timer[0] = (mtime >= mtimecmp[0]);
assign irq_timer[1] = (mtime >= mtimecmp[1]);
assign irq_timer[2] = (mtime >= mtimecmp[2]);
assign irq_timer[3] = (mtime >= mtimecmp[3]);

endmodule
