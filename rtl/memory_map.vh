`ifndef MEMORY_MAP_VH
`define MEMORY_MAP_VH

// memory_map.vh — single source of truth for all peripheral base addresses
// and register offsets.  Firmware's memory_map.h must mirror every value here.
//
// Address space (§3.1):
//   Shared data SRAM   0x0000_0000 – 0x0000_FFFF   64 KB   addr[31:16] == 16'h0000
//   UART 0             0x1000_0000 – 0x1000_00FF  256 B   addr[31:8]  == 24'h10_0000
//   System timer       0x1001_0000 – 0x1001_00FF  256 B   addr[31:8]  == 24'h10_0100
//   Hardware spinlocks 0x1002_0000 – 0x1002_00FF  256 B   addr[31:8]  == 24'h10_0200
//   PLIC               0x1003_0000 – 0x1003_00FF  256 B   addr[31:8]  == 24'h10_0300
//   GPIO (Phase 2)     0x1004_0000 – 0x1004_00FF  256 B   addr[31:8]  == 24'h10_0400
//   Core ID register   0xFFFF_FFFC – 0xFFFF_FFFF    4 B   addr[31:2]  == 30'h3FFF_FFFF

// =========================================================================
// Base addresses
// =========================================================================

`define MM_DSRAM_BASE       32'h0000_0000
`define MM_DSRAM_SIZE       32'h0001_0000   // 64 KB

`define MM_UART0_BASE       32'h1000_0000
`define MM_TIMER_BASE       32'h1001_0000
`define MM_SPINLOCK_BASE    32'h1002_0000
`define MM_PLIC_BASE        32'h1003_0000
`define MM_GPIO_BASE        32'h1004_0000   // Phase 2 — address reserved; RTL not yet implemented

`define MM_COREID_ADDR      32'hFFFF_FFFC   // read-only; returns mhartid 0–3

`define MM_PERIPH_SIZE      32'h0000_0100   // 256 B — all peripheral blocks are this size

// =========================================================================
// Address decoder match values (used by addr_decoder.v)
// addr[7:0] selects the register within a peripheral block
// =========================================================================

`define DEC_DSRAM           16'h0000        // compare addr[31:16]
`define DEC_UART0           24'h10_0000     // compare addr[31:8]
`define DEC_TIMER           24'h10_0100     // compare addr[31:8]
`define DEC_SPINLOCK        24'h10_0200     // compare addr[31:8]
`define DEC_PLIC            24'h10_0300     // compare addr[31:8]
`define DEC_GPIO            24'h10_0400     // compare addr[31:8]  (Phase 2)
`define DEC_COREID          30'h3FFF_FFFF   // compare addr[31:2]

// =========================================================================
// UART register offsets  (base = MM_UART0_BASE)
// §3.2.1
// =========================================================================

`define UART_TX_DATA        8'h00   // W    byte to transmit [7:0]; must poll STATUS[0] first
`define UART_RX_DATA        8'h04   // R    received byte [7:0]; bit[31]=1 means valid
`define UART_STATUS         8'h08   // R    bit[0]=TX ready (FIFO not full), bit[1]=RX available
`define UART_BAUD_DIV       8'h0C   // R/W  baud = clk_freq / BAUD_DIV
                                    //      reset = clk_freq/115200; default assumes 50 MHz → 434
                                    //      (Q1 open: confirm clock frequency before computing reset value)
`define UART_IRQ_EN         8'h10   // R/W  bit[0]=TX-empty IRQ en, bit[1]=RX-ready IRQ en; reset=0
`define UART_PARITY_CFG     8'h14   // R/W  bits[1:0]: 2'b00=none, 2'b01=odd, 2'b10=even; reset=0

// UART FIFO depth — both TX and RX (Q7 open: recommended 16, default assumed here)
`define UART_FIFO_DEPTH     5'd16

// =========================================================================
// System timer register offsets  (base = MM_TIMER_BASE)
// §3.2.2
//
// One shared 64-bit MTIME counter; four independent MTIMECMP registers.
// Core N's registers start at: MM_TIMER_BASE + N * TIMER_CORE_STRIDE
// addr[5:4] = core index (0–3); addr[3:2] = register within core
// =========================================================================

`define TIMER_CORE_STRIDE   8'h10           // 16 B between consecutive cores

