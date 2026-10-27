// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmulti_core_top.h for the primary calling header

#include "Vmulti_core_top__pch.h"

void Vmulti_core_top___024root___nba_sequent__TOP__4(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___nba_sequent__TOP__4\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__running;
    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__running = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__dividend = 0;
    QData/*62:0*/ __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__divisor = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = 0;
    // Body
    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__running 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__running;
    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_div 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 0U;
    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 0U;
    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 0U;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__resetn));
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = 0U;
    if (((((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__resetn) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_valid)) 
          & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready))) 
         & (0x02000033U == (0xfe00007fU & vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn)))) {
        if ((4U == (7U & (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 1U;
        }
        if ((4U != (7U & (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            if ((5U == (7U & (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 1U;
            }
            if ((5U != (7U & (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                if ((6U == (7U & (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 1U;
                }
                if ((6U != (7U & (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    if ((7U == (7U & (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                                      >> 0x0cU)))) {
                        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = 1U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__resetn) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait 
            = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem;
        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd = 0U;
        if (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__start) {
            __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__running = 1U;
            __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                = ((((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                     | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem)) 
                    & (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
                       >> 0x1fU)) ? (- vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1)
                    : vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1);
            __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                = (0x7fffffffffffffffULL & (((((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                                               | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem)) 
                                              & (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 
                                                 >> 0x1fU))
                                              ? (- (QData)((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2)))
                                              : (QData)((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2))) 
                                            << 0x0000001fU));
            __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient = 0U;
            __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = 0x80000000U;
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__outsign 
                = ((((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                     & ((vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
                         >> 0x1fU) != (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 
                                       >> 0x1fU))) 
                    & (0U != vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2)) 
                   | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                      & (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
                         >> 0x1fU)));
        } else if (((~ (0U != vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk)) 
                    & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__running))) {
            __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__running = 0U;
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = 1U;
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = 1U;
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd 
                = (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu))
                    ? ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__outsign)
                        ? (- vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient)
                        : vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient)
                    : ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__outsign)
                        ? (- vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__dividend)
                        : vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__dividend));
        } else {
            if ((vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                 <= (QData)((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__dividend)))) {
                __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                    = (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                       - (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__divisor));
                __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
                    = (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
                       | vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk);
            }
            __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                = (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                   >> 1U);
            __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
                = (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
                   >> 1U);
        }
    } else {
        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = 0U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd = 0U;
        __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__running = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__running 
        = __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__running;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
        = __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
        = __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
        = __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
        = __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu 
        = __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_div_wait 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_div_wr 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr;
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_div_rd 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd;
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_div_ready 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__start 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait));
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_div 
        = __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem 
        = __Vdly__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                 | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu))));
}

void Vmulti_core_top___024root___nba_sequent__TOP__5(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___nba_sequent__TOP__5\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__running;
    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__running = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__dividend = 0;
    QData/*62:0*/ __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__divisor = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = 0;
    // Body
    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__running 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__running;
    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_div 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 0U;
    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 0U;
    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 0U;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__resetn));
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = 0U;
    if (((((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__resetn) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_valid)) 
          & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready))) 
         & (0x02000033U == (0xfe00007fU & vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn)))) {
        if ((4U == (7U & (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 1U;
        }
        if ((4U != (7U & (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            if ((5U == (7U & (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 1U;
            }
            if ((5U != (7U & (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                if ((6U == (7U & (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 1U;
                }
                if ((6U != (7U & (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    if ((7U == (7U & (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                                      >> 0x0cU)))) {
                        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = 1U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__resetn) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait 
            = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem;
        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd = 0U;
        if (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__start) {
            __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__running = 1U;
            __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                = ((((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                     | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem)) 
                    & (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
                       >> 0x1fU)) ? (- vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1)
                    : vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1);
            __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                = (0x7fffffffffffffffULL & (((((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                                               | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem)) 
                                              & (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 
                                                 >> 0x1fU))
                                              ? (- (QData)((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2)))
                                              : (QData)((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2))) 
                                            << 0x0000001fU));
            __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient = 0U;
            __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = 0x80000000U;
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__outsign 
                = ((((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                     & ((vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
                         >> 0x1fU) != (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 
                                       >> 0x1fU))) 
                    & (0U != vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2)) 
                   | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                      & (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
                         >> 0x1fU)));
        } else if (((~ (0U != vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk)) 
                    & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__running))) {
            __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__running = 0U;
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = 1U;
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = 1U;
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd 
                = (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu))
                    ? ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__outsign)
                        ? (- vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient)
                        : vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient)
                    : ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__outsign)
                        ? (- vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__dividend)
                        : vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__dividend));
        } else {
            if ((vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                 <= (QData)((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__dividend)))) {
                __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                    = (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                       - (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__divisor));
                __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
                    = (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
                       | vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk);
            }
            __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                = (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                   >> 1U);
            __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
                = (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
                   >> 1U);
        }
    } else {
        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = 0U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd = 0U;
        __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__running = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__running 
        = __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__running;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
        = __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
        = __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
        = __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
        = __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu 
        = __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_div_wait 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_div_wr 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr;
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_div_rd 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd;
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_div_ready 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__start 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait));
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_div 
        = __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem 
        = __Vdly__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                 | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu))));
}

void Vmulti_core_top___024root___nba_sequent__TOP__6(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___nba_sequent__TOP__6\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__running;
    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__running = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__dividend = 0;
    QData/*62:0*/ __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__divisor = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = 0;
    // Body
    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__running 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__running;
    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_div 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 0U;
    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 0U;
    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 0U;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__resetn));
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = 0U;
    if (((((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__resetn) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_valid)) 
          & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready))) 
         & (0x02000033U == (0xfe00007fU & vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn)))) {
        if ((4U == (7U & (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 1U;
        }
        if ((4U != (7U & (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            if ((5U == (7U & (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 1U;
            }
            if ((5U != (7U & (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                if ((6U == (7U & (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 1U;
                }
                if ((6U != (7U & (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    if ((7U == (7U & (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                                      >> 0x0cU)))) {
                        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = 1U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__resetn) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait 
            = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem;
        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd = 0U;
        if (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__start) {
            __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__running = 1U;
            __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                = ((((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                     | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem)) 
                    & (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
                       >> 0x1fU)) ? (- vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1)
                    : vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1);
            __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                = (0x7fffffffffffffffULL & (((((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                                               | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem)) 
                                              & (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 
                                                 >> 0x1fU))
                                              ? (- (QData)((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2)))
                                              : (QData)((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2))) 
                                            << 0x0000001fU));
            __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient = 0U;
            __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = 0x80000000U;
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__outsign 
                = ((((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                     & ((vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
                         >> 0x1fU) != (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 
                                       >> 0x1fU))) 
                    & (0U != vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2)) 
                   | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                      & (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
                         >> 0x1fU)));
        } else if (((~ (0U != vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk)) 
                    & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__running))) {
            __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__running = 0U;
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = 1U;
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = 1U;
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd 
                = (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu))
                    ? ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__outsign)
                        ? (- vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient)
                        : vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient)
                    : ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__outsign)
                        ? (- vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__dividend)
                        : vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__dividend));
        } else {
            if ((vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                 <= (QData)((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__dividend)))) {
                __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                    = (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                       - (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__divisor));
                __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
                    = (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
                       | vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk);
            }
            __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                = (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                   >> 1U);
            __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
                = (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
                   >> 1U);
        }
    } else {
        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = 0U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd = 0U;
        __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__running = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__running 
        = __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__running;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
        = __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
        = __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
        = __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
        = __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu 
        = __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_div_wait 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_div_wr 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr;
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_div_rd 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd;
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_div_ready 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__start 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait));
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_div 
        = __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem 
        = __Vdly__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                 | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu))));
}

void Vmulti_core_top___024root___nba_sequent__TOP__7(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___nba_sequent__TOP__7\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 0;
    CData/*0:0*/ __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__running;
    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__running = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__dividend = 0;
    QData/*62:0*/ __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__divisor = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient = 0;
    IData/*31:0*/ __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = 0;
    // Body
    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__running 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__running;
    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_div 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 0U;
    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 0U;
    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 0U;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__resetn));
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = 0U;
    if (((((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__resetn) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_valid)) 
          & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready))) 
         & (0x02000033U == (0xfe00007fU & vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn)))) {
        if ((4U == (7U & (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 1U;
        }
        if ((4U != (7U & (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            if ((5U == (7U & (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 1U;
            }
            if ((5U != (7U & (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                if ((6U == (7U & (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 1U;
                }
                if ((6U != (7U & (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    if ((7U == (7U & (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                                      >> 0x0cU)))) {
                        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = 1U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__resetn) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait 
            = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem;
        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd = 0U;
        if (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__start) {
            __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__running = 1U;
            __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                = ((((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                     | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem)) 
                    & (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
                       >> 0x1fU)) ? (- vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1)
                    : vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1);
            __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                = (0x7fffffffffffffffULL & (((((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                                               | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem)) 
                                              & (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 
                                                 >> 0x1fU))
                                              ? (- (QData)((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2)))
                                              : (QData)((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2))) 
                                            << 0x0000001fU));
            __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient = 0U;
            __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = 0x80000000U;
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__outsign 
                = ((((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                     & ((vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
                         >> 0x1fU) != (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 
                                       >> 0x1fU))) 
                    & (0U != vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2)) 
                   | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                      & (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
                         >> 0x1fU)));
        } else if (((~ (0U != vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk)) 
                    & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__running))) {
            __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__running = 0U;
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = 1U;
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = 1U;
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd 
                = (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                    | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu))
                    ? ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__outsign)
                        ? (- vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient)
                        : vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient)
                    : ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__outsign)
                        ? (- vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__dividend)
                        : vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__dividend));
        } else {
            if ((vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                 <= (QData)((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__dividend)))) {
                __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                    = (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                       - (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__divisor));
                __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
                    = (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
                       | vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk);
            }
            __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                = (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                   >> 1U);
            __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
                = (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
                   >> 1U);
        }
    } else {
        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr = 0U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd = 0U;
        __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__running = 0U;
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__running 
        = __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__running;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
        = __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
        = __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
        = __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
        = __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu 
        = __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_div_wait 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_div_wr 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wr;
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_div_rd 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rd;
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_div_ready 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_ready;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__start 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait));
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_div 
        = __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem 
        = __Vdly__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_any_div_rem 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
           | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu) 
              | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                 | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu))));
}

void Vmulti_core_top___024root___nba_sequent__TOP__8(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___nba_sequent__TOP__8\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_16;
    __VdfgRegularize_h6e95ff9d_0_16 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_17;
    __VdfgRegularize_h6e95ff9d_0_17 = 0;
    CData/*6:0*/ __Vdly__multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    __Vdly__multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter = 0;
    // Body
    __Vdly__multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 0U;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 0U;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 0U;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 0U;
    if ((((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__resetn) 
          & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_valid)) 
         & (0x02000033U == (0xfe00007fU & vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn)))) {
        if ((0U == (7U & (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 1U;
        }
        if ((0U != (7U & (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            if ((1U != (7U & (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                if ((2U != (7U & (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    if ((3U == (7U & (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                                      >> 0x0cU)))) {
                        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 1U;
                    }
                }
                if ((2U == (7U & (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 1U;
                }
            }
            if ((1U == (7U & (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 1U;
            }
        }
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr = 0U;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready = 0U;
    if (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish) 
         & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__resetn))) {
        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr = 1U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready = 1U;
        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd 
            = (IData)(((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh)
                        ? (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                           >> 0x00000020U) : vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rd));
    }
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul;
    __VdfgRegularize_h6e95ff9d_0_16 = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                                       | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu));
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_mul_wr 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr;
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_mul_ready 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready;
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_mul_rd 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = 0U;
    if (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__resetn) {
        if (vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting) {
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed)
                    ? VL_EXTENDS_QI(64,32, vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1)
                    : (QData)((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1)));
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed)
                    ? VL_EXTENDS_QI(64,32, vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2)
                    : (QData)((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2)));
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rd = 0ULL;
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rdx = 0ULL;
            __Vdly__multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh)
                    ? 0x0000003eU : 0x0000001eU);
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting 
                = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start)));
        } else {
            __Vdly__multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
                = (0x0000007fU & ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter) 
                                  - (IData)(1U)));
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd;
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx;
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1;
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2;
            if ((0x00000040U & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter))) {
                vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = 1U;
                vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = 1U;
            }
        }
    } else {
        vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = 1U;
    }
    __VdfgRegularize_h6e95ff9d_0_17 = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu) 
                                       | (IData)(__VdfgRegularize_h6e95ff9d_0_16));
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed 
        = __VdfgRegularize_h6e95ff9d_0_16;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
        = __Vdly__multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait));
    vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_mul_wait 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = __VdfgRegularize_h6e95ff9d_0_17;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul) 
           | (IData)(__VdfgRegularize_h6e95ff9d_0_17));
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rd;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rdx;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rs1;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__rs2;
    vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__i = 0U;
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
}

void Vmulti_core_top___024root___nba_sequent__TOP__9(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___nba_sequent__TOP__9\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_18;
    __VdfgRegularize_h6e95ff9d_0_18 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_19;
    __VdfgRegularize_h6e95ff9d_0_19 = 0;
    CData/*6:0*/ __Vdly__multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    __Vdly__multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter = 0;
    // Body
    __Vdly__multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 0U;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 0U;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 0U;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 0U;
    if ((((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__resetn) 
          & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_valid)) 
         & (0x02000033U == (0xfe00007fU & vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn)))) {
        if ((0U == (7U & (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 1U;
        }
        if ((0U != (7U & (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            if ((1U != (7U & (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                if ((2U != (7U & (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    if ((3U == (7U & (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                                      >> 0x0cU)))) {
                        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 1U;
                    }
                }
                if ((2U == (7U & (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 1U;
                }
            }
            if ((1U == (7U & (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 1U;
            }
        }
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr = 0U;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready = 0U;
    if (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish) 
         & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__resetn))) {
        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr = 1U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready = 1U;
        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd 
            = (IData)(((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh)
                        ? (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                           >> 0x00000020U) : vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__rd));
    }
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul;
    __VdfgRegularize_h6e95ff9d_0_18 = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                                       | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu));
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_mul_wr 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr;
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_mul_ready 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready;
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_mul_rd 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = 0U;
    if (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__resetn) {
        if (vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting) {
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed)
                    ? VL_EXTENDS_QI(64,32, vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1)
                    : (QData)((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1)));
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed)
                    ? VL_EXTENDS_QI(64,32, vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2)
                    : (QData)((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2)));
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__rd = 0ULL;
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__rdx = 0ULL;
            __Vdly__multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh)
                    ? 0x0000003eU : 0x0000001eU);
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting 
                = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start)));
        } else {
            __Vdly__multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
                = (0x0000007fU & ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter) 
                                  - (IData)(1U)));
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd;
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx;
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1;
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2;
            if ((0x00000040U & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter))) {
                vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = 1U;
                vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = 1U;
            }
        }
    } else {
        vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = 1U;
    }
    __VdfgRegularize_h6e95ff9d_0_19 = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu) 
                                       | (IData)(__VdfgRegularize_h6e95ff9d_0_18));
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed 
        = __VdfgRegularize_h6e95ff9d_0_18;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
        = __Vdly__multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait));
    vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_mul_wait 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = __VdfgRegularize_h6e95ff9d_0_19;
    vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul) 
           | (IData)(__VdfgRegularize_h6e95ff9d_0_19));
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
}

void Vmulti_core_top___024root___nba_sequent__TOP__10(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___nba_sequent__TOP__10\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_20;
    __VdfgRegularize_h6e95ff9d_0_20 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_21;
    __VdfgRegularize_h6e95ff9d_0_21 = 0;
    CData/*6:0*/ __Vdly__multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    __Vdly__multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter = 0;
    // Body
    __Vdly__multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 0U;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 0U;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 0U;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 0U;
    if ((((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__resetn) 
          & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_valid)) 
         & (0x02000033U == (0xfe00007fU & vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn)))) {
        if ((0U == (7U & (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 1U;
        }
        if ((0U != (7U & (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            if ((1U != (7U & (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                if ((2U != (7U & (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    if ((3U == (7U & (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                                      >> 0x0cU)))) {
                        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 1U;
                    }
                }
                if ((2U == (7U & (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 1U;
                }
            }
            if ((1U == (7U & (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 1U;
            }
        }
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr = 0U;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready = 0U;
    if (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish) 
         & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__resetn))) {
        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr = 1U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready = 1U;
        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd 
            = (IData)(((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh)
                        ? (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                           >> 0x00000020U) : vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__rd));
    }
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul;
    __VdfgRegularize_h6e95ff9d_0_20 = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                                       | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu));
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_mul_wr 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr;
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_mul_ready 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready;
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_mul_rd 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = 0U;
    if (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__resetn) {
        if (vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting) {
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed)
                    ? VL_EXTENDS_QI(64,32, vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1)
                    : (QData)((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1)));
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed)
                    ? VL_EXTENDS_QI(64,32, vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2)
                    : (QData)((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2)));
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__rd = 0ULL;
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__rdx = 0ULL;
            __Vdly__multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh)
                    ? 0x0000003eU : 0x0000001eU);
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting 
                = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start)));
        } else {
            __Vdly__multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
                = (0x0000007fU & ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter) 
                                  - (IData)(1U)));
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd;
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx;
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1;
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2;
            if ((0x00000040U & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter))) {
                vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = 1U;
                vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = 1U;
            }
        }
    } else {
        vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = 1U;
    }
    __VdfgRegularize_h6e95ff9d_0_21 = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu) 
                                       | (IData)(__VdfgRegularize_h6e95ff9d_0_20));
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed 
        = __VdfgRegularize_h6e95ff9d_0_20;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
        = __Vdly__multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait));
    vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_mul_wait 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = __VdfgRegularize_h6e95ff9d_0_21;
    vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul) 
           | (IData)(__VdfgRegularize_h6e95ff9d_0_21));
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
}

void Vmulti_core_top___024root___nba_sequent__TOP__11(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___nba_sequent__TOP__11\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_22;
    __VdfgRegularize_h6e95ff9d_0_22 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_23;
    __VdfgRegularize_h6e95ff9d_0_23 = 0;
    CData/*6:0*/ __Vdly__multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    __Vdly__multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter = 0;
    // Body
    __Vdly__multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 0U;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 0U;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 0U;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 0U;
    if ((((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__resetn) 
          & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_valid)) 
         & (0x02000033U == (0xfe00007fU & vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn)))) {
        if ((0U == (7U & (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 1U;
        }
        if ((0U != (7U & (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                          >> 0x0cU)))) {
            if ((1U != (7U & (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                if ((2U != (7U & (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    if ((3U == (7U & (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                                      >> 0x0cU)))) {
                        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 1U;
                    }
                }
                if ((2U == (7U & (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                                  >> 0x0cU)))) {
                    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 1U;
                }
            }
            if ((1U == (7U & (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                              >> 0x0cU)))) {
                vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 1U;
            }
        }
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr = 0U;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready = 0U;
    if (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish) 
         & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__resetn))) {
        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr = 1U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready = 1U;
        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd 
            = (IData)(((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh)
                        ? (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                           >> 0x00000020U) : vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__rd));
    }
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul;
    __VdfgRegularize_h6e95ff9d_0_22 = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                                       | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu));
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_mul_wr 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wr;
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_mul_ready 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_ready;
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_mul_rd 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rd;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = 0U;
    if (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__resetn) {
        if (vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting) {
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed)
                    ? VL_EXTENDS_QI(64,32, vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1)
                    : (QData)((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1)));
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed)
                    ? VL_EXTENDS_QI(64,32, vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2)
                    : (QData)((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2)));
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__rd = 0ULL;
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__rdx = 0ULL;
            __Vdly__multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh)
                    ? 0x0000003eU : 0x0000001eU);
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting 
                = (1U & (~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start)));
        } else {
            __Vdly__multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
                = (0x0000007fU & ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter) 
                                  - (IData)(1U)));
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rd;
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__rdx 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rdx;
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs1;
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__next_rs2;
            if ((0x00000040U & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter))) {
                vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_finish = 1U;
                vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = 1U;
            }
        }
    } else {
        vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_waiting = 1U;
    }
    __VdfgRegularize_h6e95ff9d_0_23 = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu) 
                                       | (IData)(__VdfgRegularize_h6e95ff9d_0_22));
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs1_signed 
        = __VdfgRegularize_h6e95ff9d_0_22;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_rs2_signed 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter 
        = __Vdly__multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_counter;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__mul_start 
        = ((~ (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait_q)) 
           & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait));
    vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_mul_wait 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_wait;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = __VdfgRegularize_h6e95ff9d_0_23;
    vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mul 
        = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul) 
           | (IData)(__VdfgRegularize_h6e95ff9d_0_23));
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
}

