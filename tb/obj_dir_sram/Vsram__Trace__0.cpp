// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vsram__Syms.h"


void Vsram___024root__trace_chg_0_sub_0(Vsram___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsram___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram___024root__trace_chg_0\n"); );
    // Body
    Vsram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsram___024root*>(voidSelf);
    Vsram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vsram___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsram___024root__trace_chg_0_sub_0(Vsram___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram___024root__trace_chg_0_sub_0\n"); );
    Vsram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.mem_valid));
    bufp->chgBit(oldp+2,(vlSelfRef.mem_ready));
    bufp->chgIData(oldp+3,(vlSelfRef.mem_addr),32);
    bufp->chgIData(oldp+4,(vlSelfRef.mem_wdata),32);
    bufp->chgCData(oldp+5,(vlSelfRef.mem_wstrb),4);
    bufp->chgIData(oldp+6,(vlSelfRef.mem_rdata),32);
    bufp->chgCData(oldp+7,((0x000000ffU & (vlSelfRef.mem_addr 
                                           >> 2U))),8);
}

void Vsram___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vsram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsram___024root*>(voidSelf);
    Vsram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