`define TIMER_MTIME_LO      4'h0            // R    lower 32 bits of shared free-running counter
`define TIMER_MTIME_HI      4'h4            // R    upper 32 bits of shared free-running counter
`define TIMER_MTIMECMP_LO   4'h8            // R/W  lower 32 bits of per-core compare register
`define TIMER_MTIMECMP_HI   4'hC            // R/W  upper 32 bits; IRQ[0] fires when MTIME >= MTIMECMP
                                            //      reset = 64'hFFFF_FFFF_FFFF_FFFF (no spurious IRQ at boot)

// =========================================================================
// Spinlock register offsets  (base = MM_SPINLOCK_BASE)
// §3.2.3
//
// LOCK[n] is at offset n * 4.
// Read:  atomically test-and-set — returns 0 (acquired, was free) or 1 (busy)
// Write: write 0 to release; writing 1 has no effect
// =========================================================================

`define SPINLOCK_COUNT      6'd8            // locks defined for Phase 1; parameter allows up to 64

`define SPINLOCK_LOCK0      8'h00
`define SPINLOCK_LOCK1      8'h04
`define SPINLOCK_LOCK2      8'h08
`define SPINLOCK_LOCK3      8'h0C
`define SPINLOCK_LOCK4      8'h10
`define SPINLOCK_LOCK5      8'h14
`define SPINLOCK_LOCK6      8'h18
`define SPINLOCK_LOCK7      8'h1C
                                            // 0x20–0xFF reserved for up to 56 additional locks

// =========================================================================
// PLIC register offsets  (base = MM_PLIC_BASE)
// §3.2.4
//
// Correction from v1.0: PRIORITY moved from +0x10 → +0x14 to remove
// conflict with ENABLE[3].  CLAIM[N] registers start at +0x18.
// =========================================================================

`define PLIC_PENDING        8'h00   // R    bits[7:0] = pending interrupt sources (un-claimed)
`define PLIC_ENABLE0        8'h04   // R/W  enable mask for core 0; bit N enables source N; reset=0
`define PLIC_ENABLE1        8'h08   // R/W  enable mask for core 1; reset=0
`define PLIC_ENABLE2        8'h0C   // R/W  enable mask for core 2; reset=0
`define PLIC_ENABLE3        8'h10   // R/W  enable mask for core 3; reset=0
`define PLIC_PRIORITY       8'h14   // R/W  4-bit priority per source, packed:
                                    //      bits[3:0]=src0 … bits[31:28]=src7
`define PLIC_CLAIM0         8'h18   // R/W  core 0: read=highest pending enabled ID (0=none); write=ack
`define PLIC_CLAIM1         8'h1C   // R/W  core 1
`define PLIC_CLAIM2         8'h20   // R/W  core 2
`define PLIC_CLAIM3         8'h24   // R/W  core 3
                                    // 0x28–0xFF reserved

// PLIC interrupt source IDs
`define PLIC_SRC_UART_RX    3'd0    // UART RX data available
`define PLIC_SRC_UART_TX    3'd1    // UART TX FIFO empty
`define PLIC_SRC_TIMER0     3'd2    // timer MTIMECMP match for core 0
`define PLIC_SRC_TIMER1     3'd3    // timer MTIMECMP match for core 1
`define PLIC_SRC_TIMER2     3'd4    // timer MTIMECMP match for core 2
`define PLIC_SRC_TIMER3     3'd5    // timer MTIMECMP match for core 3
                                    // sources 6–7 reserved for Phase 2 (GPIO, SPI)

// =========================================================================
// PicoRV32 IRQ line assignments
//
// IRQ[1] is intentionally left free for PicoRV32's built-in countdown timer
// (ENABLE_IRQ_TIMER).  When that parameter is 1 the core drives IRQ[1]
// internally; assigning any external source to that line would cause both
// to fire simultaneously.  ENABLE_IRQ_TIMER is 0 for now but keeping
// IRQ[1] reserved avoids a costly renumber if it is enabled later.
// =========================================================================

`define IRQ_TIMER           5'd0    // external MTIMECMP match — highest priority
                                    // IRQ[1] reserved — PicoRV32 built-in timer (ENABLE_IRQ_TIMER)
`define IRQ_UART_RX         5'd2    // UART RX data available
`define IRQ_UART_TX         5'd3    // UART TX FIFO empty
`define IRQ_SPINLOCK_REL    5'd4    // spinlock released (Phase 2 — tie to 0 for now)
                                    // IRQ[5:31] reserved — tie to 0

`endif // MEMORY_MAP_VH