void Vmulti_core_top___024root___nba_sequent__TOP__16(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___nba_sequent__TOP__16\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__multi_core_top__DOT__dsram__DOT__mem_ready;
    __Vdly__multi_core_top__DOT__dsram__DOT__mem_ready = 0;
    CData/*7:0*/ __VdlyVal__multi_core_top__DOT__dsram__DOT__mem__v0;
    __VdlyVal__multi_core_top__DOT__dsram__DOT__mem__v0 = 0;
    SData/*13:0*/ __VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v0;
    __VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__multi_core_top__DOT__dsram__DOT__mem__v0;
    __VdlySet__multi_core_top__DOT__dsram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__multi_core_top__DOT__dsram__DOT__mem__v1;
    __VdlyVal__multi_core_top__DOT__dsram__DOT__mem__v1 = 0;
    SData/*13:0*/ __VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v1;
    __VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__multi_core_top__DOT__dsram__DOT__mem__v1;
    __VdlySet__multi_core_top__DOT__dsram__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__multi_core_top__DOT__dsram__DOT__mem__v2;
    __VdlyVal__multi_core_top__DOT__dsram__DOT__mem__v2 = 0;
    SData/*13:0*/ __VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v2;
    __VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__multi_core_top__DOT__dsram__DOT__mem__v2;
    __VdlySet__multi_core_top__DOT__dsram__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__multi_core_top__DOT__dsram__DOT__mem__v3;
    __VdlyVal__multi_core_top__DOT__dsram__DOT__mem__v3 = 0;
    SData/*13:0*/ __VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v3;
    __VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__multi_core_top__DOT__dsram__DOT__mem__v3;
    __VdlySet__multi_core_top__DOT__dsram__DOT__mem__v3 = 0;
    // Body
    __VdlySet__multi_core_top__DOT__dsram__DOT__mem__v0 = 0U;
    __VdlySet__multi_core_top__DOT__dsram__DOT__mem__v1 = 0U;
    __VdlySet__multi_core_top__DOT__dsram__DOT__mem__v2 = 0U;
    __VdlySet__multi_core_top__DOT__dsram__DOT__mem__v3 = 0U;
    __Vdly__multi_core_top__DOT__dsram__DOT__mem_ready 
        = vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_ready;
    __Vdly__multi_core_top__DOT__dsram__DOT__mem_ready = 0U;
    vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_rdata = 0U;
    if (((IData)(vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_valid) 
         & (~ (IData)(vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_ready)))) {
        __Vdly__multi_core_top__DOT__dsram__DOT__mem_ready = 1U;
        if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_wstrb))) {
            vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_rdata 
                = vlSelfRef.multi_core_top__DOT__dsram__DOT__mem
                [vlSelfRef.multi_core_top__DOT__dsram__DOT__word_addr];
        } else {
            if ((1U & (IData)(vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_wstrb))) {
                __VdlyVal__multi_core_top__DOT__dsram__DOT__mem__v0 
                    = (0x000000ffU & vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_wdata);
                __VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v0 
                    = vlSelfRef.multi_core_top__DOT__dsram__DOT__word_addr;
                __VdlySet__multi_core_top__DOT__dsram__DOT__mem__v0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_wstrb))) {
                __VdlyVal__multi_core_top__DOT__dsram__DOT__mem__v1 
                    = (0x000000ffU & (vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_wdata 
                                      >> 8U));
                __VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v1 
                    = vlSelfRef.multi_core_top__DOT__dsram__DOT__word_addr;
                __VdlySet__multi_core_top__DOT__dsram__DOT__mem__v1 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_wstrb))) {
                __VdlyVal__multi_core_top__DOT__dsram__DOT__mem__v2 
                    = (0x000000ffU & (vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_wdata 
                                      >> 0x10U));
                __VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v2 
                    = vlSelfRef.multi_core_top__DOT__dsram__DOT__word_addr;
                __VdlySet__multi_core_top__DOT__dsram__DOT__mem__v2 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_wstrb))) {
                __VdlyVal__multi_core_top__DOT__dsram__DOT__mem__v3 
                    = (vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_wdata 
                       >> 0x18U);
                __VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v3 
                    = vlSelfRef.multi_core_top__DOT__dsram__DOT__word_addr;
                __VdlySet__multi_core_top__DOT__dsram__DOT__mem__v3 = 1U;
            }
        }
    }
    if (__VdlySet__multi_core_top__DOT__dsram__DOT__mem__v0) {
        vlSelfRef.multi_core_top__DOT__dsram__DOT__mem[__VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.multi_core_top__DOT__dsram__DOT__mem
                [__VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v0]) 
               | (IData)(__VdlyVal__multi_core_top__DOT__dsram__DOT__mem__v0));
    }
    if (__VdlySet__multi_core_top__DOT__dsram__DOT__mem__v1) {
        vlSelfRef.multi_core_top__DOT__dsram__DOT__mem[__VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.multi_core_top__DOT__dsram__DOT__mem
                [__VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__multi_core_top__DOT__dsram__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__multi_core_top__DOT__dsram__DOT__mem__v2) {
        vlSelfRef.multi_core_top__DOT__dsram__DOT__mem[__VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.multi_core_top__DOT__dsram__DOT__mem
                [__VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__multi_core_top__DOT__dsram__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__multi_core_top__DOT__dsram__DOT__mem__v3) {
        vlSelfRef.multi_core_top__DOT__dsram__DOT__mem[__VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.multi_core_top__DOT__dsram__DOT__mem
                [__VdlyDim0__multi_core_top__DOT__dsram__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__multi_core_top__DOT__dsram__DOT__mem__v3) 
                  << 0x00000018U));
    }
    vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_ready 
        = __Vdly__multi_core_top__DOT__dsram__DOT__mem_ready;
    vlSelfRef.multi_core_top__DOT__dsram_rdata = vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_rdata;
    vlSelfRef.multi_core_top__DOT__dsram_ready = vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_ready;
    vlSelfRef.multi_core_top__DOT__arb__DOT__mem_rdata 
        = vlSelfRef.multi_core_top__DOT__dsram_rdata;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_rdata 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__mem_rdata;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_rdata 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__mem_rdata;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_rdata 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__mem_rdata;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_rdata 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__mem_rdata;
    vlSelfRef.multi_core_top__DOT__dsram_arb_rdata[0U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_rdata;
    vlSelfRef.multi_core_top__DOT__dsram_arb_rdata[1U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_rdata;
    vlSelfRef.multi_core_top__DOT__dsram_arb_rdata[2U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_rdata;
    vlSelfRef.multi_core_top__DOT__dsram_arb_rdata[3U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_rdata;
}

void Vmulti_core_top___024root___nba_comb__TOP__0(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___nba_comb__TOP__0\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core_mem_wstrb[0U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core_mem_wstrb[1U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core_mem_wstrb[2U];
    vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core_mem_wstrb[3U];
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
    vlSelfRef.multi_core_top__DOT__trap = ((((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__trap) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__trap) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__trap) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__trap)));
    vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core_mem_wstrb[3U];
    vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_wdata[3U];
    vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core_mem_wstrb[2U];
    vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_wdata[2U];
    vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core_mem_wstrb[1U];
    vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_wdata[1U];
    vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_wstrb 
        = vlSelfRef.multi_core_top__DOT__core_mem_wstrb[0U];
    vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_wdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_wdata[0U];
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
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_wstrb[0U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_wstrb;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_wstrb[1U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_wstrb;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_wstrb[2U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_wstrb;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_wstrb[3U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_wstrb;
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
    vlSelfRef.trap = vlSelfRef.multi_core_top__DOT__trap;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_valid[0U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_valid;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_valid[1U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_valid;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_valid[2U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_valid;
    vlSelfRef.multi_core_top__DOT__arb__DOT__core_valid[3U] 
        = vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_valid;
}

void Vmulti_core_top___024root___nba_comb__TOP__5(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___nba_comb__TOP__5\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_rdata[3U];
    vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_rdata[2U];
    vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_rdata[1U];
    vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata 
        = vlSelfRef.multi_core_top__DOT__core_mem_rdata[0U];
    vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_mem_rdata 
        = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_rdata;
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
    vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_mem_rdata 
        = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_rdata;
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
    vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_mem_rdata 
        = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_rdata;
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
    vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_mem_rdata 
        = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_rdata;
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
}

void Vmulti_core_top___024root___nba_sequent__TOP__0(Vmulti_core_top___024root* vlSelf);
void Vmulti_core_top___024root___nba_sequent__TOP__1(Vmulti_core_top___024root* vlSelf);
void Vmulti_core_top___024root___nba_sequent__TOP__2(Vmulti_core_top___024root* vlSelf);
void Vmulti_core_top___024root___nba_sequent__TOP__3(Vmulti_core_top___024root* vlSelf);

void Vmulti_core_top___024root___eval_nba(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___eval_nba\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmulti_core_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmulti_core_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmulti_core_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmulti_core_top___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmulti_core_top___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmulti_core_top___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmulti_core_top___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmulti_core_top___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmulti_core_top___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmulti_core_top___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmulti_core_top___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmulti_core_top___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__12
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__12___Vdly__multi_core_top__DOT__isram3__DOT__mem_ready;
            __Vinline_0__nba_sequent__TOP__12___Vdly__multi_core_top__DOT__isram3__DOT__mem_ready = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__12___VdlyVal__multi_core_top__DOT__isram3__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__12___VdlyVal__multi_core_top__DOT__isram3__DOT__mem__v0 = 0;
            SData/*9:0*/ __Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v0 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__12___VdlyVal__multi_core_top__DOT__isram3__DOT__mem__v1;
            __Vinline_0__nba_sequent__TOP__12___VdlyVal__multi_core_top__DOT__isram3__DOT__mem__v1 = 0;
            SData/*9:0*/ __Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v1;
            __Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v1 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v1;
            __Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v1 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__12___VdlyVal__multi_core_top__DOT__isram3__DOT__mem__v2;
            __Vinline_0__nba_sequent__TOP__12___VdlyVal__multi_core_top__DOT__isram3__DOT__mem__v2 = 0;
            SData/*9:0*/ __Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v2;
            __Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v2 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v2;
            __Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v2 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__12___VdlyVal__multi_core_top__DOT__isram3__DOT__mem__v3;
            __Vinline_0__nba_sequent__TOP__12___VdlyVal__multi_core_top__DOT__isram3__DOT__mem__v3 = 0;
            SData/*9:0*/ __Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v3;
            __Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v3 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v3;
            __Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v3 = 0;
            __Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v0 = 0U;
            __Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v1 = 0U;
            __Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v2 = 0U;
            __Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v3 = 0U;
            __Vinline_0__nba_sequent__TOP__12___Vdly__multi_core_top__DOT__isram3__DOT__mem_ready 
                = vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_ready;
            __Vinline_0__nba_sequent__TOP__12___Vdly__multi_core_top__DOT__isram3__DOT__mem_ready = 0U;
            vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_rdata = 0U;
            if (((IData)(vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_valid) 
                 & (~ (IData)(vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_ready)))) {
                __Vinline_0__nba_sequent__TOP__12___Vdly__multi_core_top__DOT__isram3__DOT__mem_ready = 1U;
                if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_wstrb))) {
                    vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_rdata 
                        = vlSelfRef.multi_core_top__DOT__isram3__DOT__mem
                        [vlSelfRef.multi_core_top__DOT__isram3__DOT__word_addr];
                } else {
                    if ((1U & (IData)(vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__12___VdlyVal__multi_core_top__DOT__isram3__DOT__mem__v0 
                            = (0x000000ffU & vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_wdata);
                        __Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v0 
                            = vlSelfRef.multi_core_top__DOT__isram3__DOT__word_addr;
                        __Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v0 = 1U;
                    }
                    if ((2U & (IData)(vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__12___VdlyVal__multi_core_top__DOT__isram3__DOT__mem__v1 
                            = (0x000000ffU & (vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_wdata 
                                              >> 8U));
                        __Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v1 
                            = vlSelfRef.multi_core_top__DOT__isram3__DOT__word_addr;
                        __Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v1 = 1U;
                    }
                    if ((4U & (IData)(vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__12___VdlyVal__multi_core_top__DOT__isram3__DOT__mem__v2 
                            = (0x000000ffU & (vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_wdata 
                                              >> 0x10U));
                        __Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v2 
                            = vlSelfRef.multi_core_top__DOT__isram3__DOT__word_addr;
                        __Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v2 = 1U;
                    }
                    if ((8U & (IData)(vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__12___VdlyVal__multi_core_top__DOT__isram3__DOT__mem__v3 
                            = (vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_wdata 
                               >> 0x18U);
                        __Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v3 
                            = vlSelfRef.multi_core_top__DOT__isram3__DOT__word_addr;
                        __Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v3 = 1U;
                    }
                }
            }
            if (__Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v0) {
                vlSelfRef.multi_core_top__DOT__isram3__DOT__mem[__Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v0] 
                    = ((0xffffff00U & vlSelfRef.multi_core_top__DOT__isram3__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v0]) 
                       | __Vinline_0__nba_sequent__TOP__12___VdlyVal__multi_core_top__DOT__isram3__DOT__mem__v0);
            }
            if (__Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v1) {
                vlSelfRef.multi_core_top__DOT__isram3__DOT__mem[__Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v1] 
                    = ((0xffff00ffU & vlSelfRef.multi_core_top__DOT__isram3__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v1]) 
                       | ((IData)(__Vinline_0__nba_sequent__TOP__12___VdlyVal__multi_core_top__DOT__isram3__DOT__mem__v1) 
                          << 8U));
            }
            if (__Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v2) {
                vlSelfRef.multi_core_top__DOT__isram3__DOT__mem[__Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v2] 
                    = ((0xff00ffffU & vlSelfRef.multi_core_top__DOT__isram3__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v2]) 
                       | ((IData)(__Vinline_0__nba_sequent__TOP__12___VdlyVal__multi_core_top__DOT__isram3__DOT__mem__v2) 
                          << 0x00000010U));
            }
            if (__Vinline_0__nba_sequent__TOP__12___VdlySet__multi_core_top__DOT__isram3__DOT__mem__v3) {
                vlSelfRef.multi_core_top__DOT__isram3__DOT__mem[__Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v3] 
                    = ((0x00ffffffU & vlSelfRef.multi_core_top__DOT__isram3__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__12___VdlyDim0__multi_core_top__DOT__isram3__DOT__mem__v3]) 
                       | ((IData)(__Vinline_0__nba_sequent__TOP__12___VdlyVal__multi_core_top__DOT__isram3__DOT__mem__v3) 
                          << 0x00000018U));
            }
            vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_ready 
                = __Vinline_0__nba_sequent__TOP__12___Vdly__multi_core_top__DOT__isram3__DOT__mem_ready;
            vlSelfRef.multi_core_top__DOT__isram_rdata[3U] 
                = vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_rdata;
            vlSelfRef.multi_core_top__DOT__isram_ready[3U] 
                = vlSelfRef.multi_core_top__DOT__isram3__DOT__mem_ready;
        }
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__13
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__13___Vdly__multi_core_top__DOT__isram2__DOT__mem_ready;
            __Vinline_0__nba_sequent__TOP__13___Vdly__multi_core_top__DOT__isram2__DOT__mem_ready = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__13___VdlyVal__multi_core_top__DOT__isram2__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__13___VdlyVal__multi_core_top__DOT__isram2__DOT__mem__v0 = 0;
            SData/*9:0*/ __Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v0 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__13___VdlyVal__multi_core_top__DOT__isram2__DOT__mem__v1;
            __Vinline_0__nba_sequent__TOP__13___VdlyVal__multi_core_top__DOT__isram2__DOT__mem__v1 = 0;
            SData/*9:0*/ __Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v1;
            __Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v1 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v1;
            __Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v1 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__13___VdlyVal__multi_core_top__DOT__isram2__DOT__mem__v2;
            __Vinline_0__nba_sequent__TOP__13___VdlyVal__multi_core_top__DOT__isram2__DOT__mem__v2 = 0;
            SData/*9:0*/ __Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v2;
            __Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v2 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v2;
            __Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v2 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__13___VdlyVal__multi_core_top__DOT__isram2__DOT__mem__v3;
            __Vinline_0__nba_sequent__TOP__13___VdlyVal__multi_core_top__DOT__isram2__DOT__mem__v3 = 0;
            SData/*9:0*/ __Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v3;
            __Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v3 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v3;
            __Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v3 = 0;
            __Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v0 = 0U;
            __Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v1 = 0U;
            __Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v2 = 0U;
            __Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v3 = 0U;
            __Vinline_0__nba_sequent__TOP__13___Vdly__multi_core_top__DOT__isram2__DOT__mem_ready 
                = vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_ready;
            __Vinline_0__nba_sequent__TOP__13___Vdly__multi_core_top__DOT__isram2__DOT__mem_ready = 0U;
            vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_rdata = 0U;
            if (((IData)(vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_valid) 
                 & (~ (IData)(vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_ready)))) {
                __Vinline_0__nba_sequent__TOP__13___Vdly__multi_core_top__DOT__isram2__DOT__mem_ready = 1U;
                if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_wstrb))) {
                    vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_rdata 
                        = vlSelfRef.multi_core_top__DOT__isram2__DOT__mem
                        [vlSelfRef.multi_core_top__DOT__isram2__DOT__word_addr];
                } else {
                    if ((1U & (IData)(vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__13___VdlyVal__multi_core_top__DOT__isram2__DOT__mem__v0 
                            = (0x000000ffU & vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_wdata);
                        __Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v0 
                            = vlSelfRef.multi_core_top__DOT__isram2__DOT__word_addr;
                        __Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v0 = 1U;
                    }
                    if ((2U & (IData)(vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__13___VdlyVal__multi_core_top__DOT__isram2__DOT__mem__v1 
                            = (0x000000ffU & (vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_wdata 
                                              >> 8U));
                        __Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v1 
                            = vlSelfRef.multi_core_top__DOT__isram2__DOT__word_addr;
                        __Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v1 = 1U;
                    }
                    if ((4U & (IData)(vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__13___VdlyVal__multi_core_top__DOT__isram2__DOT__mem__v2 
                            = (0x000000ffU & (vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_wdata 
                                              >> 0x10U));
                        __Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v2 
                            = vlSelfRef.multi_core_top__DOT__isram2__DOT__word_addr;
                        __Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v2 = 1U;
                    }
                    if ((8U & (IData)(vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__13___VdlyVal__multi_core_top__DOT__isram2__DOT__mem__v3 
                            = (vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_wdata 
                               >> 0x18U);
                        __Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v3 
                            = vlSelfRef.multi_core_top__DOT__isram2__DOT__word_addr;
                        __Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v3 = 1U;
                    }
                }
            }
            if (__Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v0) {
                vlSelfRef.multi_core_top__DOT__isram2__DOT__mem[__Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v0] 
                    = ((0xffffff00U & vlSelfRef.multi_core_top__DOT__isram2__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v0]) 
                       | __Vinline_0__nba_sequent__TOP__13___VdlyVal__multi_core_top__DOT__isram2__DOT__mem__v0);
            }
            if (__Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v1) {
                vlSelfRef.multi_core_top__DOT__isram2__DOT__mem[__Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v1] 
                    = ((0xffff00ffU & vlSelfRef.multi_core_top__DOT__isram2__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v1]) 
                       | ((IData)(__Vinline_0__nba_sequent__TOP__13___VdlyVal__multi_core_top__DOT__isram2__DOT__mem__v1) 
                          << 8U));
            }
            if (__Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v2) {
                vlSelfRef.multi_core_top__DOT__isram2__DOT__mem[__Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v2] 
                    = ((0xff00ffffU & vlSelfRef.multi_core_top__DOT__isram2__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v2]) 
                       | ((IData)(__Vinline_0__nba_sequent__TOP__13___VdlyVal__multi_core_top__DOT__isram2__DOT__mem__v2) 
                          << 0x00000010U));
            }
            if (__Vinline_0__nba_sequent__TOP__13___VdlySet__multi_core_top__DOT__isram2__DOT__mem__v3) {
                vlSelfRef.multi_core_top__DOT__isram2__DOT__mem[__Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v3] 
                    = ((0x00ffffffU & vlSelfRef.multi_core_top__DOT__isram2__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__13___VdlyDim0__multi_core_top__DOT__isram2__DOT__mem__v3]) 
                       | ((IData)(__Vinline_0__nba_sequent__TOP__13___VdlyVal__multi_core_top__DOT__isram2__DOT__mem__v3) 
                          << 0x00000018U));
            }
            vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_ready 
                = __Vinline_0__nba_sequent__TOP__13___Vdly__multi_core_top__DOT__isram2__DOT__mem_ready;
            vlSelfRef.multi_core_top__DOT__isram_rdata[2U] 
                = vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_rdata;
            vlSelfRef.multi_core_top__DOT__isram_ready[2U] 
                = vlSelfRef.multi_core_top__DOT__isram2__DOT__mem_ready;
        }
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__14
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__14___Vdly__multi_core_top__DOT__isram1__DOT__mem_ready;
            __Vinline_0__nba_sequent__TOP__14___Vdly__multi_core_top__DOT__isram1__DOT__mem_ready = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__14___VdlyVal__multi_core_top__DOT__isram1__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__14___VdlyVal__multi_core_top__DOT__isram1__DOT__mem__v0 = 0;
            SData/*9:0*/ __Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v0 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__14___VdlyVal__multi_core_top__DOT__isram1__DOT__mem__v1;
            __Vinline_0__nba_sequent__TOP__14___VdlyVal__multi_core_top__DOT__isram1__DOT__mem__v1 = 0;
            SData/*9:0*/ __Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v1;
            __Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v1 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v1;
            __Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v1 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__14___VdlyVal__multi_core_top__DOT__isram1__DOT__mem__v2;
            __Vinline_0__nba_sequent__TOP__14___VdlyVal__multi_core_top__DOT__isram1__DOT__mem__v2 = 0;
            SData/*9:0*/ __Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v2;
            __Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v2 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v2;
            __Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v2 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__14___VdlyVal__multi_core_top__DOT__isram1__DOT__mem__v3;
            __Vinline_0__nba_sequent__TOP__14___VdlyVal__multi_core_top__DOT__isram1__DOT__mem__v3 = 0;
            SData/*9:0*/ __Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v3;
            __Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v3 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v3;
            __Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v3 = 0;
            __Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v0 = 0U;
            __Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v1 = 0U;
            __Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v2 = 0U;
            __Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v3 = 0U;
            __Vinline_0__nba_sequent__TOP__14___Vdly__multi_core_top__DOT__isram1__DOT__mem_ready 
                = vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_ready;
            __Vinline_0__nba_sequent__TOP__14___Vdly__multi_core_top__DOT__isram1__DOT__mem_ready = 0U;
            vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_rdata = 0U;
            if (((IData)(vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_valid) 
                 & (~ (IData)(vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_ready)))) {
                __Vinline_0__nba_sequent__TOP__14___Vdly__multi_core_top__DOT__isram1__DOT__mem_ready = 1U;
                if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_wstrb))) {
                    vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_rdata 
                        = vlSelfRef.multi_core_top__DOT__isram1__DOT__mem
                        [vlSelfRef.multi_core_top__DOT__isram1__DOT__word_addr];
                } else {
                    if ((1U & (IData)(vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__14___VdlyVal__multi_core_top__DOT__isram1__DOT__mem__v0 
                            = (0x000000ffU & vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_wdata);
                        __Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v0 
                            = vlSelfRef.multi_core_top__DOT__isram1__DOT__word_addr;
                        __Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v0 = 1U;
                    }
                    if ((2U & (IData)(vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__14___VdlyVal__multi_core_top__DOT__isram1__DOT__mem__v1 
                            = (0x000000ffU & (vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_wdata 
                                              >> 8U));
                        __Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v1 
                            = vlSelfRef.multi_core_top__DOT__isram1__DOT__word_addr;
                        __Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v1 = 1U;
                    }
                    if ((4U & (IData)(vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__14___VdlyVal__multi_core_top__DOT__isram1__DOT__mem__v2 
                            = (0x000000ffU & (vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_wdata 
                                              >> 0x10U));
                        __Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v2 
                            = vlSelfRef.multi_core_top__DOT__isram1__DOT__word_addr;
                        __Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v2 = 1U;
                    }
                    if ((8U & (IData)(vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__14___VdlyVal__multi_core_top__DOT__isram1__DOT__mem__v3 
                            = (vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_wdata 
                               >> 0x18U);
                        __Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v3 
                            = vlSelfRef.multi_core_top__DOT__isram1__DOT__word_addr;
                        __Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v3 = 1U;
                    }
                }
            }
            if (__Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v0) {
                vlSelfRef.multi_core_top__DOT__isram1__DOT__mem[__Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v0] 
                    = ((0xffffff00U & vlSelfRef.multi_core_top__DOT__isram1__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v0]) 
                       | __Vinline_0__nba_sequent__TOP__14___VdlyVal__multi_core_top__DOT__isram1__DOT__mem__v0);
            }
            if (__Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v1) {
                vlSelfRef.multi_core_top__DOT__isram1__DOT__mem[__Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v1] 
                    = ((0xffff00ffU & vlSelfRef.multi_core_top__DOT__isram1__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v1]) 
                       | ((IData)(__Vinline_0__nba_sequent__TOP__14___VdlyVal__multi_core_top__DOT__isram1__DOT__mem__v1) 
                          << 8U));
            }
            if (__Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v2) {
                vlSelfRef.multi_core_top__DOT__isram1__DOT__mem[__Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v2] 
                    = ((0xff00ffffU & vlSelfRef.multi_core_top__DOT__isram1__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v2]) 
                       | ((IData)(__Vinline_0__nba_sequent__TOP__14___VdlyVal__multi_core_top__DOT__isram1__DOT__mem__v2) 
                          << 0x00000010U));
            }
            if (__Vinline_0__nba_sequent__TOP__14___VdlySet__multi_core_top__DOT__isram1__DOT__mem__v3) {
                vlSelfRef.multi_core_top__DOT__isram1__DOT__mem[__Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v3] 
                    = ((0x00ffffffU & vlSelfRef.multi_core_top__DOT__isram1__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__14___VdlyDim0__multi_core_top__DOT__isram1__DOT__mem__v3]) 
                       | ((IData)(__Vinline_0__nba_sequent__TOP__14___VdlyVal__multi_core_top__DOT__isram1__DOT__mem__v3) 
                          << 0x00000018U));
            }
            vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_ready 
                = __Vinline_0__nba_sequent__TOP__14___Vdly__multi_core_top__DOT__isram1__DOT__mem_ready;
            vlSelfRef.multi_core_top__DOT__isram_rdata[1U] 
                = vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_rdata;
            vlSelfRef.multi_core_top__DOT__isram_ready[1U] 
                = vlSelfRef.multi_core_top__DOT__isram1__DOT__mem_ready;
        }
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__15
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__15___Vdly__multi_core_top__DOT__isram0__DOT__mem_ready;
            __Vinline_0__nba_sequent__TOP__15___Vdly__multi_core_top__DOT__isram0__DOT__mem_ready = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__15___VdlyVal__multi_core_top__DOT__isram0__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__15___VdlyVal__multi_core_top__DOT__isram0__DOT__mem__v0 = 0;
            SData/*9:0*/ __Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v0;
            __Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v0 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__15___VdlyVal__multi_core_top__DOT__isram0__DOT__mem__v1;
            __Vinline_0__nba_sequent__TOP__15___VdlyVal__multi_core_top__DOT__isram0__DOT__mem__v1 = 0;
            SData/*9:0*/ __Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v1;
            __Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v1 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v1;
            __Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v1 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__15___VdlyVal__multi_core_top__DOT__isram0__DOT__mem__v2;
            __Vinline_0__nba_sequent__TOP__15___VdlyVal__multi_core_top__DOT__isram0__DOT__mem__v2 = 0;
            SData/*9:0*/ __Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v2;
            __Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v2 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v2;
            __Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v2 = 0;
            CData/*7:0*/ __Vinline_0__nba_sequent__TOP__15___VdlyVal__multi_core_top__DOT__isram0__DOT__mem__v3;
            __Vinline_0__nba_sequent__TOP__15___VdlyVal__multi_core_top__DOT__isram0__DOT__mem__v3 = 0;
            SData/*9:0*/ __Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v3;
            __Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v3 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v3;
            __Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v3 = 0;
            __Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v0 = 0U;
            __Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v1 = 0U;
            __Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v2 = 0U;
            __Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v3 = 0U;
            __Vinline_0__nba_sequent__TOP__15___Vdly__multi_core_top__DOT__isram0__DOT__mem_ready 
                = vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_ready;
            __Vinline_0__nba_sequent__TOP__15___Vdly__multi_core_top__DOT__isram0__DOT__mem_ready = 0U;
            vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_rdata = 0U;
            if (((IData)(vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_valid) 
                 & (~ (IData)(vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_ready)))) {
                __Vinline_0__nba_sequent__TOP__15___Vdly__multi_core_top__DOT__isram0__DOT__mem_ready = 1U;
                if ((0U == (IData)(vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_wstrb))) {
                    vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_rdata 
                        = vlSelfRef.multi_core_top__DOT__isram0__DOT__mem
                        [vlSelfRef.multi_core_top__DOT__isram0__DOT__word_addr];
                } else {
                    if ((1U & (IData)(vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__15___VdlyVal__multi_core_top__DOT__isram0__DOT__mem__v0 
                            = (0x000000ffU & vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_wdata);
                        __Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v0 
                            = vlSelfRef.multi_core_top__DOT__isram0__DOT__word_addr;
                        __Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v0 = 1U;
                    }
                    if ((2U & (IData)(vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__15___VdlyVal__multi_core_top__DOT__isram0__DOT__mem__v1 
                            = (0x000000ffU & (vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_wdata 
                                              >> 8U));
                        __Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v1 
                            = vlSelfRef.multi_core_top__DOT__isram0__DOT__word_addr;
                        __Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v1 = 1U;
                    }
                    if ((4U & (IData)(vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__15___VdlyVal__multi_core_top__DOT__isram0__DOT__mem__v2 
                            = (0x000000ffU & (vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_wdata 
                                              >> 0x10U));
                        __Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v2 
                            = vlSelfRef.multi_core_top__DOT__isram0__DOT__word_addr;
                        __Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v2 = 1U;
                    }
                    if ((8U & (IData)(vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_wstrb))) {
                        __Vinline_0__nba_sequent__TOP__15___VdlyVal__multi_core_top__DOT__isram0__DOT__mem__v3 
                            = (vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_wdata 
                               >> 0x18U);
                        __Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v3 
                            = vlSelfRef.multi_core_top__DOT__isram0__DOT__word_addr;
                        __Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v3 = 1U;
                    }
                }
            }
            if (__Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v0) {
                vlSelfRef.multi_core_top__DOT__isram0__DOT__mem[__Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v0] 
                    = ((0xffffff00U & vlSelfRef.multi_core_top__DOT__isram0__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v0]) 
                       | __Vinline_0__nba_sequent__TOP__15___VdlyVal__multi_core_top__DOT__isram0__DOT__mem__v0);
            }
            if (__Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v1) {
                vlSelfRef.multi_core_top__DOT__isram0__DOT__mem[__Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v1] 
                    = ((0xffff00ffU & vlSelfRef.multi_core_top__DOT__isram0__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v1]) 
                       | ((IData)(__Vinline_0__nba_sequent__TOP__15___VdlyVal__multi_core_top__DOT__isram0__DOT__mem__v1) 
                          << 8U));
            }
            if (__Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v2) {
                vlSelfRef.multi_core_top__DOT__isram0__DOT__mem[__Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v2] 
                    = ((0xff00ffffU & vlSelfRef.multi_core_top__DOT__isram0__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v2]) 
                       | ((IData)(__Vinline_0__nba_sequent__TOP__15___VdlyVal__multi_core_top__DOT__isram0__DOT__mem__v2) 
                          << 0x00000010U));
            }
            if (__Vinline_0__nba_sequent__TOP__15___VdlySet__multi_core_top__DOT__isram0__DOT__mem__v3) {
                vlSelfRef.multi_core_top__DOT__isram0__DOT__mem[__Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v3] 
                    = ((0x00ffffffU & vlSelfRef.multi_core_top__DOT__isram0__DOT__mem
                        [__Vinline_0__nba_sequent__TOP__15___VdlyDim0__multi_core_top__DOT__isram0__DOT__mem__v3]) 
                       | ((IData)(__Vinline_0__nba_sequent__TOP__15___VdlyVal__multi_core_top__DOT__isram0__DOT__mem__v3) 
                          << 0x00000018U));
            }
            vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_ready 
                = __Vinline_0__nba_sequent__TOP__15___Vdly__multi_core_top__DOT__isram0__DOT__mem_ready;
            vlSelfRef.multi_core_top__DOT__isram_rdata[0U] 
                = vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_rdata;
            vlSelfRef.multi_core_top__DOT__isram_ready[0U] 
                = vlSelfRef.multi_core_top__DOT__isram0__DOT__mem_ready;
        }
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmulti_core_top___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__17
            if (vlSelfRef.multi_core_top__DOT__arb__DOT__resetn) {
                if (vlSelfRef.multi_core_top__DOT__arb__DOT__bus_busy) {
                    if (vlSelfRef.multi_core_top__DOT__arb__DOT__mem_ready) {
                        vlSelfRef.multi_core_top__DOT__arb__DOT__next_grant 
                            = vlSelfRef.multi_core_top__DOT__arb__DOT__grant;
                        vlSelfRef.multi_core_top__DOT__arb__DOT__bus_busy = 0U;
                    }
                } else if (vlSelfRef.multi_core_top__DOT__arb__DOT__rr_found) {
                    vlSelfRef.multi_core_top__DOT__arb__DOT__grant 
                        = vlSelfRef.multi_core_top__DOT__arb__DOT__rr_grant;
                    vlSelfRef.multi_core_top__DOT__arb__DOT__bus_busy = 1U;
                }
            } else {
                vlSelfRef.multi_core_top__DOT__arb__DOT__grant = 0U;
                vlSelfRef.multi_core_top__DOT__arb__DOT__bus_busy = 0U;
                vlSelfRef.multi_core_top__DOT__arb__DOT__next_grant = 3U;
            }
        }
    }
    if ((0x0000000000000249ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmulti_core_top___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__18
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_valid 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_valid;
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_insn;
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_rs1;
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_rs2;
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_valid 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_valid;
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_insn;
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_rs1;
            vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_rs2;
        }
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__19
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_valid 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_valid;
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_insn;
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_rs1;
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_rs2;
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_valid 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_valid;
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_insn;
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_rs1;
            vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_rs2;
        }
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__20
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_valid 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_valid;
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_insn;
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_rs1;
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_rs2;
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_valid 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_valid;
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_insn;
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_rs1;
            vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_rs2;
        }
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__21
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_valid 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_valid;
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_insn 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_insn;
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs1 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_rs1;
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_rs2 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_rs2;
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_valid 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_valid;
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_insn;
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs1 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_rs1;
            vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_rs2 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_rs2;
        }
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
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
            vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_int_wait 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_div_wait) 
                   | (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__pcpi_mul_wait));
        }
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__2
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
            vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_int_wait 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_div_wait) 
                   | (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__pcpi_mul_wait));
        }
    }
    if ((0x0000000000000180ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__3
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
            vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_int_wait 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_div_wait) 
                   | (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__pcpi_mul_wait));
        }
    }
    if ((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__4
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
            vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_int_wait 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_div_wait) 
                   | (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__pcpi_mul_wait));
        }
    }
    if ((0x000000000001f249ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vmulti_core_top___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__22
            vlSelfRef.multi_core_top__DOT__arb__DOT__mem_ready 
                = vlSelfRef.multi_core_top__DOT__dsram_ready;
        }
    }
    if ((0x0000000000020249ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__6
            if (vlSelfRef.multi_core_top__DOT__arb__DOT__bus_busy) {
                vlSelfRef.multi_core_top__DOT__arb__DOT__mem_wdata 
                    = vlSelfRef.multi_core_top__DOT__arb__DOT__core_wdata
                    [vlSelfRef.multi_core_top__DOT__arb__DOT__grant];
                vlSelfRef.multi_core_top__DOT__arb__DOT__mem_addr 
                    = vlSelfRef.multi_core_top__DOT__arb__DOT__core_addr
                    [vlSelfRef.multi_core_top__DOT__arb__DOT__grant];
                vlSelfRef.multi_core_top__DOT__arb__DOT__mem_wstrb 
                    = vlSelfRef.multi_core_top__DOT__arb__DOT__core_wstrb
                    [vlSelfRef.multi_core_top__DOT__arb__DOT__grant];
            } else {
                vlSelfRef.multi_core_top__DOT__arb__DOT__mem_wdata = 0U;
                vlSelfRef.multi_core_top__DOT__arb__DOT__mem_addr = 0U;
                vlSelfRef.multi_core_top__DOT__arb__DOT__mem_wstrb = 0U;
            }
            vlSelfRef.multi_core_top__DOT__arb__DOT__mem_instr 
                = ((IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__bus_busy) 
                   && vlSelfRef.multi_core_top__DOT__arb__DOT__core_instr
                   [vlSelfRef.multi_core_top__DOT__arb__DOT__grant]);
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
            vlSelfRef.multi_core_top__DOT__dsram_wdata 
                = vlSelfRef.multi_core_top__DOT__arb__DOT__mem_wdata;
            vlSelfRef.multi_core_top__DOT__dsram_addr 
                = vlSelfRef.multi_core_top__DOT__arb__DOT__mem_addr;
            vlSelfRef.multi_core_top__DOT__dsram_wstrb 
                = vlSelfRef.multi_core_top__DOT__arb__DOT__mem_wstrb;
            vlSelfRef.multi_core_top__DOT__dsram_instr 
                = vlSelfRef.multi_core_top__DOT__arb__DOT__mem_instr;
            vlSelfRef.multi_core_top__DOT__dsram_valid 
                = vlSelfRef.multi_core_top__DOT__arb__DOT__mem_valid;
            vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_wdata 
                = vlSelfRef.multi_core_top__DOT__dsram_wdata;
            vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_addr 
                = vlSelfRef.multi_core_top__DOT__dsram_addr;
            vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_wstrb 
                = vlSelfRef.multi_core_top__DOT__dsram_wstrb;
            vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_valid 
                = vlSelfRef.multi_core_top__DOT__dsram_valid;
            vlSelfRef.multi_core_top__DOT__dsram__DOT__word_addr 
                = (0x00003fffU & (vlSelfRef.multi_core_top__DOT__dsram__DOT__mem_addr 
                                  >> 2U));
        }
    }
    if ((0x0000000000030000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__7
            vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_ready 
                = ((IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__bus_busy) 
                   & ((IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__mem_ready) 
                      & (0U == (IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__grant))));
            vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_ready 
                = ((IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__bus_busy) 
                   & ((IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__mem_ready) 
                      & (1U == (IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__grant))));
            vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_ready 
                = ((IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__bus_busy) 
                   & ((IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__mem_ready) 
                      & (2U == (IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__grant))));
            vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_ready 
                = ((IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__bus_busy) 
                   & ((IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__mem_ready) 
                      & (3U == (IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__grant))));
            vlSelfRef.multi_core_top__DOT__dsram_arb_ready[0U] 
                = vlSelfRef.multi_core_top__DOT__arb__DOT__core0_mem_ready;
            vlSelfRef.multi_core_top__DOT__dsram_arb_ready[1U] 
                = vlSelfRef.multi_core_top__DOT__arb__DOT__core1_mem_ready;
            vlSelfRef.multi_core_top__DOT__dsram_arb_ready[2U] 
                = vlSelfRef.multi_core_top__DOT__arb__DOT__core2_mem_ready;
            vlSelfRef.multi_core_top__DOT__dsram_arb_ready[3U] 
                = vlSelfRef.multi_core_top__DOT__arb__DOT__core3_mem_ready;
        }
    }
    if ((0x000000000003f000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__8
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
            vlSelfRef.multi_core_top__DOT__core3__DOT__mem_ready 
                = vlSelfRef.multi_core_top__DOT__core_mem_ready[3U];
            vlSelfRef.multi_core_top__DOT__core2__DOT__mem_ready 
                = vlSelfRef.multi_core_top__DOT__core_mem_ready[2U];
            vlSelfRef.multi_core_top__DOT__core1__DOT__mem_ready 
                = vlSelfRef.multi_core_top__DOT__core_mem_ready[1U];
            vlSelfRef.multi_core_top__DOT__core0__DOT__mem_ready 
                = vlSelfRef.multi_core_top__DOT__core_mem_ready[0U];
            vlSelfRef.multi_core_top__DOT__core3__DOT__dbg_mem_ready 
                = vlSelfRef.multi_core_top__DOT__core3__DOT__mem_ready;
            vlSelfRef.multi_core_top__DOT__core2__DOT__dbg_mem_ready 
                = vlSelfRef.multi_core_top__DOT__core2__DOT__mem_ready;
            vlSelfRef.multi_core_top__DOT__core1__DOT__dbg_mem_ready 
                = vlSelfRef.multi_core_top__DOT__core1__DOT__mem_ready;
            vlSelfRef.multi_core_top__DOT__core0__DOT__dbg_mem_ready 
                = vlSelfRef.multi_core_top__DOT__core0__DOT__mem_ready;
        }
    }
    if ((0x000000000003f001ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__9
            vlSelfRef.multi_core_top__DOT__core3__DOT__mem_xfer 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_valid) 
                   & (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_ready));
            vlSelfRef.multi_core_top__DOT__core3__DOT__mem_done 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__resetn) 
                   & (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_rinst) 
                       & (3U == (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_state))) 
                      | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_xfer) 
                         & ((0U != (IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_state)) 
                            & ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__mem_do_wdata) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))));
        }
    }
    if ((0x000000000003f008ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__10
            vlSelfRef.multi_core_top__DOT__core2__DOT__mem_xfer 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_valid) 
                   & (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_ready));
            vlSelfRef.multi_core_top__DOT__core2__DOT__mem_done 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__resetn) 
                   & (((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_rinst) 
                       & (3U == (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_state))) 
                      | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_xfer) 
                         & ((0U != (IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_state)) 
                            & ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__mem_do_wdata) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))))));
        }
    }
    if ((0x000000000003f040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__11
            vlSelfRef.multi_core_top__DOT__core1__DOT__mem_xfer 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_valid) 
                   & (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_ready));
            vlSelfRef.multi_core_top__DOT__core1__DOT__mem_done 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__resetn) 
                   & (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_rinst) 
                       & (3U == (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_state))) 
                      | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_xfer) 
                         & ((0U != (IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_state)) 
                            & ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__mem_do_wdata) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))))));
        }
    }
    if ((0x000000000003f200ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__12
            vlSelfRef.multi_core_top__DOT__core0__DOT__mem_xfer 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_valid) 
                   & (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_ready));
            vlSelfRef.multi_core_top__DOT__core0__DOT__mem_done 
                = ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__resetn) 
                   & (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_rinst) 
                       & (3U == (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_state))) 
                      | ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_xfer) 
                         & ((0U != (IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_state)) 
                            & ((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__mem_do_wdata) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))))));
        }
    }
    if ((0x000000000003f249ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__13
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
    }
}

