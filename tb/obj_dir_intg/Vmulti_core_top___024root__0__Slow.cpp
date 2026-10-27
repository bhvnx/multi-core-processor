// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmulti_core_top.h for the primary calling header

#include "Vmulti_core_top__pch.h"

VL_ATTR_COLD void Vmulti_core_top___024root___eval_static(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___eval_static\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__resetn__0 = vlSelfRef.resetn;
    vlSelfRef.__Vtrigprevexpr___TOP__irq__0 = vlSelfRef.irq;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core3__DOT__clk__0 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__clk__0 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__clk__0 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core2__DOT__clk__0 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__clk__0 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__clk__0 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core1__DOT__clk__0 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__clk__0 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__clk__0 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core0__DOT__clk__0 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__clk__0 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__clk__0 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__isram3__DOT__clk__0 
        = vlSelfRef.multi_core_top__DOT__isram3__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__isram2__DOT__clk__0 
        = vlSelfRef.multi_core_top__DOT__isram2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__isram1__DOT__clk__0 
        = vlSelfRef.multi_core_top__DOT__isram1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__isram0__DOT__clk__0 
        = vlSelfRef.multi_core_top__DOT__isram0__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__dsram__DOT__clk__0 
        = vlSelfRef.multi_core_top__DOT__dsram__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__arb__DOT__clk__0 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__clk;
}

VL_ATTR_COLD void Vmulti_core_top___024root___eval_initial(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___eval_initial\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.multi_core_top__DOT__core3__DOT__decoded_rs = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__decoded_rs = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__decoded_rs = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__decoded_rs = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_firstword = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_firstword_xfer = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__mem_la_use_prefetched_high_word = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_firstword = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_firstword_xfer = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__mem_la_use_prefetched_high_word = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_firstword = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_firstword_xfer = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__mem_la_use_prefetched_high_word = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_firstword = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_firstword_xfer = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__mem_la_use_prefetched_high_word = 0U;
    }
}

VL_ATTR_COLD void Vmulti_core_top___024root___eval_final(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___eval_final\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_core_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmulti_core_top___024root___eval_phase__stl(Vmulti_core_top___024root* vlSelf);

VL_ATTR_COLD void Vmulti_core_top___024root___eval_settle(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___eval_settle\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vmulti_core_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("../rtl/multi_core_top.v", 24, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vmulti_core_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vmulti_core_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_core_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vmulti_core_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vmulti_core_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<VlWide<4>/*127:0*/, 256> Vmulti_core_top__ConstPool__TABLE_he73c04bc_0;

VL_ATTR_COLD void Vmulti_core_top___024root___stl_sequent__TOP__0(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___stl_sequent__TOP__0\n"); );
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
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_12;
    __VdfgRegularize_h6e95ff9d_0_12 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_13;
    __VdfgRegularize_h6e95ff9d_0_13 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_14;
    __VdfgRegularize_h6e95ff9d_0_14 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_15;
    __VdfgRegularize_h6e95ff9d_0_15 = 0;
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
    vlSelfRef.multi_core_top__DOT__irq = vlSelfRef.irq;
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
    vlSelfRef.multi_core_top__DOT__clk = vlSelfRef.clk;
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
    vlSelfRef.multi_core_top__DOT__resetn = vlSelfRef.resetn;
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
    vlSelfRef.multi_core_top__DOT__core3__DOT__irq 
        = vlSelfRef.multi_core_top__DOT__irq;
    vlSelfRef.multi_core_top__DOT__core2__DOT__irq 
        = vlSelfRef.multi_core_top__DOT__irq;
    vlSelfRef.multi_core_top__DOT__core1__DOT__irq 
        = vlSelfRef.multi_core_top__DOT__irq;
    vlSelfRef.multi_core_top__DOT__core0__DOT__irq 
        = vlSelfRef.multi_core_top__DOT__irq;
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
    vlSelfRef.multi_core_top__DOT__arb__DOT__clk = vlSelfRef.multi_core_top__DOT__clk;
    vlSelfRef.multi_core_top__DOT__core3__DOT__clk 
        = vlSelfRef.multi_core_top__DOT__clk;
    vlSelfRef.multi_core_top__DOT__core2__DOT__clk 
        = vlSelfRef.multi_core_top__DOT__clk;
    vlSelfRef.multi_core_top__DOT__core1__DOT__clk 
        = vlSelfRef.multi_core_top__DOT__clk;
    vlSelfRef.multi_core_top__DOT__core0__DOT__clk 
        = vlSelfRef.multi_core_top__DOT__clk;
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
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_done 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn) 
           & (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rinst) 
               & (3U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_state))) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_xfer) 
                 & ((0U != (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_state)) 
                    & ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_wdata) 
                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))));
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_xfer)
            ? vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata
            : vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata_q);
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_done 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn) 
           & (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rinst) 
               & (3U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_state))) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_xfer) 
                 & ((0U != (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_state)) 
                    & ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_wdata) 
                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))))));
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_xfer)
            ? vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata
            : vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata_q);
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_done 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn) 
           & (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rinst) 
               & (3U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_state))) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_xfer) 
                 & ((0U != (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_state)) 
                    & ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_wdata) 
                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))))));
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_latched_noshuffle 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_xfer)
            ? vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata
            : vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata_q);
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_done 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn) 
           & (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rinst) 
               & (3U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_state))) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_xfer) 
                 & ((0U != (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_state)) 
                    & ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_wdata) 
                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))))));
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

