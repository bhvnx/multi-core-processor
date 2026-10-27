// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmulti_core_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmulti_core_top::Vmulti_core_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmulti_core_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , resetn{vlSymsp->TOP.resetn}
    , trap{vlSymsp->TOP.trap}
    , irq{vlSymsp->TOP.irq}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmulti_core_top::Vmulti_core_top(const char* _vcname__)
    : Vmulti_core_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmulti_core_top::~Vmulti_core_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmulti_core_top___024root___eval_debug_assertions(Vmulti_core_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vmulti_core_top___024root___eval_static(Vmulti_core_top___024root* vlSelf);
void Vmulti_core_top___024root___eval_initial(Vmulti_core_top___024root* vlSelf);
void Vmulti_core_top___024root___eval_settle(Vmulti_core_top___024root* vlSelf);
void Vmulti_core_top___024root___eval(Vmulti_core_top___024root* vlSelf);

void Vmulti_core_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmulti_core_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmulti_core_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmulti_core_top___024root___eval_static(&(vlSymsp->TOP));
        Vmulti_core_top___024root___eval_initial(&(vlSymsp->TOP));
        Vmulti_core_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmulti_core_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmulti_core_top::eventsPending() { return false; }

uint64_t Vmulti_core_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmulti_core_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmulti_core_top___024root___eval_final(Vmulti_core_top___024root* vlSelf);

VL_ATTR_COLD void Vmulti_core_top::final() {
    contextp()->executingFinal(true);
    Vmulti_core_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmulti_core_top::hierName() const { return vlSymsp->name(); }
const char* Vmulti_core_top::modelName() const { return "Vmulti_core_top"; }
unsigned Vmulti_core_top::threads() const { return 1; }
void Vmulti_core_top::prepareClone() const { contextp()->prepareClone(); }
void Vmulti_core_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmulti_core_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vmulti_core_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmulti_core_top___024root__trace_init_top(Vmulti_core_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmulti_core_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmulti_core_top___024root*>(voidSelf);
    Vmulti_core_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vmulti_core_top___024root__trace_decl_types(tracep);
    Vmulti_core_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmulti_core_top___024root__trace_register(Vmulti_core_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmulti_core_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmulti_core_top::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 1406);
    Vmulti_core_top___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
