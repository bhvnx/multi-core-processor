/*
 * multi_core_top.v — Top-level: 4 PicoRV32 cores + peripherals
 *
 * Memory architecture:
 *   Each core has a private instruction SRAM (direct, no arbitration).
 *   All cores share one data SRAM via bus arbiter → addr_decoder.
 *
 * Routing rule per core:
 *   mem_instr == 1  →  private instruction SRAM (direct, 1-cycle)
 *   mem_instr == 0  →  bus arbiter → addr_decoder → DSRAM / peripherals
 *
 * Peripheral map (addr_decoder):
 *   0x0000_0000 – 0x0000_FFFF   Shared data SRAM (64 KB)
 *   0x1000_0000 – 0x1000_00FF   UART 0
 *   0x1001_0000 – 0x1001_00FF   System timer (MTIME + MTIMECMP × 4)
 *   0x1002_0000 – 0x1002_00FF   Hardware spinlocks (× 8)
 *   0x1003_0000 – 0x1003_00FF   PLIC
 *   0x1004_0000 – 0x1004_00FF   GPIO [Phase 2 — stub]
 *   0xFFFF_FFFC                  Core ID register (mhartid)
 */

`include "memory_map.vh"
`timescale 1 ns / 1 ps

module multi_core_top #(
    parameter ISRAM_AWIDTH = 14,   // 16 KB per-core instruction SRAM
    parameter DSRAM_AWIDTH = 16    // 64 KB shared data SRAM
) (
    input  wire       clk,
    input  wire       resetn,
    output wire [3:0] trap,

    // UART serial lines
    output wire       uart_tx,
    input  wire       uart_rx
);

    // =========================================================================
    // Core memory bus signals (raw, before instruction/data routing)
    // =========================================================================

    wire        core_mem_valid [0:3];
    wire        core_mem_instr [0:3];
    wire [31:0] core_mem_addr  [0:3];
    wire [31:0] core_mem_wdata [0:3];
    wire [ 3:0] core_mem_wstrb [0:3];
    wire        core_mem_ready [0:3];
    wire [31:0] core_mem_rdata [0:3];

    // =========================================================================
    // Instruction SRAM ports — gated by mem_instr
    // =========================================================================

    wire        isram_valid [0:3];
    wire        isram_ready [0:3];
    wire [31:0] isram_rdata [0:3];

    // =========================================================================
    // Data bus ports — gated by !mem_instr; fed into bus arbiter
    // =========================================================================

    wire        dbus_valid [0:3];
    wire        dbus_ready [0:3];
    wire [31:0] dbus_rdata [0:3];

    // =========================================================================
    // Instruction / data routing mux — one per core
    // =========================================================================

    genvar c;
    generate
        for (c = 0; c < 4; c = c + 1) begin : routing
            assign isram_valid[c] = core_mem_valid[c] &&  core_mem_instr[c];
            assign dbus_valid [c] = core_mem_valid[c] && !core_mem_instr[c];

            assign core_mem_ready[c] = isram_ready[c] | dbus_ready[c];
            assign core_mem_rdata[c] = core_mem_instr[c] ? isram_rdata[c]
                                                          : dbus_rdata[c];
        end
    endgenerate

    // =========================================================================
    // Bus arbiter → addr_decoder interconnect
    // =========================================================================

    wire        arb_valid;
    wire        arb_instr;   // unused downstream; kept for arbiter port match
    wire [31:0] arb_addr;
    wire [31:0] arb_wdata;
    wire [ 3:0] arb_wstrb;
    wire        arb_ready;
    wire [31:0] arb_rdata;
    wire [ 1:0] grant_id;

    // =========================================================================
    // Addr decoder → peripheral interconnect
    // =========================================================================

    // DSRAM
    wire        dsram_valid;
    wire        dsram_ready;
    wire [31:0] dsram_rdata;

    // UART
    wire        uart_valid;
    wire        uart_ready;
    wire [31:0] uart_rdata;

    // System timer
    wire        timer_valid;
    wire        timer_ready;
    wire [31:0] timer_rdata;

    // Spinlock
    wire        spinlock_valid;
    wire        spinlock_ready;
    wire [31:0] spinlock_rdata;

    // PLIC
    wire        plic_valid;
    wire        plic_ready;
    wire [31:0] plic_rdata;

    // =========================================================================
    // IRQ interconnect
    // =========================================================================

    // Timer → PLIC and directly to each core's IRQ[0]
    wire [3:0] irq_timer;

    // UART → PLIC
    wire irq_uart_rx;
    wire irq_uart_tx;

    // PLIC → per-core IRQ vectors
    wire [31:0] core0_irq;
    wire [31:0] core1_irq;
    wire [31:0] core2_irq;
    wire [31:0] core3_irq;

    // =========================================================================
    // PicoRV32 core instances
    // =========================================================================

    picorv32 #(
        .ENABLE_REGS_16_31  (1),
        .ENABLE_MUL         (1),
        .ENABLE_DIV         (1),
        .ENABLE_IRQ         (1),
        .ENABLE_IRQ_TIMER   (0),   // disabled; IRQ[1] reserved (spec §1 Q4)
        .CATCH_MISALIGN     (1),
        .CATCH_ILLINSN      (1),
        .COMPRESSED_ISA     (0),
        .PROGADDR_RESET     (32'h0000_0000),
        .STACKADDR          (32'h0000_0FFF)
    ) core0 (
        .clk       (clk),
        .resetn    (resetn),
        .trap      (trap[0]),
        .mem_valid (core_mem_valid[0]),
        .mem_instr (core_mem_instr[0]),
        .mem_ready (core_mem_ready[0]),
        .mem_addr  (core_mem_addr [0]),
        .mem_wdata (core_mem_wdata[0]),
        .mem_wstrb (core_mem_wstrb[0]),
        .mem_rdata (core_mem_rdata[0]),
        .irq       (core0_irq),
        .eoi       ()
    );

    picorv32 #(
        .ENABLE_REGS_16_31  (1),
        .ENABLE_MUL         (1),
        .ENABLE_DIV         (1),
        .ENABLE_IRQ         (1),
        .ENABLE_IRQ_TIMER   (0),
        .CATCH_MISALIGN     (1),
        .CATCH_ILLINSN      (1),
        .COMPRESSED_ISA     (0),
        .PROGADDR_RESET     (32'h0000_0000),
        .STACKADDR          (32'h0000_1FFF)
    ) core1 (
        .clk       (clk),
        .resetn    (resetn),
        .trap      (trap[1]),
        .mem_valid (core_mem_valid[1]),
        .mem_instr (core_mem_instr[1]),
        .mem_ready (core_mem_ready[1]),
        .mem_addr  (core_mem_addr [1]),
        .mem_wdata (core_mem_wdata[1]),
        .mem_wstrb (core_mem_wstrb[1]),
        .mem_rdata (core_mem_rdata[1]),
        .irq       (core1_irq),
        .eoi       ()
    );

    picorv32 #(
        .ENABLE_REGS_16_31  (1),
        .ENABLE_MUL         (1),
        .ENABLE_DIV         (1),
        .ENABLE_IRQ         (1),
        .ENABLE_IRQ_TIMER   (0),
        .CATCH_MISALIGN     (1),
        .CATCH_ILLINSN      (1),
        .COMPRESSED_ISA     (0),
        .PROGADDR_RESET     (32'h0000_0000),
        .STACKADDR          (32'h0000_2FFF)
    ) core2 (
        .clk       (clk),
        .resetn    (resetn),
        .trap      (trap[2]),
        .mem_valid (core_mem_valid[2]),
        .mem_instr (core_mem_instr[2]),
        .mem_ready (core_mem_ready[2]),
        .mem_addr  (core_mem_addr [2]),
        .mem_wdata (core_mem_wdata[2]),
        .mem_wstrb (core_mem_wstrb[2]),
        .mem_rdata (core_mem_rdata[2]),
        .irq       (core2_irq),
        .eoi       ()
    );

    picorv32 #(
        .ENABLE_REGS_16_31  (1),
        .ENABLE_MUL         (1),
        .ENABLE_DIV         (1),
        .ENABLE_IRQ         (1),
        .ENABLE_IRQ_TIMER   (0),
        .CATCH_MISALIGN     (1),
        .CATCH_ILLINSN      (1),
        .COMPRESSED_ISA     (0),
        .PROGADDR_RESET     (32'h0000_0000),
        .STACKADDR          (32'h0000_3FFF)
    ) core3 (
        .clk       (clk),
        .resetn    (resetn),
        .trap      (trap[3]),
        .mem_valid (core_mem_valid[3]),
        .mem_instr (core_mem_instr[3]),
        .mem_ready (core_mem_ready[3]),
        .mem_addr  (core_mem_addr [3]),
        .mem_wdata (core_mem_wdata[3]),
        .mem_wstrb (core_mem_wstrb[3]),
        .mem_rdata (core_mem_rdata[3]),
        .irq       (core3_irq),
        .eoi       ()
    );

    // =========================================================================
    // Private instruction SRAMs — one per core
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

        .core0_mem_valid   (dbus_valid[0]),
        .core0_mem_instr   (core_mem_instr[0]),
        .core0_mem_addr    (core_mem_addr [0]),
        .core0_mem_wdata   (core_mem_wdata[0]),
        .core0_mem_wstrb   (core_mem_wstrb[0]),
        .core0_mem_ready   (dbus_ready[0]),
        .core0_mem_rdata   (dbus_rdata[0]),

        .core1_mem_valid   (dbus_valid[1]),
        .core1_mem_instr   (core_mem_instr[1]),
        .core1_mem_addr    (core_mem_addr [1]),
        .core1_mem_wdata   (core_mem_wdata[1]),
        .core1_mem_wstrb   (core_mem_wstrb[1]),
        .core1_mem_ready   (dbus_ready[1]),
        .core1_mem_rdata   (dbus_rdata[1]),

        .core2_mem_valid   (dbus_valid[2]),
        .core2_mem_instr   (core_mem_instr[2]),
        .core2_mem_addr    (core_mem_addr [2]),
        .core2_mem_wdata   (core_mem_wdata[2]),
        .core2_mem_wstrb   (core_mem_wstrb[2]),
        .core2_mem_ready   (dbus_ready[2]),
        .core2_mem_rdata   (dbus_rdata[2]),

        .core3_mem_valid   (dbus_valid[3]),
        .core3_mem_instr   (core_mem_instr[3]),
        .core3_mem_addr    (core_mem_addr [3]),
        .core3_mem_wdata   (core_mem_wdata[3]),
        .core3_mem_wstrb   (core_mem_wstrb[3]),
        .core3_mem_ready   (dbus_ready[3]),
        .core3_mem_rdata   (dbus_rdata[3]),

        .grant_id          (grant_id),

        .mem_valid         (arb_valid),
        .mem_instr         (arb_instr),
        .mem_addr          (arb_addr),
        .mem_wdata         (arb_wdata),
        .mem_wstrb         (arb_wstrb),
        .mem_ready         (arb_ready),
        .mem_rdata         (arb_rdata)
    );

    // =========================================================================
    // Address decoder — routes arb output to the correct peripheral
    // =========================================================================

    addr_decoder dec (
        .in_valid        (arb_valid),
        .in_addr         (arb_addr),
        .in_wdata        (arb_wdata),
        .in_wstrb        (arb_wstrb),
        .in_ready        (arb_ready),
        .in_rdata        (arb_rdata),

        .dsram_valid     (dsram_valid),
        .dsram_ready     (dsram_ready),
        .dsram_rdata     (dsram_rdata),

        .uart_valid      (uart_valid),
        .uart_ready      (uart_ready),
        .uart_rdata      (uart_rdata),

        .timer_valid     (timer_valid),
        .timer_ready     (timer_ready),
        .timer_rdata     (timer_rdata),

        .spinlock_valid  (spinlock_valid),
        .spinlock_ready  (spinlock_ready),
        .spinlock_rdata  (spinlock_rdata),

        .plic_valid      (plic_valid),
        .plic_ready      (plic_ready),
        .plic_rdata      (plic_rdata),

        .grant_id        (grant_id)
    );

    // =========================================================================
    // Shared data SRAM
    // =========================================================================

    sram #(.SRAM_AWIDTH(DSRAM_AWIDTH)) dsram (
        .clk       (clk),
        .mem_valid (dsram_valid),
        .mem_ready (dsram_ready),
        .mem_addr  (arb_addr),
        .mem_wdata (arb_wdata),
        .mem_wstrb (arb_wstrb),
        .mem_rdata (dsram_rdata)
    );

    // =========================================================================
    // UART
    // =========================================================================

    uart uart0 (
        .clk       (clk),
        .resetn    (resetn),

        .mem_valid (uart_valid),
        .mem_addr  (arb_addr[7:0]),
        .mem_wdata (arb_wdata),
        .mem_wstrb (arb_wstrb),
        .mem_ready (uart_ready),
        .mem_rdata (uart_rdata),

        .irq_rx    (irq_uart_rx),
        .irq_tx    (irq_uart_tx),

        .uart_tx   (uart_tx),
        .uart_rx   (uart_rx)
    );

    // =========================================================================
    // System timer
    // =========================================================================

    sys_timer timer0 (
        .clk       (clk),
        .resetn    (resetn),

        .mem_valid (timer_valid),
        .mem_addr  (arb_addr[7:0]),
        .mem_wdata (arb_wdata),
        .mem_wstrb (arb_wstrb),
        .mem_ready (timer_ready),
        .mem_rdata (timer_rdata),

        .irq_timer (irq_timer)
    );

    // =========================================================================
    // Hardware spinlocks
    // =========================================================================

    spinlock spinlock0 (
        .clk       (clk),
        .resetn    (resetn),

        .mem_valid (spinlock_valid),
        .mem_addr  (arb_addr[7:0]),
        .mem_wdata (arb_wdata),
        .mem_wstrb (arb_wstrb),
        .mem_ready (spinlock_ready),
        .mem_rdata (spinlock_rdata)
    );

    // =========================================================================
    // PLIC — aggregates IRQs and drives per-core irq vectors
    // =========================================================================

    plic plic0 (
        .clk         (clk),
        .resetn      (resetn),

        .mem_valid   (plic_valid),
        .mem_addr    (arb_addr[7:0]),
        .mem_wdata   (arb_wdata),
        .mem_wstrb   (arb_wstrb),
        .mem_ready   (plic_ready),
        .mem_rdata   (plic_rdata),

        .irq_uart_rx (irq_uart_rx),
        .irq_uart_tx (irq_uart_tx),
        .irq_timer   (irq_timer),

        .core0_irq   (core0_irq),
        .core1_irq   (core1_irq),
        .core2_irq   (core2_irq),
        .core3_irq   (core3_irq)
    );

endmodule
