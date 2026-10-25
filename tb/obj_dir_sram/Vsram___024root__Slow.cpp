// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsram.h for the primary calling header

#include "Vsram__pch.h"

void Vsram___024root___ctor_var_reset(Vsram___024root* vlSelf);

Vsram___024root::Vsram___024root(Vsram__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vsram___024root___ctor_var_reset(this);
}

void Vsram___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsram___024root::~Vsram___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
