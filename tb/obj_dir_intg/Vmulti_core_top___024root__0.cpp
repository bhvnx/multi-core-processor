// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmulti_core_top.h for the primary calling header

#include "Vmulti_core_top__pch.h"

bool Vmulti_core_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vmulti_core_top__ConstPool__TABLE_he73c04bc_0;

void Vmulti_core_top___024root___ico_sequent__TOP__0(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___ico_sequent__TOP__0\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_4;
    __VdfgRegularize_h6e95ff9d_0_4 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_5;
    __VdfgRegularize_h6e95ff9d_0_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    __VdfgRegularize_h6e95ff9d_0_7 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    __VdfgRegularize_h6e95ff9d_0_8 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_10;
    __VdfgRegularize_h6e95ff9d_0_10 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_11;
    __VdfgRegularize_h6e95ff9d_0_11 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_16;
    __VdfgRegularize_h6e95ff9d_0_16 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_17;
    __VdfgRegularize_h6e95ff9d_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_18;
    __VdfgRegularize_h6e95ff9d_0_18 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_19;
    __VdfgRegularize_h6e95ff9d_0_19 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_20;
    __VdfgRegularize_h6e95ff9d_0_20 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_21;
    __VdfgRegularize_h6e95ff9d_0_21 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_22;
    __VdfgRegularize_h6e95ff9d_0_22 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_23;
    __VdfgRegularize_h6e95ff9d_0_23 = 0;
    // Body
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_mem_valid 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_valid;
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_mem_instr 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_instr;
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_mem_valid 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_valid;
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_mem_instr 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_instr;
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_mem_valid 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_valid;
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_mem_instr 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_instr;
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_mem_valid 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_valid;
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_mem_instr 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_instr;
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wstrb;
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wstrb;
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wstrb;
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wstrb;
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wdata;
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wdata;
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wdata;
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wdata;
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_mem_addr 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_addr;
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_mem_addr 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_addr;
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_mem_addr 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_addr;
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_mem_addr 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_addr;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_valid 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_valid;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_valid 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_valid;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_insn;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_insn;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_valid 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_valid;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_valid 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_valid;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_insn;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_insn;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_valid 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_valid;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_valid 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_valid;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_insn;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_insn;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_valid 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_valid;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_valid 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_valid;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_insn;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_insn;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh;
    vlSelfRef.multi_core_top__DOT__core3__DOT__alu_shl 
        = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
           << (0x0000001fU & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2));
    vlSelfRef.multi_core_top__DOT__core2__DOT__alu_shl 
        = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
           << (0x0000001fU & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2));
    vlSelfRef.multi_core_top__DOT__core1__DOT__alu_shl 
        = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
           << (0x0000001fU & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2));
    vlSelfRef.multi_core_top__DOT__core0__DOT__alu_shl 
        = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
           << (0x0000001fU & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2));
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__start 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait));
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait));
    vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1 
        = (vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs
           [vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs1] 
           & (- (IData)(((0U != (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs1)) 
                         & (0x23U >= (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs1))))));
    vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs2 
        = (vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs
           [vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs2] 
           & (- (IData)((0U != (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs2)))));
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_ascii_state[0U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state][0U];
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_ascii_state[1U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state][1U];
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_ascii_state[2U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state][2U];
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_ascii_state[3U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state][3U];
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_ascii_state[0U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state][0U];
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_ascii_state[1U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state][1U];
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_ascii_state[2U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state][2U];
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_ascii_state[3U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state][3U];
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_ascii_state[0U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state][0U];
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_ascii_state[1U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state][1U];
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_ascii_state[2U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state][2U];
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_ascii_state[3U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state][3U];
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_ascii_state[0U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state][0U];
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_ascii_state[1U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state][1U];
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_ascii_state[2U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state][2U];
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_ascii_state[3U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state][3U];
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__start 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait));
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait));
    vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1 
        = (vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs
           [vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs1] 
           & (- (IData)(((0U != (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs1)) 
                         & (0x23U >= (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs1))))));
    vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs2 
        = (vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs
           [vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs2] 
           & (- (IData)((0U != (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs2)))));
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__start 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait));
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait));
    vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1 
        = (vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs
           [vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs1] 
           & (- (IData)(((0U != (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs1)) 
                         & (0x23U >= (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs1))))));
    vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs2 
        = (vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs
           [vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs2] 
           & (- (IData)((0U != (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs2)))));
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__start 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait));
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait));
    vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1 
        = (vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs
           [vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs1] 
           & (- (IData)(((0U != (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs1)) 
                         & (0x23U >= (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs1))))));
    vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs2 
        = (vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs
           [vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs2] 
           & (- (IData)((0U != (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs2)))));
    vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_write = 0U;
    vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_write = 0U;
    vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_write = 0U;
    vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_write = 0U;
    vlSelfRef.multi_core_top__DOT__core3__DOT__alu_shr 
        = (IData)((0x00000001ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                          (((QData)((IData)(
                                                                            ((vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
                                                                              >> 0x0000001fU) 
                                                                             & ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srai) 
                                                                                | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sra))))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1))), 
                                                          (0x0000001fU 
                                                           & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2))));
    vlSelfRef.multi_core_top__DOT__core2__DOT__alu_shr 
        = (IData)((0x00000001ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                          (((QData)((IData)(
                                                                            ((vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
                                                                              >> 0x0000001fU) 
                                                                             & ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srai) 
                                                                                | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sra))))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1))), 
                                                          (0x0000001fU 
                                                           & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2))));
    vlSelfRef.multi_core_top__DOT__core1__DOT__alu_shr 
        = (IData)((0x00000001ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                          (((QData)((IData)(
                                                                            ((vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
                                                                              >> 0x0000001fU) 
                                                                             & ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srai) 
                                                                                | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sra))))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1))), 
                                                          (0x0000001fU 
                                                           & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2))));
    vlSelfRef.multi_core_top__DOT__core0__DOT__alu_shr 
        = (IData)((0x00000001ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                          (((QData)((IData)(
                                                                            ((vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
                                                                              >> 0x0000001fU) 
                                                                             & ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srai) 
                                                                                | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sra))))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1))), 
                                                          (0x0000001fU 
                                                           & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2))));
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                 | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu))));
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                 | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu))));
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                 | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu))));
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                 | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu))));
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_imm 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__q_insn_imm;
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_opcode 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__q_insn_opcode;
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rs1 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__q_insn_rs1;
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rs2 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__q_insn_rs2;
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rd 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__q_insn_rd;
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_imm 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__q_insn_imm;
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_opcode 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__q_insn_opcode;
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rs1 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__q_insn_rs1;
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rs2 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__q_insn_rs2;
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rd 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__q_insn_rd;
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_imm 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__q_insn_imm;
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_opcode 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__q_insn_opcode;
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rs1 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__q_insn_rs1;
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rs2 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__q_insn_rs2;
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rd 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__q_insn_rd;
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_imm 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__q_insn_imm;
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_opcode 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__q_insn_opcode;
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rs1 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__q_insn_rs1;
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rs2 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__q_insn_rs2;
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rd 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__q_insn_rd;
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_div_wait 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_mul_wait 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_div_wait 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_mul_wait 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_div_wait 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_mul_wait 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_div_wait 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_mul_wait 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core3__DOT__launch_next_insn 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_trigger) 
           & ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state)) 
              & ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_delay) 
                 | ((~ (0U != ((~ vlSelfRef.multi_core_top__DOT__core3__DOT__irq_mask) 
                               & vlSelfRef.multi_core_top__DOT__core3__DOT__irq_pending))) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_active)))));
    vlSelfRef.multi_core_top__DOT__core2__DOT__launch_next_insn 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_trigger) 
           & ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state)) 
              & ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_delay) 
                 | ((~ (0U != ((~ vlSelfRef.multi_core_top__DOT__core2__DOT__irq_mask) 
                               & vlSelfRef.multi_core_top__DOT__core2__DOT__irq_pending))) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_active)))));
    vlSelfRef.multi_core_top__DOT__core1__DOT__launch_next_insn 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_trigger) 
           & ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state)) 
              & ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_delay) 
                 | ((~ (0U != ((~ vlSelfRef.multi_core_top__DOT__core1__DOT__irq_mask) 
                               & vlSelfRef.multi_core_top__DOT__core1__DOT__irq_pending))) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_active)))));
    vlSelfRef.multi_core_top__DOT__core0__DOT__launch_next_insn 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_trigger) 
           & ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state)) 
              & ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_delay) 
                 | ((~ (0U != ((~ vlSelfRef.multi_core_top__DOT__core0__DOT__irq_mask) 
                               & vlSelfRef.multi_core_top__DOT__core0__DOT__irq_pending))) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_active)))));
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_rs1 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1;
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_rs2 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2;
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_rs1 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1;
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_rs2 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2;
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_rs1 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1;
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_rs2 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2;
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_rs1 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1;
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_rs2 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2;
    vlSelfRef.multi_core_top__DOT__trap = ((((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__trap) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__trap) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__trap) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__trap)));
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_div_wr 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr;
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_mul_wr 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr;
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_div_rd 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd;
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_mul_rd 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd;
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_div_wr 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr;
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_mul_wr 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr;
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_div_rd 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd;
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_mul_rd 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd;
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_div_wr 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr;
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_mul_wr 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr;
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_div_rd 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd;
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_mul_rd 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd;
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_div_wr 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr;
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_mul_wr 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr;
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_div_rd 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd;
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_mul_rd 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd;
    vlSelfRef.multi_core_top__DOT__core3__DOT__next_pc 
        = (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store) 
            & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_branch))
            ? (0xfffffffeU & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_out)
            : vlSelfRef.multi_core_top__DOT__core3__DOT__reg_next_pc);
    vlSelfRef.multi_core_top__DOT__core2__DOT__next_pc 
        = (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store) 
            & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_branch))
            ? (0xfffffffeU & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_out)
            : vlSelfRef.multi_core_top__DOT__core2__DOT__reg_next_pc);
    vlSelfRef.multi_core_top__DOT__core1__DOT__next_pc 
        = (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store) 
            & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_branch))
            ? (0xfffffffeU & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_out)
            : vlSelfRef.multi_core_top__DOT__core1__DOT__reg_next_pc);
    vlSelfRef.multi_core_top__DOT__core0__DOT__next_pc 
        = (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store) 
            & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_branch))
            ? (0xfffffffeU & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_out)
            : vlSelfRef.multi_core_top__DOT__core0__DOT__reg_next_pc);
    vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state))) {
        if (vlSelfRef.multi_core_top__DOT__core3__DOT__latched_branch) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_pc 
                   + ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store) 
                    & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_branch)))) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_wrdata 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_stalu)
                    ? vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_q
                    : vlSelfRef.multi_core_top__DOT__core3__DOT__reg_out);
        } else if ((1U & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_state))) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_next_pc 
                   | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_compr));
        } else if ((2U & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_state))) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core3__DOT__irq_pending 
                   & (~ vlSelfRef.multi_core_top__DOT__core3__DOT__irq_mask));
        }
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state))) {
        if (vlSelfRef.multi_core_top__DOT__core2__DOT__latched_branch) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_pc 
                   + ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store) 
                    & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_branch)))) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_wrdata 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_stalu)
                    ? vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_q
                    : vlSelfRef.multi_core_top__DOT__core2__DOT__reg_out);
        } else if ((1U & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_state))) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_next_pc 
                   | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_compr));
        } else if ((2U & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_state))) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core2__DOT__irq_pending 
                   & (~ vlSelfRef.multi_core_top__DOT__core2__DOT__irq_mask));
        }
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state))) {
        if (vlSelfRef.multi_core_top__DOT__core1__DOT__latched_branch) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_pc 
                   + ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store) 
                    & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_branch)))) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_wrdata 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_stalu)
                    ? vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_q
                    : vlSelfRef.multi_core_top__DOT__core1__DOT__reg_out);
        } else if ((1U & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_state))) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_next_pc 
                   | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_compr));
        } else if ((2U & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_state))) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core1__DOT__irq_pending 
                   & (~ vlSelfRef.multi_core_top__DOT__core1__DOT__irq_mask));
        }
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state))) {
        if (vlSelfRef.multi_core_top__DOT__core0__DOT__latched_branch) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_pc 
                   + ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store) 
                    & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_branch)))) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_wrdata 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_stalu)
                    ? vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_q
                    : vlSelfRef.multi_core_top__DOT__core0__DOT__reg_out);
        } else if ((1U & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_state))) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_next_pc 
                   | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_compr));
        } else if ((2U & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_state))) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core0__DOT__irq_pending 
                   & (~ vlSelfRef.multi_core_top__DOT__core0__DOT__irq_mask));
        }
    }
    __VdfgRegularize_h6e95ff9d_0_1 = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_prefetch) 
                                      | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rinst));
    __VdfgRegularize_h6e95ff9d_0_4 = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_prefetch) 
                                      | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rinst));
    __VdfgRegularize_h6e95ff9d_0_7 = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_prefetch) 
                                      | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rinst));
    __VdfgRegularize_h6e95ff9d_0_10 = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_prefetch) 
                                       | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rinst));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rinst) 
                                                | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rdata));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rinst) 
                                                | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rdata));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rinst) 
                                                | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rdata));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rinst) 
                                                | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rdata));
    __VdfgRegularize_h6e95ff9d_0_16 = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                                       | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu));
    __VdfgRegularize_h6e95ff9d_0_18 = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                                       | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu));
    __VdfgRegularize_h6e95ff9d_0_20 = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                                       | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu));
    __VdfgRegularize_h6e95ff9d_0_22 = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                                       | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu));
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_div_ready 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready;
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_mul_ready 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready;
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_div_ready 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready;
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_mul_ready 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready;
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_div_ready 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready;
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_mul_ready 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready;
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_div_ready 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready;
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_mul_ready 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rd;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rdx;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rs1;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rs2;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__i = 0U;
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_next) {
        if (vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_imm 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__cached_insn_imm;
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_opcode 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__cached_insn_opcode;
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cached_insn_rs1));
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rs2 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__cached_insn_rs2;
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cached_insn_rd));
        } else {
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_imm 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm;
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.multi_core_top__DOT__core3__DOT__next_insn_opcode))
                    ? vlSelfRef.multi_core_top__DOT__core3__DOT__next_insn_opcode
                    : (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core3__DOT__next_insn_opcode));
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs1));
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rs2 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs2;
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rd));
        }
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_next) {
        if (vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_imm 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__cached_insn_imm;
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_opcode 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__cached_insn_opcode;
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cached_insn_rs1));
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rs2 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__cached_insn_rs2;
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cached_insn_rd));
        } else {
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_imm 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm;
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.multi_core_top__DOT__core2__DOT__next_insn_opcode))
                    ? vlSelfRef.multi_core_top__DOT__core2__DOT__next_insn_opcode
                    : (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core2__DOT__next_insn_opcode));
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs1));
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rs2 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs2;
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rd));
        }
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_next) {
        if (vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_imm 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__cached_insn_imm;
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_opcode 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__cached_insn_opcode;
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cached_insn_rs1));
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rs2 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__cached_insn_rs2;
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cached_insn_rd));
        } else {
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_imm 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm;
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.multi_core_top__DOT__core1__DOT__next_insn_opcode))
                    ? vlSelfRef.multi_core_top__DOT__core1__DOT__next_insn_opcode
                    : (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core1__DOT__next_insn_opcode));
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs1));
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rs2 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs2;
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rd));
        }
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_next) {
        if (vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_imm 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__cached_insn_imm;
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_opcode 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__cached_insn_opcode;
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cached_insn_rs1));
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rs2 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__cached_insn_rs2;
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cached_insn_rd));
        } else {
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_imm 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm;
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.multi_core_top__DOT__core0__DOT__next_insn_opcode))
                    ? vlSelfRef.multi_core_top__DOT__core0__DOT__next_insn_opcode
                    : (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core0__DOT__next_insn_opcode));
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs1));
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rs2 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs2;
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rd));
        }
    }
    if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_wdata 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2;
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_wstrb = 0x0fU;
    } else if ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_wdata 
            = ((vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2));
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_wstrb 
            = ((2U & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1)
                ? 0x0cU : 3U);
    } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_wdata 
            = ((vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2))));
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_wstrb 
            = (0x0000000fU & ((IData)(1U) << (3U & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1)));
    }
    if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_wdata 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2;
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_wstrb = 0x0fU;
    } else if ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_wdata 
            = ((vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2));
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_wstrb 
            = ((2U & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1)
                ? 0x0cU : 3U);
    } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_wdata 
            = ((vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2))));
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_wstrb 
            = (0x0000000fU & ((IData)(1U) << (3U & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1)));
    }
    if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_wdata 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2;
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_wstrb = 0x0fU;
    } else if ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_wdata 
            = ((vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2));
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_wstrb 
            = ((2U & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1)
                ? 0x0cU : 3U);
    } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_wdata 
            = ((vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2))));
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_wstrb 
            = (0x0000000fU & ((IData)(1U) << (3U & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1)));
    }
    if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_wdata 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2;
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_wstrb = 0x0fU;
    } else if ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_wdata 
            = ((vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2));
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_wstrb 
            = ((2U & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1)
                ? 0x0cU : 3U);
    } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_wdata 
            = ((vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2))));
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_wstrb 
            = (0x0000000fU & ((IData)(1U) << (3U & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1)));
    }
    while (VL_GTS_III(32, 1U, vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__i)) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
            = ((1U & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1))
                ? vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2
                : 0ULL);
        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt = 0ULL;
        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__j = 0U;
        while (VL_GTS_III(32, 0x00000040U, vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__j)) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c613898__0 
                = (1U & ((((0x0000000fU & (IData)((vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                                   >> 
                                                   (0x0000003fU 
                                                    & vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__j)))) 
                           + (0x0000000fU & (IData)(
                                                    (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                     >> 
                                                     (0x0000003fU 
                                                      & vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__j))))) 
                          + (0x0000000fU & (IData)(
                                                   (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                    >> 
                                                    (0x0000003fU 
                                                     & vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__j))))) 
                         >> 4U));
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c345fbb__0 
                = (0x0000000fU & (((IData)((vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                            >> (0x0000003fU 
                                                & vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__j))) 
                                   + (IData)((vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                              >> (0x0000003fU 
                                                  & vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__j)))) 
                                  + (IData)((vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                             >> (0x0000003fU 
                                                 & vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__j)))));
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
                = (((~ (1ULL << (0x0000003fU & ((IData)(3U) 
                                                + vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__j)))) 
                    & vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
                   | ((QData)((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c613898__0)) 
                      << (0x0000003fU & ((IData)(3U) 
                                         + vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__j))));
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                = (((~ (0x000000000000000fULL << (0x0000003fU 
                                                  & vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__j))) 
                    & vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
                   | ((QData)((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c345fbb__0)) 
                      << (0x0000003fU & vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__j)));
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__j 
                = ((IData)(4U) + vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__j);
        }
        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
            = (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
               << 1U);
        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
            = (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
               >> 1U);
        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
            = (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
               << 1U);
        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__i 
            = ((IData)(1U) + vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__i);
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__rd;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__rdx;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__rs1;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__rs2;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__i = 0U;
    while (VL_GTS_III(32, 1U, vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__i)) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
            = ((1U & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1))
                ? vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2
                : 0ULL);
        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt = 0ULL;
        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__j = 0U;
        while (VL_GTS_III(32, 0x00000040U, vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__j)) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c613898__0 
                = (1U & ((((0x0000000fU & (IData)((vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                                   >> 
                                                   (0x0000003fU 
                                                    & vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__j)))) 
                           + (0x0000000fU & (IData)(
                                                    (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                     >> 
                                                     (0x0000003fU 
                                                      & vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__j))))) 
                          + (0x0000000fU & (IData)(
                                                   (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                    >> 
                                                    (0x0000003fU 
                                                     & vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__j))))) 
                         >> 4U));
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c345fbb__0 
                = (0x0000000fU & (((IData)((vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                            >> (0x0000003fU 
                                                & vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__j))) 
                                   + (IData)((vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                              >> (0x0000003fU 
                                                  & vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__j)))) 
                                  + (IData)((vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                             >> (0x0000003fU 
                                                 & vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__j)))));
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
                = (((~ (1ULL << (0x0000003fU & ((IData)(3U) 
                                                + vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__j)))) 
                    & vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
                   | ((QData)((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c613898__0)) 
                      << (0x0000003fU & ((IData)(3U) 
                                         + vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__j))));
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                = (((~ (0x000000000000000fULL << (0x0000003fU 
                                                  & vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__j))) 
                    & vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
                   | ((QData)((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c345fbb__0)) 
                      << (0x0000003fU & vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__j)));
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__j 
                = ((IData)(4U) + vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__j);
        }
        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
            = (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
               << 1U);
        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
            = (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
               >> 1U);
        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
            = (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
               << 1U);
        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__i 
            = ((IData)(1U) + vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__i);
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__rd;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__rdx;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__rs1;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__rs2;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__i = 0U;
    while (VL_GTS_III(32, 1U, vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__i)) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
            = ((1U & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1))
                ? vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2
                : 0ULL);
        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt = 0ULL;
        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__j = 0U;
        while (VL_GTS_III(32, 0x00000040U, vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__j)) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c613898__0 
                = (1U & ((((0x0000000fU & (IData)((vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                                   >> 
                                                   (0x0000003fU 
                                                    & vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__j)))) 
                           + (0x0000000fU & (IData)(
                                                    (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                     >> 
                                                     (0x0000003fU 
                                                      & vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__j))))) 
                          + (0x0000000fU & (IData)(
                                                   (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                    >> 
                                                    (0x0000003fU 
                                                     & vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__j))))) 
                         >> 4U));
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c345fbb__0 
                = (0x0000000fU & (((IData)((vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                            >> (0x0000003fU 
                                                & vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__j))) 
                                   + (IData)((vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                              >> (0x0000003fU 
                                                  & vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__j)))) 
                                  + (IData)((vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                             >> (0x0000003fU 
                                                 & vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__j)))));
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
                = (((~ (1ULL << (0x0000003fU & ((IData)(3U) 
                                                + vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__j)))) 
                    & vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
                   | ((QData)((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c613898__0)) 
                      << (0x0000003fU & ((IData)(3U) 
                                         + vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__j))));
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                = (((~ (0x000000000000000fULL << (0x0000003fU 
                                                  & vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__j))) 
                    & vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
                   | ((QData)((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c345fbb__0)) 
                      << (0x0000003fU & vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__j)));
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__j 
                = ((IData)(4U) + vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__j);
        }
        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
            = (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
               << 1U);
        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
            = (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
               >> 1U);
        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
            = (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
               << 1U);
        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__i 
            = ((IData)(1U) + vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__i);
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__rd;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__rdx;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__rs1;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__rs2;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__i = 0U;
    while (VL_GTS_III(32, 1U, vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__i)) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
            = ((1U & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1))
                ? vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2
                : 0ULL);
        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt = 0ULL;
        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__j = 0U;
        while (VL_GTS_III(32, 0x00000040U, vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__j)) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c613898__0 
                = (1U & ((((0x0000000fU & (IData)((vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                                   >> 
                                                   (0x0000003fU 
                                                    & vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__j)))) 
                           + (0x0000000fU & (IData)(
                                                    (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                                     >> 
                                                     (0x0000003fU 
                                                      & vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__j))))) 
                          + (0x0000000fU & (IData)(
                                                   (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                                    >> 
                                                    (0x0000003fU 
                                                     & vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__j))))) 
                         >> 4U));
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c345fbb__0 
                = (0x0000000fU & (((IData)((vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                                            >> (0x0000003fU 
                                                & vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__j))) 
                                   + (IData)((vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
                                              >> (0x0000003fU 
                                                  & vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__j)))) 
                                  + (IData)((vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 
                                             >> (0x0000003fU 
                                                 & vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__j)))));
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
                = (((~ (1ULL << (0x0000003fU & ((IData)(3U) 
                                                + vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__j)))) 
                    & vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt) 
                   | ((QData)((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c613898__0)) 
                      << (0x0000003fU & ((IData)(3U) 
                                         + vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__j))));
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
                = (((~ (0x000000000000000fULL << (0x0000003fU 
                                                  & vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__j))) 
                    & vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd) 
                   | ((QData)((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c345fbb__0)) 
                      << (0x0000003fU & vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__j)));
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__j 
                = ((IData)(4U) + vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__j);
        }
        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
            = (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt 
               << 1U);
        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
            = (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
               >> 1U);
        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
            = (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
               << 1U);
        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__i 
            = ((IData)(1U) + vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__i);
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__alu_eq 
        = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
           == vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core3__DOT__alu_lts 
        = VL_LTS_III(32, vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1, vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core3__DOT__alu_ltu 
        = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
           < vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core2__DOT__alu_eq 
        = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
           == vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core2__DOT__alu_lts 
        = VL_LTS_III(32, vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1, vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core2__DOT__alu_ltu 
        = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
           < vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core1__DOT__alu_eq 
        = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
           == vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core1__DOT__alu_lts 
        = VL_LTS_III(32, vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1, vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core1__DOT__alu_ltu 
        = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
           < vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core0__DOT__alu_eq 
        = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
           == vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core0__DOT__alu_lts 
        = VL_LTS_III(32, vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1, vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core0__DOT__alu_ltu 
        = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
           < vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2);
    __VdfgRegularize_h6e95ff9d_0_2 = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdcycle) 
                                      | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdcycleh) 
                                         | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdinstr) 
                                            | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdinstrh))));
    __VdfgRegularize_h6e95ff9d_0_5 = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdcycle) 
                                      | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdcycleh) 
                                         | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdinstr) 
                                            | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdinstrh))));
    __VdfgRegularize_h6e95ff9d_0_8 = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdcycle) 
                                      | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdcycleh) 
                                         | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdinstr) 
                                            | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdinstrh))));
    __VdfgRegularize_h6e95ff9d_0_11 = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdcycle) 
                                       | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdcycleh) 
                                          | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdinstr) 
                                             | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdinstrh))));
    vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0ULL;
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lui) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000006c7569ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_auipc) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000006175697063ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_jal) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000006a616cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_jalr) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x000000006a616c72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_beq) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000626571ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bne) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000626e65ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_blt) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000626c74ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bge) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000626765ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bltu) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000626c7475ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bgeu) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000062676575ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lb) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000006c62ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lh) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000006c68ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lw) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000006c77ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lbu) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000006c6275ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lhu) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000006c6875ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sb) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000007362ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sh) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000007368ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sw) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000007377ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_addi) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000061646469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slti) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000736c7469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sltiu) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x000000736c746975ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_xori) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000786f7269ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_ori) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000006f7269ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_andi) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000616e6469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slli) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000736c6c69ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srli) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000073726c69ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srai) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000073726169ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_add) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000616464ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sub) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_add_sub 
            = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
               - vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2);
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000737562ULL;
    } else {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_add_sub 
            = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
               + vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2);
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sll) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000736c6cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slt) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000736c74ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sltu) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000736c7475ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_xor) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000786f72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srl) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x000000000073726cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sra) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000737261ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_or) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000006f72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_and) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000616e64ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdcycle) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0072646379636c65ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdcycleh) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdinstr) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x007264696e737472ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdinstrh) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_fence) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000066656e6365ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_getq) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000067657471ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_setq) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000073657471ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_retirq) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000726574697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_maskirq) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x006d61736b697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_waitirq) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0077616974697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_timer) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000074696d6572ULL;
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0ULL;
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lui) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000006c7569ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_auipc) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000006175697063ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_jal) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000006a616cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_jalr) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x000000006a616c72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_beq) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000626571ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bne) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000626e65ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_blt) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000626c74ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bge) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000626765ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bltu) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000626c7475ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bgeu) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000062676575ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lb) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000006c62ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lh) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000006c68ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lw) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000006c77ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lbu) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000006c6275ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lhu) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000006c6875ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sb) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000007362ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sh) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000007368ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sw) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000007377ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_addi) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000061646469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slti) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000736c7469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sltiu) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x000000736c746975ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_xori) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000786f7269ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_ori) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000006f7269ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_andi) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000616e6469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slli) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000736c6c69ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srli) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000073726c69ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srai) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000073726169ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_add) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000616464ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sub) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_add_sub 
            = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
               - vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2);
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000737562ULL;
    } else {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_add_sub 
            = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
               + vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2);
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sll) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000736c6cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slt) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000736c74ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sltu) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000736c7475ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_xor) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000786f72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srl) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x000000000073726cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sra) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000737261ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_or) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000006f72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_and) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000616e64ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdcycle) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0072646379636c65ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdcycleh) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdinstr) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x007264696e737472ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdinstrh) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_fence) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000066656e6365ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_getq) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000067657471ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_setq) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000073657471ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_retirq) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000726574697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_maskirq) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x006d61736b697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_waitirq) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0077616974697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_timer) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000074696d6572ULL;
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0ULL;
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lui) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000006c7569ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_auipc) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000006175697063ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_jal) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000006a616cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_jalr) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x000000006a616c72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_beq) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000626571ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bne) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000626e65ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_blt) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000626c74ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bge) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000626765ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bltu) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000626c7475ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bgeu) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000062676575ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lb) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000006c62ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lh) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000006c68ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lw) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000006c77ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lbu) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000006c6275ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lhu) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000006c6875ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sb) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000007362ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sh) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000007368ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sw) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000007377ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_addi) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000061646469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slti) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000736c7469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sltiu) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x000000736c746975ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_xori) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000786f7269ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_ori) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000006f7269ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_andi) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000616e6469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slli) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000736c6c69ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srli) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000073726c69ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srai) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000073726169ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_add) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000616464ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sub) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_add_sub 
            = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
               - vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2);
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000737562ULL;
    } else {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_add_sub 
            = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
               + vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2);
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sll) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000736c6cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slt) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000736c74ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sltu) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000736c7475ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_xor) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000786f72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srl) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x000000000073726cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sra) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000737261ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_or) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000006f72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_and) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000616e64ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdcycle) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0072646379636c65ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdcycleh) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdinstr) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x007264696e737472ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdinstrh) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_fence) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000066656e6365ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_getq) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000067657471ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_setq) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000073657471ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_retirq) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000726574697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_maskirq) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x006d61736b697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_waitirq) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0077616974697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_timer) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000074696d6572ULL;
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0ULL;
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lui) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000006c7569ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_auipc) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000006175697063ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_jal) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000006a616cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_jalr) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x000000006a616c72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_beq) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000626571ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bne) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000626e65ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_blt) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000626c74ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bge) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000626765ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bltu) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000626c7475ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bgeu) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000062676575ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lb) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000006c62ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lh) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000006c68ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lw) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000006c77ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lbu) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000006c6275ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lhu) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000006c6875ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sb) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000007362ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sh) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000007368ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sw) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000007377ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_addi) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000061646469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slti) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000736c7469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sltiu) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x000000736c746975ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_xori) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000786f7269ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_ori) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000006f7269ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_andi) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000616e6469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slli) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000736c6c69ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srli) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000073726c69ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srai) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000073726169ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_add) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000616464ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sub) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_add_sub 
            = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
               - vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2);
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000737562ULL;
    } else {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_add_sub 
            = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
               + vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2);
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sll) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000736c6cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slt) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000736c74ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sltu) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000736c7475ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_xor) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000786f72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srl) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x000000000073726cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sra) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000737261ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_or) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000006f72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_and) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000616e64ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdcycle) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0072646379636c65ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdcycleh) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdinstr) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x007264696e737472ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdinstrh) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_fence) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000066656e6365ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_getq) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000067657471ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_setq) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000073657471ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_retirq) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000726574697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_maskirq) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x006d61736b697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_waitirq) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0077616974697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_timer) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000074696d6572ULL;
    }
    vlSelfRef.multi_core_top__DOT__core_mem_wstrb[0U] 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wstrb;
    vlSelfRef.multi_core_top__DOT__core_mem_wstrb[1U] 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wstrb;
    vlSelfRef.multi_core_top__DOT__core_mem_wstrb[2U] 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wstrb;
    vlSelfRef.multi_core_top__DOT__core_mem_wstrb[3U] 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wstrb;
    vlSelfRef.multi_core_top__DOT__core_mem_wdata[0U] 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wdata;
    vlSelfRef.multi_core_top__DOT__core_mem_wdata[1U] 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wdata;
    vlSelfRef.multi_core_top__DOT__core_mem_wdata[2U] 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wdata;
    vlSelfRef.multi_core_top__DOT__core_mem_wdata[3U] 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wdata;
    vlSelfRef.multi_core_top__DOT__core_mem_addr[0U] 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_addr;
    vlSelfRef.multi_core_top__DOT__core_mem_addr[1U] 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_addr;
    vlSelfRef.multi_core_top__DOT__core_mem_addr[2U] 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_addr;
    vlSelfRef.multi_core_top__DOT__core_mem_addr[3U] 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_addr;
    vlSelfRef.multi_core_top__DOT__isram_rdata[0U] 
        = vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_rdata;
    vlSelfRef.multi_core_top__DOT__isram_rdata[1U] 
        = vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_rdata;
    vlSelfRef.multi_core_top__DOT__isram_rdata[2U] 
        = vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_rdata;
    vlSelfRef.multi_core_top__DOT__isram_rdata[3U] 
        = vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_rdata;
    vlSelfRef.multi_core_top__DOT__isram_ready[0U] 
        = vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_ready;
    vlSelfRef.multi_core_top__DOT__isram_ready[1U] 
        = vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_ready;
    vlSelfRef.multi_core_top__DOT__isram_ready[2U] 
        = vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_ready;
    vlSelfRef.multi_core_top__DOT__isram_ready[3U] 
        = vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_ready;
    vlSelfRef.multi_core_top__DOT__core_mem_valid[0U] 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_valid;
    vlSelfRef.multi_core_top__DOT__core_mem_valid[1U] 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_valid;
    vlSelfRef.multi_core_top__DOT__core_mem_valid[2U] 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_valid;
    vlSelfRef.multi_core_top__DOT__core_mem_valid[3U] 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_valid;
    vlSelfRef.multi_core_top__DOT__core_mem_instr[0U] 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_instr;
    vlSelfRef.multi_core_top__DOT__core_mem_instr[1U] 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_instr;
    vlSelfRef.multi_core_top__DOT__core_mem_instr[2U] 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_instr;
    vlSelfRef.multi_core_top__DOT__core_mem_instr[3U] 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_instr;
    vlSelfRef.multi_core_top__DOT__dsram_rdata = vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_rdata;
    vlSelfRef.multi_core_top__DOT__dsram_ready = vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_ready;
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_int_wait 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_div_wait) 
           | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_mul_wait));
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_int_wait 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_div_wait) 
           | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_mul_wait));
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_int_wait 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_div_wait) 
           | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_mul_wait));
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_int_wait 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_div_wait) 
           | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_mul_wait));
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_rs1;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_rs1;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_rs2;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_rs2;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_rs1;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_rs1;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_rs2;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_rs2;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_rs1;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_rs1;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_rs2;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_rs2;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_rs1;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_rs1;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_rs2;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_rs2;
    vlSelfRef.trap = vlSelfRef.multi_core_top__DOT__trap;
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_busy 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_1) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_wdata)));
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_addr 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_1)
             ? (vlSelfRef.multi_core_top__DOT__core3__DOT__next_pc 
                >> 2U) : (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
                          >> 2U)) << 2U);
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_busy 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_4) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_wdata)));
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_addr 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_4)
             ? (vlSelfRef.multi_core_top__DOT__core2__DOT__next_pc 
                >> 2U) : (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
                          >> 2U)) << 2U);
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_busy 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_7) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_wdata)));
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_addr 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_7)
             ? (vlSelfRef.multi_core_top__DOT__core1__DOT__next_pc 
                >> 2U) : (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
                          >> 2U)) << 2U);
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_busy 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_10) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_wdata)));
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_addr 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_10)
             ? (vlSelfRef.multi_core_top__DOT__core0__DOT__next_pc 
                >> 2U) : (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
                          >> 2U)) << 2U);
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed 
        = __VdfgRegularize_h6e95ff9d_0_16;
    __VdfgRegularize_h6e95ff9d_0_17 = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu) 
                                       | (IData)(__VdfgRegularize_h6e95ff9d_0_16));
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed 
        = __VdfgRegularize_h6e95ff9d_0_18;
    __VdfgRegularize_h6e95ff9d_0_19 = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu) 
                                       | (IData)(__VdfgRegularize_h6e95ff9d_0_18));
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed 
        = __VdfgRegularize_h6e95ff9d_0_20;
    __VdfgRegularize_h6e95ff9d_0_21 = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu) 
                                       | (IData)(__VdfgRegularize_h6e95ff9d_0_20));
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed 
        = __VdfgRegularize_h6e95ff9d_0_22;
    __VdfgRegularize_h6e95ff9d_0_23 = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu) 
                                       | (IData)(__VdfgRegularize_h6e95ff9d_0_22));
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_int_ready 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_div_ready) 
           | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_mul_ready));
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_int_wr = 0U;
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_int_rd = 0U;
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_mul_ready) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_int_wr 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_mul_wr;
        vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_int_rd 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_mul_rd;
    } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_div_ready) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_int_wr 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_div_wr;
        vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_int_rd 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_div_rd;
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_int_ready 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_div_ready) 
           | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_mul_ready));
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_int_wr = 0U;
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_int_rd = 0U;
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_mul_ready) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_int_wr 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_mul_wr;
        vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_int_rd 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_mul_rd;
    } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_div_ready) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_int_wr 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_div_wr;
        vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_int_rd 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_div_rd;
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_int_ready 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_div_ready) 
           | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_mul_ready));
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_int_wr = 0U;
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_int_rd = 0U;
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_mul_ready) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_int_wr 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_mul_wr;
        vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_int_rd 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_mul_rd;
    } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_div_ready) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_int_wr 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_div_wr;
        vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_int_rd 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_div_rd;
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_int_ready 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_div_ready) 
           | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_mul_ready));
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_int_wr = 0U;
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_int_rd = 0U;
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_mul_ready) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_int_wr 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_mul_wr;
        vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_int_rd 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_mul_rd;
    } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_div_ready) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_int_wr 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_div_wr;
        vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_int_rd 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_div_rd;
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0 = 0U;
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_beq) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__alu_eq;
    } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bne) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__alu_eq)));
    } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bge) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__alu_lts)));
    } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bgeu) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__alu_ltu)));
    } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__is_slti_blt_slt) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__alu_lts;
    } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__is_sltiu_bltu_sltu) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__alu_ltu;
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out = 0U;
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__alu_add_sub;
    } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__is_compare) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0;
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_xori) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_xor))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
               ^ vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_ori) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_or))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
               | vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_andi) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_and))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
               & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2);
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0 = 0U;
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_beq) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__alu_eq;
    } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bne) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__alu_eq)));
    } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bge) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__alu_lts)));
    } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bgeu) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__alu_ltu)));
    } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__is_slti_blt_slt) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__alu_lts;
    } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__is_sltiu_bltu_sltu) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__alu_ltu;
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out = 0U;
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__alu_add_sub;
    } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__is_compare) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0;
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_xori) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_xor))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
               ^ vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_ori) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_or))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
               | vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_andi) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_and))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
               & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2);
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0 = 0U;
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_beq) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__alu_eq;
    } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bne) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__alu_eq)));
    } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bge) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__alu_lts)));
    } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bgeu) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__alu_ltu)));
    } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__is_slti_blt_slt) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__alu_lts;
    } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__is_sltiu_bltu_sltu) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__alu_ltu;
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out = 0U;
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__alu_add_sub;
    } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__is_compare) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0;
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_xori) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_xor))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
               ^ vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_ori) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_or))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
               | vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_andi) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_and))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
               & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2);
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0 = 0U;
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_beq) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__alu_eq;
    } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bne) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__alu_eq)));
    } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bge) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__alu_lts)));
    } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bgeu) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__alu_ltu)));
    } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__is_slti_blt_slt) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__alu_lts;
    } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__is_sltiu_bltu_sltu) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__alu_ltu;
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out = 0U;
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__alu_add_sub;
    } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__is_compare) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0;
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_xori) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_xor))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
               ^ vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_ori) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_or))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
               | vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_andi) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_and))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
               & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2);
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = __VdfgRegularize_h6e95ff9d_0_2;
    vlSelfRef.multi_core_top__DOT__core3__DOT__instr_trap 
        = (1U & (~ ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lui) 
                    | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_auipc) 
                       | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_jal) 
                          | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_jalr) 
                             | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_beq) 
                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bne) 
                                   | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_blt) 
                                      | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bge) 
                                         | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bltu) 
                                            | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bgeu) 
                                               | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lb) 
                                                  | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lh) 
                                                     | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lw) 
                                                        | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lbu) 
                                                           | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lhu) 
                                                              | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sb) 
                                                                 | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sh) 
                                                                    | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sw) 
                                                                       | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_addi) 
                                                                          | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slti) 
                                                                             | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_add) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slt) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sltu) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_xor) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srl) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sra) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_or) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_and) 
                                                                                | ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_fence) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_getq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_setq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_retirq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_maskirq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_waitirq) 
                                                                                | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_timer)))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.multi_core_top__DOT__core2__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = __VdfgRegularize_h6e95ff9d_0_5;
    vlSelfRef.multi_core_top__DOT__core2__DOT__instr_trap 
        = (1U & (~ ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lui) 
                    | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_auipc) 
                       | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_jal) 
                          | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_jalr) 
                             | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_beq) 
                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bne) 
                                   | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_blt) 
                                      | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bge) 
                                         | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bltu) 
                                            | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bgeu) 
                                               | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lb) 
                                                  | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lh) 
                                                     | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lw) 
                                                        | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lbu) 
                                                           | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lhu) 
                                                              | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sb) 
                                                                 | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sh) 
                                                                    | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sw) 
                                                                       | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_addi) 
                                                                          | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slti) 
                                                                             | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_add) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slt) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sltu) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_xor) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srl) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sra) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_or) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_and) 
                                                                                | ((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_fence) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_getq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_setq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_retirq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_maskirq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_waitirq) 
                                                                                | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_timer)))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.multi_core_top__DOT__core1__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = __VdfgRegularize_h6e95ff9d_0_8;
    vlSelfRef.multi_core_top__DOT__core1__DOT__instr_trap 
        = (1U & (~ ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lui) 
                    | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_auipc) 
                       | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_jal) 
                          | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_jalr) 
                             | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_beq) 
                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bne) 
                                   | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_blt) 
                                      | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bge) 
                                         | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bltu) 
                                            | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bgeu) 
                                               | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lb) 
                                                  | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lh) 
                                                     | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lw) 
                                                        | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lbu) 
                                                           | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lhu) 
                                                              | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sb) 
                                                                 | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sh) 
                                                                    | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sw) 
                                                                       | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_addi) 
                                                                          | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slti) 
                                                                             | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_add) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slt) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sltu) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_xor) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srl) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sra) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_or) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_and) 
                                                                                | ((IData)(__VdfgRegularize_h6e95ff9d_0_8) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_fence) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_getq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_setq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_retirq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_maskirq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_waitirq) 
                                                                                | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_timer)))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.multi_core_top__DOT__core0__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = __VdfgRegularize_h6e95ff9d_0_11;
    vlSelfRef.multi_core_top__DOT__core0__DOT__instr_trap 
        = (1U & (~ ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lui) 
                    | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_auipc) 
                       | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_jal) 
                          | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_jalr) 
                             | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_beq) 
                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bne) 
                                   | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_blt) 
                                      | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bge) 
                                         | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bltu) 
                                            | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bgeu) 
                                               | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lb) 
                                                  | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lh) 
                                                     | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lw) 
                                                        | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lbu) 
                                                           | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lhu) 
                                                              | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sb) 
                                                                 | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sh) 
                                                                    | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sw) 
                                                                       | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_addi) 
                                                                          | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slti) 
                                                                             | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_add) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slt) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sltu) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_xor) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srl) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sra) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_or) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_and) 
                                                                                | ((IData)(__VdfgRegularize_h6e95ff9d_0_11) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_fence) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_getq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_setq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_retirq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_maskirq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_waitirq) 
                                                                                | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_timer)))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_ascii_instr 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__q_ascii_instr;
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_next) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_ascii_instr 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_pseudo_trigger_q)
                ? vlSelfRef.multi_core_top__DOT__core3__DOT__cached_ascii_instr
                : vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr);
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_ascii_instr 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__q_ascii_instr;
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_next) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_ascii_instr 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_pseudo_trigger_q)
                ? vlSelfRef.multi_core_top__DOT__core2__DOT__cached_ascii_instr
                : vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr);
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_ascii_instr 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__q_ascii_instr;
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_next) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_ascii_instr 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_pseudo_trigger_q)
                ? vlSelfRef.multi_core_top__DOT__core1__DOT__cached_ascii_instr
                : vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr);
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_ascii_instr 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__q_ascii_instr;
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_next) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_ascii_instr 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_pseudo_trigger_q)
                ? vlSelfRef.multi_core_top__DOT__core0__DOT__cached_ascii_instr
                : vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr);
    }
    vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core_mem_wstrb[3U];
    vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core_mem_wstrb[2U];
    vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core_mem_wstrb[1U];
    vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core_mem_wstrb[0U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core_mem_wstrb[0U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core_mem_wstrb[1U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core_mem_wstrb[2U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core_mem_wstrb[3U];
    vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_wdata[3U];
    vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_wdata[2U];
    vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_wdata[1U];
    vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_wdata[0U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_wdata[0U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_wdata[1U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_wdata[2U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_wdata[3U];
    vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_addr 
        = vlSelfRef.multi_core_top__DOT__core_mem_addr[3U];
    vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_addr 
        = vlSelfRef.multi_core_top__DOT__core_mem_addr[2U];
    vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_addr 
        = vlSelfRef.multi_core_top__DOT__core_mem_addr[1U];
    vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_addr 
        = vlSelfRef.multi_core_top__DOT__core_mem_addr[0U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_addr 
        = vlSelfRef.multi_core_top__DOT__core_mem_addr[0U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_addr 
        = vlSelfRef.multi_core_top__DOT__core_mem_addr[1U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_addr 
        = vlSelfRef.multi_core_top__DOT__core_mem_addr[2U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_addr 
        = vlSelfRef.multi_core_top__DOT__core_mem_addr[3U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_instr 
        = vlSelfRef.multi_core_top__DOT__core_mem_instr[0U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_instr 
        = vlSelfRef.multi_core_top__DOT__core_mem_instr[1U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_instr 
        = vlSelfRef.multi_core_top__DOT__core_mem_instr[2U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_instr 
        = vlSelfRef.multi_core_top__DOT__core_mem_instr[3U];
    vlSelfRef.multi_core_top__DOT__isram_valid[0U] 
        = (vlSelfRef.multi_core_top__DOT__core_mem_valid[0U] 
           & vlSelfRef.multi_core_top__DOT__core_mem_instr[0U]);
    vlSelfRef.multi_core_top__DOT__isram_valid[1U] 
        = (vlSelfRef.multi_core_top__DOT__core_mem_valid[1U] 
           & vlSelfRef.multi_core_top__DOT__core_mem_instr[1U]);
    vlSelfRef.multi_core_top__DOT__isram_valid[2U] 
        = (vlSelfRef.multi_core_top__DOT__core_mem_valid[2U] 
           & vlSelfRef.multi_core_top__DOT__core_mem_instr[2U]);
    vlSelfRef.multi_core_top__DOT__isram_valid[3U] 
        = (vlSelfRef.multi_core_top__DOT__core_mem_valid[3U] 
           & vlSelfRef.multi_core_top__DOT__core_mem_instr[3U]);
    vlSelfRef.multi_core_top__DOT__dsram_arb_valid[0U] 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core_mem_instr[0U])) 
           & vlSelfRef.multi_core_top__DOT__core_mem_valid[0U]);
    vlSelfRef.multi_core_top__DOT__dsram_arb_valid[1U] 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core_mem_instr[1U])) 
           & vlSelfRef.multi_core_top__DOT__core_mem_valid[1U]);
    vlSelfRef.multi_core_top__DOT__dsram_arb_valid[2U] 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core_mem_instr[2U])) 
           & vlSelfRef.multi_core_top__DOT__core_mem_valid[2U]);
    vlSelfRef.multi_core_top__DOT__dsram_arb_valid[3U] 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core_mem_instr[3U])) 
           & vlSelfRef.multi_core_top__DOT__core_mem_valid[3U]);
    vlSelfRef.multi_core_top__DOT__arb__DOT__mem_rdata 
        = vlSelfRef.multi_core_top__DOT__dsram_rdata;
    vlSelfRef.multi_core_top__DOT__arb__DOT__mem_ready 
        = vlSelfRef.multi_core_top__DOT__dsram_ready;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = __VdfgRegularize_h6e95ff9d_0_17;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul) 
           | (IData)(__VdfgRegularize_h6e95ff9d_0_17));
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = __VdfgRegularize_h6e95ff9d_0_19;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul) 
           | (IData)(__VdfgRegularize_h6e95ff9d_0_19));
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = __VdfgRegularize_h6e95ff9d_0_21;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul) 
           | (IData)(__VdfgRegularize_h6e95ff9d_0_21));
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = __VdfgRegularize_h6e95ff9d_0_23;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul) 
           | (IData)(__VdfgRegularize_h6e95ff9d_0_23));
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_wstrb[0U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_wstrb;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_wstrb[1U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_wstrb;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_wstrb[2U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_wstrb;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_wstrb[3U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_wstrb;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_wdata[0U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_wdata;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_wdata[1U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_wdata;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_wdata[2U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_wdata;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_wdata[3U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_wdata;
    vlSelfRef.multi_core_top__DOT__isram3__DOT__word_addr 
        = (0x000003ffU & (vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_addr 
                          >> 2U));
    vlSelfRef.multi_core_top__DOT__isram2__DOT__word_addr 
        = (0x000003ffU & (vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_addr 
                          >> 2U));
    vlSelfRef.multi_core_top__DOT__isram1__DOT__word_addr 
        = (0x000003ffU & (vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_addr 
                          >> 2U));
    vlSelfRef.multi_core_top__DOT__isram0__DOT__word_addr 
        = (0x000003ffU & (vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_addr 
                          >> 2U));
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_addr[0U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_addr;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_addr[1U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_addr;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_addr[2U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_addr;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_addr[3U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_addr;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_instr[0U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_instr;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_instr[1U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_instr;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_instr[2U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_instr;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_instr[3U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_instr;
    vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_valid 
        = vlSelfRef.multi_core_top__DOT__isram_valid[3U];
    vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_valid 
        = vlSelfRef.multi_core_top__DOT__isram_valid[2U];
    vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_valid 
        = vlSelfRef.multi_core_top__DOT__isram_valid[1U];
    vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_valid 
        = vlSelfRef.multi_core_top__DOT__isram_valid[0U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_valid 
        = vlSelfRef.multi_core_top__DOT__dsram_arb_valid[0U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_valid 
        = vlSelfRef.multi_core_top__DOT__dsram_arb_valid[1U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_valid 
        = vlSelfRef.multi_core_top__DOT__dsram_arb_valid[2U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_valid 
        = vlSelfRef.multi_core_top__DOT__dsram_arb_valid[3U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_rdata 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__mem_rdata;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_rdata 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__mem_rdata;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_rdata 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__mem_rdata;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_rdata 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__mem_rdata;
    if (vlSelfRef.multi_core_top__DOT__arb__DOT__bus_busy) {
        vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_ready 
            = ((IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__mem_ready) 
               & (0U == (IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__grant)));
        vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_ready 
            = ((IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__mem_ready) 
               & (1U == (IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__grant)));
        vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_ready 
            = ((IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__mem_ready) 
               & (2U == (IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__grant)));
        vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_ready 
            = ((IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__mem_ready) 
               & (3U == (IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__grant)));
        vlSelfRef.multi_core_top__DOT__arb__DOT__mem_wstrb 
            = vlSelfRef.multi_core_top__DOT__arb__DOT__core_wstrb
            [vlSelfRef.multi_core_top__DOT__arb__DOT__grant];
        vlSelfRef.multi_core_top__DOT__arb__DOT__mem_wdata 
            = vlSelfRef.multi_core_top__DOT__arb__DOT__core_wdata
            [vlSelfRef.multi_core_top__DOT__arb__DOT__grant];
        vlSelfRef.multi_core_top__DOT__arb__DOT__mem_addr 
            = vlSelfRef.multi_core_top__DOT__arb__DOT__core_addr
            [vlSelfRef.multi_core_top__DOT__arb__DOT__grant];
    } else {
        vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_ready = 0U;
        vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_ready = 0U;
        vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_ready = 0U;
        vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_ready = 0U;
        vlSelfRef.multi_core_top__DOT__arb__DOT__mem_wstrb = 0U;
        vlSelfRef.multi_core_top__DOT__arb__DOT__mem_wdata = 0U;
        vlSelfRef.multi_core_top__DOT__arb__DOT__mem_addr = 0U;
    }
    vlSelfRef.multi_core_top__DOT__arb__DOT__mem_instr 
        = ((IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__bus_busy) 
           && vlSelfRef.multi_core_top__DOT__arb__DOT__core_instr
           [vlSelfRef.multi_core_top__DOT__arb__DOT__grant]);
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_valid[0U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_valid;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_valid[1U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_valid;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_valid[2U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_valid;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_valid[3U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_valid;
    vlSelfRef.multi_core_top__DOT__dsram_arb_rdata[0U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_rdata;
    vlSelfRef.multi_core_top__DOT__dsram_arb_rdata[1U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_rdata;
    vlSelfRef.multi_core_top__DOT__dsram_arb_rdata[2U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_rdata;
    vlSelfRef.multi_core_top__DOT__dsram_arb_rdata[3U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_rdata;
    vlSelfRef.multi_core_top__DOT__dsram_arb_ready[0U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_ready;
    vlSelfRef.multi_core_top__DOT__dsram_arb_ready[1U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_ready;
    vlSelfRef.multi_core_top__DOT__dsram_arb_ready[2U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_ready;
    vlSelfRef.multi_core_top__DOT__dsram_arb_ready[3U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_ready;
    vlSelfRef.multi_core_top__DOT__dsram_wstrb = vlSelfRef.multi_core_top__DOT__arb__DOT__mem_wstrb;
    vlSelfRef.multi_core_top__DOT__dsram_wdata = vlSelfRef.multi_core_top__DOT__arb__DOT__mem_wdata;
    vlSelfRef.multi_core_top__DOT__dsram_addr = vlSelfRef.multi_core_top__DOT__arb__DOT__mem_addr;
    vlSelfRef.multi_core_top__DOT__dsram_instr = vlSelfRef.multi_core_top__DOT__arb__DOT__mem_instr;
    vlSelfRef.multi_core_top__DOT__arb__DOT__rr_grant 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__next_grant;
    vlSelfRef.multi_core_top__DOT__arb__DOT__rr_found = 0U;
    vlSelfRef.multi_core_top__DOT__arb__DOT__i = 1U;
    while (VL_GTES_III(32, 4U, vlSelfRef.multi_core_top__DOT__arb__DOT__i)) {
        if (((~ (IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__rr_found)) 
             & vlSelfRef.multi_core_top__DOT__arb__DOT__core_valid
             [(3U & ((IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__next_grant) 
                     + vlSelfRef.multi_core_top__DOT__arb__DOT__i))])) {
            vlSelfRef.multi_core_top__DOT__arb__DOT__rr_grant 
                = (3U & ((IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__next_grant) 
                         + vlSelfRef.multi_core_top__DOT__arb__DOT__i));
            vlSelfRef.multi_core_top__DOT__arb__DOT__rr_found = 1U;
        }
        vlSelfRef.multi_core_top__DOT__arb__DOT__i 
            = ((IData)(1U) + vlSelfRef.multi_core_top__DOT__arb__DOT__i);
    }
    vlSelfRef.multi_core_top__DOT__arb__DOT__mem_valid 
        = ((IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__bus_busy) 
           && vlSelfRef.multi_core_top__DOT__arb__DOT__core_valid
           [vlSelfRef.multi_core_top__DOT__arb__DOT__grant]);
    vlSelfRef.multi_core_top__DOT__core_mem_rdata[0U] 
        = (vlSelfRef.multi_core_top__DOT__core_mem_instr[0U]
            ? vlSelfRef.multi_core_top__DOT__isram_rdata[0U]
            : vlSelfRef.multi_core_top__DOT__dsram_arb_rdata[0U]);
    vlSelfRef.multi_core_top__DOT__core_mem_rdata[1U] 
        = (vlSelfRef.multi_core_top__DOT__core_mem_instr[1U]
            ? vlSelfRef.multi_core_top__DOT__isram_rdata[1U]
            : vlSelfRef.multi_core_top__DOT__dsram_arb_rdata[1U]);
    vlSelfRef.multi_core_top__DOT__core_mem_rdata[2U] 
        = (vlSelfRef.multi_core_top__DOT__core_mem_instr[2U]
            ? vlSelfRef.multi_core_top__DOT__isram_rdata[2U]
            : vlSelfRef.multi_core_top__DOT__dsram_arb_rdata[2U]);
    vlSelfRef.multi_core_top__DOT__core_mem_rdata[3U] 
        = (vlSelfRef.multi_core_top__DOT__core_mem_instr[3U]
            ? vlSelfRef.multi_core_top__DOT__isram_rdata[3U]
            : vlSelfRef.multi_core_top__DOT__dsram_arb_rdata[3U]);
    vlSelfRef.multi_core_top__DOT__core_mem_ready[0U] 
        = (vlSelfRef.multi_core_top__DOT__isram_ready[0U] 
           | vlSelfRef.multi_core_top__DOT__dsram_arb_ready[0U]);
    vlSelfRef.multi_core_top__DOT__core_mem_ready[1U] 
        = (vlSelfRef.multi_core_top__DOT__isram_ready[1U] 
           | vlSelfRef.multi_core_top__DOT__dsram_arb_ready[1U]);
    vlSelfRef.multi_core_top__DOT__core_mem_ready[2U] 
        = (vlSelfRef.multi_core_top__DOT__isram_ready[2U] 
           | vlSelfRef.multi_core_top__DOT__dsram_arb_ready[2U]);
    vlSelfRef.multi_core_top__DOT__core_mem_ready[3U] 
        = (vlSelfRef.multi_core_top__DOT__isram_ready[3U] 
           | vlSelfRef.multi_core_top__DOT__dsram_arb_ready[3U]);
    vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__dsram_wstrb;
    vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_wdata 
        = vlSelfRef.multi_core_top__DOT__dsram_wdata;
    vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_addr 
        = vlSelfRef.multi_core_top__DOT__dsram_addr;
    vlSelfRef.multi_core_top__DOT__dsram_valid = vlSelfRef.multi_core_top__DOT__arb__DOT__mem_valid;
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_rdata[3U];
    if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_word 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1)
                ? (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata 
                   >> 0x10U) : (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata));
    } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1)
                ? ((1U & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1)
                    ? (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata 
                       >> 0x18U) : (0x000000ffU & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata 
                                                   >> 0x10U)))
                : ((1U & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1)
                    ? (0x000000ffU & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata 
                                      >> 8U)) : (0x000000ffU 
                                                 & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata)));
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_rdata[2U];
    if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_word 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1)
                ? (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata 
                   >> 0x10U) : (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata));
    } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1)
                ? ((1U & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1)
                    ? (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata 
                       >> 0x18U) : (0x000000ffU & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata 
                                                   >> 0x10U)))
                : ((1U & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1)
                    ? (0x000000ffU & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata 
                                      >> 8U)) : (0x000000ffU 
                                                 & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata)));
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_rdata[1U];
    if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_word 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1)
                ? (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata 
                   >> 0x10U) : (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata));
    } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1)
                ? ((1U & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1)
                    ? (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata 
                       >> 0x18U) : (0x000000ffU & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata 
                                                   >> 0x10U)))
                : ((1U & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1)
                    ? (0x000000ffU & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata 
                                      >> 8U)) : (0x000000ffU 
                                                 & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata)));
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_rdata[0U];
    if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_word 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata;
    } else if ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1)
                ? (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata 
                   >> 0x10U) : (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata));
    } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_word 
            = ((2U & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1)
                ? ((1U & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1)
                    ? (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata 
                       >> 0x18U) : (0x000000ffU & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata 
                                                   >> 0x10U)))
                : ((1U & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1)
                    ? (0x000000ffU & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata 
                                      >> 8U)) : (0x000000ffU 
                                                 & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata)));
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_ready 
        = vlSelfRef.multi_core_top__DOT__core_mem_ready[3U];
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_ready 
        = vlSelfRef.multi_core_top__DOT__core_mem_ready[2U];
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_ready 
        = vlSelfRef.multi_core_top__DOT__core_mem_ready[1U];
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_ready 
        = vlSelfRef.multi_core_top__DOT__core_mem_ready[0U];
    vlSelfRef.multi_core_top__DOT__dsram__DOT__word_addr 
        = (0x00003fffU & (vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_addr 
                          >> 2U));
    vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_valid 
        = vlSelfRef.multi_core_top__DOT__dsram_valid;
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_mem_rdata 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata;
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_mem_rdata 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata;
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_mem_rdata 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata;
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_mem_rdata 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata;
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_mem_ready 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_ready;
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_xfer 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_valid) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_ready));
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_mem_ready 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_ready;
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_xfer 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_valid) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_ready));
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_mem_ready 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_ready;
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_xfer 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_valid) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_ready));
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_mem_ready 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_ready;
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_xfer 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_valid) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_ready));
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_xfer)
            ? vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata
            : vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q);
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_xfer)
            ? vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata
            : vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q);
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_xfer)
            ? vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata
            : vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q);
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_xfer)
            ? vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata
            : vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q);
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched_noshuffle;
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched_noshuffle;
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched_noshuffle;
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched_noshuffle;
}

