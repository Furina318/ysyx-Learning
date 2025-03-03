// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vonly_addi.h"
#include "Vonly_addi__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vonly_addi::Vonly_addi(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vonly_addi__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , pc{vlSymsp->TOP.pc}
    , x1{vlSymsp->TOP.x1}
    , x2{vlSymsp->TOP.x2}
    , x3{vlSymsp->TOP.x3}
    , x4{vlSymsp->TOP.x4}
    , x5{vlSymsp->TOP.x5}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vonly_addi::Vonly_addi(const char* _vcname__)
    : Vonly_addi(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vonly_addi::~Vonly_addi() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vonly_addi___024root___eval_debug_assertions(Vonly_addi___024root* vlSelf);
#endif  // VL_DEBUG
void Vonly_addi___024root___eval_static(Vonly_addi___024root* vlSelf);
void Vonly_addi___024root___eval_initial(Vonly_addi___024root* vlSelf);
void Vonly_addi___024root___eval_settle(Vonly_addi___024root* vlSelf);
void Vonly_addi___024root___eval(Vonly_addi___024root* vlSelf);

void Vonly_addi::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vonly_addi::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vonly_addi___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vonly_addi___024root___eval_static(&(vlSymsp->TOP));
        Vonly_addi___024root___eval_initial(&(vlSymsp->TOP));
        Vonly_addi___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vonly_addi___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vonly_addi::eventsPending() { return false; }

uint64_t Vonly_addi::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vonly_addi::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vonly_addi___024root___eval_final(Vonly_addi___024root* vlSelf);

VL_ATTR_COLD void Vonly_addi::final() {
    Vonly_addi___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vonly_addi::hierName() const { return vlSymsp->name(); }
const char* Vonly_addi::modelName() const { return "Vonly_addi"; }
unsigned Vonly_addi::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vonly_addi::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vonly_addi___024root__trace_init_top(Vonly_addi___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vonly_addi___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vonly_addi___024root*>(voidSelf);
    Vonly_addi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vonly_addi___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vonly_addi___024root__trace_register(Vonly_addi___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vonly_addi::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vonly_addi::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vonly_addi___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
