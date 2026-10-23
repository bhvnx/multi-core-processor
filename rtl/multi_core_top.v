/*
 * multi_core_top.v — Top-level: 4 PicoRV32 cores + instruction routing mux
 *
 * Memory architecture (Option B):
 *   - Each core has a private instruction SRAM (no arbitration on fetches)
 *   - All cores share one data SRAM accessed through the bus arbiter
 *
 * Routing rule per core:
 *   mem_instr == 1  →  private instruction SRAM (direct, 1-cycle)
 *   mem_instr == 0  →  bus arbiter → shared data SRAM
 *
 * Address spaces:
 *   Instruction SRAM (each core):  0x0000_0000 – 0x0000_3FFF  (16 KB)
 *   Data SRAM (shared, via arb):   0x0000_0000 – 0x0000_FFFF  (64 KB)
 *     ├── 0x0000_0000 – 0x0000_0FFF  Core 0 stack / locals
 *     ├── 0x0000_1000 – 0x0000_1FFF  Core 1 stack / locals
 *     ├── 0x0000_2000 – 0x0000_2FFF  Core 2 stack / locals
 *     ├── 0x0000_3000 – 0x0000_3FFF  Core 3 stack / locals
 *     └── 0x0000_4000 – 0x0000_FFFF  Inter-core shared region
 */