void Vmulti_core_top___024root___ico_comb__TOP__2(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___ico_comb__TOP__2\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_12;
    __VdfgRegularize_h6e95ff9d_0_12 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_13;
    __VdfgRegularize_h6e95ff9d_0_13 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_14;
    __VdfgRegularize_h6e95ff9d_0_14 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_15;
    __VdfgRegularize_h6e95ff9d_0_15 = 0;
    // Body
    vlSelfRef.multi_core_top__DOT__arb__DOT__resetn 
        = vlSelfRef.multi_core_top__DOT__resetn;
    vlSelfRef.multi_core_top__DOT__core3__DOT__resetn 
        = vlSelfRef.multi_core_top__DOT__resetn;
    vlSelfRef.multi_core_top__DOT__core2__DOT__resetn 
        = vlSelfRef.multi_core_top__DOT__resetn;
    vlSelfRef.multi_core_top__DOT__core1__DOT__resetn 
        = vlSelfRef.multi_core_top__DOT__resetn;
    vlSelfRef.multi_core_top__DOT__core0__DOT__resetn 
        = vlSelfRef.multi_core_top__DOT__resetn;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__resetn 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__resetn;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__resetn 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__resetn;
    vlSelfRef.multi_core_top__DOT__core3__DOT__clear_prefetched_high_word 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__prefetched_high_word)))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn))))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__clear_prefetched_high_word = 0U;
    }
    __VdfgRegularize_h6e95ff9d_0_15 = ((~ (0U != (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_state))) 
                                       & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn));
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_done 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn) 
           & (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rinst) 
               & (3U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_state))) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_xfer) 
                 & ((0U != (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_state)) 
                    & ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_wdata) 
                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))));
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__resetn 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__resetn;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__resetn 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__resetn;
    vlSelfRef.multi_core_top__DOT__core2__DOT__clear_prefetched_high_word 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__prefetched_high_word)))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn))))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__clear_prefetched_high_word = 0U;
    }
    __VdfgRegularize_h6e95ff9d_0_14 = ((~ (0U != (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_state))) 
                                       & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn));
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_done 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn) 
           & (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rinst) 
               & (3U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_state))) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_xfer) 
                 & ((0U != (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_state)) 
                    & ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_wdata) 
                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))))));
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__resetn 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__resetn;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__resetn 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__resetn;
    vlSelfRef.multi_core_top__DOT__core1__DOT__clear_prefetched_high_word 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__prefetched_high_word)))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn))))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__clear_prefetched_high_word = 0U;
    }
    __VdfgRegularize_h6e95ff9d_0_13 = ((~ (0U != (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_state))) 
                                       & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn));
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_done 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn) 
           & (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rinst) 
               & (3U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_state))) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_xfer) 
                 & ((0U != (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_state)) 
                    & ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_wdata) 
                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))))));
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__resetn 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__resetn;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__resetn 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__resetn;
    vlSelfRef.multi_core_top__DOT__core0__DOT__clear_prefetched_high_word 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__prefetched_high_word)))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn))))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__clear_prefetched_high_word = 0U;
    }
    __VdfgRegularize_h6e95ff9d_0_12 = ((~ (0U != (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_state))) 
                                       & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn));
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_done 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn) 
           & (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rinst) 
               & (3U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_state))) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_xfer) 
                 & ((0U != (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_state)) 
                    & ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_wdata) 
                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))))));
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_write 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_wdata) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_15));
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_read 
        = (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_prefetch) 
            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_15));
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_write 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_wdata) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_14));
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_read 
        = (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_prefetch) 
            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_14));
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_write 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_wdata) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_13));
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_read 
        = (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_prefetch) 
            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_13));
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_write 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_wdata) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_12));
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_read 
        = (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_prefetch) 
            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_12));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_core_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vmulti_core_top___024root___eval_phase__ico(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___eval_phase__ico\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VicoTriggered[1U]) 
                                         | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        (((vlSelfRef.irq 
                                                           != vlSelfRef.__Vtrigprevexpr___TOP__irq__0) 
                                                          << 2U) 
                                                         | ((((IData)(vlSelfRef.resetn) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__resetn__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.clk) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__resetn__0 
            = vlSelfRef.resetn;
        vlSelfRef.__Vtrigprevexpr___TOP__irq__0 = vlSelfRef.irq;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmulti_core_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vmulti_core_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((1ULL & vlSelfRef.__VicoTriggered[1U])) {
                Vmulti_core_top___024root___ico_sequent__TOP__0(vlSelf);
            }
            if ((4ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__1
                    vlSelfRef.multi_core_top__DOT__irq 
                        = vlSelfRef.irq;
                }
            }
            if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__2
                    vlSelfRef.multi_core_top__DOT__clk 
                        = vlSelfRef.clk;
                }
            }
            if ((2ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__3
                    vlSelfRef.multi_core_top__DOT__resetn 
                        = vlSelfRef.resetn;
                }
            }
            if (((1ULL & vlSelfRef.__VicoTriggered[1U]) 
                 | (4ULL & vlSelfRef.__VicoTriggered[0U]))) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.multi_core_top__DOT__core3__DOT__irq 
                        = vlSelfRef.multi_core_top__DOT__irq;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__irq 
                        = vlSelfRef.multi_core_top__DOT__irq;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__irq 
                        = vlSelfRef.multi_core_top__DOT__irq;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__irq 
                        = vlSelfRef.multi_core_top__DOT__irq;
                }
            }
            if ((1ULL & (vlSelfRef.__VicoTriggered[1U] 
                         | vlSelfRef.__VicoTriggered[0U]))) {
                {
                    // Inlined CFunc: _ico_comb__TOP__1
                    vlSelfRef.multi_core_top__DOT__isram3__DOT__clk 
                        = vlSelfRef.multi_core_top__DOT__clk;
                    vlSelfRef.multi_core_top__DOT__isram2__DOT__clk 
                        = vlSelfRef.multi_core_top__DOT__clk;
                    vlSelfRef.multi_core_top__DOT__isram1__DOT__clk 
                        = vlSelfRef.multi_core_top__DOT__clk;
                    vlSelfRef.multi_core_top__DOT__isram0__DOT__clk 
                        = vlSelfRef.multi_core_top__DOT__clk;
                    vlSelfRef.multi_core_top__DOT__dsram__DOT__clk 
                        = vlSelfRef.multi_core_top__DOT__clk;
                    vlSelfRef.multi_core_top__DOT__arb__DOT__clk 
                        = vlSelfRef.multi_core_top__DOT__clk;
                    vlSelfRef.multi_core_top__DOT__core3__DOT__clk 
                        = vlSelfRef.multi_core_top__DOT__clk;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__clk 
                        = vlSelfRef.multi_core_top__DOT__clk;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__clk 
                        = vlSelfRef.multi_core_top__DOT__clk;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__clk 
                        = vlSelfRef.multi_core_top__DOT__clk;
                    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__clk 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__clk;
                    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__clk 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__clk;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__clk 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__clk;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__clk 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__clk;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__clk 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__clk;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__clk 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__clk;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__clk 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__clk;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__clk 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__clk;
                }
            }
            if (((1ULL & vlSelfRef.__VicoTriggered[1U]) 
                 | (2ULL & vlSelfRef.__VicoTriggered[0U]))) {
                Vmulti_core_top___024root___ico_comb__TOP__2(vlSelf);
            }
        }
    }
    return (__VicoExecute);
}

