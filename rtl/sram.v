/*
 * sram.v — Synchronous single-port SRAM with PicoRV32 valid/ready interface
 *
 * Parameterised for both use cases in this design:
 *   - Per-core private instruction SRAM  (SRAM_AWIDTH = 14 → 16 KB)
 *   - Shared data SRAM                   (SRAM_AWIDTH = 16 → 64 KB)
 *
 * Interface:
 *   mem_valid / mem_ready  — standard PicoRV32 handshake
 *   mem_wstrb == 4'b0000   → read
 *   mem_wstrb != 4'b0000   → write (byte-enables select which bytes)
 *
 * Latency: 1 cycle — mem_ready is asserted the cycle after mem_valid.
 * The address is word-addressed internally; the two LSBs of mem_addr
 * select the byte lane within a word and are handled by mem_wstrb on
 * writes and by the caller on reads (PicoRV32 handles this itself).
 */

`timescale 1 ns / 1 ps

module sram #(
    parameter SRAM_AWIDTH = 14   // word address bits; depth = 2^SRAM_AWIDTH words
) (
    input  wire        clk,

    input  wire        mem_valid,
    output reg         mem_ready,
    input  wire [31:0] mem_addr,
    input  wire [31:0] mem_wdata,
    input  wire [ 3:0] mem_wstrb,
    output reg  [31:0] mem_rdata
);
    localparam DEPTH = 1 << SRAM_AWIDTH;

    // Storage array — 32-bit words
    reg [31:0] mem [0:DEPTH-1];

    // Word index: drop the two byte-select LSBs, take SRAM_AWIDTH bits
    wire [SRAM_AWIDTH-1:0] word_addr = mem_addr[SRAM_AWIDTH+1:2];

    always @(posedge clk) begin
        mem_ready <= 1'b0;
        mem_rdata <= 32'b0;

        if (mem_valid && !mem_ready) begin
            mem_ready <= 1'b1;

            if (mem_wstrb == 4'b0000) begin
                // Read
                mem_rdata <= mem[word_addr];
            end else begin
                // Write — apply byte enables
                if (mem_wstrb[0]) mem[word_addr][ 7: 0] <= mem_wdata[ 7: 0];
                if (mem_wstrb[1]) mem[word_addr][15: 8] <= mem_wdata[15: 8];
                if (mem_wstrb[2]) mem[word_addr][23:16] <= mem_wdata[23:16];
                if (mem_wstrb[3]) mem[word_addr][31:24] <= mem_wdata[31:24];
            end
        end
    end

endmodule
