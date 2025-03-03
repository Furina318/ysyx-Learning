// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vonly_addi.h for the primary calling header

#ifndef VERILATED_VONLY_ADDI___024ROOT_H_
#define VERILATED_VONLY_ADDI___024ROOT_H_  // guard

#include "verilated.h"

class Vonly_addi__Syms;

class Vonly_addi___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_OUT(pc,31,0);
    VL_OUT(x1,31,0);
    VL_OUT(x2,31,0);
    VL_OUT(x3,31,0);
    VL_OUT(x4,31,0);
    VL_OUT(x5,31,0);
    IData/*31:0*/ only_addi__DOT__instruction;
    IData/*31:0*/ only_addi__DOT__alu_result;
    IData/*31:0*/ only_addi__DOT__i;
    IData/*31:0*/ only_addi__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> only_addi__DOT__instr_mem;
    VlUnpacked<IData/*31:0*/, 32> only_addi__DOT__regs;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vonly_addi__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vonly_addi___024root(Vonly_addi__Syms* symsp, const char* v__name);
    ~Vonly_addi___024root();
    VL_UNCOPYABLE(Vonly_addi___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