bool Vmulti_core_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vmulti_core_top___024root___nba_sequent__TOP__0(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___nba_sequent__TOP__0\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_15;
    __VdfgRegularize_h6e95ff9d_0_15 = 0;
    CData/*1:0*/ __Vdly__multi_core_top__DOT__core3__DOT__mem_state;
    __Vdly__multi_core_top__DOT__core3__DOT__mem_state = 0;
    CData/*4:0*/ __Vdly__multi_core_top__DOT__core3__DOT__reg_sh;
    __Vdly__multi_core_top__DOT__core3__DOT__reg_sh = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core3__DOT__reg_out;
    __Vdly__multi_core_top__DOT__core3__DOT__reg_out = 0;
    QData/*63:0*/ __Vdly__multi_core_top__DOT__core3__DOT__count_cycle;
    __Vdly__multi_core_top__DOT__core3__DOT__count_cycle = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core3__DOT__timer;
    __Vdly__multi_core_top__DOT__core3__DOT__timer = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core3__DOT__decoder_trigger;
    __Vdly__multi_core_top__DOT__core3__DOT__decoder_trigger = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core3__DOT__decoder_pseudo_trigger;
    __Vdly__multi_core_top__DOT__core3__DOT__decoder_pseudo_trigger = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core3__DOT__do_waitirq;
    __Vdly__multi_core_top__DOT__core3__DOT__do_waitirq = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst;
    __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst = 0;
    CData/*1:0*/ __Vdly__multi_core_top__DOT__core3__DOT__mem_wordsize;
    __Vdly__multi_core_top__DOT__core3__DOT__mem_wordsize = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lu;
    __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lu = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lh;
    __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lh = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lb;
    __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lb = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core3__DOT__irq_active;
    __Vdly__multi_core_top__DOT__core3__DOT__irq_active = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core3__DOT__reg_pc;
    __Vdly__multi_core_top__DOT__core3__DOT__reg_pc = 0;
    CData/*5:0*/ __Vdly__multi_core_top__DOT__core3__DOT__latched_rd;
    __Vdly__multi_core_top__DOT__core3__DOT__latched_rd = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core3__DOT__latched_compr;
    __Vdly__multi_core_top__DOT__core3__DOT__latched_compr = 0;
    CData/*1:0*/ __Vdly__multi_core_top__DOT__core3__DOT__irq_state;
    __Vdly__multi_core_top__DOT__core3__DOT__irq_state = 0;
    QData/*63:0*/ __Vdly__multi_core_top__DOT__core3__DOT__count_instr;
    __Vdly__multi_core_top__DOT__core3__DOT__count_instr = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core3__DOT__mem_do_prefetch;
    __Vdly__multi_core_top__DOT__core3__DOT__mem_do_prefetch = 0;
    CData/*7:0*/ __Vdly__multi_core_top__DOT__core3__DOT__cpu_state;
    __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core3__DOT__reg_op1;
    __Vdly__multi_core_top__DOT__core3__DOT__reg_op1 = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core3__DOT__pcpi_valid;
    __Vdly__multi_core_top__DOT__core3__DOT__pcpi_valid = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core3__DOT__irq_mask;
    __Vdly__multi_core_top__DOT__core3__DOT__irq_mask = 0;
    CData/*3:0*/ __Vdly__multi_core_top__DOT__core3__DOT__pcpi_timeout_counter;
    __Vdly__multi_core_top__DOT__core3__DOT__pcpi_timeout_counter = 0;
    IData/*31:0*/ __VdlyVal__multi_core_top__DOT__core3__DOT__cpuregs__v0;
    __VdlyVal__multi_core_top__DOT__core3__DOT__cpuregs__v0 = 0;
    CData/*5:0*/ __VdlyDim0__multi_core_top__DOT__core3__DOT__cpuregs__v0;
    __VdlyDim0__multi_core_top__DOT__core3__DOT__cpuregs__v0 = 0;
    CData/*0:0*/ __VdlySet__multi_core_top__DOT__core3__DOT__cpuregs__v0;
    __VdlySet__multi_core_top__DOT__core3__DOT__cpuregs__v0 = 0;
    // Body
    __Vdly__multi_core_top__DOT__core3__DOT__pcpi_timeout_counter 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_timeout_counter;
    __VdlySet__multi_core_top__DOT__core3__DOT__cpuregs__v0 = 0U;
    __Vdly__multi_core_top__DOT__core3__DOT__reg_sh 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__reg_sh;
    __Vdly__multi_core_top__DOT__core3__DOT__count_cycle 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__count_cycle;
    __Vdly__multi_core_top__DOT__core3__DOT__timer 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__timer;
    __Vdly__multi_core_top__DOT__core3__DOT__decoder_pseudo_trigger 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_pseudo_trigger;
    __Vdly__multi_core_top__DOT__core3__DOT__do_waitirq 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__do_waitirq;
    __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lu 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__latched_is_lu;
    __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lh 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__latched_is_lh;
    __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lb 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__latched_is_lb;
    __Vdly__multi_core_top__DOT__core3__DOT__latched_rd 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__latched_rd;
    __Vdly__multi_core_top__DOT__core3__DOT__count_instr 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__count_instr;
    __Vdly__multi_core_top__DOT__core3__DOT__pcpi_valid 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_valid;
    __Vdly__multi_core_top__DOT__core3__DOT__decoder_trigger 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_trigger;
    __Vdly__multi_core_top__DOT__core3__DOT__irq_active 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__irq_active;
    __Vdly__multi_core_top__DOT__core3__DOT__mem_wordsize 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wordsize;
    __Vdly__multi_core_top__DOT__core3__DOT__reg_pc 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__reg_pc;
    __Vdly__multi_core_top__DOT__core3__DOT__latched_compr 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__latched_compr;
    __Vdly__multi_core_top__DOT__core3__DOT__mem_do_prefetch 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_prefetch;
    __Vdly__multi_core_top__DOT__core3__DOT__irq_mask 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__irq_mask;
    __Vdly__multi_core_top__DOT__core3__DOT__reg_out 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__reg_out;
    __Vdly__multi_core_top__DOT__core3__DOT__irq_state 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__irq_state;
    __Vdly__multi_core_top__DOT__core3__DOT__cpu_state 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state;
    __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rinst;
    __Vdly__multi_core_top__DOT__core3__DOT__reg_op1 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1;
    __Vdly__multi_core_top__DOT__core3__DOT__mem_state 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_state;
    if ((((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn) 
          & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_write)) 
         & (0U != (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_rd)))) {
        if ((0x23U >= (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_rd))) {
            __VdlyVal__multi_core_top__DOT__core3__DOT__cpuregs__v0 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_wrdata;
            __VdlyDim0__multi_core_top__DOT__core3__DOT__cpuregs__v0 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__latched_rd;
            __VdlySet__multi_core_top__DOT__core3__DOT__cpuregs__v0 = 1U;
        }
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__alu_wait_2 = 0U;
    vlSelfRef.multi_core_top__DOT__core3__DOT__trace_data = 0ULL;
    vlSelfRef.multi_core_top__DOT__core3__DOT__alu_wait = 0U;
    vlSelfRef.multi_core_top__DOT__core3__DOT__trace_valid = 0U;
    vlSelfRef.multi_core_top__DOT__core3__DOT__q_insn_rd 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rd;
    vlSelfRef.multi_core_top__DOT__core3__DOT__q_insn_rs2 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rs2;
    vlSelfRef.multi_core_top__DOT__core3__DOT__q_insn_rs1 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rs1;
    vlSelfRef.multi_core_top__DOT__core3__DOT__q_insn_opcode 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_opcode;
    vlSelfRef.multi_core_top__DOT__core3__DOT__q_insn_imm 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_imm;
    vlSelfRef.multi_core_top__DOT__core3__DOT__q_ascii_instr 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_ascii_instr;
    vlSelfRef.multi_core_top__DOT__core3__DOT__clear_prefetched_high_word_q 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__clear_prefetched_high_word;
    vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0_q 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0;
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__launch_next_insn) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_addr 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__next_pc;
        vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs1val = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs2val = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs1val_valid = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs2val_valid = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_next = 1U;
    } else {
        vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_next = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_pseudo_trigger_q 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_pseudo_trigger;
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_trigger_q) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__cached_ascii_instr 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr;
        vlSelfRef.multi_core_top__DOT__core3__DOT__cached_insn_opcode 
            = ((3U == (3U & vlSelfRef.multi_core_top__DOT__core3__DOT__next_insn_opcode))
                ? vlSelfRef.multi_core_top__DOT__core3__DOT__next_insn_opcode
                : (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core3__DOT__next_insn_opcode));
        vlSelfRef.multi_core_top__DOT__core3__DOT__cached_insn_rd 
            = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rd));
        vlSelfRef.multi_core_top__DOT__core3__DOT__cached_insn_rs1 
            = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs1));
        vlSelfRef.multi_core_top__DOT__core3__DOT__cached_insn_rs2 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs2;
        vlSelfRef.multi_core_top__DOT__core3__DOT__cached_insn_imm 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm;
    }
    if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn)) 
               | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__trap)))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_valid_insn = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__prefetched_high_word = 0U;
    } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__launch_next_insn) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_valid_insn = 1U;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__clear_prefetched_high_word) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__prefetched_high_word = 0U;
    }
    if ((1U & (~ ((~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn)) 
                  | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__trap))))) {
        if (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_write) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wdata 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_wdata;
        }
        if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_read) 
             | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_write))) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__mem_addr 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_addr;
        }
    }
    if (__VdlySet__multi_core_top__DOT__core3__DOT__cpuregs__v0) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs[__VdlyDim0__multi_core_top__DOT__core3__DOT__cpuregs__v0] 
            = __VdlyVal__multi_core_top__DOT__core3__DOT__cpuregs__v0;
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wdata;
    vlSelfRef.multi_core_top__DOT__core_mem_wdata[3U] 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wdata;
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_mem_addr 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_addr;
    vlSelfRef.multi_core_top__DOT__core_mem_addr[3U] 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_addr;
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__resetn) {
        if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__last_mem_valid)))) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_firstword_reg = 0U;
        }
    } else {
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_firstword_reg = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__last_mem_valid 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn) 
           && ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_valid) 
               & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_ready))));
    if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn)) 
               | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__trap)))) {
        if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn)))) {
            __Vdly__multi_core_top__DOT__core3__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn)) 
                   | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_ready)))) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__mem_valid = 0U;
        }
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_secondword = 0U;
    } else {
        if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_read) 
             | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_write))) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wstrb 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_wstrb) 
                   & (- (IData)((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_state))) {
            if ((((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_prefetch) 
                  | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rinst)) 
                 | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rdata))) {
                vlSelfRef.multi_core_top__DOT__core3__DOT__mem_valid = 1U;
                vlSelfRef.multi_core_top__DOT__core3__DOT__mem_instr 
                    = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_prefetch) 
                       | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rinst));
                vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wstrb = 0U;
                __Vdly__multi_core_top__DOT__core3__DOT__mem_state = 1U;
            }
            if (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_wdata) {
                vlSelfRef.multi_core_top__DOT__core3__DOT__mem_valid = 1U;
                vlSelfRef.multi_core_top__DOT__core3__DOT__mem_instr = 0U;
                __Vdly__multi_core_top__DOT__core3__DOT__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_state))) {
            if (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_xfer) {
                vlSelfRef.multi_core_top__DOT__core3__DOT__mem_valid = 0U;
                vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_secondword = 0U;
                __Vdly__multi_core_top__DOT__core3__DOT__mem_state 
                    = (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rinst) 
                        | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rdata))
                        ? 0U : 3U);
            }
        } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_state))) {
            if (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_xfer) {
                vlSelfRef.multi_core_top__DOT__core3__DOT__mem_valid = 0U;
                __Vdly__multi_core_top__DOT__core3__DOT__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_state))) {
            if (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rinst) {
                __Vdly__multi_core_top__DOT__core3__DOT__mem_state = 0U;
            }
        }
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_opcode 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__q_insn_opcode;
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rs1 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__q_insn_rs1;
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_state 
        = __Vdly__multi_core_top__DOT__core3__DOT__mem_state;
    __VdfgRegularize_h6e95ff9d_0_15 = ((~ (0U != (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_state))) 
                                       & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn));
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wstrb;
    vlSelfRef.multi_core_top__DOT__core_mem_wstrb[3U] 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wstrb;
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_mem_valid 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_valid;
    vlSelfRef.multi_core_top__DOT__core_mem_valid[3U] 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_valid;
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_mem_instr 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_instr;
    vlSelfRef.multi_core_top__DOT__core_mem_instr[3U] 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_instr;
    vlSelfRef.multi_core_top__DOT__core3__DOT__trap = 0U;
    __Vdly__multi_core_top__DOT__core3__DOT__reg_sh = 0U;
    __Vdly__multi_core_top__DOT__core3__DOT__reg_out = 0U;
    vlSelfRef.multi_core_top__DOT__core3__DOT__set_mem_do_rinst = 0U;
    vlSelfRef.multi_core_top__DOT__core3__DOT__set_mem_do_rdata = 0U;
    vlSelfRef.multi_core_top__DOT__core3__DOT__set_mem_do_wdata = 0U;
    vlSelfRef.multi_core_top__DOT__core3__DOT__next_irq_pending 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__irq_pending;
    __Vdly__multi_core_top__DOT__core3__DOT__decoder_trigger 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rinst) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_done));
    vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_trigger_q 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_trigger;
    __Vdly__multi_core_top__DOT__core3__DOT__decoder_pseudo_trigger = 0U;
    __Vdly__multi_core_top__DOT__core3__DOT__do_waitirq = 0U;
    __Vdly__multi_core_top__DOT__core3__DOT__count_cycle 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn)
            ? (1ULL + vlSelfRef.multi_core_top__DOT__core3__DOT__count_cycle)
            : 0ULL);
    if ((0U != vlSelfRef.multi_core_top__DOT__core3__DOT__timer)) {
        __Vdly__multi_core_top__DOT__core3__DOT__timer 
            = (vlSelfRef.multi_core_top__DOT__core3__DOT__timer 
               - (IData)(1U));
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__resetn) {
        if (((((((((0x80U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state))) 
                | (8U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state))) 
               | (4U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state))) 
              | (2U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state))) 
             | (1U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state))) {
                vlSelfRef.multi_core_top__DOT__core3__DOT__trap = 1U;
            } else if ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state))) {
                __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst 
                    = (1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_trigger)) 
                             & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__do_waitirq))));
                __Vdly__multi_core_top__DOT__core3__DOT__mem_wordsize = 0U;
                __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lu = 0U;
                __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lh = 0U;
                __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lb = 0U;
                vlSelfRef.multi_core_top__DOT__core3__DOT__current_pc 
                    = vlSelfRef.multi_core_top__DOT__core3__DOT__reg_next_pc;
                if (vlSelfRef.multi_core_top__DOT__core3__DOT__latched_branch) {
                    vlSelfRef.multi_core_top__DOT__core3__DOT__current_pc 
                        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store)
                            ? (0xfffffffeU & ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_stalu)
                                               ? vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_q
                                               : vlSelfRef.multi_core_top__DOT__core3__DOT__reg_out))
                            : vlSelfRef.multi_core_top__DOT__core3__DOT__reg_next_pc);
                } else if ((1U & (~ ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store) 
                                     & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_branch)))))) {
                    if ((1U & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_state))) {
                        vlSelfRef.multi_core_top__DOT__core3__DOT__current_pc = 0x00000010U;
                        __Vdly__multi_core_top__DOT__core3__DOT__irq_active = 1U;
                        __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst = 1U;
                    } else if ((2U & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_state))) {
                        vlSelfRef.multi_core_top__DOT__core3__DOT__next_irq_pending 
                            = (vlSelfRef.multi_core_top__DOT__core3__DOT__next_irq_pending 
                               & vlSelfRef.multi_core_top__DOT__core3__DOT__irq_mask);
                        vlSelfRef.multi_core_top__DOT__core3__DOT__eoi 
                            = (vlSelfRef.multi_core_top__DOT__core3__DOT__irq_pending 
                               & (~ vlSelfRef.multi_core_top__DOT__core3__DOT__irq_mask));
                    }
                }
                __Vdly__multi_core_top__DOT__core3__DOT__reg_pc 
                    = vlSelfRef.multi_core_top__DOT__core3__DOT__current_pc;
                vlSelfRef.multi_core_top__DOT__core3__DOT__reg_next_pc 
                    = vlSelfRef.multi_core_top__DOT__core3__DOT__current_pc;
                vlSelfRef.multi_core_top__DOT__core3__DOT__latched_stalu = 0U;
                vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store = 0U;
                vlSelfRef.multi_core_top__DOT__core3__DOT__latched_branch = 0U;
                __Vdly__multi_core_top__DOT__core3__DOT__latched_rd 
                    = vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rd;
                __Vdly__multi_core_top__DOT__core3__DOT__latched_compr 
                    = vlSelfRef.multi_core_top__DOT__core3__DOT__compressed_instr;
                if ((((((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_trigger) 
                        & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_active))) 
                       & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_delay))) 
                      & (0U != (vlSelfRef.multi_core_top__DOT__core3__DOT__irq_pending 
                                & (~ vlSelfRef.multi_core_top__DOT__core3__DOT__irq_mask)))) 
                     | (0U != (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_state)))) {
                    __Vdly__multi_core_top__DOT__core3__DOT__irq_state 
                        = ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_state))
                            ? 1U : ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_state))
                                     ? 2U : 0U));
                    __Vdly__multi_core_top__DOT__core3__DOT__latched_compr 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__latched_compr;
                    __Vdly__multi_core_top__DOT__core3__DOT__latched_rd 
                        = (0x20U | (1U & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_state)));
                } else if ((((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_trigger) 
                             | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__do_waitirq)) 
                            & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_waitirq))) {
                    if ((0U != vlSelfRef.multi_core_top__DOT__core3__DOT__irq_pending)) {
                        vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store = 1U;
                        __Vdly__multi_core_top__DOT__core3__DOT__reg_out 
                            = vlSelfRef.multi_core_top__DOT__core3__DOT__irq_pending;
                        vlSelfRef.multi_core_top__DOT__core3__DOT__reg_next_pc 
                            = (vlSelfRef.multi_core_top__DOT__core3__DOT__current_pc 
                               + ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__compressed_instr)
                                   ? 2U : 4U));
                        __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst = 1U;
                    } else {
                        __Vdly__multi_core_top__DOT__core3__DOT__do_waitirq = 1U;
                    }
                } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_trigger) {
                    __Vdly__multi_core_top__DOT__core3__DOT__count_instr 
                        = (1ULL + vlSelfRef.multi_core_top__DOT__core3__DOT__count_instr);
                    vlSelfRef.multi_core_top__DOT__core3__DOT__irq_delay 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__irq_active;
                    vlSelfRef.multi_core_top__DOT__core3__DOT__reg_next_pc 
                        = (vlSelfRef.multi_core_top__DOT__core3__DOT__current_pc 
                           + ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__compressed_instr)
                               ? 2U : 4U));
                    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_jal) {
                        __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst = 1U;
                        vlSelfRef.multi_core_top__DOT__core3__DOT__reg_next_pc 
                            = (vlSelfRef.multi_core_top__DOT__core3__DOT__current_pc 
                               + vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm_j);
                        vlSelfRef.multi_core_top__DOT__core3__DOT__latched_branch = 1U;
                    } else {
                        __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst = 0U;
                        __Vdly__multi_core_top__DOT__core3__DOT__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_jalr)) 
                                     & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_retirq))));
                        __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state))) {
                __Vdly__multi_core_top__DOT__core3__DOT__reg_op1 = 0U;
                vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2 = 0U;
                if (((((((((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_trap) 
                           | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                          | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_lui_auipc_jal)) 
                         | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_getq)) 
                        | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_setq)) 
                       | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_retirq)) 
                      | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_maskirq)) 
                     | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_timer))) {
                    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_trap) {
                        __Vdly__multi_core_top__DOT__core3__DOT__reg_op1 
                            = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1;
                        vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs1val 
                            = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1;
                        vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs1val_valid = 1U;
                        __Vdly__multi_core_top__DOT__core3__DOT__pcpi_valid = 1U;
                        __Vdly__multi_core_top__DOT__core3__DOT__reg_sh 
                            = (0x0000001fU & vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs2);
                        vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2 
                            = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs2;
                        vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs2val 
                            = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs2;
                        vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs2val_valid = 1U;
                        if (vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_int_ready) {
                            __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst = 1U;
                            __Vdly__multi_core_top__DOT__core3__DOT__pcpi_valid = 0U;
                            __Vdly__multi_core_top__DOT__core3__DOT__reg_out 
                                = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_int_rd;
                            vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store 
                                = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_int_wr;
                            __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 0x40U;
                        } else if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_timeout) 
                                    | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_ecall_ebreak))) {
                            __Vdly__multi_core_top__DOT__core3__DOT__pcpi_valid = 0U;
                            if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core3__DOT__irq_mask 
                                           >> 1U)) 
                                       & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_active))))) {
                                vlSelfRef.multi_core_top__DOT__core3__DOT__next_irq_pending 
                                    = (2U | vlSelfRef.multi_core_top__DOT__core3__DOT__next_irq_pending);
                                __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 0x40U;
                            } else {
                                __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 0x80U;
                            }
                        }
                    } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                        if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdcycle) {
                            __Vdly__multi_core_top__DOT__core3__DOT__reg_out 
                                = (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__count_cycle);
                        } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdcycleh) {
                            __Vdly__multi_core_top__DOT__core3__DOT__reg_out 
                                = (IData)((vlSelfRef.multi_core_top__DOT__core3__DOT__count_cycle 
                                           >> 0x20U));
                        } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdinstr) {
                            __Vdly__multi_core_top__DOT__core3__DOT__reg_out 
                                = (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__count_instr);
                        } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdinstrh) {
                            __Vdly__multi_core_top__DOT__core3__DOT__reg_out 
                                = (IData)((vlSelfRef.multi_core_top__DOT__core3__DOT__count_instr 
                                           >> 0x20U));
                        }
                        vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store = 1U;
                        __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 0x40U;
                    } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__is_lui_auipc_jal) {
                        __Vdly__multi_core_top__DOT__core3__DOT__reg_op1 
                            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lui)
                                ? 0U : vlSelfRef.multi_core_top__DOT__core3__DOT__reg_pc);
                        vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2 
                            = vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm;
                        __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst 
                            = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_prefetch;
                        __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 8U;
                    } else {
                        if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_getq) {
                            __Vdly__multi_core_top__DOT__core3__DOT__reg_out 
                                = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs1val 
                                = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs1val_valid = 1U;
                            vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store = 1U;
                        } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_setq) {
                            __Vdly__multi_core_top__DOT__core3__DOT__latched_rd 
                                = (0x20U | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_rd));
                            __Vdly__multi_core_top__DOT__core3__DOT__reg_out 
                                = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs1val 
                                = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs1val_valid = 1U;
                            vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store = 1U;
                        } else {
                            if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_retirq) {
                                vlSelfRef.multi_core_top__DOT__core3__DOT__eoi = 0U;
                                __Vdly__multi_core_top__DOT__core3__DOT__irq_active = 0U;
                                vlSelfRef.multi_core_top__DOT__core3__DOT__latched_branch = 1U;
                                vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store = 1U;
                                __Vdly__multi_core_top__DOT__core3__DOT__reg_out 
                                    = (0xfffffffeU 
                                       & vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1);
                            } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_maskirq) {
                                vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store = 1U;
                                __Vdly__multi_core_top__DOT__core3__DOT__reg_out 
                                    = vlSelfRef.multi_core_top__DOT__core3__DOT__irq_mask;
                                __Vdly__multi_core_top__DOT__core3__DOT__irq_mask 
                                    = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1;
                            } else {
                                vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store = 1U;
                                __Vdly__multi_core_top__DOT__core3__DOT__reg_out 
                                    = vlSelfRef.multi_core_top__DOT__core3__DOT__timer;
                                __Vdly__multi_core_top__DOT__core3__DOT__timer 
                                    = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1;
                            }
                            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs1val 
                                = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs1val_valid = 1U;
                        }
                        __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 0x40U;
                    }
                } else if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_lb_lh_lw_lbu_lhu) 
                            & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_trap)))) {
                    __Vdly__multi_core_top__DOT__core3__DOT__reg_op1 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs1val 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 1U;
                    __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__is_slli_srli_srai) {
                    __Vdly__multi_core_top__DOT__core3__DOT__reg_op1 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs1val 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__multi_core_top__DOT__core3__DOT__reg_sh 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs2;
                    __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 4U;
                } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                    __Vdly__multi_core_top__DOT__core3__DOT__reg_op1 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs1val 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs1val_valid = 1U;
                    vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm;
                    __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_prefetch;
                    __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 8U;
                } else {
                    __Vdly__multi_core_top__DOT__core3__DOT__reg_op1 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs1val 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__multi_core_top__DOT__core3__DOT__reg_sh 
                        = (0x0000001fU & vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs2);
                    vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs2;
                    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs2val 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs2;
                    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs2val_valid = 1U;
                    if (vlSelfRef.multi_core_top__DOT__core3__DOT__is_sb_sh_sw) {
                        __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 2U;
                        __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst = 1U;
                    } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__is_sll_srl_sra) {
                        __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 4U;
                    } else {
                        __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst 
                            = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_prefetch;
                        __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 8U;
                    }
                }
            } else if ((0x10U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state))) {
                __Vdly__multi_core_top__DOT__core3__DOT__reg_sh 
                    = (0x0000001fU & vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs2);
                vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2 
                    = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs2;
                vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs2val 
                    = vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs2;
                vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_rs2val_valid = 1U;
                if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_trap) {
                    __Vdly__multi_core_top__DOT__core3__DOT__pcpi_valid = 1U;
                    if (vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_int_ready) {
                        __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst = 1U;
                        __Vdly__multi_core_top__DOT__core3__DOT__pcpi_valid = 0U;
                        __Vdly__multi_core_top__DOT__core3__DOT__reg_out 
                            = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_int_rd;
                        vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store 
                            = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_int_wr;
                        __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 0x40U;
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_timeout) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_ecall_ebreak))) {
                        __Vdly__multi_core_top__DOT__core3__DOT__pcpi_valid = 0U;
                        if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core3__DOT__irq_mask 
                                       >> 1U)) & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_active))))) {
                            vlSelfRef.multi_core_top__DOT__core3__DOT__next_irq_pending 
                                = (2U | vlSelfRef.multi_core_top__DOT__core3__DOT__next_irq_pending);
                            __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 0x40U;
                        } else {
                            __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 0x80U;
                        }
                    }
                } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__is_sb_sh_sw) {
                    __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 2U;
                    __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__is_sll_srl_sra) {
                    __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 4U;
                } else {
                    __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_prefetch;
                    __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state))) {
                __Vdly__multi_core_top__DOT__core3__DOT__reg_out 
                    = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_pc 
                       + vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm);
                if (vlSelfRef.multi_core_top__DOT__core3__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                    __Vdly__multi_core_top__DOT__core3__DOT__latched_rd = 0U;
                    vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0;
                    vlSelfRef.multi_core_top__DOT__core3__DOT__latched_branch 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0;
                    if (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_done) {
                        __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 0x40U;
                    }
                    if (vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0) {
                        vlSelfRef.multi_core_top__DOT__core3__DOT__set_mem_do_rinst = 1U;
                        __Vdly__multi_core_top__DOT__core3__DOT__decoder_trigger = 0U;
                    }
                } else {
                    vlSelfRef.multi_core_top__DOT__core3__DOT__latched_branch 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__instr_jalr;
                    vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store = 1U;
                    vlSelfRef.multi_core_top__DOT__core3__DOT__latched_stalu = 1U;
                    __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state))) {
                vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store = 1U;
                if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__reg_sh))) {
                    __Vdly__multi_core_top__DOT__core3__DOT__reg_out 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1;
                    __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst 
                        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_prefetch;
                    __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__reg_sh))) {
                    if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slli) 
                         | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sll))) {
                        __Vdly__multi_core_top__DOT__core3__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
                               << 4U);
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srli) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srl))) {
                        __Vdly__multi_core_top__DOT__core3__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
                               >> 4U);
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srai) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sra))) {
                        __Vdly__multi_core_top__DOT__core3__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1, 4U);
                    }
                    __Vdly__multi_core_top__DOT__core3__DOT__reg_sh 
                        = (0x0000001fU & ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__reg_sh) 
                                          - (IData)(4U)));
                } else {
                    if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slli) 
                         | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sll))) {
                        __Vdly__multi_core_top__DOT__core3__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
                               << 1U);
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srli) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srl))) {
                        __Vdly__multi_core_top__DOT__core3__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
                               >> 1U);
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srai) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sra))) {
                        __Vdly__multi_core_top__DOT__core3__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1, 1U);
                    }
                    __Vdly__multi_core_top__DOT__core3__DOT__reg_sh 
                        = (0x0000001fU & ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__reg_sh) 
                                          - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state))) {
                if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_wdata)))) {
                        __Vdly__multi_core_top__DOT__core3__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
                               + vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm);
                        vlSelfRef.multi_core_top__DOT__core3__DOT__set_mem_do_wdata = 1U;
                        if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sb) {
                            __Vdly__multi_core_top__DOT__core3__DOT__mem_wordsize = 2U;
                        } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sh) {
                            __Vdly__multi_core_top__DOT__core3__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sw) {
                            __Vdly__multi_core_top__DOT__core3__DOT__mem_wordsize = 0U;
                        }
                    }
                    if (((~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_done))) {
                        __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 0x40U;
                        __Vdly__multi_core_top__DOT__core3__DOT__decoder_trigger = 1U;
                        __Vdly__multi_core_top__DOT__core3__DOT__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_done)))) {
                    if (((~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_done))) {
                        if (vlSelfRef.multi_core_top__DOT__core3__DOT__latched_is_lu) {
                            __Vdly__multi_core_top__DOT__core3__DOT__reg_out 
                                = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_word;
                        } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__latched_is_lh) {
                            __Vdly__multi_core_top__DOT__core3__DOT__reg_out 
                                = VL_EXTENDS_II(32,16, 
                                                (0x0000ffffU 
                                                 & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_word));
                        } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__latched_is_lb) {
                            __Vdly__multi_core_top__DOT__core3__DOT__reg_out 
                                = VL_EXTENDS_II(32,8, 
                                                (0x000000ffU 
                                                 & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_word));
                        }
                        __Vdly__multi_core_top__DOT__core3__DOT__decoder_trigger = 1U;
                        __Vdly__multi_core_top__DOT__core3__DOT__decoder_pseudo_trigger = 1U;
                        __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 0x40U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rdata)))) {
                        __Vdly__multi_core_top__DOT__core3__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
                               + vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm);
                        vlSelfRef.multi_core_top__DOT__core3__DOT__set_mem_do_rdata = 1U;
                        if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lb) 
                             | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lbu))) {
                            __Vdly__multi_core_top__DOT__core3__DOT__mem_wordsize = 2U;
                        } else if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lh) 
                                    | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lhu))) {
                            __Vdly__multi_core_top__DOT__core3__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lw) {
                            __Vdly__multi_core_top__DOT__core3__DOT__mem_wordsize = 0U;
                        }
                        __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lu 
                            = vlSelfRef.multi_core_top__DOT__core3__DOT__is_lbu_lhu_lw;
                        __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lh 
                            = vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lh;
                        __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lb 
                            = vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lb;
                    }
                }
            }
        }
    } else {
        __Vdly__multi_core_top__DOT__core3__DOT__count_instr = 0ULL;
        vlSelfRef.multi_core_top__DOT__core3__DOT__next_irq_pending = 0U;
        __Vdly__multi_core_top__DOT__core3__DOT__reg_pc = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__reg_next_pc = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__latched_stalu = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__latched_branch = 0U;
        __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lu = 0U;
        __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lh = 0U;
        __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lb = 0U;
        __Vdly__multi_core_top__DOT__core3__DOT__pcpi_valid = 0U;
        __Vdly__multi_core_top__DOT__core3__DOT__irq_active = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__irq_delay = 0U;
        __Vdly__multi_core_top__DOT__core3__DOT__irq_mask = 0xffffffffU;
        __Vdly__multi_core_top__DOT__core3__DOT__irq_state = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__eoi = 0U;
        __Vdly__multi_core_top__DOT__core3__DOT__timer = 0U;
        __Vdly__multi_core_top__DOT__core3__DOT__latched_rd = 2U;
        __Vdly__multi_core_top__DOT__core3__DOT__reg_out = 0x00003fffU;
        __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 0x40U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store = 1U;
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__next_irq_pending 
        = (vlSelfRef.multi_core_top__DOT__core3__DOT__next_irq_pending 
           | vlSelfRef.multi_core_top__DOT__core3__DOT__irq);
    if ((0U != vlSelfRef.multi_core_top__DOT__core3__DOT__timer)) {
        if ((0U == (vlSelfRef.multi_core_top__DOT__core3__DOT__timer 
                    - (IData)(1U)))) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__next_irq_pending 
                = (1U | vlSelfRef.multi_core_top__DOT__core3__DOT__next_irq_pending);
        }
    }
    if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn) 
         & ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rdata) 
            | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wordsize)) 
             & (0U != (3U & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1)))) {
            if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core3__DOT__irq_mask 
                           >> 2U)) & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_active))))) {
                vlSelfRef.multi_core_top__DOT__core3__DOT__next_irq_pending 
                    = (4U | vlSelfRef.multi_core_top__DOT__core3__DOT__next_irq_pending);
            } else {
                __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 0x80U;
            }
        }
        if (((1U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wordsize)) 
             & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1)) {
            if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core3__DOT__irq_mask 
                           >> 2U)) & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_active))))) {
                vlSelfRef.multi_core_top__DOT__core3__DOT__next_irq_pending 
                    = (4U | vlSelfRef.multi_core_top__DOT__core3__DOT__next_irq_pending);
            } else {
                __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 0x80U;
            }
        }
    }
    if ((((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn) 
          & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rinst)) 
         & (0U != (3U & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_pc)))) {
        if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core3__DOT__irq_mask 
                       >> 2U)) & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_active))))) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__next_irq_pending 
                = (4U | vlSelfRef.multi_core_top__DOT__core3__DOT__next_irq_pending);
        } else {
            __Vdly__multi_core_top__DOT__core3__DOT__cpu_state = 0x80U;
        }
    }
    if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn)) 
               | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_done)))) {
        __Vdly__multi_core_top__DOT__core3__DOT__mem_do_prefetch = 0U;
        __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rdata = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_wdata = 0U;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__set_mem_do_rinst) {
        __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst = 1U;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__set_mem_do_rdata) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rdata = 1U;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__set_mem_do_wdata) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_wdata = 1U;
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__irq_pending 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__next_irq_pending;
    vlSelfRef.multi_core_top__DOT__core3__DOT__current_pc = 0U;
    vlSelfRef.multi_core_top__DOT__core3__DOT__reg_sh 
        = __Vdly__multi_core_top__DOT__core3__DOT__reg_sh;
    vlSelfRef.multi_core_top__DOT__core3__DOT__count_cycle 
        = __Vdly__multi_core_top__DOT__core3__DOT__count_cycle;
    vlSelfRef.multi_core_top__DOT__core3__DOT__timer 
        = __Vdly__multi_core_top__DOT__core3__DOT__timer;
    vlSelfRef.multi_core_top__DOT__core3__DOT__do_waitirq 
        = __Vdly__multi_core_top__DOT__core3__DOT__do_waitirq;
    vlSelfRef.multi_core_top__DOT__core3__DOT__latched_is_lu 
        = __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lu;
    vlSelfRef.multi_core_top__DOT__core3__DOT__latched_is_lh 
        = __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lh;
    vlSelfRef.multi_core_top__DOT__core3__DOT__latched_is_lb 
        = __Vdly__multi_core_top__DOT__core3__DOT__latched_is_lb;
    vlSelfRef.multi_core_top__DOT__core3__DOT__count_instr 
        = __Vdly__multi_core_top__DOT__core3__DOT__count_instr;
    if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_done))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs1 
            = (0x0000001fU & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched 
                              >> 0x0fU));
        if ((IData)((0x0000000bU == (0xfe00007fU & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched)))) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs1 
                = (0x00000020U | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs1));
        }
        if ((IData)((0x0400000bU == (0xfe00007fU & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched)))) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs1 = 0x20U;
        }
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs1 
        = (vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs
           [vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs1] 
           & (- (IData)(((0U != (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs1)) 
                         & (0x23U >= (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs1))))));
    vlSelfRef.multi_core_top__DOT__core3__DOT__latched_rd 
        = __Vdly__multi_core_top__DOT__core3__DOT__latched_rd;
    vlSelfRef.multi_core_top__DOT__core3__DOT__irq_active 
        = __Vdly__multi_core_top__DOT__core3__DOT__irq_active;
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wordsize 
        = __Vdly__multi_core_top__DOT__core3__DOT__mem_wordsize;
    vlSelfRef.multi_core_top__DOT__core3__DOT__reg_pc 
        = __Vdly__multi_core_top__DOT__core3__DOT__reg_pc;
    vlSelfRef.multi_core_top__DOT__core3__DOT__latched_compr 
        = __Vdly__multi_core_top__DOT__core3__DOT__latched_compr;
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_prefetch 
        = __Vdly__multi_core_top__DOT__core3__DOT__mem_do_prefetch;
    vlSelfRef.multi_core_top__DOT__core3__DOT__irq_mask 
        = __Vdly__multi_core_top__DOT__core3__DOT__irq_mask;
    vlSelfRef.multi_core_top__DOT__core3__DOT__reg_out 
        = __Vdly__multi_core_top__DOT__core3__DOT__reg_out;
    vlSelfRef.multi_core_top__DOT__core3__DOT__irq_state 
        = __Vdly__multi_core_top__DOT__core3__DOT__irq_state;
    vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state 
        = __Vdly__multi_core_top__DOT__core3__DOT__cpu_state;
    vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
        = __Vdly__multi_core_top__DOT__core3__DOT__reg_op1;
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_write 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_wdata) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_15));
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_ascii_state[0U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state][0U];
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_ascii_state[1U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state][1U];
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_ascii_state[2U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state][2U];
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_ascii_state[3U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state][3U];
    vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_write = 0U;
    vlSelfRef.multi_core_top__DOT__core3__DOT__next_pc 
        = (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store) 
            & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_branch))
            ? (0xfffffffeU & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_out)
            : vlSelfRef.multi_core_top__DOT__core3__DOT__reg_next_pc);
    vlSelfRef.multi_core_top__DOT__core3__DOT__clear_prefetched_high_word 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__prefetched_high_word)))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn))))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_q 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out;
    if ((((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn) 
          & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_valid)) 
         & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_int_wait)))) {
        if ((0U != (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_timeout_counter))) {
            __Vdly__multi_core_top__DOT__core3__DOT__pcpi_timeout_counter 
                = (0x0000000fU & ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_timeout_counter) 
                                  - (IData)(1U)));
        }
    } else {
        __Vdly__multi_core_top__DOT__core3__DOT__pcpi_timeout_counter = 0x0fU;
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_timeout 
        = (1U & (~ (0U != (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_timeout_counter))));
    if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_insn 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_fence 
            = ((0x0fU == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)) 
               & (~ (0U != (7U & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q 
                                  >> 0x0cU)))));
    }
    if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_wdata 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2;
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_wstrb = 0x0fU;
    } else if ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_wdata 
            = ((vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2));
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_wstrb 
            = ((2U & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1)
                ? 0x0cU : 3U);
    } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_wdata 
            = ((vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2))));
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_wstrb 
            = (0x0000000fU & ((IData)(1U) << (3U & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1)));
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_rs2 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2;
    vlSelfRef.multi_core_top__DOT__core3__DOT__alu_shl 
        = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
           << (0x0000001fU & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2));
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_rs1 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1;
    vlSelfRef.multi_core_top__DOT__core3__DOT__alu_eq 
        = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
           == vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core3__DOT__alu_lts 
        = VL_LTS_III(32, vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1, vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core3__DOT__alu_ltu 
        = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
           < vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core3__DOT__is_lbu_lhu_lw 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lbu) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lhu) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lw)));
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_timeout_counter 
        = __Vdly__multi_core_top__DOT__core3__DOT__pcpi_timeout_counter;
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_valid 
        = __Vdly__multi_core_top__DOT__core3__DOT__pcpi_valid;
    vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state))) {
        if (vlSelfRef.multi_core_top__DOT__core3__DOT__latched_branch) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_pc 
                   + ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_store) 
                    & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_branch)))) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_wrdata 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_stalu)
                    ? vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_q
                    : vlSelfRef.multi_core_top__DOT__core3__DOT__reg_out);
        } else if ((1U & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_state))) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_next_pc 
                   | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__latched_compr));
        } else if ((2U & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_state))) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core3__DOT__irq_pending 
                   & (~ vlSelfRef.multi_core_top__DOT__core3__DOT__irq_mask));
        }
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rd 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__q_insn_rd;
    if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_done))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__compressed_instr = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rd 
            = (0x0000001fU & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched 
                              >> 7U));
        vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs2 
            = (0x0000001fU & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched 
                              >> 0x14U));
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs_rs2 
        = (vlSelfRef.multi_core_top__DOT__core3__DOT__cpuregs
           [vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs2] 
           & (- (IData)((0U != (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs2)))));
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rs2 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__q_insn_rs2;
    if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)) 
                & (~ (0U != (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q 
                             >> 0x15U)))) & (~ (0U 
                                                != 
                                                (0x00001fffU 
                                                 & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q 
                                                    >> 7U)))));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_getq 
            = (IData)((0x0000000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_setq 
            = (IData)((0x0200000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_maskirq 
            = (IData)((0x0600000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_timer 
            = (IData)((0x0a00000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdcycle 
            = ((IData)((0xc0002073U == (0xfffff07fU 
                                        & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q))) 
               | (IData)((0xc0102073U == (0xfffff07fU 
                                          & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q))));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdcycleh 
            = ((IData)((0xc8002073U == (0xfffff07fU 
                                        & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q))) 
               | (IData)((0xc8102073U == (0xfffff07fU 
                                          & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q))));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdinstr 
            = (IData)((0xc0202073U == (0xfffff07fU 
                                       & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdinstrh 
            = (IData)((0xc8202073U == (0xfffff07fU 
                                       & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
    }
    __VdfgRegularize_h6e95ff9d_0_2 = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdcycle) 
                                      | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdcycleh) 
                                         | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdinstr) 
                                            | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdinstrh))));
    vlSelfRef.multi_core_top__DOT__core3__DOT__is_lui_auipc_jal 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lui) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_auipc) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_jal)));
    vlSelfRef.multi_core_top__DOT__core3__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lui) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_auipc) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_jal) 
                 | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_jalr) 
                    | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_addi) 
                       | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_add) 
                          | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sub)))))));
    vlSelfRef.multi_core_top__DOT__core3__DOT__is_slti_blt_slt 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slti) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_blt) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slt)));
    vlSelfRef.multi_core_top__DOT__core3__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sltiu) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bltu) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sltu)));
    vlSelfRef.multi_core_top__DOT__core3__DOT__is_compare 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slti) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slt) 
                 | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sltiu) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sltu)))));
    if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_beq 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bne 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00001000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_blt 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00004000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bge 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00005000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bltu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00006000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bgeu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00007000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lb 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lh 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00001000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lw 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00002000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lbu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00004000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lhu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00005000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sb 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_sb_sh_sw) 
               & (0U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sh 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_sb_sh_sw) 
               & (0x00001000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sw 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_sb_sh_sw) 
               & (0x00002000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_addi 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_imm) 
               & (0U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slti 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_imm) 
               & (0x00002000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sltiu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_imm) 
               & (0x00003000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_xori 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_imm) 
               & (0x00004000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_ori 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_imm) 
               & (0x00006000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_andi 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_imm) 
               & (0x00007000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slli 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_imm) 
               & (0x00001000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srli 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_imm) 
               & (0x00005000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srai 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_imm) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__is_slli_srli_srai 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_imm) 
               & ((IData)((0x00001000U == (0xfe007000U 
                                           & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q))) 
                  | ((IData)((0x00005000U == (0xfe007000U 
                                              & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q))))));
        vlSelfRef.multi_core_top__DOT__core3__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_jalr) 
               | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q 
                                   >> 0x0cU))) | ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q 
                                                       >> 0x0cU))) 
                                                  | ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q 
                                                          >> 0x0cU))) 
                                                     | ((4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q 
                                                             >> 0x0cU))) 
                                                        | ((6U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q 
                                                                >> 0x0cU))) 
                                                           | (7U 
                                                              == 
                                                              (7U 
                                                               & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q 
                                                                  >> 0x0cU))))))))));
        vlSelfRef.multi_core_top__DOT__core3__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__is_compare = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_jal)
                ? vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm_j
                : (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lui) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_auipc))
                    ? (0xfffff000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)
                    : (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_jalr) 
                        | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q 
                                                >> 0x14U))
                        : ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            ((((2U 
                                                & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q 
                                                   >> 0x0000001eU)) 
                                               | (1U 
                                                  & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q 
                                                     >> 7U))) 
                                              << 0x0000000bU) 
                                             | ((0x000007e0U 
                                                 & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q 
                                                    >> 0x00000014U)) 
                                                | (0x0000001eU 
                                                   & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q 
                                                      >> 7U)))))
                            : ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0x00000fe0U 
                                                  & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q 
                                                     >> 0x00000014U)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_add 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_reg) 
               & (0U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sub 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_reg) 
               & (0x40000000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sll 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_reg) 
               & (0x00001000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slt 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_reg) 
               & (0x00002000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sltu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_reg) 
               & (0x00003000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_xor 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_reg) 
               & (0x00004000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srl 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_reg) 
               & (0x00005000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sra 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_reg) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_or 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_reg) 
               & (0x00006000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_and 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_reg) 
               & (0x00007000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__is_sll_srl_sra 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_reg) 
               & ((IData)((0x00001000U == (0xfe007000U 
                                           & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q))) 
                  | ((IData)((0x00005000U == (0xfe007000U 
                                              & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q))))));
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_xfer) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__next_insn_opcode 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata;
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata;
    }
    if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_done))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_waitirq 
            = (IData)((0x0800000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_retirq 
            = (IData)((0x0400000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_imm 
            = (0x13U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core3__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core3__DOT__is_sb_sh_sw 
            = (0x23U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm_j 
            = ((0x000fffffU & vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm_j) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x001ffffeU 
                                               & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched 
                                                  >> 0x0000000bU)))));
        vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm_j 
            = ((0xfffff801U & vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm_j) 
               | (0x000007feU & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched 
                                                   >> 0x0000000bU))) 
                                 >> 9U)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm_j 
            = ((0xfffff7ffU & vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm_j) 
               | (0x00000800U & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched 
                                                   >> 0x0000000bU))) 
                                 << 2U)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm_j 
            = ((0xfff00fffU & vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm_j) 
               | (0x000ff000U & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched 
                                                   >> 0x0000000bU))) 
                                 << 0x0000000bU)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm_j 
            = ((0xfffffffeU & vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm_j) 
               | (1U & VL_EXTENDS_II(1,21, (0x001ffffeU 
                                            & (vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched 
                                               >> 0x0000000bU)))));
        vlSelfRef.multi_core_top__DOT__core3__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_auipc 
            = (0x17U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lui 
            = (0x37U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_jal 
            = (0x6fU == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_jalr 
            = (IData)((0x00000067U == (0x0000707fU 
                                       & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched)));
        vlSelfRef.multi_core_top__DOT__core3__DOT__is_alu_reg_reg 
            = (0x33U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched));
    }
    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn)))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__latched_trace = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_fence = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_timeout = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__is_compare = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_beq = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bne = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_blt = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bge = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bltu = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bgeu = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_addi = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slti = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sltiu = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_xori = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_ori = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_andi = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_add = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sub = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sll = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slt = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sltu = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_xor = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srl = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sra = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_or = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__instr_and = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = __VdfgRegularize_h6e95ff9d_0_2;
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_imm 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__q_insn_imm;
    vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_pseudo_trigger 
        = __Vdly__multi_core_top__DOT__core3__DOT__decoder_pseudo_trigger;
    vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_trigger 
        = __Vdly__multi_core_top__DOT__core3__DOT__decoder_trigger;
    vlSelfRef.multi_core_top__DOT__core3__DOT__launch_next_insn 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_trigger) 
           & ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cpu_state)) 
              & ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_delay) 
                 | ((~ (0U != ((~ vlSelfRef.multi_core_top__DOT__core3__DOT__irq_mask) 
                               & vlSelfRef.multi_core_top__DOT__core3__DOT__irq_pending))) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__irq_active)))));
    vlSelfRef.multi_core_top__DOT__core3__DOT__alu_shr 
        = (IData)((0x00000001ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                          (((QData)((IData)(
                                                                            ((vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
                                                                              >> 0x0000001fU) 
                                                                             & ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srai) 
                                                                                | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sra))))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1))), 
                                                          (0x0000001fU 
                                                           & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2))));
    vlSelfRef.multi_core_top__DOT__core3__DOT__instr_trap 
        = (1U & (~ ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lui) 
                    | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_auipc) 
                       | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_jal) 
                          | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_jalr) 
                             | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_beq) 
                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bne) 
                                   | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_blt) 
                                      | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bge) 
                                         | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bltu) 
                                            | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bgeu) 
                                               | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lb) 
                                                  | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lh) 
                                                     | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lw) 
                                                        | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lbu) 
                                                           | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lhu) 
                                                              | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sb) 
                                                                 | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sh) 
                                                                    | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sw) 
                                                                       | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_addi) 
                                                                          | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slti) 
                                                                             | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_add) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slt) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sltu) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_xor) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srl) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sra) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_or) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_and) 
                                                                                | ((IData)(__VdfgRegularize_h6e95ff9d_0_2) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_fence) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_getq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_setq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_retirq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_maskirq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_waitirq) 
                                                                                | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_timer)))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0ULL;
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lui) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000006c7569ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_auipc) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000006175697063ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_jal) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000006a616cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_jalr) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x000000006a616c72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_beq) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000626571ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bne) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000626e65ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_blt) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000626c74ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bge) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000626765ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bltu) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000626c7475ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bgeu) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000062676575ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lb) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000006c62ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lh) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000006c68ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lw) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000006c77ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lbu) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000006c6275ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_lhu) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000006c6875ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sb) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000007362ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sh) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000007368ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sw) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000007377ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_addi) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000061646469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slti) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000736c7469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sltiu) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x000000736c746975ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_xori) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000786f7269ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_ori) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000006f7269ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_andi) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000616e6469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slli) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000736c6c69ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srli) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000073726c69ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srai) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000073726169ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_add) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000616464ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sub) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_add_sub 
            = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
               - vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2);
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000737562ULL;
    } else {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_add_sub 
            = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
               + vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2);
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sll) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000736c6cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_slt) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000736c74ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sltu) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000000736c7475ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_xor) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000786f72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_srl) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x000000000073726cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_sra) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000737261ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_or) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000006f72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_and) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000000616e64ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdcycle) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0072646379636c65ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdcycleh) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdinstr) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x007264696e737472ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_rdinstrh) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_fence) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000066656e6365ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_getq) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000067657471ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_setq) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000000073657471ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_retirq) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0000726574697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_maskirq) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x006d61736b697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_waitirq) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x0077616974697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_timer) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr = 0x00000074696d6572ULL;
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0 = 0U;
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_beq) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__alu_eq;
    } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bne) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__alu_eq)));
    } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bge) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__alu_lts)));
    } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__instr_bgeu) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__alu_ltu)));
    } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__is_slti_blt_slt) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__alu_lts;
    } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__is_sltiu_bltu_sltu) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__alu_ltu;
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out = 0U;
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__alu_add_sub;
    } else if (vlSelfRef.multi_core_top__DOT__core3__DOT__is_compare) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out_0;
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_xori) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_xor))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
               ^ vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_ori) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_or))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
               | vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_andi) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__instr_and))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
               & vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op2);
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_ascii_instr 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__q_ascii_instr;
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_next) {
        if (vlSelfRef.multi_core_top__DOT__core3__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_opcode 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__cached_insn_opcode;
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cached_insn_rs1));
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__cached_insn_rd));
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rs2 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__cached_insn_rs2;
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_imm 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__cached_insn_imm;
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_ascii_instr 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.multi_core_top__DOT__core3__DOT__next_insn_opcode))
                    ? vlSelfRef.multi_core_top__DOT__core3__DOT__next_insn_opcode
                    : (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core3__DOT__next_insn_opcode));
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs1));
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rd));
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_rs2 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs2;
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_insn_imm 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_imm;
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_ascii_instr 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__new_ascii_instr;
        }
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rinst 
        = __Vdly__multi_core_top__DOT__core3__DOT__mem_do_rinst;
    __VdfgRegularize_h6e95ff9d_0_1 = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_prefetch) 
                                      | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rinst));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rinst) 
                                                | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rdata));
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_busy 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_1) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_wdata)));
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_addr 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_1)
             ? (vlSelfRef.multi_core_top__DOT__core3__DOT__next_pc 
                >> 2U) : (vlSelfRef.multi_core_top__DOT__core3__DOT__reg_op1 
                          >> 2U)) << 2U);
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_read 
        = (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_prefetch) 
            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_15));
}

