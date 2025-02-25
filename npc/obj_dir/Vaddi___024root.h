// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaddi.h for the primary calling header

#ifndef VERILATED_VADDI___024ROOT_H_
#define VERILATED_VADDI___024ROOT_H_  // guard

#include "verilated.h"

class Vaddi__Syms;

class Vaddi___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__reset;
    CData/*0:0*/ __VactContinue;
    VL_OUT(pc,31,0);
    IData/*31:0*/ riscv_single_cycle__DOT__instruction;
    IData/*31:0*/ riscv_single_cycle__DOT__alu_result;
    IData/*31:0*/ riscv_single_cycle__DOT__i;
    IData/*31:0*/ riscv_single_cycle__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> riscv_single_cycle__DOT__instr_mem;
    VlUnpacked<IData/*31:0*/, 32> riscv_single_cycle__DOT__registers;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vaddi__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaddi___024root(Vaddi__Syms* symsp, const char* v__name);
    ~Vaddi___024root();
    VL_UNCOPYABLE(Vaddi___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
