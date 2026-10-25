// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsram.h for the primary calling header

#include "Vsram__pch.h"

VL_ATTR_COLD void Vsram___024root___eval_static(Vsram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram___024root___eval_static\n"); );
    Vsram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vsram___024root___eval_initial(Vsram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram___024root___eval_initial\n"); );
    Vsram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsram___024root___eval_final(Vsram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram___024root___eval_final\n"); );
    Vsram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsram___024root___eval_settle(Vsram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram___024root___eval_settle\n"); );
    Vsram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vsram___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsram___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsram___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsram___024root___ctor_var_reset(Vsram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram___024root___ctor_var_reset\n"); );
    Vsram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1551974250180885553ull);
    vlSelf->mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6248464876150524742ull);
    vlSelf->mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 326597072690670135ull);
    vlSelf->mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5431754401481461448ull);
    vlSelf->mem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8859681292774497410ull);
    vlSelf->mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9659133473039683418ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->sram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1781288769118078659ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
