// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vriscv_single_cycle.h"
#include "Vriscv_single_cycle__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vriscv_single_cycle::Vriscv_single_cycle(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vriscv_single_cycle__Syms(contextp(), _vcname__, this)}
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

Vriscv_single_cycle::Vriscv_single_cycle(const char* _vcname__)
    : Vriscv_single_cycle(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vriscv_single_cycle::~Vriscv_single_cycle() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vriscv_single_cycle___024root___eval_debug_assertions(Vriscv_single_cycle___024root* vlSelf);
#endif  // VL_DEBUG
void Vriscv_single_cycle___024root___eval_static(Vriscv_single_cycle___024root* vlSelf);
void Vriscv_single_cycle___024root___eval_initial(Vriscv_single_cycle___024root* vlSelf);
void Vriscv_single_cycle___024root___eval_settle(Vriscv_single_cycle___024root* vlSelf);
void Vriscv_single_cycle___024root___eval(Vriscv_single_cycle___024root* vlSelf);

void Vriscv_single_cycle::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vriscv_single_cycle::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vriscv_single_cycle___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vriscv_single_cycle___024root___eval_static(&(vlSymsp->TOP));
        Vriscv_single_cycle___024root___eval_initial(&(vlSymsp->TOP));
        Vriscv_single_cycle___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vriscv_single_cycle___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vriscv_single_cycle::eventsPending() { return false; }

uint64_t Vriscv_single_cycle::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vriscv_single_cycle::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vriscv_single_cycle___024root___eval_final(Vriscv_single_cycle___024root* vlSelf);

VL_ATTR_COLD void Vriscv_single_cycle::final() {
    Vriscv_single_cycle___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vriscv_single_cycle::hierName() const { return vlSymsp->name(); }
const char* Vriscv_single_cycle::modelName() const { return "Vriscv_single_cycle"; }
unsigned Vriscv_single_cycle::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vriscv_single_cycle::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vriscv_single_cycle___024root__trace_init_top(Vriscv_single_cycle___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vriscv_single_cycle___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_single_cycle___024root*>(voidSelf);
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vriscv_single_cycle___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vriscv_single_cycle___024root__trace_register(Vriscv_single_cycle___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_single_cycle::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vriscv_single_cycle::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vriscv_single_cycle___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
