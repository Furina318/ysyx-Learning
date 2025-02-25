// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaddi.h"
#include "Vaddi__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vaddi::Vaddi(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vaddi__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , pc{vlSymsp->TOP.pc}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vaddi::Vaddi(const char* _vcname__)
    : Vaddi(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vaddi::~Vaddi() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vaddi___024root___eval_debug_assertions(Vaddi___024root* vlSelf);
#endif  // VL_DEBUG
void Vaddi___024root___eval_static(Vaddi___024root* vlSelf);
void Vaddi___024root___eval_initial(Vaddi___024root* vlSelf);
void Vaddi___024root___eval_settle(Vaddi___024root* vlSelf);
void Vaddi___024root___eval(Vaddi___024root* vlSelf);

void Vaddi::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaddi::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vaddi___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vaddi___024root___eval_static(&(vlSymsp->TOP));
        Vaddi___024root___eval_initial(&(vlSymsp->TOP));
        Vaddi___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vaddi___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vaddi::eventsPending() { return false; }

uint64_t Vaddi::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vaddi::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vaddi___024root___eval_final(Vaddi___024root* vlSelf);

VL_ATTR_COLD void Vaddi::final() {
    Vaddi___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vaddi::hierName() const { return vlSymsp->name(); }
const char* Vaddi::modelName() const { return "Vaddi"; }
unsigned Vaddi::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vaddi::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vaddi___024root__trace_init_top(Vaddi___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vaddi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaddi___024root*>(voidSelf);
    Vaddi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vaddi___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vaddi___024root__trace_register(Vaddi___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vaddi::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vaddi::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vaddi___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
