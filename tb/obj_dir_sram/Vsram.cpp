// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsram__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsram::Vsram(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsram__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , mem_valid{vlSymsp->TOP.mem_valid}
    , mem_ready{vlSymsp->TOP.mem_ready}
    , mem_wstrb{vlSymsp->TOP.mem_wstrb}
    , mem_addr{vlSymsp->TOP.mem_addr}
    , mem_wdata{vlSymsp->TOP.mem_wdata}
    , mem_rdata{vlSymsp->TOP.mem_rdata}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsram::Vsram(const char* _vcname__)
    : Vsram(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsram::~Vsram() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsram___024root___eval_debug_assertions(Vsram___024root* vlSelf);
#endif  // VL_DEBUG
void Vsram___024root___eval_static(Vsram___024root* vlSelf);
void Vsram___024root___eval_initial(Vsram___024root* vlSelf);
void Vsram___024root___eval_settle(Vsram___024root* vlSelf);
void Vsram___024root___eval(Vsram___024root* vlSelf);

void Vsram::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsram::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsram___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsram___024root___eval_static(&(vlSymsp->TOP));
        Vsram___024root___eval_initial(&(vlSymsp->TOP));
        Vsram___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsram___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsram::eventsPending() { return false; }

uint64_t Vsram::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsram::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsram___024root___eval_final(Vsram___024root* vlSelf);

VL_ATTR_COLD void Vsram::final() {
    contextp()->executingFinal(true);
    Vsram___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsram::hierName() const { return vlSymsp->name(); }
const char* Vsram::modelName() const { return "Vsram"; }
unsigned Vsram::threads() const { return 1; }
void Vsram::prepareClone() const { contextp()->prepareClone(); }
void Vsram::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsram::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vsram___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsram___024root__trace_init_top(Vsram___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsram___024root*>(voidSelf);
    Vsram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vsram___024root__trace_decl_types(tracep);
    Vsram___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsram___024root__trace_register(Vsram___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsram::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsram::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 10);
    Vsram___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
