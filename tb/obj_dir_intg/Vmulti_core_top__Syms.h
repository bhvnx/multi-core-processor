// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMULTI_CORE_TOP__SYMS_H_
#define VERILATED_VMULTI_CORE_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmulti_core_top.h"

// INCLUDE MODULE CLASSES
#include "Vmulti_core_top___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vmulti_core_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmulti_core_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmulti_core_top___024root      TOP;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_TOP;
    VerilatedScope* __Vscopep_multi_core_top;
    VerilatedScope* __Vscopep_multi_core_top__arb;
    VerilatedScope* __Vscopep_multi_core_top__core0;
    VerilatedScope* __Vscopep_multi_core_top__core0__genblk1__pcpi_mul;
    VerilatedScope* __Vscopep_multi_core_top__core0__genblk2__pcpi_div;
    VerilatedScope* __Vscopep_multi_core_top__core1;
    VerilatedScope* __Vscopep_multi_core_top__core1__genblk1__pcpi_mul;
    VerilatedScope* __Vscopep_multi_core_top__core1__genblk2__pcpi_div;
    VerilatedScope* __Vscopep_multi_core_top__core2;
    VerilatedScope* __Vscopep_multi_core_top__core2__genblk1__pcpi_mul;
    VerilatedScope* __Vscopep_multi_core_top__core2__genblk2__pcpi_div;
    VerilatedScope* __Vscopep_multi_core_top__core3;
    VerilatedScope* __Vscopep_multi_core_top__core3__genblk1__pcpi_mul;
    VerilatedScope* __Vscopep_multi_core_top__core3__genblk2__pcpi_div;
    VerilatedScope* __Vscopep_multi_core_top__dsram;
    VerilatedScope* __Vscopep_multi_core_top__isram0;
    VerilatedScope* __Vscopep_multi_core_top__isram1;
    VerilatedScope* __Vscopep_multi_core_top__isram2;
    VerilatedScope* __Vscopep_multi_core_top__isram3;

    // CONSTRUCTORS
    Vmulti_core_top__Syms(VerilatedContext* contextp, const char* namep, Vmulti_core_top* modelp);
    ~Vmulti_core_top__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
