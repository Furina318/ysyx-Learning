// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdouble_sw.h"
#include "Vdouble_sw__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdouble_sw::Vdouble_sw(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdouble_sw__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdouble_sw::Vdouble_sw(const char* _vcname__)
    : Vdouble_sw(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdouble_sw::~Vdouble_sw() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdouble_sw___024root___eval_debug_assertions(Vdouble_sw___024root* vlSelf);
#endif  // VL_DEBUG
void Vdouble_sw___024root___eval_static(Vdouble_sw___024root* vlSelf);
void Vdouble_sw___024root___eval_initial(Vdouble_sw___024root* vlSelf);
void Vdouble_sw___024root___eval_settle(Vdouble_sw___024root* vlSelf);
void Vdouble_sw___024root___eval(Vdouble_sw___024root* vlSelf);

void Vdouble_sw::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdouble_sw::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdouble_sw___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdouble_sw___024root___eval_static(&(vlSymsp->TOP));
        Vdouble_sw___024root___eval_initial(&(vlSymsp->TOP));
        Vdouble_sw___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdouble_sw___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdouble_sw::eventsPending() { return false; }

uint64_t Vdouble_sw::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdouble_sw::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdouble_sw___024root___eval_final(Vdouble_sw___024root* vlSelf);

VL_ATTR_COLD void Vdouble_sw::final() {
    Vdouble_sw___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdouble_sw::hierName() const { return vlSymsp->name(); }
const char* Vdouble_sw::modelName() const { return "Vdouble_sw"; }
unsigned Vdouble_sw::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vdouble_sw::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdouble_sw___024root__trace_init_top(Vdouble_sw___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdouble_sw___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdouble_sw___024root*>(voidSelf);
    Vdouble_sw__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vdouble_sw___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vdouble_sw___024root__trace_register(Vdouble_sw___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdouble_sw::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdouble_sw::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdouble_sw___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