`timescale 1 ns / 1 ps

module multi_core_top #(
    parameter ISRAM_AWIDTH = 14,   // 16 KB per-core instruction SRAM
    parameter DSRAM_AWIDTH = 16    // 64 KB shared data SRAM
) (
    input  wire        clk,
    input  wire        resetn,
    output wire [3:0]  trap,
    input  wire [31:0] irq          // shared IRQ lines; split per-core in future
);

    // =========================================================================
    // Core memory bus signals (raw, before routing)
    // =========================================================================

    wire        core_mem_valid [0:3];
    wire        core_mem_instr [0:3];
    wire [31:0] core_mem_addr  [0:3];
    wire [31:0] core_mem_wdata [0:3];
    wire [ 3:0] core_mem_wstrb [0:3];
    wire        core_mem_ready [0:3];
    wire [31:0] core_mem_rdata [0:3];

    // =========================================================================
    // Instruction SRAM ports (one per core, gated by mem_instr)
    // =========================================================================

    wire        isram_valid [0:3];
    wire        isram_ready [0:3];
    wire [31:0] isram_rdata [0:3];

    // =========================================================================
    // Data SRAM arbiter ports (one per core, gated by !mem_instr)
    // =========================================================================

    wire        dsram_arb_valid [0:3];
    wire        dsram_arb_ready [0:3];
    wire [31:0] dsram_arb_rdata [0:3];

    // Shared data SRAM ↔ arbiter wires
    wire        dsram_valid;
    wire        dsram_instr;
    wire [31:0] dsram_addr;
    wire [31:0] dsram_wdata;
    wire [ 3:0] dsram_wstrb;
    wire        dsram_ready;
    wire [31:0] dsram_rdata;

    // =========================================================================
    // Instruction / data routing mux — one per core
    //
    // mem_instr gates the request to the correct target.
    // mem_ready and mem_rdata are selected back to the core based on
    // which path is active. PicoRV32 holds all request signals stable
    // until mem_ready, so mem_instr remains valid for the full transaction.
    // =========================================================================

    genvar c;
    generate
        for (c = 0; c < 4; c = c + 1) begin : routing

            // Gate valid to each path
            assign isram_valid[c]     = core_mem_valid[c] &&  core_mem_instr[c];
            assign dsram_arb_valid[c] = core_mem_valid[c] && !core_mem_instr[c];

            // Merge ready and rdata back to the core
            assign core_mem_ready[c] = isram_ready[c] | dsram_arb_ready[c];
            assign core_mem_rdata[c] = core_mem_instr[c] ? isram_rdata[c]
                                                          : dsram_arb_rdata[c];
        end
    endgenerate

    // =========================================================================
    // PicoRV32 core instances
    // =========================================================================

    picorv32 #(
        .ENABLE_REGS_16_31  (1),
        .ENABLE_MUL         (1),
        .ENABLE_DIV         (1),
        .ENABLE_IRQ         (1),
        .ENABLE_IRQ_TIMER   (1),
        .CATCH_MISALIGN     (1),
        .CATCH_ILLINSN      (1),
        .COMPRESSED_ISA     (0),
        .PROGADDR_RESET     (32'h0000_0000),
        .STACKADDR          (32'h0000_0FFF)   // top of core 0 private stack
    ) core0 (
        .clk        (clk),
        .resetn     (resetn),
        .trap       (trap[0]),
        .mem_valid  (core_mem_valid[0]),
        .mem_instr  (core_mem_instr[0]),
        .mem_ready  (core_mem_ready[0]),
        .mem_addr   (core_mem_addr [0]),
        .mem_wdata  (core_mem_wdata[0]),
        .mem_wstrb  (core_mem_wstrb[0]),
        .mem_rdata  (core_mem_rdata[0]),
        .irq        (irq),
        .eoi        ()
    );

    picorv32 #(
        .ENABLE_REGS_16_31  (1),
        .ENABLE_MUL         (1),
        .ENABLE_DIV         (1),
        .ENABLE_IRQ         (1),
        .ENABLE_IRQ_TIMER   (1),
        .CATCH_MISALIGN     (1),
        .CATCH_ILLINSN      (1),
        .COMPRESSED_ISA     (0),
        .PROGADDR_RESET     (32'h0000_0000),
        .STACKADDR          (32'h0000_1FFF)   // top of core 1 private stack
    ) core1 (
        .clk        (clk),
        .resetn     (resetn),
        .trap       (trap[1]),
        .mem_valid  (core_mem_valid[1]),
        .mem_instr  (core_mem_instr[1]),
        .mem_ready  (core_mem_ready[1]),
        .mem_addr   (core_mem_addr [1]),
        .mem_wdata  (core_mem_wdata[1]),
        .mem_wstrb  (core_mem_wstrb[1]),
        .mem_rdata  (core_mem_rdata[1]),
        .irq        (irq),
        .eoi        ()
    );

    picorv32 #(
        .ENABLE_REGS_16_31  (1),
        .ENABLE_MUL         (1),
        .ENABLE_DIV         (1),
        .ENABLE_IRQ         (1),
        .ENABLE_IRQ_TIMER   (1),
        .CATCH_MISALIGN     (1),
        .CATCH_ILLINSN      (1),
        .COMPRESSED_ISA     (0),
        .PROGADDR_RESET     (32'h0000_0000),
        .STACKADDR          (32'h0000_2FFF)   // top of core 2 private stack
    ) core2 (
        .clk        (clk),
        .resetn     (resetn),
        .trap       (trap[2]),
        .mem_valid  (core_mem_valid[2]),
        .mem_instr  (core_mem_instr[2]),
        .mem_ready  (core_mem_ready[2]),
        .mem_addr   (core_mem_addr [2]),
        .mem_wdata  (core_mem_wdata[2]),
        .mem_wstrb  (core_mem_wstrb[2]),
        .mem_rdata  (core_mem_rdata[2]),
        .irq        (irq),
        .eoi        ()
    );

    picorv32 #(
        .ENABLE_REGS_16_31  (1),
        .ENABLE_MUL         (1),
        .ENABLE_DIV         (1),
        .ENABLE_IRQ         (1),
        .ENABLE_IRQ_TIMER   (1),
        .CATCH_MISALIGN     (1),
        .CATCH_ILLINSN      (1),
        .COMPRESSED_ISA     (0),
        .PROGADDR_RESET     (32'h0000_0000),
        .STACKADDR          (32'h0000_3FFF)   // top of core 3 private stack
    ) core3 (
        .clk        (clk),
        .resetn     (resetn),
        .trap       (trap[3]),
        .mem_valid  (core_mem_valid[3]),
        .mem_instr  (core_mem_instr[3]),
        .mem_ready  (core_mem_ready[3]),
        .mem_addr   (core_mem_addr [3]),
        .mem_wdata  (core_mem_wdata[3]),
        .mem_wstrb  (core_mem_wstrb[3]),
        .mem_rdata  (core_mem_rdata[3]),
        .irq        (irq),
        .eoi        ()
    );

    // =========================================================================
    // Private instruction SRAMs (one per core)
    // addr, wdata, wstrb pass through directly — only valid is gated
    // =========================================================================

    sram #(.SRAM_AWIDTH(ISRAM_AWIDTH)) isram0 (
        .clk       (clk),
        .mem_valid (isram_valid[0]),
        .mem_ready (isram_ready[0]),
        .mem_addr  (core_mem_addr [0]),
        .mem_wdata (core_mem_wdata[0]),
        .mem_wstrb (core_mem_wstrb[0]),
        .mem_rdata (isram_rdata  [0])
    );

    sram #(.SRAM_AWIDTH(ISRAM_AWIDTH)) isram1 (
        .clk       (clk),
        .mem_valid (isram_valid[1]),
        .mem_ready (isram_ready[1]),
        .mem_addr  (core_mem_addr [1]),
        .mem_wdata (core_mem_wdata[1]),
        .mem_wstrb (core_mem_wstrb[1]),
        .mem_rdata (isram_rdata  [1])
    );

    sram #(.SRAM_AWIDTH(ISRAM_AWIDTH)) isram2 (
        .clk       (clk),
        .mem_valid (isram_valid[2]),
        .mem_ready (isram_ready[2]),
        .mem_addr  (core_mem_addr [2]),
        .mem_wdata (core_mem_wdata[2]),
        .mem_wstrb (core_mem_wstrb[2]),
        .mem_rdata (isram_rdata  [2])
    );

    sram #(.SRAM_AWIDTH(ISRAM_AWIDTH)) isram3 (
        .clk       (clk),
        .mem_valid (isram_valid[3]),
        .mem_ready (isram_ready[3]),
        .mem_addr  (core_mem_addr [3]),
        .mem_wdata (core_mem_wdata[3]),
        .mem_wstrb (core_mem_wstrb[3]),
        .mem_rdata (isram_rdata  [3])
    );

    // =========================================================================
    // Bus arbiter — round-robin over the 4 cores' data requests
    // =========================================================================

    bus_arbiter arb (
        .clk               (clk),
        .resetn            (resetn),

        .core0_mem_valid   (dsram_arb_valid[0]),
        .core0_mem_instr   (core_mem_instr [0]),
        .core0_mem_addr    (core_mem_addr  [0]),
        .core0_mem_wdata   (core_mem_wdata [0]),
        .core0_mem_wstrb   (core_mem_wstrb [0]),
        .core0_mem_ready   (dsram_arb_ready[0]),
        .core0_mem_rdata   (dsram_arb_rdata[0]),

        .core1_mem_valid   (dsram_arb_valid[1]),
        .core1_mem_instr   (core_mem_instr [1]),
        .core1_mem_addr    (core_mem_addr  [1]),
        .core1_mem_wdata   (core_mem_wdata [1]),
        .core1_mem_wstrb   (core_mem_wstrb [1]),
        .core1_mem_ready   (dsram_arb_ready[1]),
        .core1_mem_rdata   (dsram_arb_rdata[1]),

        .core2_mem_valid   (dsram_arb_valid[2]),
        .core2_mem_instr   (core_mem_instr [2]),
        .core2_mem_addr    (core_mem_addr  [2]),
        .core2_mem_wdata   (core_mem_wdata [2]),
        .core2_mem_wstrb   (core_mem_wstrb [2]),
        .core2_mem_ready   (dsram_arb_ready[2]),
        .core2_mem_rdata   (dsram_arb_rdata[2]),

        .core3_mem_valid   (dsram_arb_valid[3]),
        .core3_mem_instr   (core_mem_instr [3]),
        .core3_mem_addr    (core_mem_addr  [3]),
        .core3_mem_wdata   (core_mem_wdata [3]),
        .core3_mem_wstrb   (core_mem_wstrb [3]),
        .core3_mem_ready   (dsram_arb_ready[3]),
        .core3_mem_rdata   (dsram_arb_rdata[3]),

        .mem_valid         (dsram_valid),
        .mem_instr         (dsram_instr),
        .mem_addr          (dsram_addr),
        .mem_wdata         (dsram_wdata),
        .mem_wstrb         (dsram_wstrb),
        .mem_ready         (dsram_ready),
        .mem_rdata         (dsram_rdata)
    );

    // =========================================================================
    // Shared data SRAM
    // =========================================================================

    sram #(.SRAM_AWIDTH(DSRAM_AWIDTH)) dsram (
        .clk       (clk),
        .mem_valid (dsram_valid),
        .mem_ready (dsram_ready),
        .mem_addr  (dsram_addr),
        .mem_wdata (dsram_wdata),
        .mem_wstrb (dsram_wstrb),
        .mem_rdata (dsram_rdata)
    );

endmodule
