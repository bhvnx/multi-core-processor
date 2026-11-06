`include "memory_map.vh"
`timescale 1 ns / 1 ps

/*
 * uart.v — Full-duplex UART controller
 *
 * Base address: MM_UART0_BASE (0x1000_0000)
 * mem_addr[7:0] is the register offset; upper bits are decoded by addr_decoder.
 *
 * Sub-modules (all in this file):
 *   Baud Generator — pulse-based (not divided clock); TX: clk/BAUD_DIV,
 *                    RX: clk/(BAUD_DIV>>3) for 8x oversampling
 *   TX FSM         — IDLE → START → DATA → PARITY → STOP
 *   RX FSM         — IDLE → START → DATA → PARITY → STOP → DONE
 *                    includes 2-flop CDC synchroniser on uart_rx
 *   TX FIFO        — 16×8 bit
 *   RX FIFO        — 16×10 bit (8 data + parity_err + frame_err flags)
 */

module uart (
    input  wire        clk,
    input  wire        resetn,

    // Bus interface (from addr_decoder; mem_addr[7:0] is register offset)
    input  wire        mem_valid,
    input  wire [ 7:0] mem_addr,
    input  wire [31:0] mem_wdata,
    input  wire [ 3:0] mem_wstrb,
    output reg         mem_ready,
    output reg  [31:0] mem_rdata,

    // IRQ outputs
    output wire        irq_rx,   // → PicoRV32 irq[2]: RX data available
    output wire        irq_tx,   // → PicoRV32 irq[3]: TX FIFO empty

    // Serial lines
    output reg         uart_tx,
    input  wire        uart_rx
);

// =========================================================================
// FIFO depth (must be a power of 2)
// =========================================================================
localparam DEPTH     = 16;
localparam ADDR_BITS = 4;   // log2(DEPTH)

// =========================================================================
// Control registers
// =========================================================================
reg [15:0] baud_div;    // reset = 434 → 115200 bps at 50 MHz
reg [ 1:0] irq_en;      // [0]=TX-empty IRQ en, [1]=RX-ready IRQ en
reg [ 1:0] parity_cfg;  // 00=none, 01=odd, 10=even

// Sticky error/status flags
reg frame_err;
reg parity_err_sticky;
reg rx_ovf;

// =========================================================================
// Baud generator
// =========================================================================
// TX: one pulse per bit period  (frequency = clk / baud_div)
// RX: 8x faster                 (frequency = clk / (baud_div >> 3))
//
// Using counters that reload on underflow — generates enable pulses, not
// divided clocks.  baud_div >> 3 introduces <0.5% rounding error at 115200.

reg [15:0] tx_baud_cnt;
reg [15:0] rx_baud_cnt;

