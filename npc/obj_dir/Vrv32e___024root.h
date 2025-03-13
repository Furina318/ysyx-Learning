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
    VL_IN8(rst,0,0);
    CData/*0:0*/ rv32e__DOT__less;
    CData/*0:0*/ rv32e__DOT__zero;
    CData/*2:0*/ rv32e__DOT__i_type;
    CData/*0:0*/ rv32e__DOT__reg_wr;
    CData/*0:0*/ rv32e__DOT__alu_a_src;
    CData/*1:0*/ rv32e__DOT__alu_b_src;
    CData/*3:0*/ rv32e__DOT__alu_ctr;
    CData/*0:0*/ rv32e__DOT__mem_to_reg;
    CData/*0:0*/ rv32e__DOT__mem_wr;
    CData/*0:0*/ rv32e__DOT__mem_rd;
    CData/*2:0*/ rv32e__DOT__mem_op;
    CData/*2:0*/ rv32e__DOT__branch;
    CData/*0:0*/ rv32e__DOT__pc_a_src;
    CData/*0:0*/ rv32e__DOT__pc_b_src;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ rv32e__DOT__pc_now;
    IData/*31:0*/ rv32e__DOT__pc_next;
    IData/*31:0*/ rv32e__DOT__inst;
    IData/*31:0*/ rv32e__DOT__imm;
    IData/*31:0*/ rv32e__DOT__rs1_data;
    IData/*31:0*/ rv32e__DOT__rs2_data;
    IData/*31:0*/ rv32e__DOT__alu_result;
    IData/*31:0*/ rv32e__DOT__mem_data_out;
    IData/*31:0*/ rv32e__DOT__time_counter;
    IData/*31:0*/ rv32e__DOT__register_files_inst__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ rv32e__DOT__mem_inst__DOT__read_data;
    IData/*31:0*/ rv32e__DOT__mem_inst__DOT__temp_data;
    IData/*31:0*/ rv32e__DOT__alu_inst__DOT__A;
    IData/*31:0*/ rv32e__DOT__alu_inst__DOT__B;
    IData/*31:0*/ rv32e__DOT__alu_inst__DOT__adder_out;
    IData/*31:0*/ rv32e__DOT__alu_inst__DOT__sub_out;
    IData/*31:0*/ rv32e__DOT__alu_inst__DOT__shift_out;
    IData/*31:0*/ rv32e__DOT__alu_inst__DOT__xor_out;
    IData/*31:0*/ rv32e__DOT__alu_inst__DOT__or_out;
    IData/*31:0*/ rv32e__DOT__alu_inst__DOT__and_out;
    IData/*31:0*/ __Vdly__rv32e__DOT__pc_now;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_data_out;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_inst__DOT__temp_data;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_inst__DOT__read_data;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> rv32e__DOT__register_files_inst__DOT__regs;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
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
