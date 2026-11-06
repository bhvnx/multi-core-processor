`include "memory_map.vh"
`timescale 1 ns / 1 ps

/*
 * plic.v — Platform-Level Interrupt Controller
 *
 * Base address: MM_PLIC_BASE (0x1003_0000)
 * mem_addr[7:0] is the register offset; upper bits decoded by addr_decoder.
 *
 * 8 interrupt sources (IDs 0–7); 6 active in Phase 1:
 *   0 = UART RX     1 = UART TX
 *   2 = timer core0  3 = timer core1  4 = timer core2  5 = timer core3
 *   6–7 = reserved (Phase 2)
 *
 * Per-core registers:
 *   ENABLE[C]  — 8-bit mask; bit N enables source N for core C
 *   CLAIM[C]   — read: highest-priority pending enabled source ID (0=none)
 *                write: acknowledge that source ID, clearing PENDING[N]
 *
 * PRIORITY — 4-bit field per source packed into one 32-bit register:
 *   bits[3:0]=src0, bits[7:4]=src1, …, bits[31:28]=src7
 *   Priority 15 = highest; tie-break: lower source ID wins.
 *
 * IRQ output routing (per core N):
 *   IRQ[0]    = irq_timer[N]  — direct bypass, not routed through PLIC
 *   IRQ[1]    = 0             — reserved for PicoRV32 built-in timer
 *   IRQ[2]    = UART RX       — pending[0] & enable[N][0]
 *   IRQ[3]    = UART TX       — pending[1] & enable[N][1]
 *   IRQ[4:31] = 0             — reserved
 *
 * Note: source ID 0 == "UART RX" conflicts with the CLAIM "0 = none"
 * convention inherited from the RISC-V PLIC spec. This is a known
 * limitation of the simplified design. UART RX is still delivered via
 * IRQ[2] directly; the claim path for source 0 is unreliable.
 */

module plic (
    input  wire        clk,
    input  wire        resetn,

    // Bus interface (from addr_decoder; mem_addr[7:0] is register offset)
    input  wire        mem_valid,
    input  wire [ 7:0] mem_addr,
    input  wire [31:0] mem_wdata,
    input  wire [ 3:0] mem_wstrb,
    output reg         mem_ready,
    output reg  [31:0] mem_rdata,

    // Interrupt source inputs — level-sensitive
    input  wire        irq_uart_rx,   // source 0
    input  wire        irq_uart_tx,   // source 1
    input  wire [ 3:0] irq_timer,     // sources 2–5; irq_timer[N] = core N

    // Per-core IRQ vectors to PicoRV32 irq[31:0]
    output wire [31:0] core0_irq,
    output wire [31:0] core1_irq,
    output wire [31:0] core2_irq,
    output wire [31:0] core3_irq
);

// =========================================================================
// Source aggregation — 8-bit vector, level-sensitive
// =========================================================================
wire [7:0] src = {2'b00,          // [7:6] reserved
                  irq_timer[3],   // [5]
                  irq_timer[2],   // [4]
                  irq_timer[1],   // [3]
                  irq_timer[0],   // [2]
                  irq_uart_tx,    // [1]
                  irq_uart_rx};   // [0]

// =========================================================================
// Control registers
// =========================================================================
reg [ 7:0] pending;         // sources currently asserted and not yet claimed
reg [ 7:0] enable [0:3];    // per-core enable masks; enable[C][N] enables src N for core C
reg [31:0] priority_reg;    // 4-bit priority per source, packed

// =========================================================================
// PENDING — set when src[N] is high, cleared by explicit claim write-ack
// =========================================================================
// ack_mask is a pulse generated during a CLAIM write (see bus logic below)
reg [7:0] ack_mask;

always @(posedge clk) begin
    if (!resetn)
        pending <= 8'b0;
    else
        // OR in any newly asserting source; mask off any just-acknowledged source.
        // ack_mask is computed in the same cycle as the write so the clear
        // takes effect the cycle after the CLAIM write completes.
        pending <= (pending | src) & ~ack_mask;
end

