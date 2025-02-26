// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_single_cycle.h for the primary calling header

#ifndef VERILATED_VRISCV_SINGLE_CYCLE___024ROOT_H_
#define VERILATED_VRISCV_SINGLE_CYCLE___024ROOT_H_  // guard

#include "verilated.h"

class Vriscv_single_cycle__Syms;

class Vriscv_single_cycle___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ riscv_single_cycle__DOT__is_addi;
    CData/*0:0*/ riscv_single_cycle__DOT__is_jalr;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_OUT(pc,31,0);
    VL_OUT(x1,31,0);
    VL_OUT(x2,31,0);
    VL_OUT(x3,31,0);
    VL_OUT(x4,31,0);
    VL_OUT(x5,31,0);
    IData/*31:0*/ riscv_single_cycle__DOT__instruction;
    IData/*31:0*/ riscv_single_cycle__DOT__alu_result;
    IData/*31:0*/ riscv_single_cycle__DOT__pc_next;
    IData/*31:0*/ riscv_single_cycle__DOT__imm;
    IData/*31:0*/ riscv_single_cycle__DOT__i;
    IData/*31:0*/ riscv_single_cycle__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ riscv_single_cycle__DOT____VdfgExtracted_ha0d62377__0;
    IData/*31:0*/ riscv_single_cycle__DOT____VdfgTmp_h8a6dd36a__0;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> riscv_single_cycle__DOT__instr_mem;
    VlUnpacked<IData/*31:0*/, 32> riscv_single_cycle__DOT__regs;
    VlUnpacked<IData/*31:0*/, 32> riscv_single_cycle__DOT__data_mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vriscv_single_cycle__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_single_cycle___024root(Vriscv_single_cycle__Syms* symsp, const char* v__name);
    ~Vriscv_single_cycle___024root();
    VL_UNCOPYABLE(Vriscv_single_cycle___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
