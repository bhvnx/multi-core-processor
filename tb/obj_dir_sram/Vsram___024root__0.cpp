// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsram.h for the primary calling header

#include "Vsram__pch.h"

bool Vsram___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram___024root___trigger_anySet__act\n"); );
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

void Vsram___024root___eval_nba(Vsram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram___024root___eval_nba\n"); );
    Vsram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__0___Vdly__mem_ready;
            __Vinline_0__nba_sequent__TOP__0___Vdly__mem_ready = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyVal__sram__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlyVal__sram__DOT__mem__v0 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v0 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyVal__sram__DOT__mem__v1;
            __Vinline_0__nba_sequent__TOP__0___VdlyVal__sram__DOT__mem__v1 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v1;
            __Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v1 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v1;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v1 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyVal__sram__DOT__mem__v2;
            __Vinline_0__nba_sequent__TOP__0___VdlyVal__sram__DOT__mem__v2 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v2;
            __Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v2 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v2;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v2 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyVal__sram__DOT__mem__v3;
            __Vinline_0__nba_sequent__TOP__0___VdlyVal__sram__DOT__mem__v3 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v3;
            __Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v3 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v3;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v3 = 0;
            __Vinline_0__nba_sequent__TOP__0___Vdly__mem_ready 
                = vlSelfRef.mem_ready;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v0 = 0U;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v1 = 0U;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v2 = 0U;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v3 = 0U;
            __Vinline_0__nba_sequent__TOP__0___Vdly__mem_ready = 0U;
            vlSelfRef.mem_rdata = 0U;
            if (((IData)(vlSelfRef.mem_valid) & (~ (IData)(vlSelfRef.mem_ready)))) {
                __Vinline_0__nba_sequent__TOP__0___Vdly__mem_ready = 1U;
                if ((0U == (IData)(vlSelfRef.mem_wstrb))) {
                    vlSelfRef.mem_rdata = vlSelfRef.sram__DOT__mem
                        [(0x000000ffU & (vlSelfRef.mem_addr 
                                         >> 2U))];
                } else {
                    if ((1U & (IData)(vlSelfRef.mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__0___VdlyVal__sram__DOT__mem__v0 
                            = (0x000000ffU & vlSelfRef.mem_wdata);
                        __Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v0 
                            = (0x000000ffU & (vlSelfRef.mem_addr 
                                              >> 2U));
                        __Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v0 = 1U;
                    }
                    if ((2U & (IData)(vlSelfRef.mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__0___VdlyVal__sram__DOT__mem__v1 
                            = (0x000000ffU & (vlSelfRef.mem_wdata 
                                              >> 8U));
                        __Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v1 
                            = (0x000000ffU & (vlSelfRef.mem_addr 
                                              >> 2U));
                        __Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v1 = 1U;
                    }
                    if ((4U & (IData)(vlSelfRef.mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__0___VdlyVal__sram__DOT__mem__v2 
                            = (0x000000ffU & (vlSelfRef.mem_wdata 
                                              >> 0x10U));
                        __Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v2 
                            = (0x000000ffU & (vlSelfRef.mem_addr 
                                              >> 2U));
                        __Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v2 = 1U;
                    }
                    if ((8U & (IData)(vlSelfRef.mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__0___VdlyVal__sram__DOT__mem__v3 
                            = (vlSelfRef.mem_wdata 
                               >> 0x18U);
                        __Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v3 
                            = (0x000000ffU & (vlSelfRef.mem_addr 
                                              >> 2U));
                        __Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v3 = 1U;
                    }
                }
            }
            vlSelfRef.mem_ready = __Vinline_0__nba_sequent__TOP__0___Vdly__mem_ready;
            if (__Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v0) {
                vlSelfRef.sram__DOT__mem[__Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v0] 
                    = ((0xffffff00U & vlSelfRef.sram__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v0]) 
                       | __Vinline_0__nba_sequent__TOP__0___VdlyVal__sram__DOT__mem__v0);
            }
            if (__Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v1) {
                vlSelfRef.sram__DOT__mem[__Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v1] 
                    = ((0xffff00ffU & vlSelfRef.sram__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v1]) 
                       | ((IData)(__Vinline_0__nba_sequent__TOP__0___VdlyVal__sram__DOT__mem__v1) 
                          << 8U));
            }
            if (__Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v2) {
                vlSelfRef.sram__DOT__mem[__Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v2] 
                    = ((0xff00ffffU & vlSelfRef.sram__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v2]) 
                       | ((IData)(__Vinline_0__nba_sequent__TOP__0___VdlyVal__sram__DOT__mem__v2) 
                          << 0x00000010U));
            }
            if (__Vinline_0__nba_sequent__TOP__0___VdlySet__sram__DOT__mem__v3) {
                vlSelfRef.sram__DOT__mem[__Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v3] 
                    = ((0x00ffffffU & vlSelfRef.sram__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__0___VdlyDim0__sram__DOT__mem__v3]) 
                       | ((IData)(__Vinline_0__nba_sequent__TOP__0___VdlyVal__sram__DOT__mem__v3) 
                          << 0x00000018U));
            }
        }
    }
}

void Vsram___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsram___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vsram___024root___eval_phase__act(Vsram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram___024root___eval_phase__act\n"); );
    Vsram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((IData)(vlSelfRef.clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsram___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vsram___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vsram___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsram___024root___eval_phase__nba(Vsram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram___024root___eval_phase__nba\n"); );
    Vsram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsram___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vsram___024root___eval_nba(vlSelf);
        Vsram___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vsram___024root___eval(Vsram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram___024root___eval\n"); );
    Vsram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsram___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../rtl/sram.v", 21, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsram___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../rtl/sram.v", 21, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vsram___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vsram___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vsram___024root___eval_debug_assertions(Vsram___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram___024root___eval_debug_assertions\n"); );
    Vsram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.mem_valid & 0xfeU)))) {
        Verilated::overWidthError("mem_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.mem_wstrb & 0xf0U)))) {
        Verilated::overWidthError("mem_wstrb");
    }
}
#endif  // VL_DEBUG