wire baud_tx = (tx_baud_cnt == 16'd0);
wire baud_rx = (rx_baud_cnt == 16'd0);

always @(posedge clk) begin
    if (!resetn) begin
        tx_baud_cnt <= 16'd0;
        rx_baud_cnt <= 16'd0;
    end else begin
        tx_baud_cnt <= baud_tx ? (baud_div - 1)         : (tx_baud_cnt - 1);
        rx_baud_cnt <= baud_rx ? ((baud_div >> 3) - 1)  : (rx_baud_cnt - 1);
    end
end

// =========================================================================
// TX FIFO
// =========================================================================
reg [7:0] tx_fifo [0:DEPTH-1];
reg [ADDR_BITS-1:0]  tx_wr, tx_rd;
reg [ADDR_BITS  :0]  tx_cnt;   // extra bit handles full vs. empty

wire tx_full  = (tx_cnt == DEPTH);
wire tx_empty = (tx_cnt == 0);

wire tx_push = mem_valid && (mem_wstrb != 4'b0) &&
               (mem_addr == `UART_TX_DATA) && !tx_full;
wire tx_pop;   // asserted by TX FSM when it latches the next byte

always @(posedge clk) begin
    if (!resetn) begin
        tx_wr  <= 0;
        tx_rd  <= 0;
        tx_cnt <= 0;
    end else begin
        if (tx_push) begin
            tx_fifo[tx_wr] <= mem_wdata[7:0];
            tx_wr          <= tx_wr + 1;
        end
        if (tx_pop)  tx_rd <= tx_rd + 1;
        // Count: +1 push only, -1 pop only, ±0 simultaneous
        if (tx_push && !tx_pop) tx_cnt <= tx_cnt + 1;
        if (!tx_push &&  tx_pop) tx_cnt <= tx_cnt - 1;
    end
end

// =========================================================================
// TX FSM
// =========================================================================
localparam TX_IDLE   = 3'd0;
localparam TX_START  = 3'd1;
localparam TX_DATA   = 3'd2;
localparam TX_PARITY = 3'd3;
localparam TX_STOP   = 3'd4;

reg [2:0] tx_state;
reg [7:0] tx_shift;
reg [2:0] tx_bit;
reg       tx_par;    // running parity over transmitted bits

// Pop fires when the FSM is about to start a new frame
assign tx_pop = (tx_state == TX_IDLE) && !tx_empty && baud_tx;

always @(posedge clk) begin
    if (!resetn) begin
        tx_state <= TX_IDLE;
        uart_tx  <= 1'b1;
        tx_shift <= 8'd0;
        tx_bit   <= 3'd0;
        tx_par   <= 1'b0;
    end else if (baud_tx) begin
        case (tx_state)
            TX_IDLE: begin
                uart_tx <= 1'b1;
                if (!tx_empty) begin
                    // Latch next byte from FIFO head (rd ptr advances via tx_pop)
                    tx_shift <= tx_fifo[tx_rd];
                    // Seed parity: odd parity starts with 1 so XOR chain yields correct result
                    tx_par   <= (parity_cfg == 2'b01) ? 1'b1 : 1'b0;
                    tx_state <= TX_START;
                end
            end
            TX_START: begin
                uart_tx  <= 1'b0;   // start bit
                tx_bit   <= 3'd0;
                tx_state <= TX_DATA;
            end
            TX_DATA: begin
                uart_tx  <= tx_shift[0];
                tx_par   <= tx_par ^ tx_shift[0];
                tx_shift <= {1'b0, tx_shift[7:1]};
                tx_bit   <= tx_bit + 1;
                if (tx_bit == 3'd7)
                    tx_state <= (parity_cfg != 2'b00) ? TX_PARITY : TX_STOP;
            end
            TX_PARITY: begin
                uart_tx  <= tx_par;
                tx_state <= TX_STOP;
            end
            TX_STOP: begin
                uart_tx  <= 1'b1;   // stop bit
                tx_state <= TX_IDLE;
            end
        endcase
    end
end

// =========================================================================
// RX CDC synchroniser — 2 flops to resolve metastability
// =========================================================================
reg rx_s0, rx_s1;
always @(posedge clk) begin
    rx_s0 <= uart_rx;
    rx_s1 <= rx_s0;
end
wire rx_in = rx_s1;

// =========================================================================
// RX FIFO — 10 bits wide: [9]=parity_err, [8]=frame_err, [7:0]=data
// =========================================================================
reg [9:0]            rx_fifo [0:DEPTH-1];
reg [ADDR_BITS-1:0]  rx_wr, rx_rd;
reg [ADDR_BITS  :0]  rx_cnt;

wire rx_full  = (rx_cnt == DEPTH);
wire rx_empty = (rx_cnt == 0);

// Push: RX FSM writes on DONE state
wire        rx_push;
wire [ 9:0] rx_push_data;
// Pop: bus read of RX_DATA
wire rx_pop = mem_valid && (mem_wstrb == 4'b0) &&
              (mem_addr == `UART_RX_DATA) && !rx_empty;

always @(posedge clk) begin
    if (!resetn) begin
        rx_wr  <= 0;
        rx_rd  <= 0;
        rx_cnt <= 0;
        rx_ovf <= 0;
    end else begin
        if (rx_push) begin
            if (!rx_full) begin
                rx_fifo[rx_wr] <= rx_push_data;
                rx_wr          <= rx_wr + 1;
            end else begin
                rx_ovf <= 1'b1;   // sticky overflow flag
            end
        end
        if (rx_pop) rx_rd <= rx_rd + 1;
        if  (rx_push && !rx_full && !rx_pop) rx_cnt <= rx_cnt + 1;
        if (!rx_push &&                rx_pop) rx_cnt <= rx_cnt - 1;
        // push + pop at same time: count unchanged
    end
end

// =========================================================================
// RX FSM — 8x oversampled, samples at mid-bit (sample_cnt == 3)
//
// rx_sample_cnt is a free-running 3-bit counter driven by baud_rx pulses.
// It is reset to 0 only when a start bit falling edge is detected.
// Sampling at cnt==3 (the 4th pulse) aligns to the middle of each bit:
//   Start bit:  reset at falling edge → 4 pulses → sample at cnt==3
//   Data bits:  counter continues 4→5→6→7→0→1→2→3=sample, 8 pulses per bit
// =========================================================================
localparam RX_IDLE   = 3'd0;
localparam RX_START  = 3'd1;
localparam RX_DATA   = 3'd2;
localparam RX_PARITY = 3'd3;
localparam RX_STOP   = 3'd4;
localparam RX_DONE   = 3'd5;

reg [2:0] rx_state;
reg [7:0] rx_shift;
reg [2:0] rx_bit;
reg [2:0] rx_sample_cnt;
reg       rx_par;         // running parity over received data bits
reg       rx_ferr;        // frame error for current frame
reg       rx_perr;        // parity error for current frame

assign rx_push      = (rx_state == RX_DONE);
assign rx_push_data = {rx_perr, rx_ferr, rx_shift};

always @(posedge clk) begin
    if (!resetn) begin
        rx_state      <= RX_IDLE;
        rx_shift      <= 8'd0;
        rx_bit        <= 3'd0;
        rx_sample_cnt <= 3'd0;
        rx_par        <= 1'b0;
        rx_ferr       <= 1'b0;
        rx_perr       <= 1'b0;
        frame_err     <= 1'b0;
        parity_err_sticky <= 1'b0;
    end else begin
        case (rx_state)

            RX_IDLE: begin
                if (!rx_in) begin
                    // Falling edge — possible start bit; arm sample counter
                    rx_sample_cnt <= 3'd0;
                    rx_state      <= RX_START;
                end
            end

            RX_START: begin
                if (baud_rx) begin
                    rx_sample_cnt <= rx_sample_cnt + 1;
                    if (rx_sample_cnt == 3'd3) begin
                        // Mid-start-bit: confirm still low
                        if (rx_in) begin
                            rx_state <= RX_IDLE;   // glitch — abort
                        end else begin
                            rx_bit <= 3'd0;
                            rx_par <= (parity_cfg == 2'b01) ? 1'b1 : 1'b0;
                            rx_state <= RX_DATA;
                            // sample_cnt continues from 4 so next sample is 8 pulses later
                        end
                    end
                end
            end

            RX_DATA: begin
                if (baud_rx) begin
                    rx_sample_cnt <= rx_sample_cnt + 1;
                    if (rx_sample_cnt == 3'd3) begin
                        rx_shift <= {rx_in, rx_shift[7:1]};   // LSb first
                        rx_par   <= rx_par ^ rx_in;
                        rx_bit   <= rx_bit + 1;
                        if (rx_bit == 3'd7)
                            rx_state <= (parity_cfg != 2'b00) ? RX_PARITY : RX_STOP;
                    end
                end
            end

            RX_PARITY: begin
                if (baud_rx) begin
                    rx_sample_cnt <= rx_sample_cnt + 1;
                    if (rx_sample_cnt == 3'd3) begin
                        rx_perr  <= (rx_in != rx_par);
                        rx_state <= RX_STOP;
                    end
                end
            end

            RX_STOP: begin
                if (baud_rx) begin
                    rx_sample_cnt <= rx_sample_cnt + 1;
                    if (rx_sample_cnt == 3'd3) begin
                        rx_ferr           <= !rx_in;        // stop bit must be 1
                        frame_err         <= frame_err | !rx_in;
                        parity_err_sticky <= parity_err_sticky | rx_perr;
                        rx_state          <= RX_DONE;
                    end
                end
            end

            RX_DONE: begin
                // rx_push is high this cycle; RX FIFO captures rx_push_data
                rx_ferr  <= 1'b0;
                rx_perr  <= 1'b0;
                rx_state <= RX_IDLE;
            end

        endcase
    end
end

// =========================================================================
// Bus register read / write
// =========================================================================
wire bus_wr = mem_valid && (mem_wstrb != 4'b0);
wire bus_rd = mem_valid && (mem_wstrb == 4'b0);

always @(posedge clk) begin
    if (!resetn) begin
        baud_div   <= 16'd434;
        irq_en     <= 2'b00;
        parity_cfg <= 2'b00;
        mem_ready  <= 1'b0;
        mem_rdata  <= 32'd0;
    end else begin
        mem_ready <= 1'b0;

        if (mem_valid && !mem_ready) begin
            mem_ready <= 1'b1;

            case (mem_addr)
                `UART_TX_DATA: begin
                    // Write captured by TX FIFO push logic above
                    mem_rdata <= 32'd0;
                end

                `UART_RX_DATA: begin
                    // Pop captured by RX FIFO logic above; return head of FIFO
                    mem_rdata <= rx_empty ? 32'd0
                                          : {1'b1, 23'd0, rx_fifo[rx_rd][7:0]};
                end

                `UART_STATUS: begin
                    if (bus_wr) begin
                        // Any write clears sticky error flags
                        frame_err         <= 1'b0;
                        parity_err_sticky <= 1'b0;
                        rx_ovf            <= 1'b0;
                    end
                    mem_rdata <= {25'd0,
                                  rx_ovf,
                                  parity_err_sticky,
                                  frame_err,
                                  (rx_state != RX_IDLE),   // RX_BUSY
                                  (tx_state != TX_IDLE),   // TX_BUSY
                                  !rx_empty,               // RX_AVAIL
                                  !tx_full};               // TX_READY
                end

                `UART_BAUD_DIV: begin
                    if (bus_wr) baud_div <= mem_wdata[15:0];
                    mem_rdata <= {16'd0, baud_div};
                end

                `UART_IRQ_EN: begin
                    if (bus_wr) irq_en <= mem_wdata[1:0];
                    mem_rdata <= {30'd0, irq_en};
                end

                `UART_PARITY_CFG: begin
                    if (bus_wr) parity_cfg <= mem_wdata[1:0];
                    mem_rdata <= {30'd0, parity_cfg};
                end

                default: mem_rdata <= 32'd0;
            endcase
        end
    end
end

// =========================================================================
// IRQ — level-sensitive; held until firmware services the condition
// =========================================================================
assign irq_rx = irq_en[1] && !rx_empty;   // RX FIFO has data
assign irq_tx = irq_en[0] &&  tx_empty;   // TX FIFO drained

endmodule
