// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsram.h for the primary calling header

#ifndef VERILATED_VSRAM___024ROOT_H_
#define VERILATED_VSRAM___024ROOT_H_  // guard

#include "verilated.h"


class Vsram__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsram___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(mem_valid,0,0);
    VL_OUT8(mem_ready,0,0);
    VL_IN8(mem_wstrb,3,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VL_IN(mem_addr,31,0);
    VL_IN(mem_wdata,31,0);
    VL_OUT(mem_rdata,31,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> sram__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsram__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vsram___024root(Vsram__Syms* symsp, const char* namep);
    ~Vsram___024root();
    VL_UNCOPYABLE(Vsram___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