void Vmulti_core_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vmulti_core_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vmulti_core_top___024root___eval_phase__act(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___eval_phase__act\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((((IData)(vlSelfRef.multi_core_top__DOT__arb__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__arb__DOT__clk__0))) 
                                                           << 0x00000011U) 
                                                          | (((IData)(vlSelfRef.multi_core_top__DOT__dsram__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__dsram__DOT__clk__0))) 
                                                             << 0x00000010U)) 
                                                         | ((((((((IData)(vlSelfRef.multi_core_top__DOT__isram0__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__isram0__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.multi_core_top__DOT__isram1__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__isram1__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.multi_core_top__DOT__isram2__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__isram2__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.multi_core_top__DOT__isram3__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__isram3__DOT__clk__0))))) 
                                                              << 0x0000000cU) 
                                                             | ((((((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core0__DOT__genblk1__DOT__pcpi_mul__DOT__clk__0))) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core0__DOT__genblk2__DOT__pcpi_div__DOT__clk__0))) 
                                                                     << 2U)) 
                                                                 | ((((IData)(vlSelfRef.multi_core_top__DOT__core0__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core0__DOT__clk__0))) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__clk) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core1__DOT__genblk1__DOT__pcpi_mul__DOT__clk__0))))) 
                                                                << 8U)) 
                                                            | (((((((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core1__DOT__genblk2__DOT__pcpi_div__DOT__clk__0))) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelfRef.multi_core_top__DOT__core1__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core1__DOT__clk__0))) 
                                                                     << 2U)) 
                                                                 | ((((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core2__DOT__genblk1__DOT__pcpi_mul__DOT__clk__0))) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__clk) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core2__DOT__genblk2__DOT__pcpi_div__DOT__clk__0))))) 
                                                                << 4U) 
                                                               | (((((IData)(vlSelfRef.multi_core_top__DOT__core2__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core2__DOT__clk__0))) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__clk) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core3__DOT__genblk1__DOT__pcpi_mul__DOT__clk__0))) 
                                                                      << 2U)) 
                                                                  | ((((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__clk) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core3__DOT__genblk2__DOT__pcpi_div__DOT__clk__0))) 
                                                                      << 1U) 
                                                                     | ((IData)(vlSelfRef.multi_core_top__DOT__core3__DOT__clk) 
                                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__multi_core_top__DOT__core3__DOT__clk__0))))))))));
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
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmulti_core_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vmulti_core_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vmulti_core_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vmulti_core_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vmulti_core_top___024root___eval_phase__nba(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___eval_phase__nba\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vmulti_core_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vmulti_core_top___024root___eval_nba(vlSelf);
        Vmulti_core_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmulti_core_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vmulti_core_top___024root___eval_phase__ico(Vmulti_core_top___024root* vlSelf);

void Vmulti_core_top___024root___eval(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___eval\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vmulti_core_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("../rtl/multi_core_top.v", 24, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vmulti_core_top___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmulti_core_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("../rtl/multi_core_top.v", 24, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmulti_core_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("../rtl/multi_core_top.v", 24, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vmulti_core_top___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vmulti_core_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vmulti_core_top___024root___eval_debug_assertions(Vmulti_core_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmulti_core_top___024root___eval_debug_assertions\n"); );
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.resetn & 0xfeU)))) {
        Verilated::overWidthError("resetn");
    }
}
#endif  // VL_DEBUG