void Vmulti_core_top___024root___nba_sequent__TOP__1(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___nba_sequent__TOP__1\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_4;
    __VdfgRegularize_h6e95ff9d_0_4 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_5;
    __VdfgRegularize_h6e95ff9d_0_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_14;
    __VdfgRegularize_h6e95ff9d_0_14 = 0;
    CData/*1:0*/ __Vdly__multi_core_top__DOT__core2__DOT__mem_state;
    __Vdly__multi_core_top__DOT__core2__DOT__mem_state = 0;
    CData/*4:0*/ __Vdly__multi_core_top__DOT__core2__DOT__reg_sh;
    __Vdly__multi_core_top__DOT__core2__DOT__reg_sh = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core2__DOT__reg_out;
    __Vdly__multi_core_top__DOT__core2__DOT__reg_out = 0;
    QData/*63:0*/ __Vdly__multi_core_top__DOT__core2__DOT__count_cycle;
    __Vdly__multi_core_top__DOT__core2__DOT__count_cycle = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core2__DOT__timer;
    __Vdly__multi_core_top__DOT__core2__DOT__timer = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core2__DOT__decoder_trigger;
    __Vdly__multi_core_top__DOT__core2__DOT__decoder_trigger = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core2__DOT__decoder_pseudo_trigger;
    __Vdly__multi_core_top__DOT__core2__DOT__decoder_pseudo_trigger = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core2__DOT__do_waitirq;
    __Vdly__multi_core_top__DOT__core2__DOT__do_waitirq = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst;
    __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst = 0;
    CData/*1:0*/ __Vdly__multi_core_top__DOT__core2__DOT__mem_wordsize;
    __Vdly__multi_core_top__DOT__core2__DOT__mem_wordsize = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lu;
    __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lu = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lh;
    __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lh = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lb;
    __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lb = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core2__DOT__irq_active;
    __Vdly__multi_core_top__DOT__core2__DOT__irq_active = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core2__DOT__reg_pc;
    __Vdly__multi_core_top__DOT__core2__DOT__reg_pc = 0;
    CData/*5:0*/ __Vdly__multi_core_top__DOT__core2__DOT__latched_rd;
    __Vdly__multi_core_top__DOT__core2__DOT__latched_rd = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core2__DOT__latched_compr;
    __Vdly__multi_core_top__DOT__core2__DOT__latched_compr = 0;
    CData/*1:0*/ __Vdly__multi_core_top__DOT__core2__DOT__irq_state;
    __Vdly__multi_core_top__DOT__core2__DOT__irq_state = 0;
    QData/*63:0*/ __Vdly__multi_core_top__DOT__core2__DOT__count_instr;
    __Vdly__multi_core_top__DOT__core2__DOT__count_instr = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core2__DOT__mem_do_prefetch;
    __Vdly__multi_core_top__DOT__core2__DOT__mem_do_prefetch = 0;
    CData/*7:0*/ __Vdly__multi_core_top__DOT__core2__DOT__cpu_state;
    __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core2__DOT__reg_op1;
    __Vdly__multi_core_top__DOT__core2__DOT__reg_op1 = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core2__DOT__pcpi_valid;
    __Vdly__multi_core_top__DOT__core2__DOT__pcpi_valid = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core2__DOT__irq_mask;
    __Vdly__multi_core_top__DOT__core2__DOT__irq_mask = 0;
    CData/*3:0*/ __Vdly__multi_core_top__DOT__core2__DOT__pcpi_timeout_counter;
    __Vdly__multi_core_top__DOT__core2__DOT__pcpi_timeout_counter = 0;
    IData/*31:0*/ __VdlyVal__multi_core_top__DOT__core2__DOT__cpuregs__v0;
    __VdlyVal__multi_core_top__DOT__core2__DOT__cpuregs__v0 = 0;
    CData/*5:0*/ __VdlyDim0__multi_core_top__DOT__core2__DOT__cpuregs__v0;
    __VdlyDim0__multi_core_top__DOT__core2__DOT__cpuregs__v0 = 0;
    CData/*0:0*/ __VdlySet__multi_core_top__DOT__core2__DOT__cpuregs__v0;
    __VdlySet__multi_core_top__DOT__core2__DOT__cpuregs__v0 = 0;
    // Body
    __Vdly__multi_core_top__DOT__core2__DOT__pcpi_timeout_counter 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_timeout_counter;
    __VdlySet__multi_core_top__DOT__core2__DOT__cpuregs__v0 = 0U;
    __Vdly__multi_core_top__DOT__core2__DOT__reg_sh 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__reg_sh;
    __Vdly__multi_core_top__DOT__core2__DOT__count_cycle 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__count_cycle;
    __Vdly__multi_core_top__DOT__core2__DOT__timer 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__timer;
    __Vdly__multi_core_top__DOT__core2__DOT__decoder_pseudo_trigger 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_pseudo_trigger;
    __Vdly__multi_core_top__DOT__core2__DOT__do_waitirq 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__do_waitirq;
    __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lu 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__latched_is_lu;
    __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lh 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__latched_is_lh;
    __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lb 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__latched_is_lb;
    __Vdly__multi_core_top__DOT__core2__DOT__latched_rd 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__latched_rd;
    __Vdly__multi_core_top__DOT__core2__DOT__count_instr 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__count_instr;
    __Vdly__multi_core_top__DOT__core2__DOT__pcpi_valid 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_valid;
    __Vdly__multi_core_top__DOT__core2__DOT__decoder_trigger 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_trigger;
    __Vdly__multi_core_top__DOT__core2__DOT__irq_active 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__irq_active;
    __Vdly__multi_core_top__DOT__core2__DOT__mem_wordsize 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wordsize;
    __Vdly__multi_core_top__DOT__core2__DOT__reg_pc 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__reg_pc;
    __Vdly__multi_core_top__DOT__core2__DOT__latched_compr 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__latched_compr;
    __Vdly__multi_core_top__DOT__core2__DOT__mem_do_prefetch 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_prefetch;
    __Vdly__multi_core_top__DOT__core2__DOT__irq_mask 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__irq_mask;
    __Vdly__multi_core_top__DOT__core2__DOT__reg_out 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__reg_out;
    __Vdly__multi_core_top__DOT__core2__DOT__irq_state 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__irq_state;
    __Vdly__multi_core_top__DOT__core2__DOT__cpu_state 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state;
    __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rinst;
    __Vdly__multi_core_top__DOT__core2__DOT__reg_op1 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1;
    __Vdly__multi_core_top__DOT__core2__DOT__mem_state 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_state;
    if ((((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn) 
          & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_write)) 
         & (0U != (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_rd)))) {
        if ((0x23U >= (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_rd))) {
            __VdlyVal__multi_core_top__DOT__core2__DOT__cpuregs__v0 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_wrdata;
            __VdlyDim0__multi_core_top__DOT__core2__DOT__cpuregs__v0 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__latched_rd;
            __VdlySet__multi_core_top__DOT__core2__DOT__cpuregs__v0 = 1U;
        }
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__alu_wait_2 = 0U;
    vlSelfRef.multi_core_top__DOT__core2__DOT__trace_data = 0ULL;
    vlSelfRef.multi_core_top__DOT__core2__DOT__alu_wait = 0U;
    vlSelfRef.multi_core_top__DOT__core2__DOT__trace_valid = 0U;
    vlSelfRef.multi_core_top__DOT__core2__DOT__q_insn_rd 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rd;
    vlSelfRef.multi_core_top__DOT__core2__DOT__q_insn_rs2 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rs2;
    vlSelfRef.multi_core_top__DOT__core2__DOT__q_insn_rs1 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rs1;
    vlSelfRef.multi_core_top__DOT__core2__DOT__q_insn_opcode 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_opcode;
    vlSelfRef.multi_core_top__DOT__core2__DOT__q_insn_imm 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_imm;
    vlSelfRef.multi_core_top__DOT__core2__DOT__q_ascii_instr 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_ascii_instr;
    vlSelfRef.multi_core_top__DOT__core2__DOT__clear_prefetched_high_word_q 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__clear_prefetched_high_word;
    vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0_q 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0;
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__launch_next_insn) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_addr 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__next_pc;
        vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs1val = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs2val = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs1val_valid = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs2val_valid = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_next = 1U;
    } else {
        vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_next = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_pseudo_trigger_q 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_pseudo_trigger;
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_trigger_q) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__cached_ascii_instr 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr;
        vlSelfRef.multi_core_top__DOT__core2__DOT__cached_insn_opcode 
            = ((3U == (3U & vlSelfRef.multi_core_top__DOT__core2__DOT__next_insn_opcode))
                ? vlSelfRef.multi_core_top__DOT__core2__DOT__next_insn_opcode
                : (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core2__DOT__next_insn_opcode));
        vlSelfRef.multi_core_top__DOT__core2__DOT__cached_insn_rd 
            = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rd));
        vlSelfRef.multi_core_top__DOT__core2__DOT__cached_insn_rs1 
            = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs1));
        vlSelfRef.multi_core_top__DOT__core2__DOT__cached_insn_rs2 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs2;
        vlSelfRef.multi_core_top__DOT__core2__DOT__cached_insn_imm 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm;
    }
    if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn)) 
               | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__trap)))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_valid_insn = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__prefetched_high_word = 0U;
    } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__launch_next_insn) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_valid_insn = 1U;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__clear_prefetched_high_word) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__prefetched_high_word = 0U;
    }
    if ((1U & (~ ((~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn)) 
                  | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__trap))))) {
        if (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_write) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wdata 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_wdata;
        }
        if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_read) 
             | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_write))) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__mem_addr 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_addr;
        }
    }
    if (__VdlySet__multi_core_top__DOT__core2__DOT__cpuregs__v0) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs[__VdlyDim0__multi_core_top__DOT__core2__DOT__cpuregs__v0] 
            = __VdlyVal__multi_core_top__DOT__core2__DOT__cpuregs__v0;
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wdata;
    vlSelfRef.multi_core_top__DOT__core_mem_wdata[2U] 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wdata;
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_mem_addr 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_addr;
    vlSelfRef.multi_core_top__DOT__core_mem_addr[2U] 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_addr;
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__resetn) {
        if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__last_mem_valid)))) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_firstword_reg = 0U;
        }
    } else {
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_firstword_reg = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__last_mem_valid 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn) 
           && ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_valid) 
               & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_ready))));
    if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn)) 
               | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__trap)))) {
        if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn)))) {
            __Vdly__multi_core_top__DOT__core2__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn)) 
                   | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_ready)))) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__mem_valid = 0U;
        }
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_secondword = 0U;
    } else {
        if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_read) 
             | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_write))) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wstrb 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_wstrb) 
                   & (- (IData)((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_state))) {
            if ((((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_prefetch) 
                  | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rinst)) 
                 | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rdata))) {
                vlSelfRef.multi_core_top__DOT__core2__DOT__mem_valid = 1U;
                vlSelfRef.multi_core_top__DOT__core2__DOT__mem_instr 
                    = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_prefetch) 
                       | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rinst));
                vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wstrb = 0U;
                __Vdly__multi_core_top__DOT__core2__DOT__mem_state = 1U;
            }
            if (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_wdata) {
                vlSelfRef.multi_core_top__DOT__core2__DOT__mem_valid = 1U;
                vlSelfRef.multi_core_top__DOT__core2__DOT__mem_instr = 0U;
                __Vdly__multi_core_top__DOT__core2__DOT__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_state))) {
            if (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_xfer) {
                vlSelfRef.multi_core_top__DOT__core2__DOT__mem_valid = 0U;
                vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_secondword = 0U;
                __Vdly__multi_core_top__DOT__core2__DOT__mem_state 
                    = (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rinst) 
                        | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rdata))
                        ? 0U : 3U);
            }
        } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_state))) {
            if (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_xfer) {
                vlSelfRef.multi_core_top__DOT__core2__DOT__mem_valid = 0U;
                __Vdly__multi_core_top__DOT__core2__DOT__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_state))) {
            if (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rinst) {
                __Vdly__multi_core_top__DOT__core2__DOT__mem_state = 0U;
            }
        }
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_opcode 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__q_insn_opcode;
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rs1 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__q_insn_rs1;
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_state 
        = __Vdly__multi_core_top__DOT__core2__DOT__mem_state;
    __VdfgRegularize_h6e95ff9d_0_14 = ((~ (0U != (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_state))) 
                                       & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn));
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wstrb;
    vlSelfRef.multi_core_top__DOT__core_mem_wstrb[2U] 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wstrb;
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_mem_valid 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_valid;
    vlSelfRef.multi_core_top__DOT__core_mem_valid[2U] 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_valid;
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_mem_instr 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_instr;
    vlSelfRef.multi_core_top__DOT__core_mem_instr[2U] 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_instr;
    vlSelfRef.multi_core_top__DOT__core2__DOT__trap = 0U;
    __Vdly__multi_core_top__DOT__core2__DOT__reg_sh = 0U;
    __Vdly__multi_core_top__DOT__core2__DOT__reg_out = 0U;
    vlSelfRef.multi_core_top__DOT__core2__DOT__set_mem_do_rinst = 0U;
    vlSelfRef.multi_core_top__DOT__core2__DOT__set_mem_do_rdata = 0U;
    vlSelfRef.multi_core_top__DOT__core2__DOT__set_mem_do_wdata = 0U;
    vlSelfRef.multi_core_top__DOT__core2__DOT__next_irq_pending 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__irq_pending;
    __Vdly__multi_core_top__DOT__core2__DOT__decoder_trigger 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rinst) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_done));
    vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_trigger_q 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_trigger;
    __Vdly__multi_core_top__DOT__core2__DOT__decoder_pseudo_trigger = 0U;
    __Vdly__multi_core_top__DOT__core2__DOT__do_waitirq = 0U;
    __Vdly__multi_core_top__DOT__core2__DOT__count_cycle 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn)
            ? (1ULL + vlSelfRef.multi_core_top__DOT__core2__DOT__count_cycle)
            : 0ULL);
    if ((0U != vlSelfRef.multi_core_top__DOT__core2__DOT__timer)) {
        __Vdly__multi_core_top__DOT__core2__DOT__timer 
            = (vlSelfRef.multi_core_top__DOT__core2__DOT__timer 
               - (IData)(1U));
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__resetn) {
        if (((((((((0x80U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state))) 
                | (8U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state))) 
               | (4U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state))) 
              | (2U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state))) 
             | (1U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state))) {
                vlSelfRef.multi_core_top__DOT__core2__DOT__trap = 1U;
            } else if ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state))) {
                __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst 
                    = (1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_trigger)) 
                             & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__do_waitirq))));
                __Vdly__multi_core_top__DOT__core2__DOT__mem_wordsize = 0U;
                __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lu = 0U;
                __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lh = 0U;
                __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lb = 0U;
                vlSelfRef.multi_core_top__DOT__core2__DOT__current_pc 
                    = vlSelfRef.multi_core_top__DOT__core2__DOT__reg_next_pc;
                if (vlSelfRef.multi_core_top__DOT__core2__DOT__latched_branch) {
                    vlSelfRef.multi_core_top__DOT__core2__DOT__current_pc 
                        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store)
                            ? (0xfffffffeU & ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_stalu)
                                               ? vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_q
                                               : vlSelfRef.multi_core_top__DOT__core2__DOT__reg_out))
                            : vlSelfRef.multi_core_top__DOT__core2__DOT__reg_next_pc);
                } else if ((1U & (~ ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store) 
                                     & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_branch)))))) {
                    if ((1U & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_state))) {
                        vlSelfRef.multi_core_top__DOT__core2__DOT__current_pc = 0x00000010U;
                        __Vdly__multi_core_top__DOT__core2__DOT__irq_active = 1U;
                        __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst = 1U;
                    } else if ((2U & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_state))) {
                        vlSelfRef.multi_core_top__DOT__core2__DOT__next_irq_pending 
                            = (vlSelfRef.multi_core_top__DOT__core2__DOT__next_irq_pending 
                               & vlSelfRef.multi_core_top__DOT__core2__DOT__irq_mask);
                        vlSelfRef.multi_core_top__DOT__core2__DOT__eoi 
                            = (vlSelfRef.multi_core_top__DOT__core2__DOT__irq_pending 
                               & (~ vlSelfRef.multi_core_top__DOT__core2__DOT__irq_mask));
                    }
                }
                __Vdly__multi_core_top__DOT__core2__DOT__reg_pc 
                    = vlSelfRef.multi_core_top__DOT__core2__DOT__current_pc;
                vlSelfRef.multi_core_top__DOT__core2__DOT__reg_next_pc 
                    = vlSelfRef.multi_core_top__DOT__core2__DOT__current_pc;
                vlSelfRef.multi_core_top__DOT__core2__DOT__latched_stalu = 0U;
                vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store = 0U;
                vlSelfRef.multi_core_top__DOT__core2__DOT__latched_branch = 0U;
                __Vdly__multi_core_top__DOT__core2__DOT__latched_rd 
                    = vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rd;
                __Vdly__multi_core_top__DOT__core2__DOT__latched_compr 
                    = vlSelfRef.multi_core_top__DOT__core2__DOT__compressed_instr;
                if ((((((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_trigger) 
                        & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_active))) 
                       & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_delay))) 
                      & (0U != (vlSelfRef.multi_core_top__DOT__core2__DOT__irq_pending 
                                & (~ vlSelfRef.multi_core_top__DOT__core2__DOT__irq_mask)))) 
                     | (0U != (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_state)))) {
                    __Vdly__multi_core_top__DOT__core2__DOT__irq_state 
                        = ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_state))
                            ? 1U : ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_state))
                                     ? 2U : 0U));
                    __Vdly__multi_core_top__DOT__core2__DOT__latched_compr 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__latched_compr;
                    __Vdly__multi_core_top__DOT__core2__DOT__latched_rd 
                        = (0x20U | (1U & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_state)));
                } else if ((((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_trigger) 
                             | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__do_waitirq)) 
                            & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_waitirq))) {
                    if ((0U != vlSelfRef.multi_core_top__DOT__core2__DOT__irq_pending)) {
                        vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store = 1U;
                        __Vdly__multi_core_top__DOT__core2__DOT__reg_out 
                            = vlSelfRef.multi_core_top__DOT__core2__DOT__irq_pending;
                        vlSelfRef.multi_core_top__DOT__core2__DOT__reg_next_pc 
                            = (vlSelfRef.multi_core_top__DOT__core2__DOT__current_pc 
                               + ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__compressed_instr)
                                   ? 2U : 4U));
                        __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst = 1U;
                    } else {
                        __Vdly__multi_core_top__DOT__core2__DOT__do_waitirq = 1U;
                    }
                } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_trigger) {
                    __Vdly__multi_core_top__DOT__core2__DOT__count_instr 
                        = (1ULL + vlSelfRef.multi_core_top__DOT__core2__DOT__count_instr);
                    vlSelfRef.multi_core_top__DOT__core2__DOT__irq_delay 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__irq_active;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__reg_next_pc 
                        = (vlSelfRef.multi_core_top__DOT__core2__DOT__current_pc 
                           + ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__compressed_instr)
                               ? 2U : 4U));
                    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_jal) {
                        __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst = 1U;
                        vlSelfRef.multi_core_top__DOT__core2__DOT__reg_next_pc 
                            = (vlSelfRef.multi_core_top__DOT__core2__DOT__current_pc 
                               + vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm_j);
                        vlSelfRef.multi_core_top__DOT__core2__DOT__latched_branch = 1U;
                    } else {
                        __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst = 0U;
                        __Vdly__multi_core_top__DOT__core2__DOT__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_jalr)) 
                                     & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_retirq))));
                        __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state))) {
                __Vdly__multi_core_top__DOT__core2__DOT__reg_op1 = 0U;
                vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2 = 0U;
                if (((((((((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_trap) 
                           | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                          | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_lui_auipc_jal)) 
                         | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_getq)) 
                        | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_setq)) 
                       | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_retirq)) 
                      | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_maskirq)) 
                     | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_timer))) {
                    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_trap) {
                        __Vdly__multi_core_top__DOT__core2__DOT__reg_op1 
                            = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1;
                        vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs1val 
                            = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1;
                        vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs1val_valid = 1U;
                        __Vdly__multi_core_top__DOT__core2__DOT__pcpi_valid = 1U;
                        __Vdly__multi_core_top__DOT__core2__DOT__reg_sh 
                            = (0x0000001fU & vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs2);
                        vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2 
                            = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs2;
                        vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs2val 
                            = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs2;
                        vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs2val_valid = 1U;
                        if (vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_int_ready) {
                            __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst = 1U;
                            __Vdly__multi_core_top__DOT__core2__DOT__pcpi_valid = 0U;
                            __Vdly__multi_core_top__DOT__core2__DOT__reg_out 
                                = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_int_rd;
                            vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store 
                                = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_int_wr;
                            __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 0x40U;
                        } else if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_timeout) 
                                    | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_ecall_ebreak))) {
                            __Vdly__multi_core_top__DOT__core2__DOT__pcpi_valid = 0U;
                            if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core2__DOT__irq_mask 
                                           >> 1U)) 
                                       & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_active))))) {
                                vlSelfRef.multi_core_top__DOT__core2__DOT__next_irq_pending 
                                    = (2U | vlSelfRef.multi_core_top__DOT__core2__DOT__next_irq_pending);
                                __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 0x40U;
                            } else {
                                __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 0x80U;
                            }
                        }
                    } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                        if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdcycle) {
                            __Vdly__multi_core_top__DOT__core2__DOT__reg_out 
                                = (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__count_cycle);
                        } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdcycleh) {
                            __Vdly__multi_core_top__DOT__core2__DOT__reg_out 
                                = (IData)((vlSelfRef.multi_core_top__DOT__core2__DOT__count_cycle 
                                           >> 0x20U));
                        } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdinstr) {
                            __Vdly__multi_core_top__DOT__core2__DOT__reg_out 
                                = (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__count_instr);
                        } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdinstrh) {
                            __Vdly__multi_core_top__DOT__core2__DOT__reg_out 
                                = (IData)((vlSelfRef.multi_core_top__DOT__core2__DOT__count_instr 
                                           >> 0x20U));
                        }
                        vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store = 1U;
                        __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 0x40U;
                    } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__is_lui_auipc_jal) {
                        __Vdly__multi_core_top__DOT__core2__DOT__reg_op1 
                            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lui)
                                ? 0U : vlSelfRef.multi_core_top__DOT__core2__DOT__reg_pc);
                        vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2 
                            = vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm;
                        __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst 
                            = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_prefetch;
                        __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 8U;
                    } else {
                        if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_getq) {
                            __Vdly__multi_core_top__DOT__core2__DOT__reg_out 
                                = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs1val 
                                = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs1val_valid = 1U;
                            vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store = 1U;
                        } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_setq) {
                            __Vdly__multi_core_top__DOT__core2__DOT__latched_rd 
                                = (0x20U | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_rd));
                            __Vdly__multi_core_top__DOT__core2__DOT__reg_out 
                                = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs1val 
                                = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs1val_valid = 1U;
                            vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store = 1U;
                        } else {
                            if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_retirq) {
                                vlSelfRef.multi_core_top__DOT__core2__DOT__eoi = 0U;
                                __Vdly__multi_core_top__DOT__core2__DOT__irq_active = 0U;
                                vlSelfRef.multi_core_top__DOT__core2__DOT__latched_branch = 1U;
                                vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store = 1U;
                                __Vdly__multi_core_top__DOT__core2__DOT__reg_out 
                                    = (0xfffffffeU 
                                       & vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1);
                            } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_maskirq) {
                                vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store = 1U;
                                __Vdly__multi_core_top__DOT__core2__DOT__reg_out 
                                    = vlSelfRef.multi_core_top__DOT__core2__DOT__irq_mask;
                                __Vdly__multi_core_top__DOT__core2__DOT__irq_mask 
                                    = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1;
                            } else {
                                vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store = 1U;
                                __Vdly__multi_core_top__DOT__core2__DOT__reg_out 
                                    = vlSelfRef.multi_core_top__DOT__core2__DOT__timer;
                                __Vdly__multi_core_top__DOT__core2__DOT__timer 
                                    = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1;
                            }
                            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs1val 
                                = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs1val_valid = 1U;
                        }
                        __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 0x40U;
                    }
                } else if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_lb_lh_lw_lbu_lhu) 
                            & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_trap)))) {
                    __Vdly__multi_core_top__DOT__core2__DOT__reg_op1 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs1val 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 1U;
                    __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__is_slli_srli_srai) {
                    __Vdly__multi_core_top__DOT__core2__DOT__reg_op1 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs1val 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__multi_core_top__DOT__core2__DOT__reg_sh 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs2;
                    __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 4U;
                } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                    __Vdly__multi_core_top__DOT__core2__DOT__reg_op1 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs1val 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs1val_valid = 1U;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm;
                    __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_prefetch;
                    __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 8U;
                } else {
                    __Vdly__multi_core_top__DOT__core2__DOT__reg_op1 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs1val 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__multi_core_top__DOT__core2__DOT__reg_sh 
                        = (0x0000001fU & vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs2);
                    vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs2;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs2val 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs2;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs2val_valid = 1U;
                    if (vlSelfRef.multi_core_top__DOT__core2__DOT__is_sb_sh_sw) {
                        __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 2U;
                        __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst = 1U;
                    } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__is_sll_srl_sra) {
                        __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 4U;
                    } else {
                        __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst 
                            = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_prefetch;
                        __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 8U;
                    }
                }
            } else if ((0x10U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state))) {
                __Vdly__multi_core_top__DOT__core2__DOT__reg_sh 
                    = (0x0000001fU & vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs2);
                vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2 
                    = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs2;
                vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs2val 
                    = vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs2;
                vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_rs2val_valid = 1U;
                if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_trap) {
                    __Vdly__multi_core_top__DOT__core2__DOT__pcpi_valid = 1U;
                    if (vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_int_ready) {
                        __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst = 1U;
                        __Vdly__multi_core_top__DOT__core2__DOT__pcpi_valid = 0U;
                        __Vdly__multi_core_top__DOT__core2__DOT__reg_out 
                            = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_int_rd;
                        vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store 
                            = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_int_wr;
                        __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 0x40U;
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_timeout) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_ecall_ebreak))) {
                        __Vdly__multi_core_top__DOT__core2__DOT__pcpi_valid = 0U;
                        if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core2__DOT__irq_mask 
                                       >> 1U)) & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_active))))) {
                            vlSelfRef.multi_core_top__DOT__core2__DOT__next_irq_pending 
                                = (2U | vlSelfRef.multi_core_top__DOT__core2__DOT__next_irq_pending);
                            __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 0x40U;
                        } else {
                            __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 0x80U;
                        }
                    }
                } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__is_sb_sh_sw) {
                    __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 2U;
                    __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__is_sll_srl_sra) {
                    __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 4U;
                } else {
                    __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_prefetch;
                    __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state))) {
                __Vdly__multi_core_top__DOT__core2__DOT__reg_out 
                    = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_pc 
                       + vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm);
                if (vlSelfRef.multi_core_top__DOT__core2__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                    __Vdly__multi_core_top__DOT__core2__DOT__latched_rd = 0U;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__latched_branch 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0;
                    if (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_done) {
                        __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 0x40U;
                    }
                    if (vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0) {
                        vlSelfRef.multi_core_top__DOT__core2__DOT__set_mem_do_rinst = 1U;
                        __Vdly__multi_core_top__DOT__core2__DOT__decoder_trigger = 0U;
                    }
                } else {
                    vlSelfRef.multi_core_top__DOT__core2__DOT__latched_branch 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__instr_jalr;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store = 1U;
                    vlSelfRef.multi_core_top__DOT__core2__DOT__latched_stalu = 1U;
                    __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state))) {
                vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store = 1U;
                if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__reg_sh))) {
                    __Vdly__multi_core_top__DOT__core2__DOT__reg_out 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1;
                    __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst 
                        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_prefetch;
                    __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__reg_sh))) {
                    if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slli) 
                         | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sll))) {
                        __Vdly__multi_core_top__DOT__core2__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
                               << 4U);
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srli) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srl))) {
                        __Vdly__multi_core_top__DOT__core2__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
                               >> 4U);
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srai) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sra))) {
                        __Vdly__multi_core_top__DOT__core2__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1, 4U);
                    }
                    __Vdly__multi_core_top__DOT__core2__DOT__reg_sh 
                        = (0x0000001fU & ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__reg_sh) 
                                          - (IData)(4U)));
                } else {
                    if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slli) 
                         | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sll))) {
                        __Vdly__multi_core_top__DOT__core2__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
                               << 1U);
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srli) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srl))) {
                        __Vdly__multi_core_top__DOT__core2__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
                               >> 1U);
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srai) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sra))) {
                        __Vdly__multi_core_top__DOT__core2__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1, 1U);
                    }
                    __Vdly__multi_core_top__DOT__core2__DOT__reg_sh 
                        = (0x0000001fU & ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__reg_sh) 
                                          - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state))) {
                if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_wdata)))) {
                        __Vdly__multi_core_top__DOT__core2__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
                               + vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm);
                        vlSelfRef.multi_core_top__DOT__core2__DOT__set_mem_do_wdata = 1U;
                        if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sb) {
                            __Vdly__multi_core_top__DOT__core2__DOT__mem_wordsize = 2U;
                        } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sh) {
                            __Vdly__multi_core_top__DOT__core2__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sw) {
                            __Vdly__multi_core_top__DOT__core2__DOT__mem_wordsize = 0U;
                        }
                    }
                    if (((~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_done))) {
                        __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 0x40U;
                        __Vdly__multi_core_top__DOT__core2__DOT__decoder_trigger = 1U;
                        __Vdly__multi_core_top__DOT__core2__DOT__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_done)))) {
                    if (((~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_done))) {
                        if (vlSelfRef.multi_core_top__DOT__core2__DOT__latched_is_lu) {
                            __Vdly__multi_core_top__DOT__core2__DOT__reg_out 
                                = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_word;
                        } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__latched_is_lh) {
                            __Vdly__multi_core_top__DOT__core2__DOT__reg_out 
                                = VL_EXTENDS_II(32,16, 
                                                (0x0000ffffU 
                                                 & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_word));
                        } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__latched_is_lb) {
                            __Vdly__multi_core_top__DOT__core2__DOT__reg_out 
                                = VL_EXTENDS_II(32,8, 
                                                (0x000000ffU 
                                                 & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_word));
                        }
                        __Vdly__multi_core_top__DOT__core2__DOT__decoder_trigger = 1U;
                        __Vdly__multi_core_top__DOT__core2__DOT__decoder_pseudo_trigger = 1U;
                        __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 0x40U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rdata)))) {
                        __Vdly__multi_core_top__DOT__core2__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
                               + vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm);
                        vlSelfRef.multi_core_top__DOT__core2__DOT__set_mem_do_rdata = 1U;
                        if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lb) 
                             | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lbu))) {
                            __Vdly__multi_core_top__DOT__core2__DOT__mem_wordsize = 2U;
                        } else if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lh) 
                                    | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lhu))) {
                            __Vdly__multi_core_top__DOT__core2__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lw) {
                            __Vdly__multi_core_top__DOT__core2__DOT__mem_wordsize = 0U;
                        }
                        __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lu 
                            = vlSelfRef.multi_core_top__DOT__core2__DOT__is_lbu_lhu_lw;
                        __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lh 
                            = vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lh;
                        __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lb 
                            = vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lb;
                    }
                }
            }
        }
    } else {
        __Vdly__multi_core_top__DOT__core2__DOT__count_instr = 0ULL;
        vlSelfRef.multi_core_top__DOT__core2__DOT__next_irq_pending = 0U;
        __Vdly__multi_core_top__DOT__core2__DOT__reg_pc = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__reg_next_pc = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__latched_stalu = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__latched_branch = 0U;
        __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lu = 0U;
        __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lh = 0U;
        __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lb = 0U;
        __Vdly__multi_core_top__DOT__core2__DOT__pcpi_valid = 0U;
        __Vdly__multi_core_top__DOT__core2__DOT__irq_active = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__irq_delay = 0U;
        __Vdly__multi_core_top__DOT__core2__DOT__irq_mask = 0xffffffffU;
        __Vdly__multi_core_top__DOT__core2__DOT__irq_state = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__eoi = 0U;
        __Vdly__multi_core_top__DOT__core2__DOT__timer = 0U;
        __Vdly__multi_core_top__DOT__core2__DOT__latched_rd = 2U;
        __Vdly__multi_core_top__DOT__core2__DOT__reg_out = 0x00002fffU;
        __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 0x40U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store = 1U;
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__next_irq_pending 
        = (vlSelfRef.multi_core_top__DOT__core2__DOT__next_irq_pending 
           | vlSelfRef.multi_core_top__DOT__core2__DOT__irq);
    if ((0U != vlSelfRef.multi_core_top__DOT__core2__DOT__timer)) {
        if ((0U == (vlSelfRef.multi_core_top__DOT__core2__DOT__timer 
                    - (IData)(1U)))) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__next_irq_pending 
                = (1U | vlSelfRef.multi_core_top__DOT__core2__DOT__next_irq_pending);
        }
    }
    if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn) 
         & ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rdata) 
            | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wordsize)) 
             & (0U != (3U & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1)))) {
            if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core2__DOT__irq_mask 
                           >> 2U)) & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_active))))) {
                vlSelfRef.multi_core_top__DOT__core2__DOT__next_irq_pending 
                    = (4U | vlSelfRef.multi_core_top__DOT__core2__DOT__next_irq_pending);
            } else {
                __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 0x80U;
            }
        }
        if (((1U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wordsize)) 
             & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1)) {
            if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core2__DOT__irq_mask 
                           >> 2U)) & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_active))))) {
                vlSelfRef.multi_core_top__DOT__core2__DOT__next_irq_pending 
                    = (4U | vlSelfRef.multi_core_top__DOT__core2__DOT__next_irq_pending);
            } else {
                __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 0x80U;
            }
        }
    }
    if ((((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn) 
          & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rinst)) 
         & (0U != (3U & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_pc)))) {
        if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core2__DOT__irq_mask 
                       >> 2U)) & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_active))))) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__next_irq_pending 
                = (4U | vlSelfRef.multi_core_top__DOT__core2__DOT__next_irq_pending);
        } else {
            __Vdly__multi_core_top__DOT__core2__DOT__cpu_state = 0x80U;
        }
    }
    if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn)) 
               | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_done)))) {
        __Vdly__multi_core_top__DOT__core2__DOT__mem_do_prefetch = 0U;
        __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rdata = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_wdata = 0U;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__set_mem_do_rinst) {
        __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst = 1U;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__set_mem_do_rdata) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rdata = 1U;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__set_mem_do_wdata) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_wdata = 1U;
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__irq_pending 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__next_irq_pending;
    vlSelfRef.multi_core_top__DOT__core2__DOT__current_pc = 0U;
    vlSelfRef.multi_core_top__DOT__core2__DOT__reg_sh 
        = __Vdly__multi_core_top__DOT__core2__DOT__reg_sh;
    vlSelfRef.multi_core_top__DOT__core2__DOT__count_cycle 
        = __Vdly__multi_core_top__DOT__core2__DOT__count_cycle;
    vlSelfRef.multi_core_top__DOT__core2__DOT__timer 
        = __Vdly__multi_core_top__DOT__core2__DOT__timer;
    vlSelfRef.multi_core_top__DOT__core2__DOT__do_waitirq 
        = __Vdly__multi_core_top__DOT__core2__DOT__do_waitirq;
    vlSelfRef.multi_core_top__DOT__core2__DOT__latched_is_lu 
        = __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lu;
    vlSelfRef.multi_core_top__DOT__core2__DOT__latched_is_lh 
        = __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lh;
    vlSelfRef.multi_core_top__DOT__core2__DOT__latched_is_lb 
        = __Vdly__multi_core_top__DOT__core2__DOT__latched_is_lb;
    vlSelfRef.multi_core_top__DOT__core2__DOT__count_instr 
        = __Vdly__multi_core_top__DOT__core2__DOT__count_instr;
    if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_done))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs1 
            = (0x0000001fU & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched 
                              >> 0x0fU));
        if ((IData)((0x0000000bU == (0xfe00007fU & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched)))) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs1 
                = (0x00000020U | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs1));
        }
        if ((IData)((0x0400000bU == (0xfe00007fU & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched)))) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs1 = 0x20U;
        }
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs1 
        = (vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs
           [vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs1] 
           & (- (IData)(((0U != (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs1)) 
                         & (0x23U >= (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs1))))));
    vlSelfRef.multi_core_top__DOT__core2__DOT__latched_rd 
        = __Vdly__multi_core_top__DOT__core2__DOT__latched_rd;
    vlSelfRef.multi_core_top__DOT__core2__DOT__irq_active 
        = __Vdly__multi_core_top__DOT__core2__DOT__irq_active;
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wordsize 
        = __Vdly__multi_core_top__DOT__core2__DOT__mem_wordsize;
    vlSelfRef.multi_core_top__DOT__core2__DOT__reg_pc 
        = __Vdly__multi_core_top__DOT__core2__DOT__reg_pc;
    vlSelfRef.multi_core_top__DOT__core2__DOT__latched_compr 
        = __Vdly__multi_core_top__DOT__core2__DOT__latched_compr;
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_prefetch 
        = __Vdly__multi_core_top__DOT__core2__DOT__mem_do_prefetch;
    vlSelfRef.multi_core_top__DOT__core2__DOT__irq_mask 
        = __Vdly__multi_core_top__DOT__core2__DOT__irq_mask;
    vlSelfRef.multi_core_top__DOT__core2__DOT__reg_out 
        = __Vdly__multi_core_top__DOT__core2__DOT__reg_out;
    vlSelfRef.multi_core_top__DOT__core2__DOT__irq_state 
        = __Vdly__multi_core_top__DOT__core2__DOT__irq_state;
    vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state 
        = __Vdly__multi_core_top__DOT__core2__DOT__cpu_state;
    vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
        = __Vdly__multi_core_top__DOT__core2__DOT__reg_op1;
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_write 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_wdata) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_14));
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_ascii_state[0U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state][0U];
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_ascii_state[1U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state][1U];
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_ascii_state[2U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state][2U];
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_ascii_state[3U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state][3U];
    vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_write = 0U;
    vlSelfRef.multi_core_top__DOT__core2__DOT__next_pc 
        = (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store) 
            & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_branch))
            ? (0xfffffffeU & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_out)
            : vlSelfRef.multi_core_top__DOT__core2__DOT__reg_next_pc);
    vlSelfRef.multi_core_top__DOT__core2__DOT__clear_prefetched_high_word 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__prefetched_high_word)))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn))))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_q 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out;
    if ((((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn) 
          & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_valid)) 
         & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_int_wait)))) {
        if ((0U != (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_timeout_counter))) {
            __Vdly__multi_core_top__DOT__core2__DOT__pcpi_timeout_counter 
                = (0x0000000fU & ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_timeout_counter) 
                                  - (IData)(1U)));
        }
    } else {
        __Vdly__multi_core_top__DOT__core2__DOT__pcpi_timeout_counter = 0x0fU;
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_timeout 
        = (1U & (~ (0U != (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_timeout_counter))));
    if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_insn 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_fence 
            = ((0x0fU == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)) 
               & (~ (0U != (7U & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q 
                                  >> 0x0cU)))));
    }
    if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_wdata 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2;
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_wstrb = 0x0fU;
    } else if ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_wdata 
            = ((vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2));
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_wstrb 
            = ((2U & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1)
                ? 0x0cU : 3U);
    } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_wdata 
            = ((vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2))));
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_wstrb 
            = (0x0000000fU & ((IData)(1U) << (3U & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1)));
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_rs2 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2;
    vlSelfRef.multi_core_top__DOT__core2__DOT__alu_shl 
        = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
           << (0x0000001fU & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2));
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_rs1 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1;
    vlSelfRef.multi_core_top__DOT__core2__DOT__alu_eq 
        = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
           == vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core2__DOT__alu_lts 
        = VL_LTS_III(32, vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1, vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core2__DOT__alu_ltu 
        = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
           < vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core2__DOT__is_lbu_lhu_lw 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lbu) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lhu) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lw)));
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_timeout_counter 
        = __Vdly__multi_core_top__DOT__core2__DOT__pcpi_timeout_counter;
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_valid 
        = __Vdly__multi_core_top__DOT__core2__DOT__pcpi_valid;
    vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state))) {
        if (vlSelfRef.multi_core_top__DOT__core2__DOT__latched_branch) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_pc 
                   + ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_store) 
                    & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_branch)))) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_wrdata 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_stalu)
                    ? vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_q
                    : vlSelfRef.multi_core_top__DOT__core2__DOT__reg_out);
        } else if ((1U & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_state))) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_next_pc 
                   | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__latched_compr));
        } else if ((2U & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_state))) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core2__DOT__irq_pending 
                   & (~ vlSelfRef.multi_core_top__DOT__core2__DOT__irq_mask));
        }
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rd 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__q_insn_rd;
    if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_done))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__compressed_instr = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rd 
            = (0x0000001fU & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched 
                              >> 7U));
        vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs2 
            = (0x0000001fU & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched 
                              >> 0x14U));
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs_rs2 
        = (vlSelfRef.multi_core_top__DOT__core2__DOT__cpuregs
           [vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs2] 
           & (- (IData)((0U != (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs2)))));
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rs2 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__q_insn_rs2;
    if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)) 
                & (~ (0U != (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q 
                             >> 0x15U)))) & (~ (0U 
                                                != 
                                                (0x00001fffU 
                                                 & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q 
                                                    >> 7U)))));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_getq 
            = (IData)((0x0000000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_setq 
            = (IData)((0x0200000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_maskirq 
            = (IData)((0x0600000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_timer 
            = (IData)((0x0a00000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdcycle 
            = ((IData)((0xc0002073U == (0xfffff07fU 
                                        & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q))) 
               | (IData)((0xc0102073U == (0xfffff07fU 
                                          & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q))));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdcycleh 
            = ((IData)((0xc8002073U == (0xfffff07fU 
                                        & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q))) 
               | (IData)((0xc8102073U == (0xfffff07fU 
                                          & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q))));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdinstr 
            = (IData)((0xc0202073U == (0xfffff07fU 
                                       & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdinstrh 
            = (IData)((0xc8202073U == (0xfffff07fU 
                                       & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
    }
    __VdfgRegularize_h6e95ff9d_0_5 = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdcycle) 
                                      | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdcycleh) 
                                         | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdinstr) 
                                            | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdinstrh))));
    vlSelfRef.multi_core_top__DOT__core2__DOT__is_lui_auipc_jal 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lui) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_auipc) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_jal)));
    vlSelfRef.multi_core_top__DOT__core2__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lui) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_auipc) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_jal) 
                 | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_jalr) 
                    | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_addi) 
                       | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_add) 
                          | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sub)))))));
    vlSelfRef.multi_core_top__DOT__core2__DOT__is_slti_blt_slt 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slti) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_blt) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slt)));
    vlSelfRef.multi_core_top__DOT__core2__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sltiu) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bltu) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sltu)));
    vlSelfRef.multi_core_top__DOT__core2__DOT__is_compare 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slti) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slt) 
                 | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sltiu) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sltu)))));
    if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_beq 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bne 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00001000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_blt 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00004000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bge 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00005000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bltu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00006000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bgeu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00007000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lb 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lh 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00001000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lw 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00002000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lbu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00004000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lhu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00005000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sb 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_sb_sh_sw) 
               & (0U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sh 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_sb_sh_sw) 
               & (0x00001000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sw 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_sb_sh_sw) 
               & (0x00002000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_addi 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_imm) 
               & (0U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slti 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_imm) 
               & (0x00002000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sltiu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_imm) 
               & (0x00003000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_xori 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_imm) 
               & (0x00004000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_ori 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_imm) 
               & (0x00006000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_andi 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_imm) 
               & (0x00007000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slli 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_imm) 
               & (0x00001000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srli 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_imm) 
               & (0x00005000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srai 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_imm) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__is_slli_srli_srai 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_imm) 
               & ((IData)((0x00001000U == (0xfe007000U 
                                           & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q))) 
                  | ((IData)((0x00005000U == (0xfe007000U 
                                              & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q))))));
        vlSelfRef.multi_core_top__DOT__core2__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_jalr) 
               | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q 
                                   >> 0x0cU))) | ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q 
                                                       >> 0x0cU))) 
                                                  | ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q 
                                                          >> 0x0cU))) 
                                                     | ((4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q 
                                                             >> 0x0cU))) 
                                                        | ((6U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q 
                                                                >> 0x0cU))) 
                                                           | (7U 
                                                              == 
                                                              (7U 
                                                               & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q 
                                                                  >> 0x0cU))))))))));
        vlSelfRef.multi_core_top__DOT__core2__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__is_compare = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_jal)
                ? vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm_j
                : (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lui) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_auipc))
                    ? (0xfffff000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)
                    : (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_jalr) 
                        | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q 
                                                >> 0x14U))
                        : ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            ((((2U 
                                                & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q 
                                                   >> 0x0000001eU)) 
                                               | (1U 
                                                  & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q 
                                                     >> 7U))) 
                                              << 0x0000000bU) 
                                             | ((0x000007e0U 
                                                 & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q 
                                                    >> 0x00000014U)) 
                                                | (0x0000001eU 
                                                   & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q 
                                                      >> 7U)))))
                            : ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0x00000fe0U 
                                                  & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q 
                                                     >> 0x00000014U)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_add 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_reg) 
               & (0U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sub 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_reg) 
               & (0x40000000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sll 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_reg) 
               & (0x00001000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slt 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_reg) 
               & (0x00002000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sltu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_reg) 
               & (0x00003000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_xor 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_reg) 
               & (0x00004000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srl 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_reg) 
               & (0x00005000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sra 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_reg) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_or 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_reg) 
               & (0x00006000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_and 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_reg) 
               & (0x00007000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__is_sll_srl_sra 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_reg) 
               & ((IData)((0x00001000U == (0xfe007000U 
                                           & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q))) 
                  | ((IData)((0x00005000U == (0xfe007000U 
                                              & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q))))));
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_xfer) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__next_insn_opcode 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata;
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata;
    }
    if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_done))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_waitirq 
            = (IData)((0x0800000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_retirq 
            = (IData)((0x0400000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_imm 
            = (0x13U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core2__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core2__DOT__is_sb_sh_sw 
            = (0x23U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm_j 
            = ((0x000fffffU & vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm_j) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x001ffffeU 
                                               & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched 
                                                  >> 0x0000000bU)))));
        vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm_j 
            = ((0xfffff801U & vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm_j) 
               | (0x000007feU & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched 
                                                   >> 0x0000000bU))) 
                                 >> 9U)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm_j 
            = ((0xfffff7ffU & vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm_j) 
               | (0x00000800U & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched 
                                                   >> 0x0000000bU))) 
                                 << 2U)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm_j 
            = ((0xfff00fffU & vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm_j) 
               | (0x000ff000U & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched 
                                                   >> 0x0000000bU))) 
                                 << 0x0000000bU)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm_j 
            = ((0xfffffffeU & vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm_j) 
               | (1U & VL_EXTENDS_II(1,21, (0x001ffffeU 
                                            & (vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched 
                                               >> 0x0000000bU)))));
        vlSelfRef.multi_core_top__DOT__core2__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_auipc 
            = (0x17U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lui 
            = (0x37U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_jal 
            = (0x6fU == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_jalr 
            = (IData)((0x00000067U == (0x0000707fU 
                                       & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched)));
        vlSelfRef.multi_core_top__DOT__core2__DOT__is_alu_reg_reg 
            = (0x33U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched));
    }
    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn)))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__latched_trace = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_fence = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_timeout = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__is_compare = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_beq = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bne = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_blt = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bge = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bltu = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bgeu = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_addi = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slti = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sltiu = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_xori = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_ori = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_andi = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_add = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sub = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sll = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slt = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sltu = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_xor = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srl = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sra = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_or = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__instr_and = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = __VdfgRegularize_h6e95ff9d_0_5;
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_imm 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__q_insn_imm;
    vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_pseudo_trigger 
        = __Vdly__multi_core_top__DOT__core2__DOT__decoder_pseudo_trigger;
    vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_trigger 
        = __Vdly__multi_core_top__DOT__core2__DOT__decoder_trigger;
    vlSelfRef.multi_core_top__DOT__core2__DOT__launch_next_insn 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_trigger) 
           & ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cpu_state)) 
              & ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_delay) 
                 | ((~ (0U != ((~ vlSelfRef.multi_core_top__DOT__core2__DOT__irq_mask) 
                               & vlSelfRef.multi_core_top__DOT__core2__DOT__irq_pending))) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__irq_active)))));
    vlSelfRef.multi_core_top__DOT__core2__DOT__alu_shr 
        = (IData)((0x00000001ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                          (((QData)((IData)(
                                                                            ((vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
                                                                              >> 0x0000001fU) 
                                                                             & ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srai) 
                                                                                | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sra))))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1))), 
                                                          (0x0000001fU 
                                                           & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2))));
    vlSelfRef.multi_core_top__DOT__core2__DOT__instr_trap 
        = (1U & (~ ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lui) 
                    | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_auipc) 
                       | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_jal) 
                          | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_jalr) 
                             | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_beq) 
                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bne) 
                                   | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_blt) 
                                      | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bge) 
                                         | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bltu) 
                                            | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bgeu) 
                                               | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lb) 
                                                  | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lh) 
                                                     | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lw) 
                                                        | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lbu) 
                                                           | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lhu) 
                                                              | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sb) 
                                                                 | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sh) 
                                                                    | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sw) 
                                                                       | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_addi) 
                                                                          | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slti) 
                                                                             | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_add) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slt) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sltu) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_xor) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srl) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sra) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_or) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_and) 
                                                                                | ((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_fence) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_getq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_setq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_retirq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_maskirq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_waitirq) 
                                                                                | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_timer)))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0ULL;
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lui) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000006c7569ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_auipc) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000006175697063ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_jal) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000006a616cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_jalr) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x000000006a616c72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_beq) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000626571ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bne) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000626e65ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_blt) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000626c74ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bge) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000626765ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bltu) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000626c7475ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bgeu) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000062676575ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lb) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000006c62ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lh) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000006c68ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lw) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000006c77ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lbu) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000006c6275ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_lhu) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000006c6875ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sb) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000007362ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sh) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000007368ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sw) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000007377ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_addi) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000061646469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slti) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000736c7469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sltiu) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x000000736c746975ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_xori) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000786f7269ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_ori) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000006f7269ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_andi) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000616e6469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slli) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000736c6c69ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srli) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000073726c69ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srai) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000073726169ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_add) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000616464ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sub) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_add_sub 
            = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
               - vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2);
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000737562ULL;
    } else {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_add_sub 
            = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
               + vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2);
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sll) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000736c6cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_slt) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000736c74ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sltu) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000000736c7475ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_xor) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000786f72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_srl) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x000000000073726cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_sra) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000737261ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_or) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000006f72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_and) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000000616e64ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdcycle) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0072646379636c65ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdcycleh) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdinstr) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x007264696e737472ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_rdinstrh) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_fence) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000066656e6365ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_getq) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000067657471ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_setq) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000000073657471ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_retirq) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0000726574697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_maskirq) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x006d61736b697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_waitirq) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x0077616974697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_timer) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr = 0x00000074696d6572ULL;
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0 = 0U;
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_beq) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__alu_eq;
    } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bne) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__alu_eq)));
    } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bge) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__alu_lts)));
    } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__instr_bgeu) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__alu_ltu)));
    } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__is_slti_blt_slt) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__alu_lts;
    } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__is_sltiu_bltu_sltu) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__alu_ltu;
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out = 0U;
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__alu_add_sub;
    } else if (vlSelfRef.multi_core_top__DOT__core2__DOT__is_compare) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out_0;
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_xori) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_xor))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
               ^ vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_ori) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_or))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
               | vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_andi) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__instr_and))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
               & vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op2);
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_ascii_instr 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__q_ascii_instr;
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_next) {
        if (vlSelfRef.multi_core_top__DOT__core2__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_opcode 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__cached_insn_opcode;
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cached_insn_rs1));
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__cached_insn_rd));
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rs2 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__cached_insn_rs2;
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_imm 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__cached_insn_imm;
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_ascii_instr 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.multi_core_top__DOT__core2__DOT__next_insn_opcode))
                    ? vlSelfRef.multi_core_top__DOT__core2__DOT__next_insn_opcode
                    : (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core2__DOT__next_insn_opcode));
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs1));
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rd));
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_rs2 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs2;
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_insn_imm 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_imm;
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_ascii_instr 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__new_ascii_instr;
        }
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rinst 
        = __Vdly__multi_core_top__DOT__core2__DOT__mem_do_rinst;
    __VdfgRegularize_h6e95ff9d_0_4 = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_prefetch) 
                                      | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rinst));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rinst) 
                                                | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rdata));
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_busy 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_4) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_wdata)));
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_addr 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_4)
             ? (vlSelfRef.multi_core_top__DOT__core2__DOT__next_pc 
                >> 2U) : (vlSelfRef.multi_core_top__DOT__core2__DOT__reg_op1 
                          >> 2U)) << 2U);
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_read 
        = (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_prefetch) 
            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_14));
}

