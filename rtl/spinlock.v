`include "memory_map.vh"
`timescale 1 ns / 1 ps

/*
 * spinlock.v — Hardware spinlock peripheral
 *
 * Base address: MM_SPINLOCK_BASE (0x1002_0000)
 * mem_addr[7:0] is the register offset; upper bits decoded by addr_decoder.
 *
 * 8 independent locks (LOCK[0]–LOCK[7]) at offsets 0x00–0x1C (n × 4).
 * Offsets 0x20–0xFF reserved for Phase 2.
 *
 * Bus semantics (§3 of docs/spinlock_spec.md):
 *   Read  LOCK[n] — atomic test-and-set:
 *                   returns 0 (lock was free, now held) or 1 (already busy)
 *   Write LOCK[n] — release: write 0 clears the lock; write 1 is a no-op
 *
 * No IRQ outputs — purely polled.
 *
 * Atomicity guarantee:
 *   The bus arbiter grants the bus to exactly one core per cycle.
 *   The read-and-set happens in a single clock cycle while the bus is held,
 *   so no two cores can simultaneously observe locks[n]==0 for the same lock.
 */

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

// =========================================================================
// Lock state — 8 single-bit registers; 0 = free, 1 = held
// =========================================================================
reg [7:0] locks;

// Lock index: addr[4:2] selects lock 0–7; addr[1:0] ignored (word-aligned)
wire [2:0] lock_idx = mem_addr[4:2];

// =========================================================================
// Bus interface — read (test-and-set) and write (release)
// =========================================================================
always @(posedge clk) begin
    if (!resetn) begin
        locks     <= 8'b0;
        mem_ready <= 1'b0;
        mem_rdata <= 32'd0;
    end else begin
        mem_ready <= 1'b0;

        if (mem_valid && !mem_ready) begin
            mem_ready <= 1'b1;

            if (mem_wstrb == 4'b0) begin
                // Read — atomic test-and-set
                // Return current state, then unconditionally mark as held.
                // The two assignments are to separate registers so there is
                // no combinational loop: mem_rdata captures the old value
                // while locks[lock_idx] is updated for the next cycle.
                mem_rdata          <= {31'b0, locks[lock_idx]};
                locks[lock_idx]    <= 1'b1;
            end else begin
                // Write — release only if wdata[0] == 0; write 1 is a no-op
                mem_rdata <= 32'd0;
                if (mem_wdata[0] == 1'b0)
                    locks[lock_idx] <= 1'b0;
            end
        end
    end
end

endmodule
