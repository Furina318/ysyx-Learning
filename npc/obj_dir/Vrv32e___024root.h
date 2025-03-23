// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv32e.h for the primary calling header

#ifndef VERILATED_VRV32E___024ROOT_H_
#define VERILATED_VRV32E___024ROOT_H_  // guard

#include "verilated.h"

class Vrv32e__Syms;

class Vrv32e___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*6:0*/ rv32e__DOT__opcode;
    CData/*2:0*/ rv32e__DOT__func3;
    CData/*6:0*/ rv32e__DOT__func7;
    CData/*0:0*/ rv32e__DOT__RegWrite;
    CData/*0:0*/ rv32e__DOT__MemWrite;
    CData/*0:0*/ rv32e__DOT__MemRead;
    CData/*3:0*/ rv32e__DOT__alu_op;
    CData/*0:0*/ rv32e__DOT__alu_less;
    CData/*4:0*/ rv32e__DOT__id_stage__DOT__get_opcode;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__reset;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ rv32e__DOT__pc;
    IData/*31:0*/ rv32e__DOT__instr;
    IData/*31:0*/ rv32e__DOT__imm;
    IData/*31:0*/ rv32e__DOT__rs1_val;
    IData/*31:0*/ rv32e__DOT__rs2_val;
    IData/*31:0*/ rv32e__DOT__jal_target;
    IData/*31:0*/ rv32e__DOT__data_out;
    IData/*31:0*/ rv32e__DOT__alu_result;
    IData/*31:0*/ rv32e__DOT____Vcellinp__alu__b;
    IData/*31:0*/ rv32e__DOT____Vcellinp__mem_stage__addr;
    IData/*31:0*/ rv32e__DOT__id_stage__DOT__immI;
    IData/*31:0*/ __Vfunc_rv32e__DOT__if_stage__DOT__pmem_read__0__Vfuncout;
    IData/*31:0*/ __Vdly__rv32e__DOT__pc;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> rv32e__DOT__regfile__DOT__regs;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrv32e__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv32e___024root(Vrv32e__Syms* symsp, const char* v__name);
    ~Vrv32e___024root();
    VL_UNCOPYABLE(Vrv32e___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