void Vmulti_core_top___024root___nba_sequent__TOP__2(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___nba_sequent__TOP__2\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    __VdfgRegularize_h6e95ff9d_0_7 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    __VdfgRegularize_h6e95ff9d_0_8 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_13;
    __VdfgRegularize_h6e95ff9d_0_13 = 0;
    CData/*1:0*/ __Vdly__multi_core_top__DOT__core1__DOT__mem_state;
    __Vdly__multi_core_top__DOT__core1__DOT__mem_state = 0;
    CData/*4:0*/ __Vdly__multi_core_top__DOT__core1__DOT__reg_sh;
    __Vdly__multi_core_top__DOT__core1__DOT__reg_sh = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core1__DOT__reg_out;
    __Vdly__multi_core_top__DOT__core1__DOT__reg_out = 0;
    QData/*63:0*/ __Vdly__multi_core_top__DOT__core1__DOT__count_cycle;
    __Vdly__multi_core_top__DOT__core1__DOT__count_cycle = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core1__DOT__timer;
    __Vdly__multi_core_top__DOT__core1__DOT__timer = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core1__DOT__decoder_trigger;
    __Vdly__multi_core_top__DOT__core1__DOT__decoder_trigger = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core1__DOT__decoder_pseudo_trigger;
    __Vdly__multi_core_top__DOT__core1__DOT__decoder_pseudo_trigger = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core1__DOT__do_waitirq;
    __Vdly__multi_core_top__DOT__core1__DOT__do_waitirq = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst;
    __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst = 0;
    CData/*1:0*/ __Vdly__multi_core_top__DOT__core1__DOT__mem_wordsize;
    __Vdly__multi_core_top__DOT__core1__DOT__mem_wordsize = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lu;
    __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lu = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lh;
    __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lh = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lb;
    __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lb = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core1__DOT__irq_active;
    __Vdly__multi_core_top__DOT__core1__DOT__irq_active = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core1__DOT__reg_pc;
    __Vdly__multi_core_top__DOT__core1__DOT__reg_pc = 0;
    CData/*5:0*/ __Vdly__multi_core_top__DOT__core1__DOT__latched_rd;
    __Vdly__multi_core_top__DOT__core1__DOT__latched_rd = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core1__DOT__latched_compr;
    __Vdly__multi_core_top__DOT__core1__DOT__latched_compr = 0;
    CData/*1:0*/ __Vdly__multi_core_top__DOT__core1__DOT__irq_state;
    __Vdly__multi_core_top__DOT__core1__DOT__irq_state = 0;
    QData/*63:0*/ __Vdly__multi_core_top__DOT__core1__DOT__count_instr;
    __Vdly__multi_core_top__DOT__core1__DOT__count_instr = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core1__DOT__mem_do_prefetch;
    __Vdly__multi_core_top__DOT__core1__DOT__mem_do_prefetch = 0;
    CData/*7:0*/ __Vdly__multi_core_top__DOT__core1__DOT__cpu_state;
    __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core1__DOT__reg_op1;
    __Vdly__multi_core_top__DOT__core1__DOT__reg_op1 = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core1__DOT__pcpi_valid;
    __Vdly__multi_core_top__DOT__core1__DOT__pcpi_valid = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core1__DOT__irq_mask;
    __Vdly__multi_core_top__DOT__core1__DOT__irq_mask = 0;
    CData/*3:0*/ __Vdly__multi_core_top__DOT__core1__DOT__pcpi_timeout_counter;
    __Vdly__multi_core_top__DOT__core1__DOT__pcpi_timeout_counter = 0;
    IData/*31:0*/ __VdlyVal__multi_core_top__DOT__core1__DOT__cpuregs__v0;
    __VdlyVal__multi_core_top__DOT__core1__DOT__cpuregs__v0 = 0;
    CData/*5:0*/ __VdlyDim0__multi_core_top__DOT__core1__DOT__cpuregs__v0;
    __VdlyDim0__multi_core_top__DOT__core1__DOT__cpuregs__v0 = 0;
    CData/*0:0*/ __VdlySet__multi_core_top__DOT__core1__DOT__cpuregs__v0;
    __VdlySet__multi_core_top__DOT__core1__DOT__cpuregs__v0 = 0;
    // Body
    __Vdly__multi_core_top__DOT__core1__DOT__pcpi_timeout_counter 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_timeout_counter;
    __VdlySet__multi_core_top__DOT__core1__DOT__cpuregs__v0 = 0U;
    __Vdly__multi_core_top__DOT__core1__DOT__reg_sh 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__reg_sh;
    __Vdly__multi_core_top__DOT__core1__DOT__count_cycle 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__count_cycle;
    __Vdly__multi_core_top__DOT__core1__DOT__timer 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__timer;
    __Vdly__multi_core_top__DOT__core1__DOT__decoder_pseudo_trigger 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_pseudo_trigger;
    __Vdly__multi_core_top__DOT__core1__DOT__do_waitirq 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__do_waitirq;
    __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lu 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__latched_is_lu;
    __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lh 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__latched_is_lh;
    __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lb 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__latched_is_lb;
    __Vdly__multi_core_top__DOT__core1__DOT__latched_rd 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__latched_rd;
    __Vdly__multi_core_top__DOT__core1__DOT__count_instr 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__count_instr;
    __Vdly__multi_core_top__DOT__core1__DOT__pcpi_valid 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_valid;
    __Vdly__multi_core_top__DOT__core1__DOT__decoder_trigger 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_trigger;
    __Vdly__multi_core_top__DOT__core1__DOT__irq_active 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__irq_active;
    __Vdly__multi_core_top__DOT__core1__DOT__mem_wordsize 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wordsize;
    __Vdly__multi_core_top__DOT__core1__DOT__reg_pc 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__reg_pc;
    __Vdly__multi_core_top__DOT__core1__DOT__latched_compr 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__latched_compr;
    __Vdly__multi_core_top__DOT__core1__DOT__mem_do_prefetch 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_prefetch;
    __Vdly__multi_core_top__DOT__core1__DOT__irq_mask 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__irq_mask;
    __Vdly__multi_core_top__DOT__core1__DOT__reg_out 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__reg_out;
    __Vdly__multi_core_top__DOT__core1__DOT__irq_state 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__irq_state;
    __Vdly__multi_core_top__DOT__core1__DOT__cpu_state 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state;
    __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rinst;
    __Vdly__multi_core_top__DOT__core1__DOT__reg_op1 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1;
    __Vdly__multi_core_top__DOT__core1__DOT__mem_state 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_state;
    if ((((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn) 
          & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_write)) 
         & (0U != (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_rd)))) {
        if ((0x23U >= (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_rd))) {
            __VdlyVal__multi_core_top__DOT__core1__DOT__cpuregs__v0 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_wrdata;
            __VdlyDim0__multi_core_top__DOT__core1__DOT__cpuregs__v0 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__latched_rd;
            __VdlySet__multi_core_top__DOT__core1__DOT__cpuregs__v0 = 1U;
        }
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__alu_wait_2 = 0U;
    vlSelfRef.multi_core_top__DOT__core1__DOT__trace_data = 0ULL;
    vlSelfRef.multi_core_top__DOT__core1__DOT__alu_wait = 0U;
    vlSelfRef.multi_core_top__DOT__core1__DOT__trace_valid = 0U;
    vlSelfRef.multi_core_top__DOT__core1__DOT__q_insn_rd 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rd;
    vlSelfRef.multi_core_top__DOT__core1__DOT__q_insn_rs2 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rs2;
    vlSelfRef.multi_core_top__DOT__core1__DOT__q_insn_rs1 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rs1;
    vlSelfRef.multi_core_top__DOT__core1__DOT__q_insn_opcode 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_opcode;
    vlSelfRef.multi_core_top__DOT__core1__DOT__q_insn_imm 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_imm;
    vlSelfRef.multi_core_top__DOT__core1__DOT__q_ascii_instr 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_ascii_instr;
    vlSelfRef.multi_core_top__DOT__core1__DOT__clear_prefetched_high_word_q 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__clear_prefetched_high_word;
    vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0_q 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0;
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__launch_next_insn) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_addr 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__next_pc;
        vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs1val = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs2val = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs1val_valid = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs2val_valid = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_next = 1U;
    } else {
        vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_next = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_pseudo_trigger_q 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_pseudo_trigger;
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_trigger_q) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__cached_ascii_instr 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr;
        vlSelfRef.multi_core_top__DOT__core1__DOT__cached_insn_opcode 
            = ((3U == (3U & vlSelfRef.multi_core_top__DOT__core1__DOT__next_insn_opcode))
                ? vlSelfRef.multi_core_top__DOT__core1__DOT__next_insn_opcode
                : (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core1__DOT__next_insn_opcode));
        vlSelfRef.multi_core_top__DOT__core1__DOT__cached_insn_rd 
            = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rd));
        vlSelfRef.multi_core_top__DOT__core1__DOT__cached_insn_rs1 
            = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs1));
        vlSelfRef.multi_core_top__DOT__core1__DOT__cached_insn_rs2 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs2;
        vlSelfRef.multi_core_top__DOT__core1__DOT__cached_insn_imm 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm;
    }
    if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn)) 
               | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__trap)))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_valid_insn = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__prefetched_high_word = 0U;
    } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__launch_next_insn) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_valid_insn = 1U;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__clear_prefetched_high_word) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__prefetched_high_word = 0U;
    }
    if ((1U & (~ ((~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn)) 
                  | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__trap))))) {
        if (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_write) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wdata 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_wdata;
        }
        if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_read) 
             | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_write))) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__mem_addr 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_addr;
        }
    }
    if (__VdlySet__multi_core_top__DOT__core1__DOT__cpuregs__v0) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs[__VdlyDim0__multi_core_top__DOT__core1__DOT__cpuregs__v0] 
            = __VdlyVal__multi_core_top__DOT__core1__DOT__cpuregs__v0;
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wdata;
    vlSelfRef.multi_core_top__DOT__core_mem_wdata[1U] 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wdata;
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_mem_addr 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_addr;
    vlSelfRef.multi_core_top__DOT__core_mem_addr[1U] 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_addr;
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__resetn) {
        if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__last_mem_valid)))) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_firstword_reg = 0U;
        }
    } else {
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_firstword_reg = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__last_mem_valid 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn) 
           && ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_valid) 
               & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_ready))));
    if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn)) 
               | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__trap)))) {
        if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn)))) {
            __Vdly__multi_core_top__DOT__core1__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn)) 
                   | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_ready)))) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__mem_valid = 0U;
        }
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_secondword = 0U;
    } else {
        if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_read) 
             | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_write))) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wstrb 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_wstrb) 
                   & (- (IData)((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_state))) {
            if ((((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_prefetch) 
                  | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rinst)) 
                 | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rdata))) {
                vlSelfRef.multi_core_top__DOT__core1__DOT__mem_valid = 1U;
                vlSelfRef.multi_core_top__DOT__core1__DOT__mem_instr 
                    = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_prefetch) 
                       | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rinst));
                vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wstrb = 0U;
                __Vdly__multi_core_top__DOT__core1__DOT__mem_state = 1U;
            }
            if (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_wdata) {
                vlSelfRef.multi_core_top__DOT__core1__DOT__mem_valid = 1U;
                vlSelfRef.multi_core_top__DOT__core1__DOT__mem_instr = 0U;
                __Vdly__multi_core_top__DOT__core1__DOT__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_state))) {
            if (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_xfer) {
                vlSelfRef.multi_core_top__DOT__core1__DOT__mem_valid = 0U;
                vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_secondword = 0U;
                __Vdly__multi_core_top__DOT__core1__DOT__mem_state 
                    = (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rinst) 
                        | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rdata))
                        ? 0U : 3U);
            }
        } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_state))) {
            if (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_xfer) {
                vlSelfRef.multi_core_top__DOT__core1__DOT__mem_valid = 0U;
                __Vdly__multi_core_top__DOT__core1__DOT__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_state))) {
            if (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rinst) {
                __Vdly__multi_core_top__DOT__core1__DOT__mem_state = 0U;
            }
        }
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_opcode 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__q_insn_opcode;
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rs1 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__q_insn_rs1;
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_state 
        = __Vdly__multi_core_top__DOT__core1__DOT__mem_state;
    __VdfgRegularize_h6e95ff9d_0_13 = ((~ (0U != (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_state))) 
                                       & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn));
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wstrb;
    vlSelfRef.multi_core_top__DOT__core_mem_wstrb[1U] 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wstrb;
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_mem_valid 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_valid;
    vlSelfRef.multi_core_top__DOT__core_mem_valid[1U] 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_valid;
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_mem_instr 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_instr;
    vlSelfRef.multi_core_top__DOT__core_mem_instr[1U] 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_instr;
    vlSelfRef.multi_core_top__DOT__core1__DOT__trap = 0U;
    __Vdly__multi_core_top__DOT__core1__DOT__reg_sh = 0U;
    __Vdly__multi_core_top__DOT__core1__DOT__reg_out = 0U;
    vlSelfRef.multi_core_top__DOT__core1__DOT__set_mem_do_rinst = 0U;
    vlSelfRef.multi_core_top__DOT__core1__DOT__set_mem_do_rdata = 0U;
    vlSelfRef.multi_core_top__DOT__core1__DOT__set_mem_do_wdata = 0U;
    vlSelfRef.multi_core_top__DOT__core1__DOT__next_irq_pending 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__irq_pending;
    __Vdly__multi_core_top__DOT__core1__DOT__decoder_trigger 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rinst) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_done));
    vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_trigger_q 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_trigger;
    __Vdly__multi_core_top__DOT__core1__DOT__decoder_pseudo_trigger = 0U;
    __Vdly__multi_core_top__DOT__core1__DOT__do_waitirq = 0U;
    __Vdly__multi_core_top__DOT__core1__DOT__count_cycle 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn)
            ? (1ULL + vlSelfRef.multi_core_top__DOT__core1__DOT__count_cycle)
            : 0ULL);
    if ((0U != vlSelfRef.multi_core_top__DOT__core1__DOT__timer)) {
        __Vdly__multi_core_top__DOT__core1__DOT__timer 
            = (vlSelfRef.multi_core_top__DOT__core1__DOT__timer 
               - (IData)(1U));
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__resetn) {
        if (((((((((0x80U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state))) 
                | (8U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state))) 
               | (4U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state))) 
              | (2U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state))) 
             | (1U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state))) {
                vlSelfRef.multi_core_top__DOT__core1__DOT__trap = 1U;
            } else if ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state))) {
                __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst 
                    = (1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_trigger)) 
                             & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__do_waitirq))));
                __Vdly__multi_core_top__DOT__core1__DOT__mem_wordsize = 0U;
                __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lu = 0U;
                __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lh = 0U;
                __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lb = 0U;
                vlSelfRef.multi_core_top__DOT__core1__DOT__current_pc 
                    = vlSelfRef.multi_core_top__DOT__core1__DOT__reg_next_pc;
                if (vlSelfRef.multi_core_top__DOT__core1__DOT__latched_branch) {
                    vlSelfRef.multi_core_top__DOT__core1__DOT__current_pc 
                        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store)
                            ? (0xfffffffeU & ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_stalu)
                                               ? vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_q
                                               : vlSelfRef.multi_core_top__DOT__core1__DOT__reg_out))
                            : vlSelfRef.multi_core_top__DOT__core1__DOT__reg_next_pc);
                } else if ((1U & (~ ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store) 
                                     & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_branch)))))) {
                    if ((1U & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_state))) {
                        vlSelfRef.multi_core_top__DOT__core1__DOT__current_pc = 0x00000010U;
                        __Vdly__multi_core_top__DOT__core1__DOT__irq_active = 1U;
                        __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst = 1U;
                    } else if ((2U & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_state))) {
                        vlSelfRef.multi_core_top__DOT__core1__DOT__next_irq_pending 
                            = (vlSelfRef.multi_core_top__DOT__core1__DOT__next_irq_pending 
                               & vlSelfRef.multi_core_top__DOT__core1__DOT__irq_mask);
                        vlSelfRef.multi_core_top__DOT__core1__DOT__eoi 
                            = (vlSelfRef.multi_core_top__DOT__core1__DOT__irq_pending 
                               & (~ vlSelfRef.multi_core_top__DOT__core1__DOT__irq_mask));
                    }
                }
                __Vdly__multi_core_top__DOT__core1__DOT__reg_pc 
                    = vlSelfRef.multi_core_top__DOT__core1__DOT__current_pc;
                vlSelfRef.multi_core_top__DOT__core1__DOT__reg_next_pc 
                    = vlSelfRef.multi_core_top__DOT__core1__DOT__current_pc;
                vlSelfRef.multi_core_top__DOT__core1__DOT__latched_stalu = 0U;
                vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store = 0U;
                vlSelfRef.multi_core_top__DOT__core1__DOT__latched_branch = 0U;
                __Vdly__multi_core_top__DOT__core1__DOT__latched_rd 
                    = vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rd;
                __Vdly__multi_core_top__DOT__core1__DOT__latched_compr 
                    = vlSelfRef.multi_core_top__DOT__core1__DOT__compressed_instr;
                if ((((((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_trigger) 
                        & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_active))) 
                       & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_delay))) 
                      & (0U != (vlSelfRef.multi_core_top__DOT__core1__DOT__irq_pending 
                                & (~ vlSelfRef.multi_core_top__DOT__core1__DOT__irq_mask)))) 
                     | (0U != (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_state)))) {
                    __Vdly__multi_core_top__DOT__core1__DOT__irq_state 
                        = ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_state))
                            ? 1U : ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_state))
                                     ? 2U : 0U));
                    __Vdly__multi_core_top__DOT__core1__DOT__latched_compr 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__latched_compr;
                    __Vdly__multi_core_top__DOT__core1__DOT__latched_rd 
                        = (0x20U | (1U & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_state)));
                } else if ((((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_trigger) 
                             | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__do_waitirq)) 
                            & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_waitirq))) {
                    if ((0U != vlSelfRef.multi_core_top__DOT__core1__DOT__irq_pending)) {
                        vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store = 1U;
                        __Vdly__multi_core_top__DOT__core1__DOT__reg_out 
                            = vlSelfRef.multi_core_top__DOT__core1__DOT__irq_pending;
                        vlSelfRef.multi_core_top__DOT__core1__DOT__reg_next_pc 
                            = (vlSelfRef.multi_core_top__DOT__core1__DOT__current_pc 
                               + ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__compressed_instr)
                                   ? 2U : 4U));
                        __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst = 1U;
                    } else {
                        __Vdly__multi_core_top__DOT__core1__DOT__do_waitirq = 1U;
                    }
                } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_trigger) {
                    __Vdly__multi_core_top__DOT__core1__DOT__count_instr 
                        = (1ULL + vlSelfRef.multi_core_top__DOT__core1__DOT__count_instr);
                    vlSelfRef.multi_core_top__DOT__core1__DOT__irq_delay 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__irq_active;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__reg_next_pc 
                        = (vlSelfRef.multi_core_top__DOT__core1__DOT__current_pc 
                           + ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__compressed_instr)
                               ? 2U : 4U));
                    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_jal) {
                        __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst = 1U;
                        vlSelfRef.multi_core_top__DOT__core1__DOT__reg_next_pc 
                            = (vlSelfRef.multi_core_top__DOT__core1__DOT__current_pc 
                               + vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm_j);
                        vlSelfRef.multi_core_top__DOT__core1__DOT__latched_branch = 1U;
                    } else {
                        __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst = 0U;
                        __Vdly__multi_core_top__DOT__core1__DOT__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_jalr)) 
                                     & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_retirq))));
                        __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state))) {
                __Vdly__multi_core_top__DOT__core1__DOT__reg_op1 = 0U;
                vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2 = 0U;
                if (((((((((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_trap) 
                           | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                          | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_lui_auipc_jal)) 
                         | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_getq)) 
                        | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_setq)) 
                       | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_retirq)) 
                      | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_maskirq)) 
                     | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_timer))) {
                    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_trap) {
                        __Vdly__multi_core_top__DOT__core1__DOT__reg_op1 
                            = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1;
                        vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs1val 
                            = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1;
                        vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs1val_valid = 1U;
                        __Vdly__multi_core_top__DOT__core1__DOT__pcpi_valid = 1U;
                        __Vdly__multi_core_top__DOT__core1__DOT__reg_sh 
                            = (0x0000001fU & vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs2);
                        vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2 
                            = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs2;
                        vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs2val 
                            = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs2;
                        vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs2val_valid = 1U;
                        if (vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_int_ready) {
                            __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst = 1U;
                            __Vdly__multi_core_top__DOT__core1__DOT__pcpi_valid = 0U;
                            __Vdly__multi_core_top__DOT__core1__DOT__reg_out 
                                = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_int_rd;
                            vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store 
                                = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_int_wr;
                            __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 0x40U;
                        } else if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_timeout) 
                                    | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_ecall_ebreak))) {
                            __Vdly__multi_core_top__DOT__core1__DOT__pcpi_valid = 0U;
                            if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core1__DOT__irq_mask 
                                           >> 1U)) 
                                       & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_active))))) {
                                vlSelfRef.multi_core_top__DOT__core1__DOT__next_irq_pending 
                                    = (2U | vlSelfRef.multi_core_top__DOT__core1__DOT__next_irq_pending);
                                __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 0x40U;
                            } else {
                                __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 0x80U;
                            }
                        }
                    } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                        if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdcycle) {
                            __Vdly__multi_core_top__DOT__core1__DOT__reg_out 
                                = (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__count_cycle);
                        } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdcycleh) {
                            __Vdly__multi_core_top__DOT__core1__DOT__reg_out 
                                = (IData)((vlSelfRef.multi_core_top__DOT__core1__DOT__count_cycle 
                                           >> 0x20U));
                        } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdinstr) {
                            __Vdly__multi_core_top__DOT__core1__DOT__reg_out 
                                = (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__count_instr);
                        } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdinstrh) {
                            __Vdly__multi_core_top__DOT__core1__DOT__reg_out 
                                = (IData)((vlSelfRef.multi_core_top__DOT__core1__DOT__count_instr 
                                           >> 0x20U));
                        }
                        vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store = 1U;
                        __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 0x40U;
                    } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__is_lui_auipc_jal) {
                        __Vdly__multi_core_top__DOT__core1__DOT__reg_op1 
                            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lui)
                                ? 0U : vlSelfRef.multi_core_top__DOT__core1__DOT__reg_pc);
                        vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2 
                            = vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm;
                        __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst 
                            = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_prefetch;
                        __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 8U;
                    } else {
                        if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_getq) {
                            __Vdly__multi_core_top__DOT__core1__DOT__reg_out 
                                = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs1val 
                                = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs1val_valid = 1U;
                            vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store = 1U;
                        } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_setq) {
                            __Vdly__multi_core_top__DOT__core1__DOT__latched_rd 
                                = (0x20U | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_rd));
                            __Vdly__multi_core_top__DOT__core1__DOT__reg_out 
                                = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs1val 
                                = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs1val_valid = 1U;
                            vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store = 1U;
                        } else {
                            if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_retirq) {
                                vlSelfRef.multi_core_top__DOT__core1__DOT__eoi = 0U;
                                __Vdly__multi_core_top__DOT__core1__DOT__irq_active = 0U;
                                vlSelfRef.multi_core_top__DOT__core1__DOT__latched_branch = 1U;
                                vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store = 1U;
                                __Vdly__multi_core_top__DOT__core1__DOT__reg_out 
                                    = (0xfffffffeU 
                                       & vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1);
                            } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_maskirq) {
                                vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store = 1U;
                                __Vdly__multi_core_top__DOT__core1__DOT__reg_out 
                                    = vlSelfRef.multi_core_top__DOT__core1__DOT__irq_mask;
                                __Vdly__multi_core_top__DOT__core1__DOT__irq_mask 
                                    = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1;
                            } else {
                                vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store = 1U;
                                __Vdly__multi_core_top__DOT__core1__DOT__reg_out 
                                    = vlSelfRef.multi_core_top__DOT__core1__DOT__timer;
                                __Vdly__multi_core_top__DOT__core1__DOT__timer 
                                    = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1;
                            }
                            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs1val 
                                = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs1val_valid = 1U;
                        }
                        __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 0x40U;
                    }
                } else if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_lb_lh_lw_lbu_lhu) 
                            & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_trap)))) {
                    __Vdly__multi_core_top__DOT__core1__DOT__reg_op1 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs1val 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 1U;
                    __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__is_slli_srli_srai) {
                    __Vdly__multi_core_top__DOT__core1__DOT__reg_op1 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs1val 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__multi_core_top__DOT__core1__DOT__reg_sh 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs2;
                    __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 4U;
                } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                    __Vdly__multi_core_top__DOT__core1__DOT__reg_op1 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs1val 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs1val_valid = 1U;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm;
                    __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_prefetch;
                    __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 8U;
                } else {
                    __Vdly__multi_core_top__DOT__core1__DOT__reg_op1 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs1val 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__multi_core_top__DOT__core1__DOT__reg_sh 
                        = (0x0000001fU & vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs2);
                    vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs2;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs2val 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs2;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs2val_valid = 1U;
                    if (vlSelfRef.multi_core_top__DOT__core1__DOT__is_sb_sh_sw) {
                        __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 2U;
                        __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst = 1U;
                    } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__is_sll_srl_sra) {
                        __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 4U;
                    } else {
                        __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst 
                            = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_prefetch;
                        __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 8U;
                    }
                }
            } else if ((0x10U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state))) {
                __Vdly__multi_core_top__DOT__core1__DOT__reg_sh 
                    = (0x0000001fU & vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs2);
                vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2 
                    = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs2;
                vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs2val 
                    = vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs2;
                vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_rs2val_valid = 1U;
                if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_trap) {
                    __Vdly__multi_core_top__DOT__core1__DOT__pcpi_valid = 1U;
                    if (vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_int_ready) {
                        __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst = 1U;
                        __Vdly__multi_core_top__DOT__core1__DOT__pcpi_valid = 0U;
                        __Vdly__multi_core_top__DOT__core1__DOT__reg_out 
                            = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_int_rd;
                        vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store 
                            = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_int_wr;
                        __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 0x40U;
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_timeout) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_ecall_ebreak))) {
                        __Vdly__multi_core_top__DOT__core1__DOT__pcpi_valid = 0U;
                        if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core1__DOT__irq_mask 
                                       >> 1U)) & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_active))))) {
                            vlSelfRef.multi_core_top__DOT__core1__DOT__next_irq_pending 
                                = (2U | vlSelfRef.multi_core_top__DOT__core1__DOT__next_irq_pending);
                            __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 0x40U;
                        } else {
                            __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 0x80U;
                        }
                    }
                } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__is_sb_sh_sw) {
                    __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 2U;
                    __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__is_sll_srl_sra) {
                    __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 4U;
                } else {
                    __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_prefetch;
                    __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state))) {
                __Vdly__multi_core_top__DOT__core1__DOT__reg_out 
                    = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_pc 
                       + vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm);
                if (vlSelfRef.multi_core_top__DOT__core1__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                    __Vdly__multi_core_top__DOT__core1__DOT__latched_rd = 0U;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__latched_branch 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0;
                    if (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_done) {
                        __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 0x40U;
                    }
                    if (vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0) {
                        vlSelfRef.multi_core_top__DOT__core1__DOT__set_mem_do_rinst = 1U;
                        __Vdly__multi_core_top__DOT__core1__DOT__decoder_trigger = 0U;
                    }
                } else {
                    vlSelfRef.multi_core_top__DOT__core1__DOT__latched_branch 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__instr_jalr;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store = 1U;
                    vlSelfRef.multi_core_top__DOT__core1__DOT__latched_stalu = 1U;
                    __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state))) {
                vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store = 1U;
                if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__reg_sh))) {
                    __Vdly__multi_core_top__DOT__core1__DOT__reg_out 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1;
                    __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst 
                        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_prefetch;
                    __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__reg_sh))) {
                    if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slli) 
                         | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sll))) {
                        __Vdly__multi_core_top__DOT__core1__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
                               << 4U);
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srli) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srl))) {
                        __Vdly__multi_core_top__DOT__core1__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
                               >> 4U);
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srai) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sra))) {
                        __Vdly__multi_core_top__DOT__core1__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1, 4U);
                    }
                    __Vdly__multi_core_top__DOT__core1__DOT__reg_sh 
                        = (0x0000001fU & ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__reg_sh) 
                                          - (IData)(4U)));
                } else {
                    if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slli) 
                         | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sll))) {
                        __Vdly__multi_core_top__DOT__core1__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
                               << 1U);
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srli) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srl))) {
                        __Vdly__multi_core_top__DOT__core1__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
                               >> 1U);
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srai) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sra))) {
                        __Vdly__multi_core_top__DOT__core1__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1, 1U);
                    }
                    __Vdly__multi_core_top__DOT__core1__DOT__reg_sh 
                        = (0x0000001fU & ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__reg_sh) 
                                          - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state))) {
                if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_wdata)))) {
                        __Vdly__multi_core_top__DOT__core1__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
                               + vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm);
                        vlSelfRef.multi_core_top__DOT__core1__DOT__set_mem_do_wdata = 1U;
                        if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sb) {
                            __Vdly__multi_core_top__DOT__core1__DOT__mem_wordsize = 2U;
                        } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sh) {
                            __Vdly__multi_core_top__DOT__core1__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sw) {
                            __Vdly__multi_core_top__DOT__core1__DOT__mem_wordsize = 0U;
                        }
                    }
                    if (((~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_done))) {
                        __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 0x40U;
                        __Vdly__multi_core_top__DOT__core1__DOT__decoder_trigger = 1U;
                        __Vdly__multi_core_top__DOT__core1__DOT__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_done)))) {
                    if (((~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_done))) {
                        if (vlSelfRef.multi_core_top__DOT__core1__DOT__latched_is_lu) {
                            __Vdly__multi_core_top__DOT__core1__DOT__reg_out 
                                = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_word;
                        } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__latched_is_lh) {
                            __Vdly__multi_core_top__DOT__core1__DOT__reg_out 
                                = VL_EXTENDS_II(32,16, 
                                                (0x0000ffffU 
                                                 & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_word));
                        } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__latched_is_lb) {
                            __Vdly__multi_core_top__DOT__core1__DOT__reg_out 
                                = VL_EXTENDS_II(32,8, 
                                                (0x000000ffU 
                                                 & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_word));
                        }
                        __Vdly__multi_core_top__DOT__core1__DOT__decoder_trigger = 1U;
                        __Vdly__multi_core_top__DOT__core1__DOT__decoder_pseudo_trigger = 1U;
                        __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 0x40U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rdata)))) {
                        __Vdly__multi_core_top__DOT__core1__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
                               + vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm);
                        vlSelfRef.multi_core_top__DOT__core1__DOT__set_mem_do_rdata = 1U;
                        if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lb) 
                             | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lbu))) {
                            __Vdly__multi_core_top__DOT__core1__DOT__mem_wordsize = 2U;
                        } else if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lh) 
                                    | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lhu))) {
                            __Vdly__multi_core_top__DOT__core1__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lw) {
                            __Vdly__multi_core_top__DOT__core1__DOT__mem_wordsize = 0U;
                        }
                        __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lu 
                            = vlSelfRef.multi_core_top__DOT__core1__DOT__is_lbu_lhu_lw;
                        __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lh 
                            = vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lh;
                        __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lb 
                            = vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lb;
                    }
                }
            }
        }
    } else {
        __Vdly__multi_core_top__DOT__core1__DOT__count_instr = 0ULL;
        vlSelfRef.multi_core_top__DOT__core1__DOT__next_irq_pending = 0U;
        __Vdly__multi_core_top__DOT__core1__DOT__reg_pc = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__reg_next_pc = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__latched_stalu = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__latched_branch = 0U;
        __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lu = 0U;
        __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lh = 0U;
        __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lb = 0U;
        __Vdly__multi_core_top__DOT__core1__DOT__pcpi_valid = 0U;
        __Vdly__multi_core_top__DOT__core1__DOT__irq_active = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__irq_delay = 0U;
        __Vdly__multi_core_top__DOT__core1__DOT__irq_mask = 0xffffffffU;
        __Vdly__multi_core_top__DOT__core1__DOT__irq_state = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__eoi = 0U;
        __Vdly__multi_core_top__DOT__core1__DOT__timer = 0U;
        __Vdly__multi_core_top__DOT__core1__DOT__latched_rd = 2U;
        __Vdly__multi_core_top__DOT__core1__DOT__reg_out = 0x00001fffU;
        __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 0x40U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store = 1U;
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__next_irq_pending 
        = (vlSelfRef.multi_core_top__DOT__core1__DOT__next_irq_pending 
           | vlSelfRef.multi_core_top__DOT__core1__DOT__irq);
    if ((0U != vlSelfRef.multi_core_top__DOT__core1__DOT__timer)) {
        if ((0U == (vlSelfRef.multi_core_top__DOT__core1__DOT__timer 
                    - (IData)(1U)))) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__next_irq_pending 
                = (1U | vlSelfRef.multi_core_top__DOT__core1__DOT__next_irq_pending);
        }
    }
    if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn) 
         & ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rdata) 
            | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wordsize)) 
             & (0U != (3U & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1)))) {
            if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core1__DOT__irq_mask 
                           >> 2U)) & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_active))))) {
                vlSelfRef.multi_core_top__DOT__core1__DOT__next_irq_pending 
                    = (4U | vlSelfRef.multi_core_top__DOT__core1__DOT__next_irq_pending);
            } else {
                __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 0x80U;
            }
        }
        if (((1U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wordsize)) 
             & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1)) {
            if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core1__DOT__irq_mask 
                           >> 2U)) & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_active))))) {
                vlSelfRef.multi_core_top__DOT__core1__DOT__next_irq_pending 
                    = (4U | vlSelfRef.multi_core_top__DOT__core1__DOT__next_irq_pending);
            } else {
                __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 0x80U;
            }
        }
    }
    if ((((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn) 
          & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rinst)) 
         & (0U != (3U & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_pc)))) {
        if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core1__DOT__irq_mask 
                       >> 2U)) & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_active))))) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__next_irq_pending 
                = (4U | vlSelfRef.multi_core_top__DOT__core1__DOT__next_irq_pending);
        } else {
            __Vdly__multi_core_top__DOT__core1__DOT__cpu_state = 0x80U;
        }
    }
    if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn)) 
               | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_done)))) {
        __Vdly__multi_core_top__DOT__core1__DOT__mem_do_prefetch = 0U;
        __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rdata = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_wdata = 0U;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__set_mem_do_rinst) {
        __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst = 1U;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__set_mem_do_rdata) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rdata = 1U;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__set_mem_do_wdata) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_wdata = 1U;
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__irq_pending 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__next_irq_pending;
    vlSelfRef.multi_core_top__DOT__core1__DOT__current_pc = 0U;
    vlSelfRef.multi_core_top__DOT__core1__DOT__reg_sh 
        = __Vdly__multi_core_top__DOT__core1__DOT__reg_sh;
    vlSelfRef.multi_core_top__DOT__core1__DOT__count_cycle 
        = __Vdly__multi_core_top__DOT__core1__DOT__count_cycle;
    vlSelfRef.multi_core_top__DOT__core1__DOT__timer 
        = __Vdly__multi_core_top__DOT__core1__DOT__timer;
    vlSelfRef.multi_core_top__DOT__core1__DOT__do_waitirq 
        = __Vdly__multi_core_top__DOT__core1__DOT__do_waitirq;
    vlSelfRef.multi_core_top__DOT__core1__DOT__latched_is_lu 
        = __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lu;
    vlSelfRef.multi_core_top__DOT__core1__DOT__latched_is_lh 
        = __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lh;
    vlSelfRef.multi_core_top__DOT__core1__DOT__latched_is_lb 
        = __Vdly__multi_core_top__DOT__core1__DOT__latched_is_lb;
    vlSelfRef.multi_core_top__DOT__core1__DOT__count_instr 
        = __Vdly__multi_core_top__DOT__core1__DOT__count_instr;
    if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_done))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs1 
            = (0x0000001fU & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched 
                              >> 0x0fU));
        if ((IData)((0x0000000bU == (0xfe00007fU & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched)))) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs1 
                = (0x00000020U | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs1));
        }
        if ((IData)((0x0400000bU == (0xfe00007fU & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched)))) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs1 = 0x20U;
        }
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs1 
        = (vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs
           [vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs1] 
           & (- (IData)(((0U != (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs1)) 
                         & (0x23U >= (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs1))))));
    vlSelfRef.multi_core_top__DOT__core1__DOT__latched_rd 
        = __Vdly__multi_core_top__DOT__core1__DOT__latched_rd;
    vlSelfRef.multi_core_top__DOT__core1__DOT__irq_active 
        = __Vdly__multi_core_top__DOT__core1__DOT__irq_active;
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wordsize 
        = __Vdly__multi_core_top__DOT__core1__DOT__mem_wordsize;
    vlSelfRef.multi_core_top__DOT__core1__DOT__reg_pc 
        = __Vdly__multi_core_top__DOT__core1__DOT__reg_pc;
    vlSelfRef.multi_core_top__DOT__core1__DOT__latched_compr 
        = __Vdly__multi_core_top__DOT__core1__DOT__latched_compr;
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_prefetch 
        = __Vdly__multi_core_top__DOT__core1__DOT__mem_do_prefetch;
    vlSelfRef.multi_core_top__DOT__core1__DOT__irq_mask 
        = __Vdly__multi_core_top__DOT__core1__DOT__irq_mask;
    vlSelfRef.multi_core_top__DOT__core1__DOT__reg_out 
        = __Vdly__multi_core_top__DOT__core1__DOT__reg_out;
    vlSelfRef.multi_core_top__DOT__core1__DOT__irq_state 
        = __Vdly__multi_core_top__DOT__core1__DOT__irq_state;
    vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state 
        = __Vdly__multi_core_top__DOT__core1__DOT__cpu_state;
    vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
        = __Vdly__multi_core_top__DOT__core1__DOT__reg_op1;
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_write 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_wdata) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_13));
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_ascii_state[0U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state][0U];
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_ascii_state[1U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state][1U];
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_ascii_state[2U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state][2U];
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_ascii_state[3U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state][3U];
    vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_write = 0U;
    vlSelfRef.multi_core_top__DOT__core1__DOT__next_pc 
        = (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store) 
            & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_branch))
            ? (0xfffffffeU & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_out)
            : vlSelfRef.multi_core_top__DOT__core1__DOT__reg_next_pc);
    vlSelfRef.multi_core_top__DOT__core1__DOT__clear_prefetched_high_word 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__prefetched_high_word)))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn))))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_q 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out;
    if ((((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn) 
          & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_valid)) 
         & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_int_wait)))) {
        if ((0U != (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_timeout_counter))) {
            __Vdly__multi_core_top__DOT__core1__DOT__pcpi_timeout_counter 
                = (0x0000000fU & ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_timeout_counter) 
                                  - (IData)(1U)));
        }
    } else {
        __Vdly__multi_core_top__DOT__core1__DOT__pcpi_timeout_counter = 0x0fU;
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_timeout 
        = (1U & (~ (0U != (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_timeout_counter))));
    if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_insn 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_fence 
            = ((0x0fU == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)) 
               & (~ (0U != (7U & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q 
                                  >> 0x0cU)))));
    }
    if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_wdata 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2;
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_wstrb = 0x0fU;
    } else if ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_wdata 
            = ((vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2));
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_wstrb 
            = ((2U & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1)
                ? 0x0cU : 3U);
    } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_wdata 
            = ((vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2))));
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_wstrb 
            = (0x0000000fU & ((IData)(1U) << (3U & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1)));
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_rs2 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2;
    vlSelfRef.multi_core_top__DOT__core1__DOT__alu_shl 
        = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
           << (0x0000001fU & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2));
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_rs1 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1;
    vlSelfRef.multi_core_top__DOT__core1__DOT__alu_eq 
        = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
           == vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core1__DOT__alu_lts 
        = VL_LTS_III(32, vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1, vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core1__DOT__alu_ltu 
        = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
           < vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core1__DOT__is_lbu_lhu_lw 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lbu) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lhu) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lw)));
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_timeout_counter 
        = __Vdly__multi_core_top__DOT__core1__DOT__pcpi_timeout_counter;
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_valid 
        = __Vdly__multi_core_top__DOT__core1__DOT__pcpi_valid;
    vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state))) {
        if (vlSelfRef.multi_core_top__DOT__core1__DOT__latched_branch) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_pc 
                   + ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_store) 
                    & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_branch)))) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_wrdata 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_stalu)
                    ? vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_q
                    : vlSelfRef.multi_core_top__DOT__core1__DOT__reg_out);
        } else if ((1U & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_state))) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_next_pc 
                   | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__latched_compr));
        } else if ((2U & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_state))) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core1__DOT__irq_pending 
                   & (~ vlSelfRef.multi_core_top__DOT__core1__DOT__irq_mask));
        }
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rd 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__q_insn_rd;
    if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_done))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__compressed_instr = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rd 
            = (0x0000001fU & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched 
                              >> 7U));
        vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs2 
            = (0x0000001fU & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched 
                              >> 0x14U));
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs_rs2 
        = (vlSelfRef.multi_core_top__DOT__core1__DOT__cpuregs
           [vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs2] 
           & (- (IData)((0U != (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs2)))));
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rs2 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__q_insn_rs2;
    if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)) 
                & (~ (0U != (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q 
                             >> 0x15U)))) & (~ (0U 
                                                != 
                                                (0x00001fffU 
                                                 & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q 
                                                    >> 7U)))));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_getq 
            = (IData)((0x0000000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_setq 
            = (IData)((0x0200000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_maskirq 
            = (IData)((0x0600000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_timer 
            = (IData)((0x0a00000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdcycle 
            = ((IData)((0xc0002073U == (0xfffff07fU 
                                        & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q))) 
               | (IData)((0xc0102073U == (0xfffff07fU 
                                          & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q))));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdcycleh 
            = ((IData)((0xc8002073U == (0xfffff07fU 
                                        & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q))) 
               | (IData)((0xc8102073U == (0xfffff07fU 
                                          & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q))));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdinstr 
            = (IData)((0xc0202073U == (0xfffff07fU 
                                       & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdinstrh 
            = (IData)((0xc8202073U == (0xfffff07fU 
                                       & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
    }
    __VdfgRegularize_h6e95ff9d_0_8 = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdcycle) 
                                      | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdcycleh) 
                                         | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdinstr) 
                                            | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdinstrh))));
    vlSelfRef.multi_core_top__DOT__core1__DOT__is_lui_auipc_jal 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lui) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_auipc) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_jal)));
    vlSelfRef.multi_core_top__DOT__core1__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lui) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_auipc) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_jal) 
                 | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_jalr) 
                    | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_addi) 
                       | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_add) 
                          | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sub)))))));
    vlSelfRef.multi_core_top__DOT__core1__DOT__is_slti_blt_slt 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slti) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_blt) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slt)));
    vlSelfRef.multi_core_top__DOT__core1__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sltiu) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bltu) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sltu)));
    vlSelfRef.multi_core_top__DOT__core1__DOT__is_compare 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slti) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slt) 
                 | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sltiu) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sltu)))));
    if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_beq 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bne 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00001000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_blt 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00004000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bge 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00005000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bltu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00006000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bgeu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00007000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lb 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lh 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00001000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lw 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00002000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lbu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00004000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lhu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00005000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sb 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_sb_sh_sw) 
               & (0U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sh 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_sb_sh_sw) 
               & (0x00001000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sw 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_sb_sh_sw) 
               & (0x00002000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_addi 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_imm) 
               & (0U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slti 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_imm) 
               & (0x00002000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sltiu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_imm) 
               & (0x00003000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_xori 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_imm) 
               & (0x00004000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_ori 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_imm) 
               & (0x00006000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_andi 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_imm) 
               & (0x00007000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slli 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_imm) 
               & (0x00001000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srli 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_imm) 
               & (0x00005000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srai 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_imm) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__is_slli_srli_srai 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_imm) 
               & ((IData)((0x00001000U == (0xfe007000U 
                                           & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q))) 
                  | ((IData)((0x00005000U == (0xfe007000U 
                                              & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q))))));
        vlSelfRef.multi_core_top__DOT__core1__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_jalr) 
               | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q 
                                   >> 0x0cU))) | ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q 
                                                       >> 0x0cU))) 
                                                  | ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q 
                                                          >> 0x0cU))) 
                                                     | ((4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q 
                                                             >> 0x0cU))) 
                                                        | ((6U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q 
                                                                >> 0x0cU))) 
                                                           | (7U 
                                                              == 
                                                              (7U 
                                                               & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q 
                                                                  >> 0x0cU))))))))));
        vlSelfRef.multi_core_top__DOT__core1__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__is_compare = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_jal)
                ? vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm_j
                : (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lui) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_auipc))
                    ? (0xfffff000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)
                    : (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_jalr) 
                        | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q 
                                                >> 0x14U))
                        : ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            ((((2U 
                                                & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q 
                                                   >> 0x0000001eU)) 
                                               | (1U 
                                                  & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q 
                                                     >> 7U))) 
                                              << 0x0000000bU) 
                                             | ((0x000007e0U 
                                                 & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q 
                                                    >> 0x00000014U)) 
                                                | (0x0000001eU 
                                                   & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q 
                                                      >> 7U)))))
                            : ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0x00000fe0U 
                                                  & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q 
                                                     >> 0x00000014U)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_add 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_reg) 
               & (0U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sub 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_reg) 
               & (0x40000000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sll 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_reg) 
               & (0x00001000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slt 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_reg) 
               & (0x00002000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sltu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_reg) 
               & (0x00003000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_xor 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_reg) 
               & (0x00004000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srl 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_reg) 
               & (0x00005000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sra 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_reg) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_or 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_reg) 
               & (0x00006000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_and 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_reg) 
               & (0x00007000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__is_sll_srl_sra 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_reg) 
               & ((IData)((0x00001000U == (0xfe007000U 
                                           & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q))) 
                  | ((IData)((0x00005000U == (0xfe007000U 
                                              & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q))))));
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_xfer) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__next_insn_opcode 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata;
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata;
    }
    if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_done))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_waitirq 
            = (IData)((0x0800000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_retirq 
            = (IData)((0x0400000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_imm 
            = (0x13U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core1__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core1__DOT__is_sb_sh_sw 
            = (0x23U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm_j 
            = ((0x000fffffU & vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm_j) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x001ffffeU 
                                               & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched 
                                                  >> 0x0000000bU)))));
        vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm_j 
            = ((0xfffff801U & vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm_j) 
               | (0x000007feU & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched 
                                                   >> 0x0000000bU))) 
                                 >> 9U)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm_j 
            = ((0xfffff7ffU & vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm_j) 
               | (0x00000800U & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched 
                                                   >> 0x0000000bU))) 
                                 << 2U)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm_j 
            = ((0xfff00fffU & vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm_j) 
               | (0x000ff000U & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched 
                                                   >> 0x0000000bU))) 
                                 << 0x0000000bU)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm_j 
            = ((0xfffffffeU & vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm_j) 
               | (1U & VL_EXTENDS_II(1,21, (0x001ffffeU 
                                            & (vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched 
                                               >> 0x0000000bU)))));
        vlSelfRef.multi_core_top__DOT__core1__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_auipc 
            = (0x17U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lui 
            = (0x37U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_jal 
            = (0x6fU == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_jalr 
            = (IData)((0x00000067U == (0x0000707fU 
                                       & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched)));
        vlSelfRef.multi_core_top__DOT__core1__DOT__is_alu_reg_reg 
            = (0x33U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched));
    }
    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn)))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__latched_trace = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_fence = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_timeout = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__is_compare = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_beq = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bne = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_blt = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bge = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bltu = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bgeu = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_addi = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slti = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sltiu = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_xori = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_ori = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_andi = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_add = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sub = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sll = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slt = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sltu = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_xor = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srl = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sra = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_or = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__instr_and = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = __VdfgRegularize_h6e95ff9d_0_8;
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_imm 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__q_insn_imm;
    vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_pseudo_trigger 
        = __Vdly__multi_core_top__DOT__core1__DOT__decoder_pseudo_trigger;
    vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_trigger 
        = __Vdly__multi_core_top__DOT__core1__DOT__decoder_trigger;
    vlSelfRef.multi_core_top__DOT__core1__DOT__launch_next_insn 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_trigger) 
           & ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cpu_state)) 
              & ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_delay) 
                 | ((~ (0U != ((~ vlSelfRef.multi_core_top__DOT__core1__DOT__irq_mask) 
                               & vlSelfRef.multi_core_top__DOT__core1__DOT__irq_pending))) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__irq_active)))));
    vlSelfRef.multi_core_top__DOT__core1__DOT__alu_shr 
        = (IData)((0x00000001ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                          (((QData)((IData)(
                                                                            ((vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
                                                                              >> 0x0000001fU) 
                                                                             & ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srai) 
                                                                                | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sra))))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1))), 
                                                          (0x0000001fU 
                                                           & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2))));
    vlSelfRef.multi_core_top__DOT__core1__DOT__instr_trap 
        = (1U & (~ ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lui) 
                    | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_auipc) 
                       | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_jal) 
                          | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_jalr) 
                             | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_beq) 
                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bne) 
                                   | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_blt) 
                                      | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bge) 
                                         | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bltu) 
                                            | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bgeu) 
                                               | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lb) 
                                                  | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lh) 
                                                     | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lw) 
                                                        | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lbu) 
                                                           | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lhu) 
                                                              | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sb) 
                                                                 | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sh) 
                                                                    | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sw) 
                                                                       | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_addi) 
                                                                          | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slti) 
                                                                             | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_add) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slt) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sltu) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_xor) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srl) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sra) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_or) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_and) 
                                                                                | ((IData)(__VdfgRegularize_h6e95ff9d_0_8) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_fence) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_getq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_setq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_retirq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_maskirq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_waitirq) 
                                                                                | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_timer)))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0ULL;
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lui) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000006c7569ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_auipc) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000006175697063ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_jal) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000006a616cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_jalr) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x000000006a616c72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_beq) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000626571ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bne) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000626e65ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_blt) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000626c74ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bge) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000626765ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bltu) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000626c7475ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bgeu) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000062676575ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lb) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000006c62ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lh) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000006c68ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lw) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000006c77ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lbu) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000006c6275ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_lhu) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000006c6875ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sb) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000007362ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sh) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000007368ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sw) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000007377ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_addi) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000061646469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slti) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000736c7469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sltiu) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x000000736c746975ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_xori) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000786f7269ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_ori) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000006f7269ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_andi) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000616e6469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slli) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000736c6c69ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srli) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000073726c69ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srai) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000073726169ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_add) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000616464ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sub) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_add_sub 
            = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
               - vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2);
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000737562ULL;
    } else {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_add_sub 
            = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
               + vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2);
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sll) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000736c6cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_slt) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000736c74ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sltu) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000000736c7475ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_xor) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000786f72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_srl) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x000000000073726cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_sra) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000737261ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_or) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000006f72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_and) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000000616e64ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdcycle) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0072646379636c65ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdcycleh) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdinstr) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x007264696e737472ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_rdinstrh) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_fence) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000066656e6365ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_getq) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000067657471ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_setq) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000000073657471ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_retirq) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0000726574697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_maskirq) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x006d61736b697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_waitirq) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x0077616974697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_timer) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr = 0x00000074696d6572ULL;
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0 = 0U;
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_beq) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__alu_eq;
    } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bne) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__alu_eq)));
    } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bge) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__alu_lts)));
    } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__instr_bgeu) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__alu_ltu)));
    } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__is_slti_blt_slt) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__alu_lts;
    } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__is_sltiu_bltu_sltu) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__alu_ltu;
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out = 0U;
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__alu_add_sub;
    } else if (vlSelfRef.multi_core_top__DOT__core1__DOT__is_compare) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out_0;
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_xori) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_xor))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
               ^ vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_ori) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_or))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
               | vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_andi) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__instr_and))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
               & vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op2);
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_ascii_instr 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__q_ascii_instr;
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_next) {
        if (vlSelfRef.multi_core_top__DOT__core1__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_opcode 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__cached_insn_opcode;
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cached_insn_rs1));
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__cached_insn_rd));
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rs2 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__cached_insn_rs2;
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_imm 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__cached_insn_imm;
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_ascii_instr 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.multi_core_top__DOT__core1__DOT__next_insn_opcode))
                    ? vlSelfRef.multi_core_top__DOT__core1__DOT__next_insn_opcode
                    : (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core1__DOT__next_insn_opcode));
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs1));
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rd));
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_rs2 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs2;
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_insn_imm 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_imm;
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_ascii_instr 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__new_ascii_instr;
        }
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rinst 
        = __Vdly__multi_core_top__DOT__core1__DOT__mem_do_rinst;
    __VdfgRegularize_h6e95ff9d_0_7 = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_prefetch) 
                                      | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rinst));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rinst) 
                                                | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rdata));
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_busy 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_7) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_wdata)));
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_addr 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_7)
             ? (vlSelfRef.multi_core_top__DOT__core1__DOT__next_pc 
                >> 2U) : (vlSelfRef.multi_core_top__DOT__core1__DOT__reg_op1 
                          >> 2U)) << 2U);
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_read 
        = (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_prefetch) 
            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_13));
}

