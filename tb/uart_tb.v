`timescale 1ns/1ps
/*
 * uart_tb.v — Block-level testbench for uart.v
 *
 * Derived from docs/uart_spec.md and tb/uart_test_plan.md.
 * Does NOT include or read uart.v — drives the DUT only through its ports.
 *
 * Clock: 50 MHz (20 ns period)
 * Default baud: 115200 bps  →  BAUD_DIV = 434
 *
 * Cycle reference (from test plan):
 *   TX baud period          = BAUD_DIV        = 434 cycles / bit
 *   RX baud period          = BAUD_DIV >> 3   =  54 cycles / sample
 *   RX start-bit confirm    = 4 × 54          = 216 cycles after falling edge
 *   RX bit-to-bit spacing   = 8 × 54          = 432 cycles
 *   Full 8N1 TX frame       = 10 × 434        = 4340 cycles
 *   Full 8N1 RX frame       = 4×54 + 10×8×54 = 4536 cycles
 */

module uart_tb;

// =========================================================================
// Parameters
// =========================================================================
localparam CLK_HALF    = 10;              // 10 ns half-period → 50 MHz
localparam CLK_PERIOD  = 2 * CLK_HALF;
localparam BAUD_DIV    = 434;
localparam RX_DIV      = BAUD_DIV >> 3;  // 54
localparam FRAME_8N1   = 10 * BAUD_DIV;  // 4340 cycles (start+8data+stop)
localparam FRAME_8P1   = 11 * BAUD_DIV;  // 4774 cycles (+ parity)

// =========================================================================
// DUT ports
// =========================================================================
reg         clk;
reg         resetn;
reg         mem_valid;
reg  [ 7:0] mem_addr;
reg  [31:0] mem_wdata;
reg  [ 3:0] mem_wstrb;
wire        mem_ready;
wire [31:0] mem_rdata;
wire        irq_rx;
wire        irq_tx;
wire        uart_tx;
reg         uart_rx;

// =========================================================================
// DUT instantiation
// =========================================================================
uart dut (
    .clk        (clk),
    .resetn     (resetn),
    .mem_valid  (mem_valid),
    .mem_addr   (mem_addr),
    .mem_wdata  (mem_wdata),
    .mem_wstrb  (mem_wstrb),
    .mem_ready  (mem_ready),
    .mem_rdata  (mem_rdata),
    .irq_rx     (irq_rx),
    .irq_tx     (irq_tx),
    .uart_tx    (uart_tx),
    .uart_rx    (uart_rx)
);

// =========================================================================
// Clock
// =========================================================================
initial clk = 0;
always  #CLK_HALF clk = ~clk;

// =========================================================================
// Register offsets (from memory_map.vh / uart_spec §4)
// =========================================================================
localparam TX_DATA_OFF    = 8'h00;
localparam RX_DATA_OFF    = 8'h04;
localparam STATUS_OFF     = 8'h08;
localparam BAUD_DIV_OFF   = 8'h0C;
localparam IRQ_EN_OFF     = 8'h10;
localparam PARITY_CFG_OFF = 8'h14;

// STATUS bit masks
localparam TX_READY   = 32'h01;
localparam RX_AVAIL   = 32'h02;
localparam TX_BUSY    = 32'h04;
localparam RX_BUSY    = 32'h08;
localparam FRAME_ERR  = 32'h10;
localparam PARITY_ERR = 32'h20;
localparam RX_OVF     = 32'h40;

// =========================================================================
// Pass / fail counters
// =========================================================================
integer pass_cnt;
integer fail_cnt;

// =========================================================================
// Task: do_reset
// =========================================================================
task do_reset;
    begin
        resetn    = 0;
        mem_valid = 0;
        mem_wstrb = 4'b0;
        mem_addr  = 8'h0;
        mem_wdata = 32'h0;
        uart_rx   = 1;        // idle high
        repeat (5) @(posedge clk);
        resetn = 1;
        @(posedge clk);
    end
endtask

// =========================================================================
// Task: bus_write (addr[7:0], data, wstrb)
//   Drives one write transaction and waits for mem_ready.
// =========================================================================
task bus_write;
    input [ 7:0] addr;
    input [31:0] data;
    input [ 3:0] wstrb;
    begin
        @(negedge clk);
        mem_valid = 1;
        mem_addr  = addr;
        mem_wdata = data;
        mem_wstrb = wstrb;
        @(posedge clk);
        wait (mem_ready === 1'b1);
        @(negedge clk);
        mem_valid = 0;
        mem_wstrb = 4'b0;
        @(posedge clk);
    end
endtask

// =========================================================================
// Task: bus_read (addr[7:0]) → rdata
// =========================================================================
task bus_read;
    input  [ 7:0] addr;
    output [31:0] rdata;
    begin
        @(negedge clk);
        mem_valid = 1;
        mem_addr  = addr;
        mem_wstrb = 4'b0;
        @(posedge clk);
        wait (mem_ready === 1'b1);
        rdata = mem_rdata;
        @(negedge clk);
        mem_valid = 0;
        @(posedge clk);
    end
endtask

// =========================================================================
// Task: drive_rx_frame
//   Drives a complete UART frame on uart_rx at BAUD_DIV cycles/bit.
//   parity_en=1 adds a parity bit before the stop bit.
// =========================================================================
task drive_rx_frame;
    input [7:0] data;
    input       parity_en;
    input       parity_val;
    integer i;
    begin
        uart_rx = 0;                              // start bit
        repeat (BAUD_DIV) @(posedge clk);
        for (i = 0; i < 8; i = i + 1) begin      // data bits LSb first
            uart_rx = data[i];
            repeat (BAUD_DIV) @(posedge clk);
        end
        if (parity_en) begin
            uart_rx = parity_val;
            repeat (BAUD_DIV) @(posedge clk);
        end
        uart_rx = 1;                              // stop bit
        repeat (BAUD_DIV) @(posedge clk);
    end
endtask

// =========================================================================
// Task: capture_tx_frame
//   Waits for the next start bit on uart_tx, then samples each data bit at
//   mid-bit (BAUD_DIV/2 cycles after the leading edge of each slot).
//   Returns 8 data bits.  parity_slot is whatever is in bit-9 position;
//   stop_slot is bit-10.
// =========================================================================
task capture_tx_frame;
    output [7:0] data;
    output       parity_slot;
    output       stop_slot;
    integer i;
    begin
        @(negedge uart_tx);                        // wait for start bit
        repeat (BAUD_DIV/2) @(posedge clk);        // skip to mid-start-bit
        // Sample 8 data bits
        for (i = 0; i < 8; i = i + 1) begin
            repeat (BAUD_DIV) @(posedge clk);
            data[i] = uart_tx;
        end
        // Bit-9 slot (parity or stop)
        repeat (BAUD_DIV) @(posedge clk);
        parity_slot = uart_tx;
        // Bit-10 slot (stop or idle)
        repeat (BAUD_DIV) @(posedge clk);
        stop_slot = uart_tx;
    end
endtask

// =========================================================================
// Task: check
// =========================================================================
task check;
    input [511:0] name;
    input         cond;
    begin
        if (cond) begin
            $display("  PASS  %0s", name);
            pass_cnt = pass_cnt + 1;
        end else begin
            $display("  FAIL  %0s  (at time %0t)", name, $time);
            fail_cnt = fail_cnt + 1;
        end
    end
endtask

// =========================================================================
// Shared variables
// =========================================================================
reg [31:0] rd;          // bus_read result
reg [ 7:0] cap_data;    // capture_tx_frame result
reg        cap_par;
reg        cap_stop;
integer    t0, t1, dt;  // for cycle measurement
integer    k;

// =========================================================================
// Main test sequence
// =========================================================================
initial begin
    $dumpfile("uart.vcd");
    $dumpvars(0, uart_tb);

    pass_cnt = 0;
    fail_cnt = 0;

    $display("");
    $display("=================================================");
    $display("  UART Controller Block-Level Testbench");
    $display("  clk=50MHz  BAUD_DIV=%0d  baud=115200", BAUD_DIV);
    $display("  TX period=%0d cycles  RX period=%0d cycles", BAUD_DIV, RX_DIV);
    $display("=================================================");
    $display("");

    do_reset;

    // =================================================================
    // T-RST: Reset and defaults
    // =================================================================
    $display("--- T-RST: Reset and Defaults ---");

    check("T-RST-01 uart_tx idles high after reset", uart_tx  === 1'b1);
    check("T-RST-01 irq_rx low after reset",         irq_rx   === 1'b0);
    check("T-RST-01 irq_tx low after reset",         irq_tx   === 1'b0);
    check("T-RST-01 mem_ready low after reset",      mem_ready === 1'b0);

    bus_read(STATUS_OFF, rd);
    check("T-RST-02 STATUS reset = 0x00000001", rd === 32'h00000001);

    bus_read(BAUD_DIV_OFF, rd);
    check("T-RST-03 BAUD_DIV reset = 434 (0x1B2)", rd === 32'h000001B2);

    bus_read(IRQ_EN_OFF, rd);
    check("T-RST-04 IRQ_EN reset = 0", rd === 32'h00000000);

    bus_read(PARITY_CFG_OFF, rd);
    check("T-RST-04 PARITY_CFG reset = 0", rd === 32'h00000000);

    // =================================================================
    // T-BDG: Baud generator timing
    // =================================================================
    $display("");
    $display("--- T-BDG: Baud Generator Timing ---");

    // T-BDG-01: Measure TX bit period on uart_tx
    // Send 0x55 (D0=1 so uart_tx goes high after start bit — easy edge to catch)
    bus_write(TX_DATA_OFF, 32'h55, 4'b0001);
    @(negedge uart_tx);                   // start bit begins
    t0 = $time / CLK_PERIOD;
    @(posedge uart_tx);                   // D0=1 → rising edge
    t1 = $time / CLK_PERIOD;
    dt = t1 - t0;
    check("T-BDG-01 TX baud period = 434 cycles ±1",
          (dt >= BAUD_DIV-1) && (dt <= BAUD_DIV+1));
    $display("         Measured TX period: %0d cycles (expected %0d)", dt, BAUD_DIV);

    // Wait for frame to clear
    repeat (FRAME_8N1 + 200) @(posedge clk);

    // T-BDG-03: Reprogram BAUD_DIV to 868 (57600 bps) and measure
    bus_write(BAUD_DIV_OFF, 32'd868, 4'b0011);
    bus_write(TX_DATA_OFF,  32'h55,  4'b0001);
    @(negedge uart_tx);
    t0 = $time / CLK_PERIOD;
    @(posedge uart_tx);
    t1 = $time / CLK_PERIOD;
    dt = t1 - t0;
    check("T-BDG-03 TX period = 868 cycles after BAUD_DIV=868",
          (dt >= 867) && (dt <= 869));
    $display("         Measured TX period: %0d cycles (expected 868)", dt);

    repeat (11 * 868 + 200) @(posedge clk);
    // Restore default baud
    bus_write(BAUD_DIV_OFF, 32'd434, 4'b0011);

    // =================================================================
    // T-TX: Transmitter path
    // =================================================================
    $display("");
    $display("--- T-TX: Transmitter ---");

    do_reset;

    // T-TX-01: Transmit 0x55 and verify bit pattern
    // 0x55 = 0101_0101 → D0=1,D1=0,D2=1,D3=0,D4=1,D5=0,D6=1,D7=0
    bus_write(TX_DATA_OFF, 32'h55, 4'b0001);
    capture_tx_frame(cap_data, cap_par, cap_stop);
    check("T-TX-01 transmit 0x55 bit pattern correct", cap_data === 8'h55);
    // No parity — cap_par slot is stop bit (must be 1)
    check("T-TX-01 stop bit = 1 (no parity)", cap_par === 1'b1);

    // T-TX-02: Transmit 0xAA — verify LSb-first ordering
    bus_write(TX_DATA_OFF, 32'hAA, 4'b0001);
    capture_tx_frame(cap_data, cap_par, cap_stop);
    check("T-TX-02 transmit 0xAA bit pattern correct", cap_data === 8'hAA);

    // T-TX-03: Transmit 0x00 — all data bits low
    bus_write(TX_DATA_OFF, 32'h00, 4'b0001);
    capture_tx_frame(cap_data, cap_par, cap_stop);
    check("T-TX-03 transmit 0x00", cap_data === 8'h00);
    repeat (BAUD_DIV) @(posedge clk);
    check("T-TX-03 line idles high after all-zero frame", uart_tx === 1'b1);

    // T-TX-04: Transmit 0xFF — all data bits high
    bus_write(TX_DATA_OFF, 32'hFF, 4'b0001);
    capture_tx_frame(cap_data, cap_par, cap_stop);
    check("T-TX-04 transmit 0xFF", cap_data === 8'hFF);

    // T-TX-05: Back-to-back frames — write two bytes without gap
    bus_write(TX_DATA_OFF, 32'hA5, 4'b0001);
    bus_write(TX_DATA_OFF, 32'h5A, 4'b0001);
    capture_tx_frame(cap_data, cap_par, cap_stop);
    check("T-TX-05 back-to-back frame 1 = 0xA5", cap_data === 8'hA5);
    capture_tx_frame(cap_data, cap_par, cap_stop);
    check("T-TX-05 back-to-back frame 2 = 0x5A", cap_data === 8'h5A);

    // =================================================================
    // T-TXF: TX FIFO
    // =================================================================
    $display("");
    $display("--- T-TXF: TX FIFO ---");

    do_reset;

    // T-TXF-01: Empty on reset
    bus_read(STATUS_OFF, rd);
    check("T-TXF-01 TX_READY=1 after reset", (rd & TX_READY) === TX_READY);
    check("T-TXF-01 TX_BUSY=0 after reset",  (rd & TX_BUSY)  === 32'h0);

    // T-TXF-04: STATUS[0] deasserts after exactly 16 writes
    for (k = 0; k < 15; k = k + 1)
        bus_write(TX_DATA_OFF, k, 4'b0001);
    bus_read(STATUS_OFF, rd);
    check("T-TXF-04 TX_READY=1 after 15 writes", (rd & TX_READY) === TX_READY);
    bus_write(TX_DATA_OFF, 32'hFF, 4'b0001);    // 16th — fills FIFO
    bus_read(STATUS_OFF, rd);
    check("T-TXF-04 TX_READY=0 after 16 writes (FIFO full)", (rd & TX_READY) === 32'h0);

    // T-TXF-08: FIFO ordering — drain and check first two bytes
    capture_tx_frame(cap_data, cap_par, cap_stop);
    check("T-TXF-08 FIFO order: first out = 0x00", cap_data === 8'h00);
    capture_tx_frame(cap_data, cap_par, cap_stop);
    check("T-TXF-08 FIFO order: second out = 0x01", cap_data === 8'h01);

    // Let FIFO drain fully (14 remaining frames)
    repeat (16 * FRAME_8N1 + 500) @(posedge clk);

    // T-TXF-05: TX_READY re-asserts when FIFO empties
    bus_read(STATUS_OFF, rd);
    check("T-TXF-05 TX_READY=1 after FIFO fully drained", (rd & TX_READY) === TX_READY);

    // T-TXF-06: IRQ[3] TX empty IRQ
    bus_write(IRQ_EN_OFF, 32'h1, 4'b0001);     // enable TX IRQ
    bus_write(TX_DATA_OFF, 32'hBB, 4'b0001);   // load 1 byte
    @(posedge clk);
    check("T-TXF-06 irq_tx=0 while FIFO non-empty", irq_tx === 1'b0);
    repeat (FRAME_8N1 + 200) @(posedge clk);
    check("T-TXF-06 irq_tx=1 when FIFO empty",      irq_tx === 1'b1);
    bus_write(TX_DATA_OFF, 32'hCC, 4'b0001);   // reload
    @(posedge clk);
    check("T-TXF-06 irq_tx=0 after reload",          irq_tx === 1'b0);
    bus_write(IRQ_EN_OFF, 32'h0, 4'b0001);     // disable IRQ
    repeat (FRAME_8N1 + 200) @(posedge clk);

    // T-TXF-07: irq_tx stays low with IRQ_EN[0]=0 and FIFO empty
    check("T-TXF-07 irq_tx=0 when disabled and FIFO empty", irq_tx === 1'b0);

    // =================================================================
    // T-RX: Receiver path
    // =================================================================
    $display("");
    $display("--- T-RX: Receiver ---");

    do_reset;

    // T-RX-01: Receive 0xA5, no parity
    drive_rx_frame(8'hA5, 0, 0);
    repeat (200) @(posedge clk);
    bus_read(STATUS_OFF, rd);
    check("T-RX-01 RX_AVAIL set after receive",  (rd & RX_AVAIL) === RX_AVAIL);
    bus_read(RX_DATA_OFF, rd);
    check("T-RX-01 received data = 0xA5",        rd[7:0] === 8'hA5);
    check("T-RX-01 valid bit[31] = 1",           rd[31]  === 1'b1);

    // T-RX-02: Glitch rejection — pulse shorter than start-bit confirm window
    // Confirm window = 4 × RX_DIV = 216 cycles; use 100 cycles (safely below)
    uart_rx = 0;
    repeat (100) @(posedge clk);
    uart_rx = 1;
    repeat (500) @(posedge clk);
    bus_read(STATUS_OFF, rd);
    check("T-RX-02 glitch <216 cycles rejected (RX_AVAIL=0)", (rd & RX_AVAIL) === 32'h0);

    // T-RX-03: Receive 0x37 and verify data
    drive_rx_frame(8'h37, 0, 0);
    repeat (200) @(posedge clk);
    bus_read(STATUS_OFF, rd);
    check("T-RX-03 RX_AVAIL set",         (rd & RX_AVAIL) === RX_AVAIL);
    bus_read(RX_DATA_OFF, rd);
    check("T-RX-03 received 0x37",         rd[7:0] === 8'h37);

    // T-RX-04: Back-to-back receive
    drive_rx_frame(8'hDE, 0, 0);
    drive_rx_frame(8'hAD, 0, 0);
    repeat (200) @(posedge clk);
    bus_read(RX_DATA_OFF, rd);
    check("T-RX-04 back-to-back frame 1 = 0xDE", rd[7:0] === 8'hDE);
    bus_read(RX_DATA_OFF, rd);
    check("T-RX-04 back-to-back frame 2 = 0xAD", rd[7:0] === 8'hAD);

    // T-RX-05: +5% baud tolerance — drive at BAUD_DIV×1.05 ≈ 455 cycles/bit
    begin : rx05_blk
        integer slow;
        slow = (BAUD_DIV * 105) / 100;   // 455
        // 0x55 = D0=1,D1=0,D2=1,D3=0,D4=1,D5=0,D6=1,D7=0
        uart_rx = 0; repeat (slow) @(posedge clk);  // start
        uart_rx = 1; repeat (slow) @(posedge clk);  // D0
        uart_rx = 0; repeat (slow) @(posedge clk);  // D1
        uart_rx = 1; repeat (slow) @(posedge clk);  // D2
        uart_rx = 0; repeat (slow) @(posedge clk);  // D3
        uart_rx = 1; repeat (slow) @(posedge clk);  // D4
        uart_rx = 0; repeat (slow) @(posedge clk);  // D5
        uart_rx = 1; repeat (slow) @(posedge clk);  // D6
        uart_rx = 0; repeat (slow) @(posedge clk);  // D7
        uart_rx = 1; repeat (slow) @(posedge clk);  // stop
    end
    repeat (300) @(posedge clk);
    bus_read(STATUS_OFF, rd);
    check("T-RX-05 +5% tolerance: RX_AVAIL set",   (rd & RX_AVAIL) === RX_AVAIL);
    bus_read(RX_DATA_OFF, rd);
    check("T-RX-05 +5% tolerance: data = 0x55",    rd[7:0] === 8'h55);

    // T-RX-06: -5% baud tolerance — drive at BAUD_DIV×0.95 ≈ 412 cycles/bit
    begin : rx06_blk
        integer fast;
        fast = (BAUD_DIV * 95) / 100;    // 412
        uart_rx = 0; repeat (fast) @(posedge clk);
        uart_rx = 1; repeat (fast) @(posedge clk);
        uart_rx = 0; repeat (fast) @(posedge clk);
        uart_rx = 1; repeat (fast) @(posedge clk);
        uart_rx = 0; repeat (fast) @(posedge clk);
        uart_rx = 1; repeat (fast) @(posedge clk);
        uart_rx = 0; repeat (fast) @(posedge clk);
        uart_rx = 1; repeat (fast) @(posedge clk);
        uart_rx = 0; repeat (fast) @(posedge clk);
        uart_rx = 1; repeat (fast) @(posedge clk);
    end
    repeat (300) @(posedge clk);
    bus_read(STATUS_OFF, rd);
    check("T-RX-06 -5% tolerance: RX_AVAIL set",   (rd & RX_AVAIL) === RX_AVAIL);
    bus_read(RX_DATA_OFF, rd);
    check("T-RX-06 -5% tolerance: data = 0x55",    rd[7:0] === 8'h55);

    // =================================================================
    // T-RXF: RX FIFO
    // =================================================================
    $display("");
    $display("--- T-RXF: RX FIFO ---");

    do_reset;

    // T-RXF-01: Empty on reset
    bus_read(STATUS_OFF, rd);
    check("T-RXF-01 RX_AVAIL=0 after reset", (rd & RX_AVAIL) === 32'h0);

    // T-RXF-07: Read from empty FIFO — bit[31] must be 0 (invalid)
    bus_read(RX_DATA_OFF, rd);
    check("T-RXF-07 empty read: bit[31]=0 (invalid)", rd[31] === 1'b0);

    // T-RXF-05: FIFO ordering
    drive_rx_frame(8'h11, 0, 0);
    repeat (50) @(posedge clk);
    drive_rx_frame(8'h22, 0, 0);
    repeat (50) @(posedge clk);
    drive_rx_frame(8'h33, 0, 0);
    repeat (FRAME_8N1 + 200) @(posedge clk);
    bus_read(RX_DATA_OFF, rd);
    check("T-RXF-05 FIFO order: 1st read = 0x11", rd[7:0] === 8'h11);
    bus_read(RX_DATA_OFF, rd);
    check("T-RXF-05 FIFO order: 2nd read = 0x22", rd[7:0] === 8'h22);
    bus_read(RX_DATA_OFF, rd);
    check("T-RXF-05 FIFO order: 3rd read = 0x33", rd[7:0] === 8'h33);

    // T-RXF-06: Each read dequeues exactly one entry
    drive_rx_frame(8'hAA, 0, 0);
    repeat (50) @(posedge clk);
    drive_rx_frame(8'hBB, 0, 0);
    repeat (FRAME_8N1 + 200) @(posedge clk);
    bus_read(RX_DATA_OFF, rd);  // pop first
    bus_read(STATUS_OFF, rd);
    check("T-RXF-06 RX_AVAIL=1 after reading 1 of 2", (rd & RX_AVAIL) === RX_AVAIL);

    // T-RXF-02: Fill FIFO to 16, no overflow yet
    do_reset;
    for (k = 0; k < 16; k = k + 1) begin
        drive_rx_frame(k[7:0], 0, 0);
        repeat (20) @(posedge clk);
    end
    repeat (FRAME_8N1 + 200) @(posedge clk);
    bus_read(STATUS_OFF, rd);
    check("T-RXF-02 RX_AVAIL set after 16 frames",  (rd & RX_AVAIL) === RX_AVAIL);
    check("T-RXF-02 RX_OVF=0 after exactly 16",     (rd & RX_OVF)   === 32'h0);

    // T-RXF-03: 17th frame overflows
    drive_rx_frame(8'hFF, 0, 0);
    repeat (FRAME_8N1 + 200) @(posedge clk);
    bus_read(STATUS_OFF, rd);
    check("T-RXF-03 RX_OVF=1 after 17th frame",    (rd & RX_OVF) === RX_OVF);

    // T-RXF-04: RX_OVF sticky — survives draining FIFO
    for (k = 0; k < 16; k = k + 1)
        bus_read(RX_DATA_OFF, rd);
    bus_read(STATUS_OFF, rd);
    check("T-RXF-04 RX_OVF sticky after drain",        (rd & RX_OVF) === RX_OVF);
    bus_write(STATUS_OFF, 32'h0, 4'b0001);             // write to STATUS to clear
    bus_read(STATUS_OFF, rd);
    check("T-RXF-04 RX_OVF cleared after STATUS write", (rd & RX_OVF) === 32'h0);

    // T-RXF-08: IRQ[2] RX data available
    bus_write(IRQ_EN_OFF, 32'h2, 4'b0001);             // enable RX IRQ
    check("T-RXF-08 irq_rx=0 before receive",          irq_rx === 1'b0);
    drive_rx_frame(8'hBE, 0, 0);
    repeat (FRAME_8N1 + 200) @(posedge clk);
    check("T-RXF-08 irq_rx=1 after receive",           irq_rx === 1'b1);
    bus_read(RX_DATA_OFF, rd);
    @(posedge clk);
    check("T-RXF-08 irq_rx=0 after FIFO drained",     irq_rx === 1'b0);
    bus_write(IRQ_EN_OFF, 32'h0, 4'b0001);

    // T-RXF-09: irq_rx stays 0 when IRQ_EN[1]=0
    drive_rx_frame(8'h7E, 0, 0);
    repeat (FRAME_8N1 + 200) @(posedge clk);
    check("T-RXF-09 irq_rx=0 when IRQ_EN[1]=0",       irq_rx === 1'b0);
    bus_read(RX_DATA_OFF, rd);  // drain

    // =================================================================
    // T-REG: Register access
    // =================================================================
    $display("");
    $display("--- T-REG: Register Access ---");

    do_reset;

    // T-REG-01: BAUD_DIV read-after-write
    bus_write(BAUD_DIV_OFF, 32'h00000100, 4'b0011);
    bus_read(BAUD_DIV_OFF, rd);
    check("T-REG-01 BAUD_DIV read-after-write = 0x100", rd[15:0] === 16'h0100);
    bus_write(BAUD_DIV_OFF, 32'd434, 4'b0011);  // restore

    // T-REG-02: IRQ_EN write mask — only bits[1:0] writable
    bus_write(IRQ_EN_OFF, 32'hFFFFFFFF, 4'b1111);
    bus_read(IRQ_EN_OFF, rd);
    check("T-REG-02 IRQ_EN only bits[1:0] stored", rd === 32'h00000003);
    bus_write(IRQ_EN_OFF, 32'h0, 4'b1111);

    // T-REG-03: PARITY_CFG write mask — only bits[1:0] writable
    bus_write(PARITY_CFG_OFF, 32'hFFFFFFFF, 4'b1111);
    bus_read(PARITY_CFG_OFF, rd);
    check("T-REG-03 PARITY_CFG only bits[1:0] stored", rd === 32'h00000003);
    bus_write(PARITY_CFG_OFF, 32'h0, 4'b1111);

    // T-REG-04/05: STATUS sticky bits cleared by write, live bits unaffected
    // Trigger FRAME_ERR first (via T-ERR-01 scenario)
    uart_rx = 0; repeat (BAUD_DIV) @(posedge clk);
    repeat (8) begin uart_rx = 0; repeat (BAUD_DIV) @(posedge clk); end
    uart_rx = 0; repeat (BAUD_DIV) @(posedge clk);  // stop=0
    uart_rx = 1; repeat (200) @(posedge clk);
    bus_read(STATUS_OFF, rd);
    check("T-REG-04 FRAME_ERR set before clear",   (rd & FRAME_ERR) === FRAME_ERR);
    bus_write(STATUS_OFF, 32'hDEADBEEF, 4'b1111);  // any write clears sticky bits
    bus_read(STATUS_OFF, rd);
    check("T-REG-04 FRAME_ERR cleared after STATUS write", (rd & FRAME_ERR) === 32'h0);
    check("T-REG-05 TX_READY unaffected by STATUS write",  (rd & TX_READY) === TX_READY);

    // =================================================================
    // T-PAR: Parity
    // =================================================================
    $display("");
    $display("--- T-PAR: Parity ---");

    do_reset;

    // T-PAR-01: TX even parity for 0x55 (four 1-bits → even parity bit = 0)
    bus_write(PARITY_CFG_OFF, 32'h2, 4'b0001);    // even parity
    bus_write(TX_DATA_OFF,    32'h55, 4'b0001);
    // Frame with parity: start(1) + data(8) + parity(1) + stop(1) = 11 slots
    // capture_tx_frame samples slot 9 as cap_par, slot 10 as cap_stop
    capture_tx_frame(cap_data, cap_par, cap_stop);
    check("T-PAR-01 TX data bits = 0x55",          cap_data === 8'h55);
    check("T-PAR-01 TX even parity bit for 0x55=0", cap_par === 1'b0);
    check("T-PAR-01 Stop bit = 1",                  cap_stop === 1'b1);

    // T-PAR-02: TX odd parity for 0x55 (four 1-bits → odd parity bit = 1)
    bus_write(PARITY_CFG_OFF, 32'h1, 4'b0001);    // odd parity
    bus_write(TX_DATA_OFF,    32'h55, 4'b0001);
    capture_tx_frame(cap_data, cap_par, cap_stop);
    check("T-PAR-02 TX odd parity bit for 0x55=1",  cap_par === 1'b1);

    // T-PAR-03: RX even parity, correct parity bit → no PARITY_ERR
    // 0xA5 = 1010_0101 → four 1-bits → even parity = 0
    bus_write(PARITY_CFG_OFF, 32'h2, 4'b0001);    // even
    drive_rx_frame(8'hA5, 1, 1'b0);               // correct parity = 0
    repeat (FRAME_8P1 + 200) @(posedge clk);
    bus_read(STATUS_OFF, rd);
    check("T-PAR-03 no PARITY_ERR for correct even parity", (rd & PARITY_ERR) === 32'h0);
    bus_read(RX_DATA_OFF, rd);
    check("T-PAR-03 data = 0xA5",                           rd[7:0] === 8'hA5);

    // T-PAR-04: RX even parity, wrong parity bit → PARITY_ERR
    drive_rx_frame(8'hA5, 1, 1'b1);               // wrong parity (should be 0)
    repeat (FRAME_8P1 + 200) @(posedge clk);
    bus_read(STATUS_OFF, rd);
    check("T-PAR-04 PARITY_ERR set for wrong parity bit",   (rd & PARITY_ERR) === PARITY_ERR);
    bus_write(STATUS_OFF, 32'h0, 4'b0001);         // clear
    bus_write(PARITY_CFG_OFF, 32'h0, 4'b0001);    // back to no parity
    bus_read(RX_DATA_OFF, rd);                     // drain

    // =================================================================
    // T-ERR: Error Conditions
    // =================================================================
    $display("");
    $display("--- T-ERR: Error Conditions ---");

    do_reset;

    // T-ERR-01: Framing error — stop bit driven low
    // Drive manually: 0x45 with stop=0
    uart_rx = 0; repeat (BAUD_DIV) @(posedge clk);  // start
    uart_rx = 1; repeat (BAUD_DIV) @(posedge clk);  // D0
    uart_rx = 0; repeat (BAUD_DIV) @(posedge clk);  // D1
    uart_rx = 1; repeat (BAUD_DIV) @(posedge clk);  // D2
    uart_rx = 0; repeat (BAUD_DIV) @(posedge clk);  // D3
    uart_rx = 0; repeat (BAUD_DIV) @(posedge clk);  // D4
    uart_rx = 1; repeat (BAUD_DIV) @(posedge clk);  // D5
    uart_rx = 0; repeat (BAUD_DIV) @(posedge clk);  // D6
    uart_rx = 0; repeat (BAUD_DIV) @(posedge clk);  // D7
    uart_rx = 0; repeat (BAUD_DIV) @(posedge clk);  // STOP = 0 → framing error
    uart_rx = 1; repeat (200) @(posedge clk);
    bus_read(STATUS_OFF, rd);
    check("T-ERR-01 FRAME_ERR set when stop bit = 0", (rd & FRAME_ERR) === FRAME_ERR);

    // T-ERR-02: FRAME_ERR sticky — survives a clean frame
    drive_rx_frame(8'h42, 0, 0);
    repeat (FRAME_8N1 + 200) @(posedge clk);
    bus_read(STATUS_OFF, rd);
    check("T-ERR-02 FRAME_ERR sticky after clean frame",    (rd & FRAME_ERR) === FRAME_ERR);
    bus_write(STATUS_OFF, 32'h0, 4'b0001);
    bus_read(STATUS_OFF, rd);
    check("T-ERR-02 FRAME_ERR cleared after STATUS write", (rd & FRAME_ERR) === 32'h0);
    bus_read(RX_DATA_OFF, rd);  // drain framing-error byte
    bus_read(RX_DATA_OFF, rd);  // drain clean byte

    // T-ERR-03: Framing error byte still written to RX FIFO
    uart_rx = 0; repeat (9 * BAUD_DIV) @(posedge clk);  // start + 8 data = all zero
    uart_rx = 0; repeat (BAUD_DIV) @(posedge clk);      // stop = 0
    uart_rx = 1; repeat (200) @(posedge clk);
    bus_read(STATUS_OFF, rd);
    check("T-ERR-03 RX_AVAIL set even on framing error", (rd & RX_AVAIL) === RX_AVAIL);
    bus_read(RX_DATA_OFF, rd);
    check("T-ERR-03 valid bit set for error byte",        rd[31] === 1'b1);
    bus_write(STATUS_OFF, 32'h0, 4'b0001);

    // =================================================================
    // T-COR: Corner Cases
    // =================================================================
    $display("");
    $display("--- T-COR: Corner Cases ---");

    do_reset;

    // T-COR-08: Reset asserted mid-TX frame
    bus_write(TX_DATA_OFF, 32'h55, 4'b0001);
    @(negedge uart_tx);                          // start bit begins
    repeat (BAUD_DIV * 3) @(posedge clk);        // 3 bits in
    resetn = 0;
    repeat (5) @(posedge clk);
    resetn = 1;
    @(posedge clk);
    check("T-COR-08 uart_tx high after mid-TX reset",   uart_tx === 1'b1);
    bus_read(STATUS_OFF, rd);
    check("T-COR-08 STATUS=0x0001 after reset",         rd === 32'h00000001);
    check("T-COR-08 irq_tx=0 after reset",              irq_tx === 1'b0);

    // T-COR-09: Reset asserted mid-RX frame
    uart_rx = 0;
    repeat (BAUD_DIV * 4) @(posedge clk);        // start + D0–D2
    resetn = 0;
    repeat (5) @(posedge clk);
    uart_rx = 1;
    resetn = 1;
    @(posedge clk);
    repeat (200) @(posedge clk);
    bus_read(STATUS_OFF, rd);
    check("T-COR-09 RX_AVAIL=0 after mid-RX reset", (rd & RX_AVAIL)  === 32'h0);
    check("T-COR-09 no error flags after reset",     (rd & 32'h70)    === 32'h0);

    // T-COR-11: IRQ_EN toggled while IRQ active
    bus_write(IRQ_EN_OFF, 32'h2, 4'b0001);       // enable RX IRQ
    drive_rx_frame(8'hAB, 0, 0);
    repeat (FRAME_8N1 + 200) @(posedge clk);
    check("T-COR-11 irq_rx=1 before disable",    irq_rx === 1'b1);
    bus_write(IRQ_EN_OFF, 32'h0, 4'b0001);       // disable
    @(posedge clk);
    check("T-COR-11 irq_rx=0 after disable",     irq_rx === 1'b0);
    bus_write(IRQ_EN_OFF, 32'h2, 4'b0001);       // re-enable
    @(posedge clk);
    check("T-COR-11 irq_rx=1 re-asserts (data still in FIFO)", irq_rx === 1'b1);
    bus_read(RX_DATA_OFF, rd);
    bus_write(IRQ_EN_OFF, 32'h0, 4'b0001);

    // T-COR-10: Both IRQs simultaneously
    bus_write(IRQ_EN_OFF, 32'h3, 4'b0001);       // enable both
    bus_write(TX_DATA_OFF, 32'hEF, 4'b0001);     // load TX
    drive_rx_frame(8'hEF, 0, 0);                 // load RX simultaneously
    repeat (FRAME_8N1 + 300) @(posedge clk);
    check("T-COR-10 irq_rx=1 (RX data in FIFO)",  irq_rx === 1'b1);
    check("T-COR-10 irq_tx=1 (TX FIFO empty)",    irq_tx === 1'b1);
    bus_read(RX_DATA_OFF, rd);
    @(posedge clk);
    check("T-COR-10 irq_rx deasserts after drain", irq_rx === 1'b0);
    check("T-COR-10 irq_tx unchanged after RX drain", irq_tx === 1'b1);
    bus_write(IRQ_EN_OFF, 32'h0, 4'b0001);

    // =================================================================
    // Summary
    // =================================================================
    $display("");
    $display("=================================================");
    $display("  Results: %0d passed,  %0d failed", pass_cnt, fail_cnt);
    $display("=================================================");
    if (fail_cnt == 0)
        $display("  ALL TESTS PASSED");
    else
        $display("  ** FAILURES DETECTED — review output above **");
    $display("");

    $finish;
end

// Timeout watchdog — kills simulation if it hangs
initial begin
    #(200_000_000);  // 200 ms simulation time
    $display("TIMEOUT: simulation exceeded 200 ms — possible hang");
    $finish;
end

endmodule