VL_ATTR_COLD bool Vmulti_core_top___024root___eval_phase__stl(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___eval_phase__stl\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmulti_core_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vmulti_core_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vmulti_core_top___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vmulti_core_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_core_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vmulti_core_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( resetn)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( irq)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vmulti_core_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_core_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vmulti_core_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge multi_core_top.core3.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge multi_core_top.core3.genblk2.pcpi_div.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge multi_core_top.core3.genblk1.pcpi_mul.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge multi_core_top.core2.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge multi_core_top.core2.genblk2.pcpi_div.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge multi_core_top.core2.genblk1.pcpi_mul.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge multi_core_top.core1.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge multi_core_top.core1.genblk2.pcpi_div.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(posedge multi_core_top.core1.genblk1.pcpi_mul.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(posedge multi_core_top.core0.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @(posedge multi_core_top.core0.genblk2.pcpi_div.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @(posedge multi_core_top.core0.genblk1.pcpi_mul.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @(posedge multi_core_top.isram3.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @(posedge multi_core_top.isram2.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @(posedge multi_core_top.isram1.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @(posedge multi_core_top.isram0.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000010U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 16 is active: @(posedge multi_core_top.dsram.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000011U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 17 is active: @(posedge multi_core_top.arb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmulti_core_top___024root___ctor_var_reset(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___ctor_var_reset\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8624841754543469506ull);
    vlSelf->trap = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18214934560881419504ull);
    vlSelf->irq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14145092342636110857ull);
    vlSelf->multi_core_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7751535627274699579ull);
    vlSelf->multi_core_top__DOT__resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14858006642664682363ull);
    vlSelf->multi_core_top__DOT__trap = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4010322507056055113ull);
    vlSelf->multi_core_top__DOT__irq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11171901801009868931ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->multi_core_top__DOT__core_mem_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12799635667620348559ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->multi_core_top__DOT__core_mem_instr[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14635669799276405403ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->multi_core_top__DOT__core_mem_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11248593105748915207ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->multi_core_top__DOT__core_mem_wdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7011801092321464398ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->multi_core_top__DOT__core_mem_wstrb[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18200575553693587231ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->multi_core_top__DOT__core_mem_ready[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17689657700715597674ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->multi_core_top__DOT__core_mem_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12406953690890457366ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->multi_core_top__DOT__isram_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6996935669015529541ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->multi_core_top__DOT__isram_ready[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15840727579543521833ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->multi_core_top__DOT__isram_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12696850520176321385ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->multi_core_top__DOT__dsram_arb_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10893943059715098243ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->multi_core_top__DOT__dsram_arb_ready[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2396174462791360792ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->multi_core_top__DOT__dsram_arb_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18304119747705635037ull);
    }
    vlSelf->multi_core_top__DOT__dsram_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8816053786911387719ull);
    vlSelf->multi_core_top__DOT__dsram_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15277541115324720418ull);
    vlSelf->multi_core_top__DOT__dsram_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8751578262330139398ull);
    vlSelf->multi_core_top__DOT__dsram_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8048578738006238131ull);
    vlSelf->multi_core_top__DOT__dsram_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14178544831150704178ull);
    vlSelf->multi_core_top__DOT__dsram_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7490440892834525606ull);
    vlSelf->multi_core_top__DOT__dsram_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1770747291299565421ull);
    vlSelf->multi_core_top__DOT__core3__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2010616482022566841ull);
    vlSelf->multi_core_top__DOT__core3__DOT__resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1502144346801803479ull);
    vlSelf->multi_core_top__DOT__core3__DOT__trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1885779631293692123ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16395372808657331636ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4526100861953885346ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1335693880869141846ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2197215410576609744ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8557489520210032690ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15572876720907688904ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15985156831562546544ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_la_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1967510619989208302ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_la_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12878319438713015522ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_la_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3425745830096788578ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_la_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18372379677320298714ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_la_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14134803968708351345ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6788000471165348400ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10604394628004508188ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12534200723551212495ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4024166958739219745ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16171804295900927894ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8423673889498537273ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 105709249022083857ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10578548103681197641ull);
    vlSelf->multi_core_top__DOT__core3__DOT__irq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7311810604516312423ull);
    vlSelf->multi_core_top__DOT__core3__DOT__eoi = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10349334064673014634ull);
    vlSelf->multi_core_top__DOT__core3__DOT__trace_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14846708810198518383ull);
    vlSelf->multi_core_top__DOT__core3__DOT__trace_data = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 17806097274311179172ull);
    vlSelf->multi_core_top__DOT__core3__DOT__count_cycle = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5543546041167524537ull);
    vlSelf->multi_core_top__DOT__core3__DOT__count_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17042414968350378746ull);
    vlSelf->multi_core_top__DOT__core3__DOT__reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15830846044720273755ull);
    vlSelf->multi_core_top__DOT__core3__DOT__reg_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14067362266143107681ull);
    vlSelf->multi_core_top__DOT__core3__DOT__reg_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2162386919868158813ull);
    vlSelf->multi_core_top__DOT__core3__DOT__reg_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6972964365962227131ull);
    vlSelf->multi_core_top__DOT__core3__DOT__reg_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6263288066642027139ull);
    vlSelf->multi_core_top__DOT__core3__DOT__reg_sh = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17054422539878086528ull);
    vlSelf->multi_core_top__DOT__core3__DOT__next_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16922486608340181406ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17934127524944605400ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_insn_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4310923948921274469ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8805925877371389859ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16236670704925550294ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10035403264808804762ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7448363228602455886ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 463929579833528932ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10359821617973153835ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10711564291997676948ull);
    vlSelf->multi_core_top__DOT__core3__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14860174923772048825ull);
    vlSelf->multi_core_top__DOT__core3__DOT__irq_delay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7271848247479993452ull);
    vlSelf->multi_core_top__DOT__core3__DOT__irq_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10555273581654749084ull);
    vlSelf->multi_core_top__DOT__core3__DOT__irq_mask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2328829969796643491ull);
    vlSelf->multi_core_top__DOT__core3__DOT__irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13760162312581160666ull);
    vlSelf->multi_core_top__DOT__core3__DOT__timer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1219396617421450476ull);
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->multi_core_top__DOT__core3__DOT__cpuregs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14710477057631774673ull);
    }
    vlSelf->multi_core_top__DOT__core3__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2682808109445625791ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_mul_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1305336946746554559ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_mul_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13534539004725272286ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_mul_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16697197686747132811ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_mul_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5316531679910183826ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_div_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16559147320901491981ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_div_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12628703948253161577ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_div_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5447852876093900947ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_div_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9833918122808864684ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_int_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1930670219349918778ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_int_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9685731903704055734ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_int_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1927705527573169839ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_int_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1635937945904861941ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15845745395806413219ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_wordsize = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4581636720301293486ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_rdata_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14741991619818927207ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8639675691718767101ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_do_prefetch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9390900413356302485ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14205165703437023286ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13774858821951339552ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4339406658169011163ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_xfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15567224054781259550ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_la_secondword = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18269820295078171291ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_la_firstword_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1498436865533937890ull);
    vlSelf->multi_core_top__DOT__core3__DOT__last_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3528218810156740906ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_la_firstword = 0U;
    ;
    vlSelf->multi_core_top__DOT__core3__DOT__mem_la_firstword_xfer = 0U;
    ;
    vlSelf->multi_core_top__DOT__core3__DOT__prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17038301131290574837ull);
    vlSelf->multi_core_top__DOT__core3__DOT__clear_prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7929609020416057344ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_16bit_buffer = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17389004332342709460ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_rdata_latched_noshuffle = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4359377942833481654ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_rdata_latched = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2869253906721976849ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_la_use_prefetched_high_word = 0U;
    ;
    vlSelf->multi_core_top__DOT__core3__DOT__mem_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9781431820790288388ull);
    vlSelf->multi_core_top__DOT__core3__DOT__mem_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8671215810138694937ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_lui = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16686801052558675114ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15991922195314297094ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7262930555729253197ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11602401308016310967ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_beq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7218122040336982221ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_bne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6482003917730185170ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_blt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9958994779916920711ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3466063145327374542ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_bltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1014427964705212972ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6723374745958523714ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3484109730829435711ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11097573239744416699ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11709278774766622436ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_lbu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1247316476456960053ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10523412181869432320ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_sb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13054773773107865734ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_sh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15542873417813956130ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4307599607183942329ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_addi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14102207835721588332ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_slti = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10719484938171934095ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_sltiu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2344567741939724174ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_xori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3901455494172733585ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_ori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1279045427757358174ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8454487332657897152ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_slli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3049596253914405663ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_srli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16623392963617368452ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15544447356234949110ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 915549090473795222ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10007712967279675292ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_sll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8477564322690451677ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14694503242854585693ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14165814541176092159ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11534279566619604407ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_srl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1492569808254583924ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5844859101132344131ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_or = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17307806416377478004ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_and = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15569708723545670241ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_rdcycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12372066773323111396ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_rdcycleh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7917115045432799397ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_rdinstr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16868123743086431349ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7089853559823537320ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_ecall_ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5491791505194657667ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_fence = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4472771196079166224ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_getq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11073948461445977535ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_setq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12957692302676247283ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_retirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14221785112899116511ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_maskirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3095065357260001841ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18168604975263026025ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_timer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13589200932658980008ull);
    vlSelf->multi_core_top__DOT__core3__DOT__instr_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7530744140646467449ull);
    vlSelf->multi_core_top__DOT__core3__DOT__decoded_rd = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9259979356659242272ull);
    vlSelf->multi_core_top__DOT__core3__DOT__decoded_rs1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11921408578463531915ull);
    vlSelf->multi_core_top__DOT__core3__DOT__decoded_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17465781673153446021ull);
    vlSelf->multi_core_top__DOT__core3__DOT__decoded_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18118228961678092705ull);
    vlSelf->multi_core_top__DOT__core3__DOT__decoded_imm_j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17248097428702761470ull);
    vlSelf->multi_core_top__DOT__core3__DOT__decoder_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8862425078026420327ull);
    vlSelf->multi_core_top__DOT__core3__DOT__decoder_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1347991958214713757ull);
    vlSelf->multi_core_top__DOT__core3__DOT__decoder_pseudo_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7381931160827323774ull);
    vlSelf->multi_core_top__DOT__core3__DOT__decoder_pseudo_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11506332051752113032ull);
    vlSelf->multi_core_top__DOT__core3__DOT__compressed_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7393252439705260114ull);
    vlSelf->multi_core_top__DOT__core3__DOT__is_lui_auipc_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1414079356004671353ull);
    vlSelf->multi_core_top__DOT__core3__DOT__is_lb_lh_lw_lbu_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6454132047388035557ull);
    vlSelf->multi_core_top__DOT__core3__DOT__is_slli_srli_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15533914902487309191ull);
    vlSelf->multi_core_top__DOT__core3__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7520124469348194946ull);
    vlSelf->multi_core_top__DOT__core3__DOT__is_sb_sh_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17901324878379133399ull);
    vlSelf->multi_core_top__DOT__core3__DOT__is_sll_srl_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10342687546202168910ull);
    vlSelf->multi_core_top__DOT__core3__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7989362414877839278ull);
    vlSelf->multi_core_top__DOT__core3__DOT__is_slti_blt_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11459362610821398522ull);
    vlSelf->multi_core_top__DOT__core3__DOT__is_sltiu_bltu_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8124355954901847313ull);
    vlSelf->multi_core_top__DOT__core3__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5699750405526203818ull);
    vlSelf->multi_core_top__DOT__core3__DOT__is_lbu_lhu_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 193416255229171372ull);
    vlSelf->multi_core_top__DOT__core3__DOT__is_alu_reg_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18429239500675791796ull);
    vlSelf->multi_core_top__DOT__core3__DOT__is_alu_reg_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2704679367511805766ull);
    vlSelf->multi_core_top__DOT__core3__DOT__is_compare = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5481424746959199868ull);
    vlSelf->multi_core_top__DOT__core3__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10081622344994619859ull);
    vlSelf->multi_core_top__DOT__core3__DOT__new_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14414825071012014955ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12754247863272430981ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16134194748348199696ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7661908822884978089ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14253220743605400836ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7309047124085693195ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_rs1val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2146909664999430129ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_rs2val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14410136223045981065ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_rs1val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9854657175853019022ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_rs2val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 433971508212210072ull);
    vlSelf->multi_core_top__DOT__core3__DOT__q_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5323559333796825178ull);
    vlSelf->multi_core_top__DOT__core3__DOT__q_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6072928002177836734ull);
    vlSelf->multi_core_top__DOT__core3__DOT__q_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1631277184810657854ull);
    vlSelf->multi_core_top__DOT__core3__DOT__q_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6929587280234960978ull);
    vlSelf->multi_core_top__DOT__core3__DOT__q_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14596637213623351422ull);
    vlSelf->multi_core_top__DOT__core3__DOT__q_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7400587166158293126ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15310956207564662425ull);
    vlSelf->multi_core_top__DOT__core3__DOT__launch_next_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16821842025275754699ull);
    vlSelf->multi_core_top__DOT__core3__DOT__dbg_valid_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10798000302854816596ull);
    vlSelf->multi_core_top__DOT__core3__DOT__cached_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8313025483923891878ull);
    vlSelf->multi_core_top__DOT__core3__DOT__cached_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10827953572188929178ull);
    vlSelf->multi_core_top__DOT__core3__DOT__cached_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7286795979909420647ull);
    vlSelf->multi_core_top__DOT__core3__DOT__cached_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6505528396581934673ull);
    vlSelf->multi_core_top__DOT__core3__DOT__cached_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6854346778852209638ull);
    vlSelf->multi_core_top__DOT__core3__DOT__cached_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15581938291787039539ull);
    vlSelf->multi_core_top__DOT__core3__DOT__cpu_state = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1347636662119904701ull);
    vlSelf->multi_core_top__DOT__core3__DOT__irq_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7294041537592814936ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->multi_core_top__DOT__core3__DOT__dbg_ascii_state, __VscopeHash, 14365629258225838981ull);
    vlSelf->multi_core_top__DOT__core3__DOT__set_mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8193716147555741003ull);
    vlSelf->multi_core_top__DOT__core3__DOT__set_mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2529385284584247167ull);
    vlSelf->multi_core_top__DOT__core3__DOT__set_mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5654948642817275246ull);
    vlSelf->multi_core_top__DOT__core3__DOT__latched_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12444421106931988643ull);
    vlSelf->multi_core_top__DOT__core3__DOT__latched_stalu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16610028538344755956ull);
    vlSelf->multi_core_top__DOT__core3__DOT__latched_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10055451875220570269ull);
    vlSelf->multi_core_top__DOT__core3__DOT__latched_compr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14530432672690407461ull);
    vlSelf->multi_core_top__DOT__core3__DOT__latched_trace = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7515138344739400048ull);
    vlSelf->multi_core_top__DOT__core3__DOT__latched_is_lu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 741104156013638838ull);
    vlSelf->multi_core_top__DOT__core3__DOT__latched_is_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15758967360554432265ull);
    vlSelf->multi_core_top__DOT__core3__DOT__latched_is_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3826254939621578996ull);
    vlSelf->multi_core_top__DOT__core3__DOT__latched_rd = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 632753897875348474ull);
    vlSelf->multi_core_top__DOT__core3__DOT__current_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1486668128474060210ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_timeout_counter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16901073220479426634ull);
    vlSelf->multi_core_top__DOT__core3__DOT__pcpi_timeout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4515906406221310257ull);
    vlSelf->multi_core_top__DOT__core3__DOT__next_irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11472935196943631547ull);
    vlSelf->multi_core_top__DOT__core3__DOT__do_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5982711771498878397ull);
    vlSelf->multi_core_top__DOT__core3__DOT__alu_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12282423147851416958ull);
    vlSelf->multi_core_top__DOT__core3__DOT__alu_out_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10289398120124471589ull);
    vlSelf->multi_core_top__DOT__core3__DOT__alu_out_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4050809973765619899ull);
    vlSelf->multi_core_top__DOT__core3__DOT__alu_out_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6314042664858819566ull);
    vlSelf->multi_core_top__DOT__core3__DOT__alu_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5364868228588450880ull);
    vlSelf->multi_core_top__DOT__core3__DOT__alu_wait_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6584839329001707329ull);
    vlSelf->multi_core_top__DOT__core3__DOT__alu_add_sub = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13234698735261410860ull);
    vlSelf->multi_core_top__DOT__core3__DOT__alu_shl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14059420402498850835ull);
    vlSelf->multi_core_top__DOT__core3__DOT__alu_shr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18112898265657454968ull);
    vlSelf->multi_core_top__DOT__core3__DOT__alu_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2602120157612302755ull);
    vlSelf->multi_core_top__DOT__core3__DOT__alu_ltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16978879907437318866ull);
    vlSelf->multi_core_top__DOT__core3__DOT__alu_lts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6894672896621508872ull);
    vlSelf->multi_core_top__DOT__core3__DOT__clear_prefetched_high_word_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10607288115780049907ull);
    vlSelf->multi_core_top__DOT__core3__DOT__cpuregs_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1259776038772622462ull);
    vlSelf->multi_core_top__DOT__core3__DOT__cpuregs_wrdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13987104033308266002ull);
    vlSelf->multi_core_top__DOT__core3__DOT__cpuregs_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8815542322718007222ull);
    vlSelf->multi_core_top__DOT__core3__DOT__cpuregs_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4374259036763918464ull);
    vlSelf->multi_core_top__DOT__core3__DOT__decoded_rs = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2995025138003175498ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6066354645028994001ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9545286477497676060ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726677959382039291ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8900711763658796295ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14316953311580283994ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12236072059487634733ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4211406842625715003ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8333498277589264318ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7846150947661282959ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17960816702449801000ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16786288217013313596ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10325310422798607119ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14381453326257353588ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14731757903003626282ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15850789085793309625ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10300823502341897327ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7744813579581270114ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__dividend = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12840124218746868151ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__divisor = VL_SCOPED_RAND_RESET_Q(63, __VscopeHash, 16582337793226466977ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1459892738349300846ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17850726846075972981ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__running = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12919503880077773451ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__outsign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13034878043009770546ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10325273226154016251ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6975898585350838069ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1348282179660900579ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18001574347241685779ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16577561728444912603ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16443569057636674788ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1893387582173776492ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9500740655394856547ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13028562146938767396ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6698237116953842511ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5258228382954590378ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5646029868915072623ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2964854993557999427ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2383436800274364437ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4097974897132270015ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14785474190305754554ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17348706810239852252ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1912037602069858988ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12646824410908245868ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7429980084188115988ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8349737329947300247ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 363812281667845840ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1889247903977577193ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rdx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3122532049088026098ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16218456302011493283ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15834475472475130795ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3603997678127870875ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15012317124435087382ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8784156112022379804ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9298060000928185341ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16970515446976768474ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1889331854489054711ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10787221449525894859ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15313524270255618318ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 580325241876119466ull);
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c613898__0 = 0;
    vlSelf->multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c345fbb__0 = 0;
    vlSelf->multi_core_top__DOT__core2__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17395306765990003782ull);
    vlSelf->multi_core_top__DOT__core2__DOT__resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6479639081637223373ull);
    vlSelf->multi_core_top__DOT__core2__DOT__trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3749298395483144552ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6920389650257965445ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15583523993347235325ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9088736905737944334ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4573328800549299799ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1399162534261610536ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5214426839890301254ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 95306975934541934ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_la_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7368669381052332250ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_la_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2135207871211543105ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_la_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 176463821605952927ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_la_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8594516573247630584ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_la_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11826129453264739322ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5170095576268995515ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9817522801069670832ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9345529394202596334ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11619567736503106869ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10148623658414776313ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16852036159871884601ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1286783722742135129ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11247561894161892605ull);
    vlSelf->multi_core_top__DOT__core2__DOT__irq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10894033730475655306ull);
    vlSelf->multi_core_top__DOT__core2__DOT__eoi = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10818557333639495094ull);
    vlSelf->multi_core_top__DOT__core2__DOT__trace_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1653376236077870386ull);
    vlSelf->multi_core_top__DOT__core2__DOT__trace_data = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 8373717944452449694ull);
    vlSelf->multi_core_top__DOT__core2__DOT__count_cycle = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16179203806193740093ull);
    vlSelf->multi_core_top__DOT__core2__DOT__count_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16849952135941869492ull);
    vlSelf->multi_core_top__DOT__core2__DOT__reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8754354986966789224ull);
    vlSelf->multi_core_top__DOT__core2__DOT__reg_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10572818244675725341ull);
    vlSelf->multi_core_top__DOT__core2__DOT__reg_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5108379523047654754ull);
    vlSelf->multi_core_top__DOT__core2__DOT__reg_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4059659679263726707ull);
    vlSelf->multi_core_top__DOT__core2__DOT__reg_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2218005247395016483ull);
    vlSelf->multi_core_top__DOT__core2__DOT__reg_sh = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2137410844377341758ull);
    vlSelf->multi_core_top__DOT__core2__DOT__next_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4442899579656199619ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17595623103305709693ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_insn_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1395082430379959478ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17023480326594724954ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9199135479523424041ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12056653326735647585ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16837854020183470204ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13415097452276066435ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6354277517675503033ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2999732948366418231ull);
    vlSelf->multi_core_top__DOT__core2__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2766223206356724294ull);
    vlSelf->multi_core_top__DOT__core2__DOT__irq_delay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6537869852552291005ull);
    vlSelf->multi_core_top__DOT__core2__DOT__irq_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12463763851247203419ull);
    vlSelf->multi_core_top__DOT__core2__DOT__irq_mask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12423145772902015620ull);
    vlSelf->multi_core_top__DOT__core2__DOT__irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12249563169985336540ull);
    vlSelf->multi_core_top__DOT__core2__DOT__timer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5725064865154990619ull);
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->multi_core_top__DOT__core2__DOT__cpuregs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17306300362840423832ull);
    }
    vlSelf->multi_core_top__DOT__core2__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10851594992463909501ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_mul_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18042105845959641495ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_mul_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14241610698394857887ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_mul_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4306268547108279944ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_mul_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7275079971662146464ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_div_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9927831302115661814ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_div_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 275449059164533808ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_div_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7320028018862763335ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_div_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14645472380771338908ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_int_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14846686003901912108ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_int_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11225186495044476837ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_int_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1988668165731775157ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_int_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8072858143265760013ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2950059128908754173ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_wordsize = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14251926265661315325ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_rdata_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1901621732141168239ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4385562298547901580ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_do_prefetch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7013145693436795900ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1077843568985611668ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3433267479644781062ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2524315130515739892ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_xfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2593734980193276035ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_la_secondword = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11833656411733451659ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_la_firstword_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17786242795819333600ull);
    vlSelf->multi_core_top__DOT__core2__DOT__last_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6136992810872785539ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_la_firstword = 0U;
    ;
    vlSelf->multi_core_top__DOT__core2__DOT__mem_la_firstword_xfer = 0U;
    ;
    vlSelf->multi_core_top__DOT__core2__DOT__prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17209782940204591055ull);
    vlSelf->multi_core_top__DOT__core2__DOT__clear_prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7057322819498026652ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_16bit_buffer = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7781062336505177902ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_rdata_latched_noshuffle = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8556312704086739ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_rdata_latched = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17023498492757859307ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_la_use_prefetched_high_word = 0U;
    ;
    vlSelf->multi_core_top__DOT__core2__DOT__mem_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6524286641504292889ull);
    vlSelf->multi_core_top__DOT__core2__DOT__mem_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14790195794902451104ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_lui = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8940113880958961568ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8458005765858019364ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1398887924333120361ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17889961723285449479ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_beq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1388570735583211041ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_bne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3347018011655221648ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_blt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9252034197456237972ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11773470932389468531ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_bltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1677092008799585928ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10749894569108720140ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9855645734910423891ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17258093265692259712ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3066560167598416600ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_lbu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17608071377158475229ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12253710247429590389ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_sb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5156788517265249972ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_sh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2507858649624963180ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17536681308620892299ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_addi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16046365900942096868ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_slti = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15060556596341452200ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_sltiu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16462478376552378536ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_xori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9711609902681544204ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_ori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15233569526563521950ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2393892533456240395ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_slli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6338412590016204052ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_srli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6844665201820141048ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12484706495886158270ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10706887186421862299ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17286518012117767126ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_sll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 255121832147811951ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16042325569392193655ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15377676667526106067ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4254071801496694433ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_srl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12288202116176005337ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10436635436917409669ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_or = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18064031423232323436ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_and = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11628063425515441229ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_rdcycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1434472266613584948ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_rdcycleh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10718034659476011705ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_rdinstr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5659990352299149387ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4664556367090036486ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_ecall_ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11188311491019249220ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_fence = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16506667858086558451ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_getq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9531254833861631659ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_setq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13363963951225757112ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_retirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7765257876066525609ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_maskirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16471864216342219449ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3924947950252983990ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_timer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1312735826729622058ull);
    vlSelf->multi_core_top__DOT__core2__DOT__instr_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10112393413693461124ull);
    vlSelf->multi_core_top__DOT__core2__DOT__decoded_rd = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16208294314082859838ull);
    vlSelf->multi_core_top__DOT__core2__DOT__decoded_rs1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4729576384250873216ull);
    vlSelf->multi_core_top__DOT__core2__DOT__decoded_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10007028417672103094ull);
    vlSelf->multi_core_top__DOT__core2__DOT__decoded_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8257949577582681025ull);
    vlSelf->multi_core_top__DOT__core2__DOT__decoded_imm_j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16604364432383316687ull);
    vlSelf->multi_core_top__DOT__core2__DOT__decoder_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15576444264193482522ull);
    vlSelf->multi_core_top__DOT__core2__DOT__decoder_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3080575921216166568ull);
    vlSelf->multi_core_top__DOT__core2__DOT__decoder_pseudo_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17629900117349032371ull);
    vlSelf->multi_core_top__DOT__core2__DOT__decoder_pseudo_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8757290120991476116ull);
    vlSelf->multi_core_top__DOT__core2__DOT__compressed_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3245374864508490907ull);
    vlSelf->multi_core_top__DOT__core2__DOT__is_lui_auipc_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6861146867355447982ull);
    vlSelf->multi_core_top__DOT__core2__DOT__is_lb_lh_lw_lbu_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4357656488063992271ull);
    vlSelf->multi_core_top__DOT__core2__DOT__is_slli_srli_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14511740002335732271ull);
    vlSelf->multi_core_top__DOT__core2__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15269826197507323942ull);
    vlSelf->multi_core_top__DOT__core2__DOT__is_sb_sh_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5744958639794147354ull);
    vlSelf->multi_core_top__DOT__core2__DOT__is_sll_srl_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4083383011995391937ull);
    vlSelf->multi_core_top__DOT__core2__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10176762839141663505ull);
    vlSelf->multi_core_top__DOT__core2__DOT__is_slti_blt_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11983109886718155292ull);
    vlSelf->multi_core_top__DOT__core2__DOT__is_sltiu_bltu_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5055766636992892683ull);
    vlSelf->multi_core_top__DOT__core2__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2365771796950587039ull);
    vlSelf->multi_core_top__DOT__core2__DOT__is_lbu_lhu_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1759366757125672517ull);
    vlSelf->multi_core_top__DOT__core2__DOT__is_alu_reg_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9566849123281668658ull);
    vlSelf->multi_core_top__DOT__core2__DOT__is_alu_reg_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6458050629071304274ull);
    vlSelf->multi_core_top__DOT__core2__DOT__is_compare = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4907335605806869334ull);
    vlSelf->multi_core_top__DOT__core2__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5828267798558836399ull);
    vlSelf->multi_core_top__DOT__core2__DOT__new_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13188787404787672432ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16538160869331191012ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6352799906034183206ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11114777320817523360ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15642511949434282227ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14504688923215006679ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_rs1val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11915621228281505542ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_rs2val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5337713619203289378ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_rs1val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7515072025191221272ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_rs2val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12019096001604055132ull);
    vlSelf->multi_core_top__DOT__core2__DOT__q_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15899556968494331106ull);
    vlSelf->multi_core_top__DOT__core2__DOT__q_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2274863859930296111ull);
    vlSelf->multi_core_top__DOT__core2__DOT__q_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7956821150346924731ull);
    vlSelf->multi_core_top__DOT__core2__DOT__q_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3672794744907013302ull);
    vlSelf->multi_core_top__DOT__core2__DOT__q_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12455990739557439677ull);
    vlSelf->multi_core_top__DOT__core2__DOT__q_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13316190166215264384ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16247941976997189469ull);
    vlSelf->multi_core_top__DOT__core2__DOT__launch_next_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12308289097821928019ull);
    vlSelf->multi_core_top__DOT__core2__DOT__dbg_valid_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4046996769399216295ull);
    vlSelf->multi_core_top__DOT__core2__DOT__cached_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 672514397376810461ull);
    vlSelf->multi_core_top__DOT__core2__DOT__cached_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2820140310771705610ull);
    vlSelf->multi_core_top__DOT__core2__DOT__cached_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5749036703278390074ull);
    vlSelf->multi_core_top__DOT__core2__DOT__cached_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4989504147455190005ull);
    vlSelf->multi_core_top__DOT__core2__DOT__cached_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14853846636102131175ull);
    vlSelf->multi_core_top__DOT__core2__DOT__cached_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4180400030338709881ull);
    vlSelf->multi_core_top__DOT__core2__DOT__cpu_state = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 178904610366556742ull);
    vlSelf->multi_core_top__DOT__core2__DOT__irq_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6106656892558986137ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->multi_core_top__DOT__core2__DOT__dbg_ascii_state, __VscopeHash, 7772937521910136404ull);
    vlSelf->multi_core_top__DOT__core2__DOT__set_mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6210639144923293124ull);
    vlSelf->multi_core_top__DOT__core2__DOT__set_mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8512478322244838876ull);
    vlSelf->multi_core_top__DOT__core2__DOT__set_mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10390485417010103749ull);
    vlSelf->multi_core_top__DOT__core2__DOT__latched_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2683606808458507615ull);
    vlSelf->multi_core_top__DOT__core2__DOT__latched_stalu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17728654113321881073ull);
    vlSelf->multi_core_top__DOT__core2__DOT__latched_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16650422244954415423ull);
    vlSelf->multi_core_top__DOT__core2__DOT__latched_compr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4714989513594549700ull);
    vlSelf->multi_core_top__DOT__core2__DOT__latched_trace = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 801336466816168143ull);
    vlSelf->multi_core_top__DOT__core2__DOT__latched_is_lu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3564323880101851000ull);
    vlSelf->multi_core_top__DOT__core2__DOT__latched_is_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 210695460872832114ull);
    vlSelf->multi_core_top__DOT__core2__DOT__latched_is_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16058747411197931243ull);
    vlSelf->multi_core_top__DOT__core2__DOT__latched_rd = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3948213039964428211ull);
    vlSelf->multi_core_top__DOT__core2__DOT__current_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18369549443955218723ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_timeout_counter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13979765890399139507ull);
    vlSelf->multi_core_top__DOT__core2__DOT__pcpi_timeout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11884174560037671239ull);
    vlSelf->multi_core_top__DOT__core2__DOT__next_irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14297536113832553399ull);
    vlSelf->multi_core_top__DOT__core2__DOT__do_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10759428124227954179ull);
    vlSelf->multi_core_top__DOT__core2__DOT__alu_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12409568770719647358ull);
    vlSelf->multi_core_top__DOT__core2__DOT__alu_out_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16189925736971985579ull);
    vlSelf->multi_core_top__DOT__core2__DOT__alu_out_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5527804019712553856ull);
    vlSelf->multi_core_top__DOT__core2__DOT__alu_out_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11602734555436122718ull);
    vlSelf->multi_core_top__DOT__core2__DOT__alu_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16437696653329378865ull);
    vlSelf->multi_core_top__DOT__core2__DOT__alu_wait_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10727773587871063866ull);
    vlSelf->multi_core_top__DOT__core2__DOT__alu_add_sub = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2576146301577936921ull);
    vlSelf->multi_core_top__DOT__core2__DOT__alu_shl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11581148727127971991ull);
    vlSelf->multi_core_top__DOT__core2__DOT__alu_shr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12798796745964770017ull);
    vlSelf->multi_core_top__DOT__core2__DOT__alu_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10644640474280458649ull);
    vlSelf->multi_core_top__DOT__core2__DOT__alu_ltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3424946404404836279ull);
    vlSelf->multi_core_top__DOT__core2__DOT__alu_lts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5138064904413881659ull);
    vlSelf->multi_core_top__DOT__core2__DOT__clear_prefetched_high_word_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14440140570367389446ull);
    vlSelf->multi_core_top__DOT__core2__DOT__cpuregs_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1285427075418639429ull);
    vlSelf->multi_core_top__DOT__core2__DOT__cpuregs_wrdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6412810914275816944ull);
    vlSelf->multi_core_top__DOT__core2__DOT__cpuregs_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16825326314960090451ull);
    vlSelf->multi_core_top__DOT__core2__DOT__cpuregs_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5806856144511477793ull);
    vlSelf->multi_core_top__DOT__core2__DOT__decoded_rs = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11669448474047219234ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 363648152386189864ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3427083807277515422ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4617316329901203073ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1274166410872543104ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3662965367914314371ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1244591538994520613ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1213876159902967913ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16343188530812995386ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8474874814433083973ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7338948651262384330ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6346665805143873648ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2301184940134187767ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12688961352083743698ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12790480921550415915ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3520891773829250312ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2905643060907605153ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3674962808181428332ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__dividend = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1061742825079772153ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__divisor = VL_SCOPED_RAND_RESET_Q(63, __VscopeHash, 5752377683493459646ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16585493281147451675ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16996536001995180227ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__running = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2597024665974192304ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__outsign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7373940529053914327ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6254003542147729636ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8611368678169550139ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5817798864370238377ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13071959421655452323ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10364771364288138206ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16226451151041197088ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4091759022294411984ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16696460095739837886ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5298119882681639472ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3351356225747137605ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13321109194264932862ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4922843876756234011ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7434898504957039772ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12972287182268644182ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3813774128677920596ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7588411594369829920ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10524469104733435536ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14705986915312480484ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4579306055358103376ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9712232518077622848ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11669339542706093768ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12244770998958310585ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__rd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12247829895978829054ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__rdx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6140937254070134084ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2381255567544739364ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5814688820221907365ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12822886770013064869ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12643958728755656226ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5201744750023463337ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9833666210304349192ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8855039960802761884ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10184059284491240648ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 838386105877481706ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12011162667274856258ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10988882691529495616ull);
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c613898__0 = 0;
    vlSelf->multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c345fbb__0 = 0;
    vlSelf->multi_core_top__DOT__core1__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10966122481250034280ull);
    vlSelf->multi_core_top__DOT__core1__DOT__resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7666595360034151274ull);
    vlSelf->multi_core_top__DOT__core1__DOT__trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7248023405001259283ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6535436438531851902ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12778326733312088505ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 62957816241130064ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12003373141087467539ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 51466772693302280ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6760878922633614799ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1145864889320862811ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_la_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9746850517258130516ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_la_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 127490459681732309ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_la_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15749011896475944544ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_la_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6894065123628704817ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_la_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2007338341714799712ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 143788395612180114ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2517611999168476836ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5847966058629177895ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3667343203489900577ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6815354062553385722ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 948668121261934820ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18420090102671247105ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10435677982626187401ull);
    vlSelf->multi_core_top__DOT__core1__DOT__irq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15176339040026417676ull);
    vlSelf->multi_core_top__DOT__core1__DOT__eoi = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14320602499591764641ull);
    vlSelf->multi_core_top__DOT__core1__DOT__trace_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1120654085716586574ull);
    vlSelf->multi_core_top__DOT__core1__DOT__trace_data = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 16313185065418764701ull);
    vlSelf->multi_core_top__DOT__core1__DOT__count_cycle = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8083608864501877680ull);
    vlSelf->multi_core_top__DOT__core1__DOT__count_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4753798225861450684ull);
    vlSelf->multi_core_top__DOT__core1__DOT__reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16573320988536393411ull);
    vlSelf->multi_core_top__DOT__core1__DOT__reg_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18277867806202678177ull);
    vlSelf->multi_core_top__DOT__core1__DOT__reg_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12123452110958567155ull);
    vlSelf->multi_core_top__DOT__core1__DOT__reg_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13736332191688190898ull);
    vlSelf->multi_core_top__DOT__core1__DOT__reg_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16238938822780556249ull);
    vlSelf->multi_core_top__DOT__core1__DOT__reg_sh = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16882614858525559912ull);
    vlSelf->multi_core_top__DOT__core1__DOT__next_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13650080457101506495ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11967023040127557662ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_insn_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10156473955810496711ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5593401069987396613ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10599825684860219322ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 231887946369367052ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8202340682505403320ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8319944769609543839ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4821802596624259466ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12851050116280355068ull);
    vlSelf->multi_core_top__DOT__core1__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1944885235254490959ull);
    vlSelf->multi_core_top__DOT__core1__DOT__irq_delay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16682428099244714966ull);
    vlSelf->multi_core_top__DOT__core1__DOT__irq_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8491438725724077517ull);
    vlSelf->multi_core_top__DOT__core1__DOT__irq_mask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16439890480055766080ull);
    vlSelf->multi_core_top__DOT__core1__DOT__irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8043827704476757667ull);
    vlSelf->multi_core_top__DOT__core1__DOT__timer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1656256787738953050ull);
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->multi_core_top__DOT__core1__DOT__cpuregs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9840878307781179534ull);
    }
    vlSelf->multi_core_top__DOT__core1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14135291311224278065ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_mul_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15323810787101573936ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_mul_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8172390513156279570ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_mul_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6229476081413389303ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_mul_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7105645264069323639ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_div_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12144371285969639351ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_div_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3924226886564980079ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_div_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2802257182199433753ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_div_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 722909650023661392ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_int_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12182884992096753922ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_int_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10382344834686962649ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_int_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2930494925105988219ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_int_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5791739466303392608ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2512173093824420902ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_wordsize = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17137390427261126987ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_rdata_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4548864218055195100ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14751119417979775696ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_do_prefetch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6493515464501918437ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11612474736954286143ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12335082208978706516ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2287280683057830203ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_xfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3361379806287269131ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_la_secondword = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4504718650789674099ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_la_firstword_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9127802951436337131ull);
    vlSelf->multi_core_top__DOT__core1__DOT__last_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17842198922594808089ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_la_firstword = 0U;
    ;
    vlSelf->multi_core_top__DOT__core1__DOT__mem_la_firstword_xfer = 0U;
    ;
    vlSelf->multi_core_top__DOT__core1__DOT__prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14595636445757003834ull);
    vlSelf->multi_core_top__DOT__core1__DOT__clear_prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9623564009341735129ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_16bit_buffer = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16977522973385778981ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_rdata_latched_noshuffle = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5747042436902780469ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_rdata_latched = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15294496472034631986ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_la_use_prefetched_high_word = 0U;
    ;
    vlSelf->multi_core_top__DOT__core1__DOT__mem_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15537506510294384119ull);
    vlSelf->multi_core_top__DOT__core1__DOT__mem_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1899319459992257365ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_lui = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15674622187958650493ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16818670960522010497ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7353171958217473350ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17848160759802305952ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_beq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14027259033661616608ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_bne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6244922462051672681ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_blt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10497402291859278460ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11537712529244918023ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_bltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12621741644364138507ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1799716639659826010ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030174845055657898ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14310162891407405622ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10446937941751433587ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_lbu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10365716022555707799ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7634692384940184219ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_sb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16333066444868538918ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_sh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2155888070971920058ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18233209607764677951ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_addi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10802561873825306426ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_slti = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 870313227963610543ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_sltiu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7303086858567761398ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_xori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10505042080299516130ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_ori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10212472600722982886ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9332421225995353293ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_slli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11923983363367903585ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_srli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16261416144019496121ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16189011146946732763ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1028273162174979393ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2420370594381603215ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_sll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 834515583296883957ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15185626462838416806ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14045088085987891684ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13139361481438594189ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_srl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9039992783937629814ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 67503719279448891ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_or = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6181625783319901420ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_and = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17099107705559240529ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_rdcycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16284553853592754345ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_rdcycleh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7359965691835807393ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_rdinstr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13015077037837727501ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11523121069985530608ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_ecall_ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8195802527641207702ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_fence = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2721575072800341364ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_getq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2944900655224059305ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_setq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9983079231373831156ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_retirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3588683785534389182ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_maskirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5230296649564587530ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9661414438653373586ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_timer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11705429000354341696ull);
    vlSelf->multi_core_top__DOT__core1__DOT__instr_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 387533944817394052ull);
    vlSelf->multi_core_top__DOT__core1__DOT__decoded_rd = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3103635775142786726ull);
    vlSelf->multi_core_top__DOT__core1__DOT__decoded_rs1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12106456637727866330ull);
    vlSelf->multi_core_top__DOT__core1__DOT__decoded_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8775587849633605607ull);
    vlSelf->multi_core_top__DOT__core1__DOT__decoded_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14685337695978775201ull);
    vlSelf->multi_core_top__DOT__core1__DOT__decoded_imm_j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12454307674719979226ull);
    vlSelf->multi_core_top__DOT__core1__DOT__decoder_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7058535843586421535ull);
    vlSelf->multi_core_top__DOT__core1__DOT__decoder_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18381698056187932155ull);
    vlSelf->multi_core_top__DOT__core1__DOT__decoder_pseudo_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8563142383613352147ull);
    vlSelf->multi_core_top__DOT__core1__DOT__decoder_pseudo_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16906502485548018076ull);
    vlSelf->multi_core_top__DOT__core1__DOT__compressed_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9976600141631759815ull);
    vlSelf->multi_core_top__DOT__core1__DOT__is_lui_auipc_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8818189957903190458ull);
    vlSelf->multi_core_top__DOT__core1__DOT__is_lb_lh_lw_lbu_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2899343924878445901ull);
    vlSelf->multi_core_top__DOT__core1__DOT__is_slli_srli_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13577576816403753445ull);
    vlSelf->multi_core_top__DOT__core1__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5590305635092319166ull);
    vlSelf->multi_core_top__DOT__core1__DOT__is_sb_sh_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2894904953616576259ull);
    vlSelf->multi_core_top__DOT__core1__DOT__is_sll_srl_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4829351790576685908ull);
    vlSelf->multi_core_top__DOT__core1__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6250839492538148797ull);
    vlSelf->multi_core_top__DOT__core1__DOT__is_slti_blt_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13141523937131717518ull);
    vlSelf->multi_core_top__DOT__core1__DOT__is_sltiu_bltu_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2133958409323949354ull);
    vlSelf->multi_core_top__DOT__core1__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10407563055671467685ull);
    vlSelf->multi_core_top__DOT__core1__DOT__is_lbu_lhu_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1921756065484279103ull);
    vlSelf->multi_core_top__DOT__core1__DOT__is_alu_reg_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16344444875522222112ull);
    vlSelf->multi_core_top__DOT__core1__DOT__is_alu_reg_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10393857845401475397ull);
    vlSelf->multi_core_top__DOT__core1__DOT__is_compare = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9698376482776342337ull);
    vlSelf->multi_core_top__DOT__core1__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8739881832733082989ull);
    vlSelf->multi_core_top__DOT__core1__DOT__new_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2790252535904804083ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14401312481508348666ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17096398874587491574ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2792561533549687017ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2463901583986826325ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3596420488118247504ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_rs1val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3963212547103388778ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_rs2val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3135930435819483213ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_rs1val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 330724166266101079ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_rs2val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4148701264678794415ull);
    vlSelf->multi_core_top__DOT__core1__DOT__q_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7812415688626929494ull);
    vlSelf->multi_core_top__DOT__core1__DOT__q_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9666670827484416964ull);
    vlSelf->multi_core_top__DOT__core1__DOT__q_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8410704146339991032ull);
    vlSelf->multi_core_top__DOT__core1__DOT__q_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14810837680532045761ull);
    vlSelf->multi_core_top__DOT__core1__DOT__q_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2540548074097053381ull);
    vlSelf->multi_core_top__DOT__core1__DOT__q_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13501573868738824911ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6300935079591083016ull);
    vlSelf->multi_core_top__DOT__core1__DOT__launch_next_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14274209937510464954ull);
    vlSelf->multi_core_top__DOT__core1__DOT__dbg_valid_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11309073078665019532ull);
    vlSelf->multi_core_top__DOT__core1__DOT__cached_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3521703352395156759ull);
    vlSelf->multi_core_top__DOT__core1__DOT__cached_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15255817639405599762ull);
    vlSelf->multi_core_top__DOT__core1__DOT__cached_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5870582960861628566ull);
    vlSelf->multi_core_top__DOT__core1__DOT__cached_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13990970605635632074ull);
    vlSelf->multi_core_top__DOT__core1__DOT__cached_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4325553609084584335ull);
    vlSelf->multi_core_top__DOT__core1__DOT__cached_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7814765524784966354ull);
    vlSelf->multi_core_top__DOT__core1__DOT__cpu_state = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12779752299802396722ull);
    vlSelf->multi_core_top__DOT__core1__DOT__irq_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8242989013874598628ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->multi_core_top__DOT__core1__DOT__dbg_ascii_state, __VscopeHash, 4487497374490695970ull);
    vlSelf->multi_core_top__DOT__core1__DOT__set_mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1667482953653238395ull);
    vlSelf->multi_core_top__DOT__core1__DOT__set_mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14876780385087716659ull);
    vlSelf->multi_core_top__DOT__core1__DOT__set_mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2818442031798911137ull);
    vlSelf->multi_core_top__DOT__core1__DOT__latched_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10906933098914669406ull);
    vlSelf->multi_core_top__DOT__core1__DOT__latched_stalu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13070546882717566805ull);
    vlSelf->multi_core_top__DOT__core1__DOT__latched_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10592377853976695821ull);
    vlSelf->multi_core_top__DOT__core1__DOT__latched_compr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13532973631991373230ull);
    vlSelf->multi_core_top__DOT__core1__DOT__latched_trace = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10652840637833248735ull);
    vlSelf->multi_core_top__DOT__core1__DOT__latched_is_lu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13596275655524419191ull);
    vlSelf->multi_core_top__DOT__core1__DOT__latched_is_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2540412624392455873ull);
    vlSelf->multi_core_top__DOT__core1__DOT__latched_is_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11477851700185992949ull);
    vlSelf->multi_core_top__DOT__core1__DOT__latched_rd = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18027436442365902854ull);
    vlSelf->multi_core_top__DOT__core1__DOT__current_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3296743242368130387ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_timeout_counter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8493705569741542378ull);
    vlSelf->multi_core_top__DOT__core1__DOT__pcpi_timeout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6582184396066330243ull);
    vlSelf->multi_core_top__DOT__core1__DOT__next_irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8950967849115227401ull);
    vlSelf->multi_core_top__DOT__core1__DOT__do_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4879542380938698370ull);
    vlSelf->multi_core_top__DOT__core1__DOT__alu_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15584878747966367439ull);
    vlSelf->multi_core_top__DOT__core1__DOT__alu_out_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6790631974839395080ull);
    vlSelf->multi_core_top__DOT__core1__DOT__alu_out_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6398862573664973392ull);
    vlSelf->multi_core_top__DOT__core1__DOT__alu_out_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7708328360103989081ull);
    vlSelf->multi_core_top__DOT__core1__DOT__alu_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14306364857336637579ull);
    vlSelf->multi_core_top__DOT__core1__DOT__alu_wait_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8283748337643192712ull);
    vlSelf->multi_core_top__DOT__core1__DOT__alu_add_sub = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4065003080496513302ull);
    vlSelf->multi_core_top__DOT__core1__DOT__alu_shl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12969112533176920247ull);
    vlSelf->multi_core_top__DOT__core1__DOT__alu_shr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16681242298090418150ull);
    vlSelf->multi_core_top__DOT__core1__DOT__alu_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4221834245911940389ull);
    vlSelf->multi_core_top__DOT__core1__DOT__alu_ltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5072820343677835320ull);
    vlSelf->multi_core_top__DOT__core1__DOT__alu_lts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6062077369066787827ull);
    vlSelf->multi_core_top__DOT__core1__DOT__clear_prefetched_high_word_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13147298981337415492ull);
    vlSelf->multi_core_top__DOT__core1__DOT__cpuregs_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5126219183107789363ull);
    vlSelf->multi_core_top__DOT__core1__DOT__cpuregs_wrdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10277952188730640746ull);
    vlSelf->multi_core_top__DOT__core1__DOT__cpuregs_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12057258504135880738ull);
    vlSelf->multi_core_top__DOT__core1__DOT__cpuregs_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10108870317705806522ull);
    vlSelf->multi_core_top__DOT__core1__DOT__decoded_rs = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11455239809753330178ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11594460505270554350ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16537955690746400256ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16201467122356614227ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18190196714350486046ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9309352981102615403ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15144386901136134119ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15720735171858318957ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1904617463022000017ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1182748674825293611ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1931360216873480530ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15603878069295050822ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14974227440919555697ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17222266701698094817ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12925118753398157822ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1645031724045584423ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13157000911612647733ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7672544855567650395ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__dividend = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13240578191411080620ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__divisor = VL_SCOPED_RAND_RESET_Q(63, __VscopeHash, 3190731852393439827ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11220625161285931822ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8338757722227641862ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__running = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14227369466135787886ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__outsign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9532802481539976991ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13856778225340781894ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2305461641158358745ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6247880498697259960ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1313139005697920008ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7386121591416614202ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 666222764318575481ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14855534989520608070ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13806471151245220797ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16139939827625145237ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5509911058700640010ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12860201138782235407ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8526253743840914614ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9554210846586057846ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3520766152040413852ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13561495684999034864ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16911019476378739066ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7054932284948604244ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7714126678458865978ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7169177026502870064ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10462243103990427202ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16426042346903159400ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5014121393168193446ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__rd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12394512843852969974ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__rdx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7613372429249855847ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8545490349679447729ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5629251193363787142ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5274507486266009088ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8141696522293086030ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11119761349547698356ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14586510299047760267ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9658519795975766539ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13075496794867091541ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3590270515456629696ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6750660105543495120ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4756242206264996327ull);
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c613898__0 = 0;
    vlSelf->multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c345fbb__0 = 0;
    vlSelf->multi_core_top__DOT__core0__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4618775776658823824ull);
    vlSelf->multi_core_top__DOT__core0__DOT__resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5270582018099660523ull);
    vlSelf->multi_core_top__DOT__core0__DOT__trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11034182413759765448ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16165138843667488466ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14125961864112987792ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5572610043734846931ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9967810201233934896ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16135792242539116495ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16023265962032384477ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11775724155453594431ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_la_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7747831423058389576ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_la_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4104037685338639473ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_la_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16209196719866194900ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_la_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7000129806050733401ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_la_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13940290991590841016ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15025876002524318689ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5336013805746733528ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13940631781377662179ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15801374209075789954ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8114451851330402119ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3244752631014206644ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10428813436083562211ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8699513843722725540ull);
    vlSelf->multi_core_top__DOT__core0__DOT__irq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14049463179090200807ull);
    vlSelf->multi_core_top__DOT__core0__DOT__eoi = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16498190502398048004ull);
    vlSelf->multi_core_top__DOT__core0__DOT__trace_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6985739947879312035ull);
    vlSelf->multi_core_top__DOT__core0__DOT__trace_data = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 5049915678691346361ull);
    vlSelf->multi_core_top__DOT__core0__DOT__count_cycle = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11861355318273180742ull);
    vlSelf->multi_core_top__DOT__core0__DOT__count_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15285438257997451185ull);
    vlSelf->multi_core_top__DOT__core0__DOT__reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5874110690574063649ull);
    vlSelf->multi_core_top__DOT__core0__DOT__reg_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8236329512024110887ull);
    vlSelf->multi_core_top__DOT__core0__DOT__reg_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7040660039379505508ull);
    vlSelf->multi_core_top__DOT__core0__DOT__reg_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12471552249733031681ull);
    vlSelf->multi_core_top__DOT__core0__DOT__reg_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9136330500436278961ull);
    vlSelf->multi_core_top__DOT__core0__DOT__reg_sh = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13112873204154829492ull);
    vlSelf->multi_core_top__DOT__core0__DOT__next_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12953799128804423542ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14291709758751387448ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_insn_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5870589222459944858ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 961353641065146617ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6206513157371205422ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4954440800012448788ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1851905225461280065ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7633952661742358304ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9184398068994273228ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8191862218944091458ull);
    vlSelf->multi_core_top__DOT__core0__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3015892139461429205ull);
    vlSelf->multi_core_top__DOT__core0__DOT__irq_delay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6007165030993775247ull);
    vlSelf->multi_core_top__DOT__core0__DOT__irq_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10663412583699860363ull);
    vlSelf->multi_core_top__DOT__core0__DOT__irq_mask = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16155368585372655244ull);
    vlSelf->multi_core_top__DOT__core0__DOT__irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1848656687526324312ull);
    vlSelf->multi_core_top__DOT__core0__DOT__timer = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9125948231984706577ull);
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->multi_core_top__DOT__core0__DOT__cpuregs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8589973369426626355ull);
    }
    vlSelf->multi_core_top__DOT__core0__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5761887805374165136ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_mul_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3146243067675339621ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_mul_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1757184207038972799ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_mul_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10740476031713871459ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_mul_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13054145761681023985ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_div_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14686882804781858846ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_div_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2482036937875200308ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_div_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6245234814418677996ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_div_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3445640366330347726ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_int_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1721075957873687989ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_int_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18362600344713044994ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_int_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9519748397102124145ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_int_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2342263278380811067ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6011424340033379444ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_wordsize = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6534773644455718009ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_rdata_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3224461557303288849ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10151303489526270406ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_do_prefetch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1725458788653406283ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9194110707650664236ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9516833592998131785ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7505235227168403967ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_xfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7402646553990501290ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_la_secondword = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 195546795087989596ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_la_firstword_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12708644003769778546ull);
    vlSelf->multi_core_top__DOT__core0__DOT__last_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9201444366974464123ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_la_firstword = 0U;
    ;
    vlSelf->multi_core_top__DOT__core0__DOT__mem_la_firstword_xfer = 0U;
    ;
    vlSelf->multi_core_top__DOT__core0__DOT__prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5853028192772585880ull);
    vlSelf->multi_core_top__DOT__core0__DOT__clear_prefetched_high_word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9558170849610963650ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_16bit_buffer = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2493272988695589158ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_rdata_latched_noshuffle = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8318222373962047473ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_rdata_latched = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12068754649445356211ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_la_use_prefetched_high_word = 0U;
    ;
    vlSelf->multi_core_top__DOT__core0__DOT__mem_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3251098589651720605ull);
    vlSelf->multi_core_top__DOT__core0__DOT__mem_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11226202923937061119ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_lui = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5304591864260728883ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4440784618852567805ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10606775090671937812ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 488720433123602006ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_beq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3197922381035912315ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_bne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3171188693647709337ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_blt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15386786098070027542ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16336486688215682615ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_bltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16338978188098734574ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18323168855848575246ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11632483064797496254ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2311907861286002637ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12916759795953166704ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_lbu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18206217477507024301ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17667909767447480768ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_sb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9335336345209941215ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_sh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7967075980218771898ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7662647737371641671ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_addi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12334607251564523327ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_slti = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3760724268974264390ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_sltiu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8118522327910989196ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_xori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6623367917417018782ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_ori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1875030001440442817ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12815964158293846305ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_slli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5813690636426270303ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_srli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2674880493836150850ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2196998763542755988ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3972338446227168366ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13934829483251784585ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_sll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7225489960417191465ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2413630491265795923ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9276431738988497926ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17065778041945573653ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_srl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13319770209454626390ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17083966852448295975ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_or = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 446424450026801275ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_and = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15583105496818829669ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_rdcycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3344326578637548846ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_rdcycleh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16791455376154241729ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_rdinstr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17934525706203967840ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7522612999057070157ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_ecall_ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5042926167702050683ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_fence = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12141644155442314054ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_getq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11860444939196907362ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_setq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8907304914361922860ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_retirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12113337054675696975ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_maskirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 661785907592408093ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7760164188880363479ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_timer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9665953740346289330ull);
    vlSelf->multi_core_top__DOT__core0__DOT__instr_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9337380882370806483ull);
    vlSelf->multi_core_top__DOT__core0__DOT__decoded_rd = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9531221698581781419ull);
    vlSelf->multi_core_top__DOT__core0__DOT__decoded_rs1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14434787001220477635ull);
    vlSelf->multi_core_top__DOT__core0__DOT__decoded_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16441113020049470952ull);
    vlSelf->multi_core_top__DOT__core0__DOT__decoded_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 554197666726483243ull);
    vlSelf->multi_core_top__DOT__core0__DOT__decoded_imm_j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2189181925686324152ull);
    vlSelf->multi_core_top__DOT__core0__DOT__decoder_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5860029470714468687ull);
    vlSelf->multi_core_top__DOT__core0__DOT__decoder_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15899611146181757917ull);
    vlSelf->multi_core_top__DOT__core0__DOT__decoder_pseudo_trigger = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12934159661316003179ull);
    vlSelf->multi_core_top__DOT__core0__DOT__decoder_pseudo_trigger_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8019408414686553708ull);
    vlSelf->multi_core_top__DOT__core0__DOT__compressed_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16096663301557732896ull);
    vlSelf->multi_core_top__DOT__core0__DOT__is_lui_auipc_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15399887565662494535ull);
    vlSelf->multi_core_top__DOT__core0__DOT__is_lb_lh_lw_lbu_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1371675270931104710ull);
    vlSelf->multi_core_top__DOT__core0__DOT__is_slli_srli_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16904691055082201869ull);
    vlSelf->multi_core_top__DOT__core0__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16642331908703467348ull);
    vlSelf->multi_core_top__DOT__core0__DOT__is_sb_sh_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 324004800683288749ull);
    vlSelf->multi_core_top__DOT__core0__DOT__is_sll_srl_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 663171816632999778ull);
    vlSelf->multi_core_top__DOT__core0__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13266869219964851919ull);
    vlSelf->multi_core_top__DOT__core0__DOT__is_slti_blt_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1442417653336081252ull);
    vlSelf->multi_core_top__DOT__core0__DOT__is_sltiu_bltu_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 904074566160150494ull);
    vlSelf->multi_core_top__DOT__core0__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17348027409083531779ull);
    vlSelf->multi_core_top__DOT__core0__DOT__is_lbu_lhu_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12033574998459603897ull);
    vlSelf->multi_core_top__DOT__core0__DOT__is_alu_reg_imm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4336036409483406562ull);
    vlSelf->multi_core_top__DOT__core0__DOT__is_alu_reg_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8724813490910387666ull);
    vlSelf->multi_core_top__DOT__core0__DOT__is_compare = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13747796938821784842ull);
    vlSelf->multi_core_top__DOT__core0__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2246906594503843617ull);
    vlSelf->multi_core_top__DOT__core0__DOT__new_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17574408187268113779ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16162277371145061353ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6374160682522809089ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15228444002117419002ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13821826523296139095ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4304610350872815445ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_rs1val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7026290918068541115ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_rs2val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8349244500087508331ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_rs1val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8418046780399880714ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_rs2val_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13979388561203933074ull);
    vlSelf->multi_core_top__DOT__core0__DOT__q_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16918543157632798773ull);
    vlSelf->multi_core_top__DOT__core0__DOT__q_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7238682767459889838ull);
    vlSelf->multi_core_top__DOT__core0__DOT__q_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3843279200450567376ull);
    vlSelf->multi_core_top__DOT__core0__DOT__q_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5366880449098592046ull);
    vlSelf->multi_core_top__DOT__core0__DOT__q_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2757342552524896597ull);
    vlSelf->multi_core_top__DOT__core0__DOT__q_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1606409593505240928ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_next = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1514882632309211185ull);
    vlSelf->multi_core_top__DOT__core0__DOT__launch_next_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9047569959471121635ull);
    vlSelf->multi_core_top__DOT__core0__DOT__dbg_valid_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14439326558268136845ull);
    vlSelf->multi_core_top__DOT__core0__DOT__cached_ascii_instr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1911642721787246949ull);
    vlSelf->multi_core_top__DOT__core0__DOT__cached_insn_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9289097619382835040ull);
    vlSelf->multi_core_top__DOT__core0__DOT__cached_insn_opcode = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7716754893317253961ull);
    vlSelf->multi_core_top__DOT__core0__DOT__cached_insn_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9108518493006527740ull);
    vlSelf->multi_core_top__DOT__core0__DOT__cached_insn_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5011589359370938837ull);
    vlSelf->multi_core_top__DOT__core0__DOT__cached_insn_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8917968587206363481ull);
    vlSelf->multi_core_top__DOT__core0__DOT__cpu_state = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5766779283286730165ull);
    vlSelf->multi_core_top__DOT__core0__DOT__irq_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1273527295023626359ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->multi_core_top__DOT__core0__DOT__dbg_ascii_state, __VscopeHash, 8006907294990451471ull);
    vlSelf->multi_core_top__DOT__core0__DOT__set_mem_do_rinst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9202433082107375105ull);
    vlSelf->multi_core_top__DOT__core0__DOT__set_mem_do_rdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10163108185944611886ull);
    vlSelf->multi_core_top__DOT__core0__DOT__set_mem_do_wdata = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14806906880139185508ull);
    vlSelf->multi_core_top__DOT__core0__DOT__latched_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9203525656862007336ull);
    vlSelf->multi_core_top__DOT__core0__DOT__latched_stalu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3371626822917365889ull);
    vlSelf->multi_core_top__DOT__core0__DOT__latched_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7348734966629768499ull);
    vlSelf->multi_core_top__DOT__core0__DOT__latched_compr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2612019489202024922ull);
    vlSelf->multi_core_top__DOT__core0__DOT__latched_trace = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4295284284041823719ull);
    vlSelf->multi_core_top__DOT__core0__DOT__latched_is_lu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1570037956746653964ull);
    vlSelf->multi_core_top__DOT__core0__DOT__latched_is_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16760367780098172714ull);
    vlSelf->multi_core_top__DOT__core0__DOT__latched_is_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4434114305482667201ull);
    vlSelf->multi_core_top__DOT__core0__DOT__latched_rd = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1730535001552422728ull);
    vlSelf->multi_core_top__DOT__core0__DOT__current_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9098781558414964728ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_timeout_counter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6056736865011088218ull);
    vlSelf->multi_core_top__DOT__core0__DOT__pcpi_timeout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6162977912099309980ull);
    vlSelf->multi_core_top__DOT__core0__DOT__next_irq_pending = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9670574042769252711ull);
    vlSelf->multi_core_top__DOT__core0__DOT__do_waitirq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18272022137925572143ull);
    vlSelf->multi_core_top__DOT__core0__DOT__alu_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5597940012057314807ull);
    vlSelf->multi_core_top__DOT__core0__DOT__alu_out_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12972906040592523040ull);
    vlSelf->multi_core_top__DOT__core0__DOT__alu_out_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12651921581996109260ull);
    vlSelf->multi_core_top__DOT__core0__DOT__alu_out_0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3899821581805112304ull);
    vlSelf->multi_core_top__DOT__core0__DOT__alu_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5469490947731266940ull);
    vlSelf->multi_core_top__DOT__core0__DOT__alu_wait_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16388373614516827752ull);
    vlSelf->multi_core_top__DOT__core0__DOT__alu_add_sub = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10035941508689225242ull);
    vlSelf->multi_core_top__DOT__core0__DOT__alu_shl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3276092711181420391ull);
    vlSelf->multi_core_top__DOT__core0__DOT__alu_shr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16276940824005618558ull);
    vlSelf->multi_core_top__DOT__core0__DOT__alu_eq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10867940354590043327ull);
    vlSelf->multi_core_top__DOT__core0__DOT__alu_ltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3691185520656163231ull);
    vlSelf->multi_core_top__DOT__core0__DOT__alu_lts = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14352700886393151877ull);
    vlSelf->multi_core_top__DOT__core0__DOT__clear_prefetched_high_word_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11963749868587568562ull);
    vlSelf->multi_core_top__DOT__core0__DOT__cpuregs_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12064789256428308188ull);
    vlSelf->multi_core_top__DOT__core0__DOT__cpuregs_wrdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12168386222281366816ull);
    vlSelf->multi_core_top__DOT__core0__DOT__cpuregs_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3645204935474165924ull);
    vlSelf->multi_core_top__DOT__core0__DOT__cpuregs_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5918424421291729741ull);
    vlSelf->multi_core_top__DOT__core0__DOT__decoded_rs = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13287643620985116628ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 455014680941405269ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16118711562817232284ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14099060626012908388ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11297256015604442325ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16190033501018766551ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4848991788746438519ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6346693279509870939ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6543378351659212675ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7175036677709009892ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1278188772951035990ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7069259257418969155ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3248627904908898830ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11626160172353983615ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12423638406879905823ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5427085357286154610ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8476153159473802315ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15597448792811793107ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__dividend = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8568037561656050156ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__divisor = VL_SCOPED_RAND_RESET_Q(63, __VscopeHash, 13780597100977877041ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13756212615096150683ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11815990443342166906ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__running = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14023382924337732558ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__outsign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10776860542476199441ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16566839665127052397ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16084043015404534392ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16930599441253675553ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2660048860348578540ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16840035935723533032ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9142362805703134312ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1688418392370393723ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12173676327885557152ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2176631999651838006ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3316089900985071032ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8590960682276819175ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7167418028031441336ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5014496522781904071ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 324945466499905820ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2590665944788465239ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8133042016831558418ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17857346418844421377ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15962720626908084414ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4253806465062574775ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4921714792502151440ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11866256939319131160ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16397839081715636012ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__rd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4941365652397609046ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__rdx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17778566646378875818ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14361764653144286097ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6437420082761831232ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__this_rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1026542778696585424ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12320594745463675314ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16978613872881723648ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3563148830370760883ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1298707254986638739ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9107618108724101802ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13152653850562327058ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8870866788768062381ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1683860680826179576ull);
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c613898__0 = 0;
    vlSelf->multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT____Vconcswap_1_h5c345fbb__0 = 0;
    vlSelf->multi_core_top__DOT__isram3__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7881538718890876362ull);
    vlSelf->multi_core_top__DOT__isram3__DOT__mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16631059955331380924ull);
    vlSelf->multi_core_top__DOT__isram3__DOT__mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5980260010366310840ull);
    vlSelf->multi_core_top__DOT__isram3__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14132651613301134018ull);
    vlSelf->multi_core_top__DOT__isram3__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7317737409129520602ull);
    vlSelf->multi_core_top__DOT__isram3__DOT__mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17601460431645596838ull);
    vlSelf->multi_core_top__DOT__isram3__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13107507535289714917ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->multi_core_top__DOT__isram3__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14561926400051533126ull);
    }
    vlSelf->multi_core_top__DOT__isram3__DOT__word_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14009829441697999049ull);
    vlSelf->multi_core_top__DOT__isram2__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5266381719908841160ull);
    vlSelf->multi_core_top__DOT__isram2__DOT__mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 982486340691694475ull);
    vlSelf->multi_core_top__DOT__isram2__DOT__mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16917682200474572388ull);
    vlSelf->multi_core_top__DOT__isram2__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9389713856581783023ull);
    vlSelf->multi_core_top__DOT__isram2__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12424651283853153795ull);
    vlSelf->multi_core_top__DOT__isram2__DOT__mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8885505670691628863ull);
    vlSelf->multi_core_top__DOT__isram2__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9377322435848615144ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->multi_core_top__DOT__isram2__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 119985372739243470ull);
    }
    vlSelf->multi_core_top__DOT__isram2__DOT__word_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6409632197601449878ull);
    vlSelf->multi_core_top__DOT__isram1__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10864802174109725870ull);
    vlSelf->multi_core_top__DOT__isram1__DOT__mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2887047484023392667ull);
    vlSelf->multi_core_top__DOT__isram1__DOT__mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6182579048949135517ull);
    vlSelf->multi_core_top__DOT__isram1__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14656201829906527763ull);
    vlSelf->multi_core_top__DOT__isram1__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3743424088089833776ull);
    vlSelf->multi_core_top__DOT__isram1__DOT__mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14514507724041736156ull);
    vlSelf->multi_core_top__DOT__isram1__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4942623705999789722ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->multi_core_top__DOT__isram1__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10594308650569628304ull);
    }
    vlSelf->multi_core_top__DOT__isram1__DOT__word_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13255947809193456595ull);
    vlSelf->multi_core_top__DOT__isram0__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16832561324059656674ull);
    vlSelf->multi_core_top__DOT__isram0__DOT__mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4979434726961344625ull);
    vlSelf->multi_core_top__DOT__isram0__DOT__mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1913122423794820912ull);
    vlSelf->multi_core_top__DOT__isram0__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10901258574050989799ull);
    vlSelf->multi_core_top__DOT__isram0__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9954726933287041670ull);
    vlSelf->multi_core_top__DOT__isram0__DOT__mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12864119668800812472ull);
    vlSelf->multi_core_top__DOT__isram0__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7079973832239202402ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->multi_core_top__DOT__isram0__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2966166544776568246ull);
    }
    vlSelf->multi_core_top__DOT__isram0__DOT__word_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15995423528602626699ull);
    vlSelf->multi_core_top__DOT__dsram__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11875761976948013324ull);
    vlSelf->multi_core_top__DOT__dsram__DOT__mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9493490487829581932ull);
    vlSelf->multi_core_top__DOT__dsram__DOT__mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 397040726264635721ull);
    vlSelf->multi_core_top__DOT__dsram__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6932737398852887344ull);
    vlSelf->multi_core_top__DOT__dsram__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7109690993644557648ull);
    vlSelf->multi_core_top__DOT__dsram__DOT__mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11430283178197245730ull);
    vlSelf->multi_core_top__DOT__dsram__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 516926878277968595ull);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->multi_core_top__DOT__dsram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16755435431747313492ull);
    }
    vlSelf->multi_core_top__DOT__dsram__DOT__word_addr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 7161618175818021642ull);
    vlSelf->multi_core_top__DOT__arb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16828482271080944682ull);
    vlSelf->multi_core_top__DOT__arb__DOT__resetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8212769776353410473ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core0_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 861787778787175402ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core0_mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14269256509757552352ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core0_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6520617634481257223ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core0_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10677639084507539715ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core0_mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15669991626562837446ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core0_mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4019662750903558048ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core0_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10957478978410628298ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core1_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1695505088055564395ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core1_mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14387375881083313699ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core1_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16282326716010765983ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core1_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5740182237764990948ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core1_mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2543280559654624399ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core1_mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8102188808720617060ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core1_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18047842696234966360ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core2_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12577896364122852725ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core2_mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9480863668135293696ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core2_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13535271840238473047ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core2_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15638489208815958023ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core2_mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14216906544124383088ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core2_mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16204103158775221378ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core2_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14193127299272316247ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core3_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7603948449602791863ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core3_mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16738170266918410143ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core3_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1499949506591284978ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core3_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15688839740264091879ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core3_mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17929761406732499198ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core3_mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16542589010255196692ull);
    vlSelf->multi_core_top__DOT__arb__DOT__core3_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1629736307746433959ull);
    vlSelf->multi_core_top__DOT__arb__DOT__mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2927477393567619928ull);
    vlSelf->multi_core_top__DOT__arb__DOT__mem_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8479394560233332520ull);
    vlSelf->multi_core_top__DOT__arb__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13656895650521239758ull);
    vlSelf->multi_core_top__DOT__arb__DOT__mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8795655348122645623ull);
    vlSelf->multi_core_top__DOT__arb__DOT__mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17771362284435795708ull);
    vlSelf->multi_core_top__DOT__arb__DOT__mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9652744981811827134ull);
    vlSelf->multi_core_top__DOT__arb__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17609177120979824828ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->multi_core_top__DOT__arb__DOT__core_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12893974791196155291ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->multi_core_top__DOT__arb__DOT__core_instr[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6798774952876428379ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->multi_core_top__DOT__arb__DOT__core_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10195893407097971425ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->multi_core_top__DOT__arb__DOT__core_wdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15812184825529775758ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->multi_core_top__DOT__arb__DOT__core_wstrb[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17377583624268350430ull);
    }
    vlSelf->multi_core_top__DOT__arb__DOT__grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2325385825084614017ull);
    vlSelf->multi_core_top__DOT__arb__DOT__bus_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16963097176287512241ull);
    vlSelf->multi_core_top__DOT__arb__DOT__next_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18140538072377793738ull);
    vlSelf->multi_core_top__DOT__arb__DOT__rr_grant = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12121711673945471819ull);
    vlSelf->multi_core_top__DOT__arb__DOT__rr_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 440606195158242724ull);
    vlSelf->multi_core_top__DOT__arb__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5876655606830588170ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_9 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__resetn__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__irq__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__multi_core_top__DOT__core3__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__multi_core_top__DOT__core2__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__multi_core_top__DOT__core1__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__multi_core_top__DOT__core0__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__multi_core_top__DOT__isram3__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__multi_core_top__DOT__isram2__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__multi_core_top__DOT__isram1__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__multi_core_top__DOT__isram0__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__multi_core_top__DOT__dsram__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__multi_core_top__DOT__arb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