void Vmulti_core_top___024root___nba_sequent__TOP__3(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___nba_sequent__TOP__3\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_10;
    __VdfgRegularize_h6e95ff9d_0_10 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_11;
    __VdfgRegularize_h6e95ff9d_0_11 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_12;
    __VdfgRegularize_h6e95ff9d_0_12 = 0;
    CData/*1:0*/ __Vdly__multi_core_top__DOT__core0__DOT__mem_state;
    __Vdly__multi_core_top__DOT__core0__DOT__mem_state = 0;
    CData/*4:0*/ __Vdly__multi_core_top__DOT__core0__DOT__reg_sh;
    __Vdly__multi_core_top__DOT__core0__DOT__reg_sh = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core0__DOT__reg_out;
    __Vdly__multi_core_top__DOT__core0__DOT__reg_out = 0;
    QData/*63:0*/ __Vdly__multi_core_top__DOT__core0__DOT__count_cycle;
    __Vdly__multi_core_top__DOT__core0__DOT__count_cycle = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core0__DOT__timer;
    __Vdly__multi_core_top__DOT__core0__DOT__timer = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core0__DOT__decoder_trigger;
    __Vdly__multi_core_top__DOT__core0__DOT__decoder_trigger = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core0__DOT__decoder_pseudo_trigger;
    __Vdly__multi_core_top__DOT__core0__DOT__decoder_pseudo_trigger = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core0__DOT__do_waitirq;
    __Vdly__multi_core_top__DOT__core0__DOT__do_waitirq = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst;
    __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst = 0;
    CData/*1:0*/ __Vdly__multi_core_top__DOT__core0__DOT__mem_wordsize;
    __Vdly__multi_core_top__DOT__core0__DOT__mem_wordsize = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lu;
    __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lu = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lh;
    __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lh = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lb;
    __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lb = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core0__DOT__irq_active;
    __Vdly__multi_core_top__DOT__core0__DOT__irq_active = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core0__DOT__reg_pc;
    __Vdly__multi_core_top__DOT__core0__DOT__reg_pc = 0;
    CData/*5:0*/ __Vdly__multi_core_top__DOT__core0__DOT__latched_rd;
    __Vdly__multi_core_top__DOT__core0__DOT__latched_rd = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core0__DOT__latched_compr;
    __Vdly__multi_core_top__DOT__core0__DOT__latched_compr = 0;
    CData/*1:0*/ __Vdly__multi_core_top__DOT__core0__DOT__irq_state;
    __Vdly__multi_core_top__DOT__core0__DOT__irq_state = 0;
    QData/*63:0*/ __Vdly__multi_core_top__DOT__core0__DOT__count_instr;
    __Vdly__multi_core_top__DOT__core0__DOT__count_instr = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core0__DOT__mem_do_prefetch;
    __Vdly__multi_core_top__DOT__core0__DOT__mem_do_prefetch = 0;
    CData/*7:0*/ __Vdly__multi_core_top__DOT__core0__DOT__cpu_state;
    __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core0__DOT__reg_op1;
    __Vdly__multi_core_top__DOT__core0__DOT__reg_op1 = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core0__DOT__pcpi_valid;
    __Vdly__multi_core_top__DOT__core0__DOT__pcpi_valid = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core0__DOT__irq_mask;
    __Vdly__multi_core_top__DOT__core0__DOT__irq_mask = 0;
    CData/*3:0*/ __Vdly__multi_core_top__DOT__core0__DOT__pcpi_timeout_counter;
    __Vdly__multi_core_top__DOT__core0__DOT__pcpi_timeout_counter = 0;
    IData/*31:0*/ __VdlyVal__multi_core_top__DOT__core0__DOT__cpuregs__v0;
    __VdlyVal__multi_core_top__DOT__core0__DOT__cpuregs__v0 = 0;
    CData/*5:0*/ __VdlyDim0__multi_core_top__DOT__core0__DOT__cpuregs__v0;
    __VdlyDim0__multi_core_top__DOT__core0__DOT__cpuregs__v0 = 0;
    CData/*0:0*/ __VdlySet__multi_core_top__DOT__core0__DOT__cpuregs__v0;
    __VdlySet__multi_core_top__DOT__core0__DOT__cpuregs__v0 = 0;
    // Body
    __Vdly__multi_core_top__DOT__core0__DOT__pcpi_timeout_counter 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_timeout_counter;
    __VdlySet__multi_core_top__DOT__core0__DOT__cpuregs__v0 = 0U;
    __Vdly__multi_core_top__DOT__core0__DOT__reg_sh 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__reg_sh;
    __Vdly__multi_core_top__DOT__core0__DOT__count_cycle 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__count_cycle;
    __Vdly__multi_core_top__DOT__core0__DOT__timer 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__timer;
    __Vdly__multi_core_top__DOT__core0__DOT__decoder_pseudo_trigger 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_pseudo_trigger;
    __Vdly__multi_core_top__DOT__core0__DOT__do_waitirq 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__do_waitirq;
    __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lu 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__latched_is_lu;
    __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lh 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__latched_is_lh;
    __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lb 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__latched_is_lb;
    __Vdly__multi_core_top__DOT__core0__DOT__latched_rd 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__latched_rd;
    __Vdly__multi_core_top__DOT__core0__DOT__count_instr 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__count_instr;
    __Vdly__multi_core_top__DOT__core0__DOT__pcpi_valid 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_valid;
    __Vdly__multi_core_top__DOT__core0__DOT__decoder_trigger 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_trigger;
    __Vdly__multi_core_top__DOT__core0__DOT__irq_active 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__irq_active;
    __Vdly__multi_core_top__DOT__core0__DOT__mem_wordsize 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wordsize;
    __Vdly__multi_core_top__DOT__core0__DOT__reg_pc 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__reg_pc;
    __Vdly__multi_core_top__DOT__core0__DOT__latched_compr 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__latched_compr;
    __Vdly__multi_core_top__DOT__core0__DOT__mem_do_prefetch 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_prefetch;
    __Vdly__multi_core_top__DOT__core0__DOT__irq_mask 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__irq_mask;
    __Vdly__multi_core_top__DOT__core0__DOT__reg_out 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__reg_out;
    __Vdly__multi_core_top__DOT__core0__DOT__irq_state 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__irq_state;
    __Vdly__multi_core_top__DOT__core0__DOT__cpu_state 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state;
    __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rinst;
    __Vdly__multi_core_top__DOT__core0__DOT__reg_op1 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1;
    __Vdly__multi_core_top__DOT__core0__DOT__mem_state 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_state;
    if ((((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn) 
          & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_write)) 
         & (0U != (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_rd)))) {
        if ((0x23U >= (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_rd))) {
            __VdlyVal__multi_core_top__DOT__core0__DOT__cpuregs__v0 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_wrdata;
            __VdlyDim0__multi_core_top__DOT__core0__DOT__cpuregs__v0 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__latched_rd;
            __VdlySet__multi_core_top__DOT__core0__DOT__cpuregs__v0 = 1U;
        }
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__alu_wait_2 = 0U;
    vlSelfRef.multi_core_top__DOT__core0__DOT__trace_data = 0ULL;
    vlSelfRef.multi_core_top__DOT__core0__DOT__alu_wait = 0U;
    vlSelfRef.multi_core_top__DOT__core0__DOT__trace_valid = 0U;
    vlSelfRef.multi_core_top__DOT__core0__DOT__q_insn_rd 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rd;
    vlSelfRef.multi_core_top__DOT__core0__DOT__q_insn_rs2 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rs2;
    vlSelfRef.multi_core_top__DOT__core0__DOT__q_insn_rs1 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rs1;
    vlSelfRef.multi_core_top__DOT__core0__DOT__q_insn_opcode 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_opcode;
    vlSelfRef.multi_core_top__DOT__core0__DOT__q_insn_imm 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_imm;
    vlSelfRef.multi_core_top__DOT__core0__DOT__q_ascii_instr 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_ascii_instr;
    vlSelfRef.multi_core_top__DOT__core0__DOT__clear_prefetched_high_word_q 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__clear_prefetched_high_word;
    vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0_q 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0;
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__launch_next_insn) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_addr 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__next_pc;
        vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs1val = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs2val = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs1val_valid = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs2val_valid = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_next = 1U;
    } else {
        vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_next = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_pseudo_trigger_q 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_pseudo_trigger;
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_trigger_q) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__cached_ascii_instr 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr;
        vlSelfRef.multi_core_top__DOT__core0__DOT__cached_insn_opcode 
            = ((3U == (3U & vlSelfRef.multi_core_top__DOT__core0__DOT__next_insn_opcode))
                ? vlSelfRef.multi_core_top__DOT__core0__DOT__next_insn_opcode
                : (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core0__DOT__next_insn_opcode));
        vlSelfRef.multi_core_top__DOT__core0__DOT__cached_insn_rd 
            = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rd));
        vlSelfRef.multi_core_top__DOT__core0__DOT__cached_insn_rs1 
            = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs1));
        vlSelfRef.multi_core_top__DOT__core0__DOT__cached_insn_rs2 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs2;
        vlSelfRef.multi_core_top__DOT__core0__DOT__cached_insn_imm 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm;
    }
    if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn)) 
               | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__trap)))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_valid_insn = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__prefetched_high_word = 0U;
    } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__launch_next_insn) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_valid_insn = 1U;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__clear_prefetched_high_word) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__prefetched_high_word = 0U;
    }
    if ((1U & (~ ((~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn)) 
                  | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__trap))))) {
        if (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_write) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wdata 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_wdata;
        }
        if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_read) 
             | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_write))) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__mem_addr 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_addr;
        }
    }
    if (__VdlySet__multi_core_top__DOT__core0__DOT__cpuregs__v0) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs[__VdlyDim0__multi_core_top__DOT__core0__DOT__cpuregs__v0] 
            = __VdlyVal__multi_core_top__DOT__core0__DOT__cpuregs__v0;
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wdata;
    vlSelfRef.multi_core_top__DOT__core_mem_wdata[0U] 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wdata;
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_mem_addr 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_addr;
    vlSelfRef.multi_core_top__DOT__core_mem_addr[0U] 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_addr;
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__resetn) {
        if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__last_mem_valid)))) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_firstword_reg = 0U;
        }
    } else {
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_firstword_reg = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__last_mem_valid 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn) 
           && ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_valid) 
               & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_ready))));
    if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn)) 
               | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__trap)))) {
        if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn)))) {
            __Vdly__multi_core_top__DOT__core0__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn)) 
                   | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_ready)))) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__mem_valid = 0U;
        }
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_secondword = 0U;
    } else {
        if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_read) 
             | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_write))) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wstrb 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_wstrb) 
                   & (- (IData)((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_state))) {
            if ((((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_prefetch) 
                  | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rinst)) 
                 | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rdata))) {
                vlSelfRef.multi_core_top__DOT__core0__DOT__mem_valid = 1U;
                vlSelfRef.multi_core_top__DOT__core0__DOT__mem_instr 
                    = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_prefetch) 
                       | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rinst));
                vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wstrb = 0U;
                __Vdly__multi_core_top__DOT__core0__DOT__mem_state = 1U;
            }
            if (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_wdata) {
                vlSelfRef.multi_core_top__DOT__core0__DOT__mem_valid = 1U;
                vlSelfRef.multi_core_top__DOT__core0__DOT__mem_instr = 0U;
                __Vdly__multi_core_top__DOT__core0__DOT__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_state))) {
            if (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_xfer) {
                vlSelfRef.multi_core_top__DOT__core0__DOT__mem_valid = 0U;
                vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_secondword = 0U;
                __Vdly__multi_core_top__DOT__core0__DOT__mem_state 
                    = (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rinst) 
                        | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rdata))
                        ? 0U : 3U);
            }
        } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_state))) {
            if (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_xfer) {
                vlSelfRef.multi_core_top__DOT__core0__DOT__mem_valid = 0U;
                __Vdly__multi_core_top__DOT__core0__DOT__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_state))) {
            if (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rinst) {
                __Vdly__multi_core_top__DOT__core0__DOT__mem_state = 0U;
            }
        }
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_opcode 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__q_insn_opcode;
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rs1 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__q_insn_rs1;
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_state 
        = __Vdly__multi_core_top__DOT__core0__DOT__mem_state;
    __VdfgRegularize_h6e95ff9d_0_12 = ((~ (0U != (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_state))) 
                                       & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn));
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wstrb;
    vlSelfRef.multi_core_top__DOT__core_mem_wstrb[0U] 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wstrb;
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_mem_valid 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_valid;
    vlSelfRef.multi_core_top__DOT__core_mem_valid[0U] 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_valid;
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_mem_instr 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_instr;
    vlSelfRef.multi_core_top__DOT__core_mem_instr[0U] 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_instr;
    vlSelfRef.multi_core_top__DOT__core0__DOT__trap = 0U;
    __Vdly__multi_core_top__DOT__core0__DOT__reg_sh = 0U;
    __Vdly__multi_core_top__DOT__core0__DOT__reg_out = 0U;
    vlSelfRef.multi_core_top__DOT__core0__DOT__set_mem_do_rinst = 0U;
    vlSelfRef.multi_core_top__DOT__core0__DOT__set_mem_do_rdata = 0U;
    vlSelfRef.multi_core_top__DOT__core0__DOT__set_mem_do_wdata = 0U;
    vlSelfRef.multi_core_top__DOT__core0__DOT__next_irq_pending 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__irq_pending;
    __Vdly__multi_core_top__DOT__core0__DOT__decoder_trigger 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rinst) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_done));
    vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_trigger_q 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_trigger;
    __Vdly__multi_core_top__DOT__core0__DOT__decoder_pseudo_trigger = 0U;
    __Vdly__multi_core_top__DOT__core0__DOT__do_waitirq = 0U;
    __Vdly__multi_core_top__DOT__core0__DOT__count_cycle 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn)
            ? (1ULL + vlSelfRef.multi_core_top__DOT__core0__DOT__count_cycle)
            : 0ULL);
    if ((0U != vlSelfRef.multi_core_top__DOT__core0__DOT__timer)) {
        __Vdly__multi_core_top__DOT__core0__DOT__timer 
            = (vlSelfRef.multi_core_top__DOT__core0__DOT__timer 
               - (IData)(1U));
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__resetn) {
        if (((((((((0x80U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state))) 
                | (8U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state))) 
               | (4U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state))) 
              | (2U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state))) 
             | (1U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state))) {
                vlSelfRef.multi_core_top__DOT__core0__DOT__trap = 1U;
            } else if ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state))) {
                __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst 
                    = (1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_trigger)) 
                             & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__do_waitirq))));
                __Vdly__multi_core_top__DOT__core0__DOT__mem_wordsize = 0U;
                __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lu = 0U;
                __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lh = 0U;
                __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lb = 0U;
                vlSelfRef.multi_core_top__DOT__core0__DOT__current_pc 
                    = vlSelfRef.multi_core_top__DOT__core0__DOT__reg_next_pc;
                if (vlSelfRef.multi_core_top__DOT__core0__DOT__latched_branch) {
                    vlSelfRef.multi_core_top__DOT__core0__DOT__current_pc 
                        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store)
                            ? (0xfffffffeU & ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_stalu)
                                               ? vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_q
                                               : vlSelfRef.multi_core_top__DOT__core0__DOT__reg_out))
                            : vlSelfRef.multi_core_top__DOT__core0__DOT__reg_next_pc);
                } else if ((1U & (~ ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store) 
                                     & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_branch)))))) {
                    if ((1U & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_state))) {
                        vlSelfRef.multi_core_top__DOT__core0__DOT__current_pc = 0x00000010U;
                        __Vdly__multi_core_top__DOT__core0__DOT__irq_active = 1U;
                        __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst = 1U;
                    } else if ((2U & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_state))) {
                        vlSelfRef.multi_core_top__DOT__core0__DOT__next_irq_pending 
                            = (vlSelfRef.multi_core_top__DOT__core0__DOT__next_irq_pending 
                               & vlSelfRef.multi_core_top__DOT__core0__DOT__irq_mask);
                        vlSelfRef.multi_core_top__DOT__core0__DOT__eoi 
                            = (vlSelfRef.multi_core_top__DOT__core0__DOT__irq_pending 
                               & (~ vlSelfRef.multi_core_top__DOT__core0__DOT__irq_mask));
                    }
                }
                __Vdly__multi_core_top__DOT__core0__DOT__reg_pc 
                    = vlSelfRef.multi_core_top__DOT__core0__DOT__current_pc;
                vlSelfRef.multi_core_top__DOT__core0__DOT__reg_next_pc 
                    = vlSelfRef.multi_core_top__DOT__core0__DOT__current_pc;
                vlSelfRef.multi_core_top__DOT__core0__DOT__latched_stalu = 0U;
                vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store = 0U;
                vlSelfRef.multi_core_top__DOT__core0__DOT__latched_branch = 0U;
                __Vdly__multi_core_top__DOT__core0__DOT__latched_rd 
                    = vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rd;
                __Vdly__multi_core_top__DOT__core0__DOT__latched_compr 
                    = vlSelfRef.multi_core_top__DOT__core0__DOT__compressed_instr;
                if ((((((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_trigger) 
                        & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_active))) 
                       & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_delay))) 
                      & (0U != (vlSelfRef.multi_core_top__DOT__core0__DOT__irq_pending 
                                & (~ vlSelfRef.multi_core_top__DOT__core0__DOT__irq_mask)))) 
                     | (0U != (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_state)))) {
                    __Vdly__multi_core_top__DOT__core0__DOT__irq_state 
                        = ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_state))
                            ? 1U : ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_state))
                                     ? 2U : 0U));
                    __Vdly__multi_core_top__DOT__core0__DOT__latched_compr 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__latched_compr;
                    __Vdly__multi_core_top__DOT__core0__DOT__latched_rd 
                        = (0x20U | (1U & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_state)));
                } else if ((((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_trigger) 
                             | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__do_waitirq)) 
                            & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_waitirq))) {
                    if ((0U != vlSelfRef.multi_core_top__DOT__core0__DOT__irq_pending)) {
                        vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store = 1U;
                        __Vdly__multi_core_top__DOT__core0__DOT__reg_out 
                            = vlSelfRef.multi_core_top__DOT__core0__DOT__irq_pending;
                        vlSelfRef.multi_core_top__DOT__core0__DOT__reg_next_pc 
                            = (vlSelfRef.multi_core_top__DOT__core0__DOT__current_pc 
                               + ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__compressed_instr)
                                   ? 2U : 4U));
                        __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst = 1U;
                    } else {
                        __Vdly__multi_core_top__DOT__core0__DOT__do_waitirq = 1U;
                    }
                } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_trigger) {
                    __Vdly__multi_core_top__DOT__core0__DOT__count_instr 
                        = (1ULL + vlSelfRef.multi_core_top__DOT__core0__DOT__count_instr);
                    vlSelfRef.multi_core_top__DOT__core0__DOT__irq_delay 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__irq_active;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__reg_next_pc 
                        = (vlSelfRef.multi_core_top__DOT__core0__DOT__current_pc 
                           + ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__compressed_instr)
                               ? 2U : 4U));
                    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_jal) {
                        __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst = 1U;
                        vlSelfRef.multi_core_top__DOT__core0__DOT__reg_next_pc 
                            = (vlSelfRef.multi_core_top__DOT__core0__DOT__current_pc 
                               + vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm_j);
                        vlSelfRef.multi_core_top__DOT__core0__DOT__latched_branch = 1U;
                    } else {
                        __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst = 0U;
                        __Vdly__multi_core_top__DOT__core0__DOT__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_jalr)) 
                                     & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_retirq))));
                        __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state))) {
                __Vdly__multi_core_top__DOT__core0__DOT__reg_op1 = 0U;
                vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2 = 0U;
                if (((((((((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_trap) 
                           | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                          | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_lui_auipc_jal)) 
                         | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_getq)) 
                        | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_setq)) 
                       | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_retirq)) 
                      | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_maskirq)) 
                     | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_timer))) {
                    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_trap) {
                        __Vdly__multi_core_top__DOT__core0__DOT__reg_op1 
                            = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1;
                        vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs1val 
                            = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1;
                        vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs1val_valid = 1U;
                        __Vdly__multi_core_top__DOT__core0__DOT__pcpi_valid = 1U;
                        __Vdly__multi_core_top__DOT__core0__DOT__reg_sh 
                            = (0x0000001fU & vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs2);
                        vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2 
                            = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs2;
                        vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs2val 
                            = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs2;
                        vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs2val_valid = 1U;
                        if (vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_int_ready) {
                            __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst = 1U;
                            __Vdly__multi_core_top__DOT__core0__DOT__pcpi_valid = 0U;
                            __Vdly__multi_core_top__DOT__core0__DOT__reg_out 
                                = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_int_rd;
                            vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store 
                                = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_int_wr;
                            __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 0x40U;
                        } else if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_timeout) 
                                    | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_ecall_ebreak))) {
                            __Vdly__multi_core_top__DOT__core0__DOT__pcpi_valid = 0U;
                            if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core0__DOT__irq_mask 
                                           >> 1U)) 
                                       & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_active))))) {
                                vlSelfRef.multi_core_top__DOT__core0__DOT__next_irq_pending 
                                    = (2U | vlSelfRef.multi_core_top__DOT__core0__DOT__next_irq_pending);
                                __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 0x40U;
                            } else {
                                __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 0x80U;
                            }
                        }
                    } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                        if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdcycle) {
                            __Vdly__multi_core_top__DOT__core0__DOT__reg_out 
                                = (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__count_cycle);
                        } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdcycleh) {
                            __Vdly__multi_core_top__DOT__core0__DOT__reg_out 
                                = (IData)((vlSelfRef.multi_core_top__DOT__core0__DOT__count_cycle 
                                           >> 0x20U));
                        } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdinstr) {
                            __Vdly__multi_core_top__DOT__core0__DOT__reg_out 
                                = (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__count_instr);
                        } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdinstrh) {
                            __Vdly__multi_core_top__DOT__core0__DOT__reg_out 
                                = (IData)((vlSelfRef.multi_core_top__DOT__core0__DOT__count_instr 
                                           >> 0x20U));
                        }
                        vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store = 1U;
                        __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 0x40U;
                    } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__is_lui_auipc_jal) {
                        __Vdly__multi_core_top__DOT__core0__DOT__reg_op1 
                            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lui)
                                ? 0U : vlSelfRef.multi_core_top__DOT__core0__DOT__reg_pc);
                        vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2 
                            = vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm;
                        __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst 
                            = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_prefetch;
                        __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 8U;
                    } else {
                        if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_getq) {
                            __Vdly__multi_core_top__DOT__core0__DOT__reg_out 
                                = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs1val 
                                = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs1val_valid = 1U;
                            vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store = 1U;
                        } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_setq) {
                            __Vdly__multi_core_top__DOT__core0__DOT__latched_rd 
                                = (0x20U | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_rd));
                            __Vdly__multi_core_top__DOT__core0__DOT__reg_out 
                                = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs1val 
                                = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs1val_valid = 1U;
                            vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store = 1U;
                        } else {
                            if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_retirq) {
                                vlSelfRef.multi_core_top__DOT__core0__DOT__eoi = 0U;
                                __Vdly__multi_core_top__DOT__core0__DOT__irq_active = 0U;
                                vlSelfRef.multi_core_top__DOT__core0__DOT__latched_branch = 1U;
                                vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store = 1U;
                                __Vdly__multi_core_top__DOT__core0__DOT__reg_out 
                                    = (0xfffffffeU 
                                       & vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1);
                            } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_maskirq) {
                                vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store = 1U;
                                __Vdly__multi_core_top__DOT__core0__DOT__reg_out 
                                    = vlSelfRef.multi_core_top__DOT__core0__DOT__irq_mask;
                                __Vdly__multi_core_top__DOT__core0__DOT__irq_mask 
                                    = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1;
                            } else {
                                vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store = 1U;
                                __Vdly__multi_core_top__DOT__core0__DOT__reg_out 
                                    = vlSelfRef.multi_core_top__DOT__core0__DOT__timer;
                                __Vdly__multi_core_top__DOT__core0__DOT__timer 
                                    = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1;
                            }
                            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs1val 
                                = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1;
                            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs1val_valid = 1U;
                        }
                        __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 0x40U;
                    }
                } else if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_lb_lh_lw_lbu_lhu) 
                            & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_trap)))) {
                    __Vdly__multi_core_top__DOT__core0__DOT__reg_op1 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs1val 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 1U;
                    __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__is_slli_srli_srai) {
                    __Vdly__multi_core_top__DOT__core0__DOT__reg_op1 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs1val 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__multi_core_top__DOT__core0__DOT__reg_sh 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs2;
                    __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 4U;
                } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) {
                    __Vdly__multi_core_top__DOT__core0__DOT__reg_op1 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs1val 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs1val_valid = 1U;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm;
                    __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_prefetch;
                    __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 8U;
                } else {
                    __Vdly__multi_core_top__DOT__core0__DOT__reg_op1 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs1val 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs1val_valid = 1U;
                    __Vdly__multi_core_top__DOT__core0__DOT__reg_sh 
                        = (0x0000001fU & vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs2);
                    vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs2;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs2val 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs2;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs2val_valid = 1U;
                    if (vlSelfRef.multi_core_top__DOT__core0__DOT__is_sb_sh_sw) {
                        __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 2U;
                        __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst = 1U;
                    } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__is_sll_srl_sra) {
                        __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 4U;
                    } else {
                        __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst 
                            = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_prefetch;
                        __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 8U;
                    }
                }
            } else if ((0x10U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state))) {
                __Vdly__multi_core_top__DOT__core0__DOT__reg_sh 
                    = (0x0000001fU & vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs2);
                vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2 
                    = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs2;
                vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs2val 
                    = vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs2;
                vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_rs2val_valid = 1U;
                if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_trap) {
                    __Vdly__multi_core_top__DOT__core0__DOT__pcpi_valid = 1U;
                    if (vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_int_ready) {
                        __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst = 1U;
                        __Vdly__multi_core_top__DOT__core0__DOT__pcpi_valid = 0U;
                        __Vdly__multi_core_top__DOT__core0__DOT__reg_out 
                            = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_int_rd;
                        vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store 
                            = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_int_wr;
                        __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 0x40U;
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_timeout) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_ecall_ebreak))) {
                        __Vdly__multi_core_top__DOT__core0__DOT__pcpi_valid = 0U;
                        if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core0__DOT__irq_mask 
                                       >> 1U)) & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_active))))) {
                            vlSelfRef.multi_core_top__DOT__core0__DOT__next_irq_pending 
                                = (2U | vlSelfRef.multi_core_top__DOT__core0__DOT__next_irq_pending);
                            __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 0x40U;
                        } else {
                            __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 0x80U;
                        }
                    }
                } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__is_sb_sh_sw) {
                    __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 2U;
                    __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst = 1U;
                } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__is_sll_srl_sra) {
                    __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 4U;
                } else {
                    __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_prefetch;
                    __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state))) {
                __Vdly__multi_core_top__DOT__core0__DOT__reg_out 
                    = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_pc 
                       + vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm);
                if (vlSelfRef.multi_core_top__DOT__core0__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                    __Vdly__multi_core_top__DOT__core0__DOT__latched_rd = 0U;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__latched_branch 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0;
                    if (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_done) {
                        __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 0x40U;
                    }
                    if (vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0) {
                        vlSelfRef.multi_core_top__DOT__core0__DOT__set_mem_do_rinst = 1U;
                        __Vdly__multi_core_top__DOT__core0__DOT__decoder_trigger = 0U;
                    }
                } else {
                    vlSelfRef.multi_core_top__DOT__core0__DOT__latched_branch 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__instr_jalr;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store = 1U;
                    vlSelfRef.multi_core_top__DOT__core0__DOT__latched_stalu = 1U;
                    __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state))) {
                vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store = 1U;
                if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__reg_sh))) {
                    __Vdly__multi_core_top__DOT__core0__DOT__reg_out 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1;
                    __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst 
                        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_prefetch;
                    __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__reg_sh))) {
                    if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slli) 
                         | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sll))) {
                        __Vdly__multi_core_top__DOT__core0__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
                               << 4U);
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srli) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srl))) {
                        __Vdly__multi_core_top__DOT__core0__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
                               >> 4U);
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srai) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sra))) {
                        __Vdly__multi_core_top__DOT__core0__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1, 4U);
                    }
                    __Vdly__multi_core_top__DOT__core0__DOT__reg_sh 
                        = (0x0000001fU & ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__reg_sh) 
                                          - (IData)(4U)));
                } else {
                    if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slli) 
                         | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sll))) {
                        __Vdly__multi_core_top__DOT__core0__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
                               << 1U);
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srli) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srl))) {
                        __Vdly__multi_core_top__DOT__core0__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
                               >> 1U);
                    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srai) 
                                | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sra))) {
                        __Vdly__multi_core_top__DOT__core0__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1, 1U);
                    }
                    __Vdly__multi_core_top__DOT__core0__DOT__reg_sh 
                        = (0x0000001fU & ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__reg_sh) 
                                          - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state))) {
                if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_wdata)))) {
                        __Vdly__multi_core_top__DOT__core0__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
                               + vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm);
                        vlSelfRef.multi_core_top__DOT__core0__DOT__set_mem_do_wdata = 1U;
                        if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sb) {
                            __Vdly__multi_core_top__DOT__core0__DOT__mem_wordsize = 2U;
                        } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sh) {
                            __Vdly__multi_core_top__DOT__core0__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sw) {
                            __Vdly__multi_core_top__DOT__core0__DOT__mem_wordsize = 0U;
                        }
                    }
                    if (((~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_done))) {
                        __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 0x40U;
                        __Vdly__multi_core_top__DOT__core0__DOT__decoder_trigger = 1U;
                        __Vdly__multi_core_top__DOT__core0__DOT__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_done)))) {
                    if (((~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_done))) {
                        if (vlSelfRef.multi_core_top__DOT__core0__DOT__latched_is_lu) {
                            __Vdly__multi_core_top__DOT__core0__DOT__reg_out 
                                = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_word;
                        } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__latched_is_lh) {
                            __Vdly__multi_core_top__DOT__core0__DOT__reg_out 
                                = VL_EXTENDS_II(32,16, 
                                                (0x0000ffffU 
                                                 & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_word));
                        } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__latched_is_lb) {
                            __Vdly__multi_core_top__DOT__core0__DOT__reg_out 
                                = VL_EXTENDS_II(32,8, 
                                                (0x000000ffU 
                                                 & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_word));
                        }
                        __Vdly__multi_core_top__DOT__core0__DOT__decoder_trigger = 1U;
                        __Vdly__multi_core_top__DOT__core0__DOT__decoder_pseudo_trigger = 1U;
                        __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 0x40U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rdata)))) {
                        __Vdly__multi_core_top__DOT__core0__DOT__reg_op1 
                            = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
                               + vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm);
                        vlSelfRef.multi_core_top__DOT__core0__DOT__set_mem_do_rdata = 1U;
                        if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lb) 
                             | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lbu))) {
                            __Vdly__multi_core_top__DOT__core0__DOT__mem_wordsize = 2U;
                        } else if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lh) 
                                    | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lhu))) {
                            __Vdly__multi_core_top__DOT__core0__DOT__mem_wordsize = 1U;
                        } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lw) {
                            __Vdly__multi_core_top__DOT__core0__DOT__mem_wordsize = 0U;
                        }
                        __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lu 
                            = vlSelfRef.multi_core_top__DOT__core0__DOT__is_lbu_lhu_lw;
                        __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lh 
                            = vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lh;
                        __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lb 
                            = vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lb;
                    }
                }
            }
        }
    } else {
        __Vdly__multi_core_top__DOT__core0__DOT__count_instr = 0ULL;
        vlSelfRef.multi_core_top__DOT__core0__DOT__next_irq_pending = 0U;
        __Vdly__multi_core_top__DOT__core0__DOT__reg_pc = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__reg_next_pc = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__latched_stalu = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__latched_branch = 0U;
        __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lu = 0U;
        __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lh = 0U;
        __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lb = 0U;
        __Vdly__multi_core_top__DOT__core0__DOT__pcpi_valid = 0U;
        __Vdly__multi_core_top__DOT__core0__DOT__irq_active = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__irq_delay = 0U;
        __Vdly__multi_core_top__DOT__core0__DOT__irq_mask = 0xffffffffU;
        __Vdly__multi_core_top__DOT__core0__DOT__irq_state = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__eoi = 0U;
        __Vdly__multi_core_top__DOT__core0__DOT__timer = 0U;
        __Vdly__multi_core_top__DOT__core0__DOT__latched_rd = 2U;
        __Vdly__multi_core_top__DOT__core0__DOT__reg_out = 0x00000fffU;
        __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 0x40U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store = 1U;
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__next_irq_pending 
        = (vlSelfRef.multi_core_top__DOT__core0__DOT__next_irq_pending 
           | vlSelfRef.multi_core_top__DOT__core0__DOT__irq);
    if ((0U != vlSelfRef.multi_core_top__DOT__core0__DOT__timer)) {
        if ((0U == (vlSelfRef.multi_core_top__DOT__core0__DOT__timer 
                    - (IData)(1U)))) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__next_irq_pending 
                = (1U | vlSelfRef.multi_core_top__DOT__core0__DOT__next_irq_pending);
        }
    }
    if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn) 
         & ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rdata) 
            | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wordsize)) 
             & (0U != (3U & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1)))) {
            if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core0__DOT__irq_mask 
                           >> 2U)) & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_active))))) {
                vlSelfRef.multi_core_top__DOT__core0__DOT__next_irq_pending 
                    = (4U | vlSelfRef.multi_core_top__DOT__core0__DOT__next_irq_pending);
            } else {
                __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 0x80U;
            }
        }
        if (((1U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wordsize)) 
             & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1)) {
            if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core0__DOT__irq_mask 
                           >> 2U)) & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_active))))) {
                vlSelfRef.multi_core_top__DOT__core0__DOT__next_irq_pending 
                    = (4U | vlSelfRef.multi_core_top__DOT__core0__DOT__next_irq_pending);
            } else {
                __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 0x80U;
            }
        }
    }
    if ((((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn) 
          & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rinst)) 
         & (0U != (3U & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_pc)))) {
        if ((1U & ((~ (vlSelfRef.multi_core_top__DOT__core0__DOT__irq_mask 
                       >> 2U)) & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_active))))) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__next_irq_pending 
                = (4U | vlSelfRef.multi_core_top__DOT__core0__DOT__next_irq_pending);
        } else {
            __Vdly__multi_core_top__DOT__core0__DOT__cpu_state = 0x80U;
        }
    }
    if ((1U & ((~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn)) 
               | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_done)))) {
        __Vdly__multi_core_top__DOT__core0__DOT__mem_do_prefetch = 0U;
        __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rdata = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_wdata = 0U;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__set_mem_do_rinst) {
        __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst = 1U;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__set_mem_do_rdata) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rdata = 1U;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__set_mem_do_wdata) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_wdata = 1U;
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__irq_pending 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__next_irq_pending;
    vlSelfRef.multi_core_top__DOT__core0__DOT__current_pc = 0U;
    vlSelfRef.multi_core_top__DOT__core0__DOT__reg_sh 
        = __Vdly__multi_core_top__DOT__core0__DOT__reg_sh;
    vlSelfRef.multi_core_top__DOT__core0__DOT__count_cycle 
        = __Vdly__multi_core_top__DOT__core0__DOT__count_cycle;
    vlSelfRef.multi_core_top__DOT__core0__DOT__timer 
        = __Vdly__multi_core_top__DOT__core0__DOT__timer;
    vlSelfRef.multi_core_top__DOT__core0__DOT__do_waitirq 
        = __Vdly__multi_core_top__DOT__core0__DOT__do_waitirq;
    vlSelfRef.multi_core_top__DOT__core0__DOT__latched_is_lu 
        = __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lu;
    vlSelfRef.multi_core_top__DOT__core0__DOT__latched_is_lh 
        = __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lh;
    vlSelfRef.multi_core_top__DOT__core0__DOT__latched_is_lb 
        = __Vdly__multi_core_top__DOT__core0__DOT__latched_is_lb;
    vlSelfRef.multi_core_top__DOT__core0__DOT__count_instr 
        = __Vdly__multi_core_top__DOT__core0__DOT__count_instr;
    if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_done))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs1 
            = (0x0000001fU & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched 
                              >> 0x0fU));
        if ((IData)((0x0000000bU == (0xfe00007fU & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched)))) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs1 
                = (0x00000020U | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs1));
        }
        if ((IData)((0x0400000bU == (0xfe00007fU & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched)))) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs1 = 0x20U;
        }
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs1 
        = (vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs
           [vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs1] 
           & (- (IData)(((0U != (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs1)) 
                         & (0x23U >= (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs1))))));
    vlSelfRef.multi_core_top__DOT__core0__DOT__latched_rd 
        = __Vdly__multi_core_top__DOT__core0__DOT__latched_rd;
    vlSelfRef.multi_core_top__DOT__core0__DOT__irq_active 
        = __Vdly__multi_core_top__DOT__core0__DOT__irq_active;
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wordsize 
        = __Vdly__multi_core_top__DOT__core0__DOT__mem_wordsize;
    vlSelfRef.multi_core_top__DOT__core0__DOT__reg_pc 
        = __Vdly__multi_core_top__DOT__core0__DOT__reg_pc;
    vlSelfRef.multi_core_top__DOT__core0__DOT__latched_compr 
        = __Vdly__multi_core_top__DOT__core0__DOT__latched_compr;
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_prefetch 
        = __Vdly__multi_core_top__DOT__core0__DOT__mem_do_prefetch;
    vlSelfRef.multi_core_top__DOT__core0__DOT__irq_mask 
        = __Vdly__multi_core_top__DOT__core0__DOT__irq_mask;
    vlSelfRef.multi_core_top__DOT__core0__DOT__reg_out 
        = __Vdly__multi_core_top__DOT__core0__DOT__reg_out;
    vlSelfRef.multi_core_top__DOT__core0__DOT__irq_state 
        = __Vdly__multi_core_top__DOT__core0__DOT__irq_state;
    vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state 
        = __Vdly__multi_core_top__DOT__core0__DOT__cpu_state;
    vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
        = __Vdly__multi_core_top__DOT__core0__DOT__reg_op1;
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_write 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_wdata) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_12));
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_ascii_state[0U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state][0U];
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_ascii_state[1U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state][1U];
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_ascii_state[2U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state][2U];
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_ascii_state[3U] 
        = Vmulti_core_top__ConstPool__TABLE_he73c04bc_0
        [vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state][3U];
    vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_write = 0U;
    vlSelfRef.multi_core_top__DOT__core0__DOT__next_pc 
        = (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store) 
            & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_branch))
            ? (0xfffffffeU & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_out)
            : vlSelfRef.multi_core_top__DOT__core0__DOT__reg_next_pc);
    vlSelfRef.multi_core_top__DOT__core0__DOT__clear_prefetched_high_word 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__clear_prefetched_high_word_q;
    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__prefetched_high_word)))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__clear_prefetched_high_word = 0U;
    }
    if ((1U & (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_branch) 
                | (0U != (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_state))) 
               | (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn))))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__clear_prefetched_high_word = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_q 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out;
    if ((((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn) 
          & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_valid)) 
         & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_int_wait)))) {
        if ((0U != (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_timeout_counter))) {
            __Vdly__multi_core_top__DOT__core0__DOT__pcpi_timeout_counter 
                = (0x0000000fU & ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_timeout_counter) 
                                  - (IData)(1U)));
        }
    } else {
        __Vdly__multi_core_top__DOT__core0__DOT__pcpi_timeout_counter = 0x0fU;
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_timeout 
        = (1U & (~ (0U != (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_timeout_counter))));
    if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_insn 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_fence 
            = ((0x0fU == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)) 
               & (~ (0U != (7U & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q 
                                  >> 0x0cU)))));
    }
    if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_wdata 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2;
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_wstrb = 0x0fU;
    } else if ((1U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_wdata 
            = ((vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2));
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_wstrb 
            = ((2U & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1)
                ? 0x0cU : 3U);
    } else if ((2U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_wordsize))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_wdata 
            = ((vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2))));
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_wstrb 
            = (0x0000000fU & ((IData)(1U) << (3U & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1)));
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_rs2 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2;
    vlSelfRef.multi_core_top__DOT__core0__DOT__alu_shl 
        = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
           << (0x0000001fU & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2));
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_rs1 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1;
    vlSelfRef.multi_core_top__DOT__core0__DOT__alu_eq 
        = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
           == vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core0__DOT__alu_lts 
        = VL_LTS_III(32, vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1, vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core0__DOT__alu_ltu 
        = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
           < vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2);
    vlSelfRef.multi_core_top__DOT__core0__DOT__is_lbu_lhu_lw 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lbu) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lhu) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lw)));
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_timeout_counter 
        = __Vdly__multi_core_top__DOT__core0__DOT__pcpi_timeout_counter;
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_valid 
        = __Vdly__multi_core_top__DOT__core0__DOT__pcpi_valid;
    vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state))) {
        if (vlSelfRef.multi_core_top__DOT__core0__DOT__latched_branch) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_pc 
                   + ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_store) 
                    & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_branch)))) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_wrdata 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_stalu)
                    ? vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_q
                    : vlSelfRef.multi_core_top__DOT__core0__DOT__reg_out);
        } else if ((1U & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_state))) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_next_pc 
                   | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__latched_compr));
        } else if ((2U & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_state))) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_write = 1U;
            vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_wrdata 
                = (vlSelfRef.multi_core_top__DOT__core0__DOT__irq_pending 
                   & (~ vlSelfRef.multi_core_top__DOT__core0__DOT__irq_mask));
        }
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rd 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__q_insn_rd;
    if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_done))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__compressed_instr = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rd 
            = (0x0000001fU & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched 
                              >> 7U));
        vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs2 
            = (0x0000001fU & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched 
                              >> 0x14U));
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs_rs2 
        = (vlSelfRef.multi_core_top__DOT__core0__DOT__cpuregs
           [vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs2] 
           & (- (IData)((0U != (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs2)))));
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rs2 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__q_insn_rs2;
    if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)) 
                & (~ (0U != (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q 
                             >> 0x15U)))) & (~ (0U 
                                                != 
                                                (0x00001fffU 
                                                 & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q 
                                                    >> 7U)))));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_getq 
            = (IData)((0x0000000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_setq 
            = (IData)((0x0200000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_maskirq 
            = (IData)((0x0600000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_timer 
            = (IData)((0x0a00000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdcycle 
            = ((IData)((0xc0002073U == (0xfffff07fU 
                                        & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q))) 
               | (IData)((0xc0102073U == (0xfffff07fU 
                                          & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q))));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdcycleh 
            = ((IData)((0xc8002073U == (0xfffff07fU 
                                        & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q))) 
               | (IData)((0xc8102073U == (0xfffff07fU 
                                          & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q))));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdinstr 
            = (IData)((0xc0202073U == (0xfffff07fU 
                                       & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdinstrh 
            = (IData)((0xc8202073U == (0xfffff07fU 
                                       & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
    }
    __VdfgRegularize_h6e95ff9d_0_11 = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdcycle) 
                                       | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdcycleh) 
                                          | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdinstr) 
                                             | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdinstrh))));
    vlSelfRef.multi_core_top__DOT__core0__DOT__is_lui_auipc_jal 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lui) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_auipc) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_jal)));
    vlSelfRef.multi_core_top__DOT__core0__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lui) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_auipc) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_jal) 
                 | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_jalr) 
                    | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_addi) 
                       | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_add) 
                          | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sub)))))));
    vlSelfRef.multi_core_top__DOT__core0__DOT__is_slti_blt_slt 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slti) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_blt) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slt)));
    vlSelfRef.multi_core_top__DOT__core0__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sltiu) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bltu) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sltu)));
    vlSelfRef.multi_core_top__DOT__core0__DOT__is_compare 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slti) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slt) 
                 | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sltiu) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sltu)))));
    if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_trigger) 
         & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_pseudo_trigger)))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_beq 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bne 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00001000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_blt 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00004000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bge 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00005000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bltu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00006000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bgeu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x00007000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lb 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lh 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00001000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lw 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00002000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lbu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00004000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lhu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x00005000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sb 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_sb_sh_sw) 
               & (0U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sh 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_sb_sh_sw) 
               & (0x00001000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sw 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_sb_sh_sw) 
               & (0x00002000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_addi 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_imm) 
               & (0U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slti 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_imm) 
               & (0x00002000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sltiu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_imm) 
               & (0x00003000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_xori 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_imm) 
               & (0x00004000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_ori 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_imm) 
               & (0x00006000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_andi 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_imm) 
               & (0x00007000U == (0x00007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slli 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_imm) 
               & (0x00001000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srli 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_imm) 
               & (0x00005000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srai 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_imm) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__is_slli_srli_srai 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_imm) 
               & ((IData)((0x00001000U == (0xfe007000U 
                                           & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q))) 
                  | ((IData)((0x00005000U == (0xfe007000U 
                                              & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q))))));
        vlSelfRef.multi_core_top__DOT__core0__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_jalr) 
               | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q 
                                   >> 0x0cU))) | ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q 
                                                       >> 0x0cU))) 
                                                  | ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q 
                                                          >> 0x0cU))) 
                                                     | ((4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q 
                                                             >> 0x0cU))) 
                                                        | ((6U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q 
                                                                >> 0x0cU))) 
                                                           | (7U 
                                                              == 
                                                              (7U 
                                                               & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q 
                                                                  >> 0x0cU))))))))));
        vlSelfRef.multi_core_top__DOT__core0__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__is_compare = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_jal)
                ? vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm_j
                : (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lui) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_auipc))
                    ? (0xfffff000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)
                    : (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_jalr) 
                        | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q 
                                                >> 0x14U))
                        : ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            ((((2U 
                                                & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q 
                                                   >> 0x0000001eU)) 
                                               | (1U 
                                                  & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q 
                                                     >> 7U))) 
                                              << 0x0000000bU) 
                                             | ((0x000007e0U 
                                                 & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q 
                                                    >> 0x00000014U)) 
                                                | (0x0000001eU 
                                                   & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q 
                                                      >> 7U)))))
                            : ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0x00000fe0U 
                                                  & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q 
                                                     >> 0x00000014U)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_add 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_reg) 
               & (0U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sub 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_reg) 
               & (0x40000000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sll 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_reg) 
               & (0x00001000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slt 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_reg) 
               & (0x00002000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sltu 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_reg) 
               & (0x00003000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_xor 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_reg) 
               & (0x00004000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srl 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_reg) 
               & (0x00005000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sra 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_reg) 
               & (0x40005000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_or 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_reg) 
               & (0x00006000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_and 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_reg) 
               & (0x00007000U == (0xfe007000U & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__is_sll_srl_sra 
            = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_reg) 
               & ((IData)((0x00001000U == (0xfe007000U 
                                           & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q))) 
                  | ((IData)((0x00005000U == (0xfe007000U 
                                              & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q))))));
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_xfer) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__next_insn_opcode 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata;
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_q 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata;
    }
    if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rinst) 
         & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_done))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_waitirq 
            = (IData)((0x0800000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_retirq 
            = (IData)((0x0400000bU == (0xfe00007fU 
                                       & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_imm 
            = (0x13U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core0__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core0__DOT__is_sb_sh_sw 
            = (0x23U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm_j 
            = ((0x000fffffU & vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm_j) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x001ffffeU 
                                               & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched 
                                                  >> 0x0000000bU)))));
        vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm_j 
            = ((0xfffff801U & vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm_j) 
               | (0x000007feU & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched 
                                                   >> 0x0000000bU))) 
                                 >> 9U)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm_j 
            = ((0xfffff7ffU & vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm_j) 
               | (0x00000800U & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched 
                                                   >> 0x0000000bU))) 
                                 << 2U)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm_j 
            = ((0xfff00fffU & vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm_j) 
               | (0x000ff000U & (VL_EXTENDS_II(32,21, 
                                               (0x001ffffeU 
                                                & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched 
                                                   >> 0x0000000bU))) 
                                 << 0x0000000bU)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm_j 
            = ((0xfffffffeU & vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm_j) 
               | (1U & VL_EXTENDS_II(1,21, (0x001ffffeU 
                                            & (vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched 
                                               >> 0x0000000bU)))));
        vlSelfRef.multi_core_top__DOT__core0__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_auipc 
            = (0x17U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lui 
            = (0x37U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_jal 
            = (0x6fU == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched));
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_jalr 
            = (IData)((0x00000067U == (0x0000707fU 
                                       & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched)));
        vlSelfRef.multi_core_top__DOT__core0__DOT__is_alu_reg_reg 
            = (0x33U == (0x0000007fU & vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata_latched));
    }
    if ((1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn)))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__latched_trace = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_fence = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_timeout = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__is_compare = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_beq = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bne = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_blt = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bge = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bltu = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bgeu = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_addi = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slti = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sltiu = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_xori = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_ori = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_andi = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_add = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sub = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sll = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slt = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sltu = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_xor = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srl = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sra = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_or = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__instr_and = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = __VdfgRegularize_h6e95ff9d_0_11;
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_imm 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__q_insn_imm;
    vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_pseudo_trigger 
        = __Vdly__multi_core_top__DOT__core0__DOT__decoder_pseudo_trigger;
    vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_trigger 
        = __Vdly__multi_core_top__DOT__core0__DOT__decoder_trigger;
    vlSelfRef.multi_core_top__DOT__core0__DOT__launch_next_insn 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_trigger) 
           & ((0x40U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cpu_state)) 
              & ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_delay) 
                 | ((~ (0U != ((~ vlSelfRef.multi_core_top__DOT__core0__DOT__irq_mask) 
                               & vlSelfRef.multi_core_top__DOT__core0__DOT__irq_pending))) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__irq_active)))));
    vlSelfRef.multi_core_top__DOT__core0__DOT__alu_shr 
        = (IData)((0x00000001ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                          (((QData)((IData)(
                                                                            ((vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
                                                                              >> 0x0000001fU) 
                                                                             & ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srai) 
                                                                                | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sra))))) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1))), 
                                                          (0x0000001fU 
                                                           & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2))));
    vlSelfRef.multi_core_top__DOT__core0__DOT__instr_trap 
        = (1U & (~ ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lui) 
                    | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_auipc) 
                       | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_jal) 
                          | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_jalr) 
                             | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_beq) 
                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bne) 
                                   | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_blt) 
                                      | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bge) 
                                         | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bltu) 
                                            | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bgeu) 
                                               | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lb) 
                                                  | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lh) 
                                                     | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lw) 
                                                        | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lbu) 
                                                           | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lhu) 
                                                              | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sb) 
                                                                 | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sh) 
                                                                    | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sw) 
                                                                       | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_addi) 
                                                                          | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slti) 
                                                                             | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_xori) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_ori) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_andi) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slli) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srli) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srai) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_add) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sub) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sll) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slt) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sltu) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_xor) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srl) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sra) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_or) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_and) 
                                                                                | ((IData)(__VdfgRegularize_h6e95ff9d_0_11) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_fence) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_getq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_setq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_retirq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_maskirq) 
                                                                                | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_waitirq) 
                                                                                | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_timer)))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0ULL;
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lui) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000006c7569ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_auipc) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000006175697063ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_jal) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000006a616cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_jalr) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x000000006a616c72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_beq) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000626571ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bne) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000626e65ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_blt) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000626c74ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bge) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000626765ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bltu) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000626c7475ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bgeu) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000062676575ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lb) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000006c62ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lh) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000006c68ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lw) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000006c77ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lbu) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000006c6275ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_lhu) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000006c6875ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sb) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000007362ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sh) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000007368ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sw) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000007377ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_addi) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000061646469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slti) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000736c7469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sltiu) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x000000736c746975ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_xori) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000786f7269ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_ori) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000006f7269ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_andi) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000616e6469ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slli) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000736c6c69ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srli) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000073726c69ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srai) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000073726169ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_add) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000616464ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sub) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_add_sub 
            = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
               - vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2);
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000737562ULL;
    } else {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_add_sub 
            = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
               + vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2);
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sll) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000736c6cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_slt) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000736c74ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sltu) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000000736c7475ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_xor) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000786f72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_srl) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x000000000073726cULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_sra) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000737261ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_or) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000006f72ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_and) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000000616e64ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdcycle) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0072646379636c65ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdcycleh) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x72646379636c6568ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdinstr) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x007264696e737472ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_rdinstrh) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x7264696e73747268ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_fence) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000066656e6365ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_getq) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000067657471ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_setq) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000000073657471ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_retirq) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0000726574697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_maskirq) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x006d61736b697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_waitirq) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x0077616974697271ULL;
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_timer) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr = 0x00000074696d6572ULL;
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0 = 0U;
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_beq) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__alu_eq;
    } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bne) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__alu_eq)));
    } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bge) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__alu_lts)));
    } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__instr_bgeu) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0 
            = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__alu_ltu)));
    } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__is_slti_blt_slt) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__alu_lts;
    } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__is_sltiu_bltu_sltu) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__alu_ltu;
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out = 0U;
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__alu_add_sub;
    } else if (vlSelfRef.multi_core_top__DOT__core0__DOT__is_compare) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out_0;
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_xori) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_xor))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
               ^ vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_ori) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_or))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
               | vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2);
    } else if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_andi) 
                | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__instr_and))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__alu_out 
            = (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
               & vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op2);
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_ascii_instr 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__q_ascii_instr;
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_next) {
        if (vlSelfRef.multi_core_top__DOT__core0__DOT__decoder_pseudo_trigger_q) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_opcode 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__cached_insn_opcode;
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cached_insn_rs1));
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__cached_insn_rd));
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rs2 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__cached_insn_rs2;
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_imm 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__cached_insn_imm;
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_ascii_instr 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__cached_ascii_instr;
        } else {
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_opcode 
                = ((3U == (3U & vlSelfRef.multi_core_top__DOT__core0__DOT__next_insn_opcode))
                    ? vlSelfRef.multi_core_top__DOT__core0__DOT__next_insn_opcode
                    : (0x0000ffffU & vlSelfRef.multi_core_top__DOT__core0__DOT__next_insn_opcode));
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rs1 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs1));
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rd 
                = (0x0000001fU & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rd));
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_rs2 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs2;
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_insn_imm 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_imm;
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_ascii_instr 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__new_ascii_instr;
        }
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rinst 
        = __Vdly__multi_core_top__DOT__core0__DOT__mem_do_rinst;
    __VdfgRegularize_h6e95ff9d_0_10 = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_prefetch) 
                                       | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rinst));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rinst) 
                                                | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rdata));
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_busy 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_10) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rdata) 
              | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_wdata)));
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_addr 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_10)
             ? (vlSelfRef.multi_core_top__DOT__core0__DOT__next_pc 
                >> 2U) : (vlSelfRef.multi_core_top__DOT__core0__DOT__reg_op1 
                          >> 2U)) << 2U);
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_read 
        = (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_prefetch) 
            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_12));
}