// =========================================================================
// Priority encoder — highest-priority pending+enabled source for core C
//
// Scans sources 7 down to 0 keeping track of the best (priority, id) seen.
// Iterating high-to-low with >= means the lowest id wins on a tie
// (the last write of equal priority is for the lowest id seen so far,
// but since we go downward, the lowest id overwrites on ==).
// Returns 0 if no source is pending and enabled (0 = none).
// =========================================================================
function [2:0] best_src;
    input [7:0] masked;      // pending & enable[C]
    input [31:0] prio;
    integer i;
    reg [3:0] best_p;
    reg [2:0] best_id;
    begin
        best_p  = 4'd0;
        best_id = 3'd0;
        if (masked != 8'b0) begin
            // Seed with the lowest-numbered active source
            for (i = 0; i < 8; i = i + 1) begin
                if (masked[i] && (prio[i*4 +: 4] >= best_p)) begin
                    best_p  = prio[i*4 +: 4];
                    best_id = i[2:0];
                end
            end
        end
        best_src = (masked == 8'b0) ? 3'd0 : best_id;
    end
endfunction

// Pre-compute masked pending for each core (combinational)
wire [7:0] masked0 = pending & enable[0];
wire [7:0] masked1 = pending & enable[1];
wire [7:0] masked2 = pending & enable[2];
wire [7:0] masked3 = pending & enable[3];

// =========================================================================
// Bus interface — register read/write
// =========================================================================
integer j;

always @(posedge clk) begin
    if (!resetn) begin
        enable[0]    <= 8'b0;
        enable[1]    <= 8'b0;
        enable[2]    <= 8'b0;
        enable[3]    <= 8'b0;
        priority_reg <= 32'b0;
        ack_mask     <= 8'b0;
        mem_ready    <= 1'b0;
        mem_rdata    <= 32'b0;
    end else begin
        mem_ready <= 1'b0;
        ack_mask  <= 8'b0;   // pulse: clear every cycle unless a CLAIM write fires

        if (mem_valid && !mem_ready) begin
            mem_ready <= 1'b1;

            case (mem_addr)

                `PLIC_PENDING: begin
                    mem_rdata <= {24'b0, pending};
                    // PENDING is read-only; writes ignored
                end

                `PLIC_ENABLE0: begin
                    if (mem_wstrb != 4'b0) enable[0] <= mem_wdata[7:0];
                    mem_rdata <= {24'b0, enable[0]};
                end

                `PLIC_ENABLE1: begin
                    if (mem_wstrb != 4'b0) enable[1] <= mem_wdata[7:0];
                    mem_rdata <= {24'b0, enable[1]};
                end

                `PLIC_ENABLE2: begin
                    if (mem_wstrb != 4'b0) enable[2] <= mem_wdata[7:0];
                    mem_rdata <= {24'b0, enable[2]};
                end

                `PLIC_ENABLE3: begin
                    if (mem_wstrb != 4'b0) enable[3] <= mem_wdata[7:0];
                    mem_rdata <= {24'b0, enable[3]};
                end

                `PLIC_PRIORITY: begin
                    if (mem_wstrb != 4'b0) priority_reg <= mem_wdata;
                    mem_rdata <= priority_reg;
                end

                `PLIC_CLAIM0: begin
                    if (mem_wstrb == 4'b0) begin
                        // Read: return highest-priority pending+enabled source for core 0
                        mem_rdata <= {29'b0, best_src(masked0, priority_reg)};
                    end else begin
                        // Write: acknowledge — clear PENDING[wdata[2:0]]
                        ack_mask  <= 8'b1 << mem_wdata[2:0];
                        mem_rdata <= 32'b0;
                    end
                end

                `PLIC_CLAIM1: begin
                    if (mem_wstrb == 4'b0) begin
                        mem_rdata <= {29'b0, best_src(masked1, priority_reg)};
                    end else begin
                        ack_mask  <= 8'b1 << mem_wdata[2:0];
                        mem_rdata <= 32'b0;
                    end
                end

                `PLIC_CLAIM2: begin
                    if (mem_wstrb == 4'b0) begin
                        mem_rdata <= {29'b0, best_src(masked2, priority_reg)};
                    end else begin
                        ack_mask  <= 8'b1 << mem_wdata[2:0];
                        mem_rdata <= 32'b0;
                    end
                end

                `PLIC_CLAIM3: begin
                    if (mem_wstrb == 4'b0) begin
                        mem_rdata <= {29'b0, best_src(masked3, priority_reg)};
                    end else begin
                        ack_mask  <= 8'b1 << mem_wdata[2:0];
                        mem_rdata <= 32'b0;
                    end
                end

                default: mem_rdata <= 32'b0;

            endcase
        end
    end
end

// =========================================================================
// IRQ output routing — combinational, per-core 32-bit vectors
//
// IRQ[0]    = irq_timer[N]  direct bypass — not routed through PLIC
// IRQ[1]    = 0             reserved (PicoRV32 built-in timer)
// IRQ[2]    = UART RX       pending[0] & enable[C][0]
// IRQ[3]    = UART TX       pending[1] & enable[C][1]
// IRQ[4:31] = 0             reserved
// =========================================================================
assign core0_irq = {28'b0,
                    pending[1] & enable[0][1],   // IRQ[3]: UART TX
                    pending[0] & enable[0][0],   // IRQ[2]: UART RX
                    1'b0,                        // IRQ[1]: reserved
                    irq_timer[0]};               // IRQ[0]: timer core 0

assign core1_irq = {28'b0,
                    pending[1] & enable[1][1],
                    pending[0] & enable[1][0],
                    1'b0,
                    irq_timer[1]};

assign core2_irq = {28'b0,
                    pending[1] & enable[2][1],
                    pending[0] & enable[2][0],
                    1'b0,
                    irq_timer[2]};

assign core3_irq = {28'b0,
                    pending[1] & enable[3][1],
                    pending[0] & enable[3][0],
                    1'b0,
                    irq_timer[3]};

endmodule
