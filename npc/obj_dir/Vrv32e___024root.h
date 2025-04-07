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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ rv32e__DOT__if_ready;
        CData/*0:0*/ rv32e__DOT__wb_valid;
        CData/*0:0*/ rv32e__DOT__if_valid;
        CData/*0:0*/ rv32e__DOT__id_ready;
        CData/*6:0*/ rv32e__DOT__opcode;
        CData/*4:0*/ rv32e__DOT__rs1;
        CData/*4:0*/ rv32e__DOT__rs2;
        CData/*4:0*/ rv32e__DOT__rd;
        CData/*2:0*/ rv32e__DOT__func3;
        CData/*6:0*/ rv32e__DOT__func7;
        CData/*0:0*/ rv32e__DOT__RegWrite;
        CData/*0:0*/ rv32e__DOT__MemWrite;
        CData/*0:0*/ rv32e__DOT__MemRead;
        CData/*3:0*/ rv32e__DOT__alu_op;
        CData/*1:0*/ rv32e__DOT__MemLen;
        CData/*0:0*/ rv32e__DOT__id_valid;
        CData/*0:0*/ rv32e__DOT__ex_ready;
        CData/*0:0*/ rv32e__DOT__reg_valid;
        CData/*0:0*/ rv32e__DOT__reg_ready;
        CData/*0:0*/ rv32e__DOT__alu_zero;
        CData/*0:0*/ rv32e__DOT__alu_less;
        CData/*0:0*/ rv32e__DOT__ex_valid;
        CData/*0:0*/ rv32e__DOT__mem_ready;
        CData/*0:0*/ rv32e__DOT__mem_valid;
        CData/*0:0*/ rv32e__DOT__wb_ready;
        CData/*0:0*/ rv32e__DOT__is_jal;
        CData/*0:0*/ rv32e__DOT__is_jalr;
        CData/*0:0*/ rv32e__DOT__take_branch;
        CData/*4:0*/ rv32e__DOT__rd_ex;
        CData/*4:0*/ rv32e__DOT__rd_mem;
        CData/*4:0*/ rv32e__DOT__rd_wb;
        CData/*0:0*/ rv32e__DOT__RegWrite_ex;
        CData/*0:0*/ rv32e__DOT__RegWrite_mem;
        CData/*0:0*/ rv32e__DOT__RegWrite_wb;
        CData/*0:0*/ rv32e__DOT__wb_MemRead;
        CData/*0:0*/ rv32e__DOT__wb_MemWrite;
        CData/*1:0*/ rv32e__DOT__wb_MemLen;
        CData/*1:0*/ rv32e__DOT__if_stage__DOT__delay;
        CData/*0:0*/ rv32e__DOT__if_stage__DOT__ren;
        CData/*0:0*/ rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__read_pending;
        CData/*1:0*/ rv32e__DOT__id_stage__DOT__delay;
        CData/*4:0*/ rv32e__DOT__id_stage__DOT__get_opcode;
        CData/*1:0*/ rv32e__DOT__regfile__DOT__delay;
        CData/*1:0*/ rv32e__DOT__ex_stage__DOT__delay;
        CData/*1:0*/ rv32e__DOT__mem_stage__DOT__delay;
        CData/*0:0*/ rv32e__DOT__mem_stage__DOT__sram_arvalid;
        CData/*0:0*/ rv32e__DOT__mem_stage__DOT__sram_arready;
        CData/*0:0*/ rv32e__DOT__mem_stage__DOT__sram_rvalid;
        CData/*0:0*/ rv32e__DOT__mem_stage__DOT__sram_rready;
        CData/*3:0*/ rv32e__DOT__mem_stage__DOT__sram_wmask;
        CData/*0:0*/ rv32e__DOT__mem_stage__DOT__sram_wvalid;
        CData/*0:0*/ rv32e__DOT__mem_stage__DOT__sram_wready;
        CData/*1:0*/ rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter;
        CData/*1:0*/ rv32e__DOT__wb_stage__DOT__delay;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__reset;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ rv32e__DOT__pc;
        IData/*31:0*/ rv32e__DOT__instr;
        IData/*31:0*/ rv32e__DOT__imm;
        IData/*31:0*/ rv32e__DOT__rs1_val;
        IData/*31:0*/ rv32e__DOT__rs2_val;
    };
    struct {
        IData/*31:0*/ rv32e__DOT__alu_result;
        IData/*31:0*/ rv32e__DOT__data_out;
        IData/*31:0*/ rv32e__DOT__wb_data;
        IData/*31:0*/ rv32e__DOT__jal_target;
        IData/*31:0*/ rv32e__DOT__jalr_target;
        IData/*31:0*/ rv32e__DOT__wb_addr;
        IData/*31:0*/ rv32e__DOT__wb_data_in;
        IData/*31:0*/ rv32e__DOT__if_stage__DOT__state;
        IData/*31:0*/ rv32e__DOT__if_stage__DOT__next_state;
        IData/*31:0*/ rv32e__DOT__if_stage__DOT__get_instr;
        IData/*31:0*/ rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__raddr_reg;
        IData/*31:0*/ rv32e__DOT__id_stage__DOT__state;
        IData/*31:0*/ rv32e__DOT__id_stage__DOT__next_state;
        IData/*31:0*/ rv32e__DOT__id_stage__DOT__instr_reg;
        IData/*31:0*/ rv32e__DOT__id_stage__DOT__immI;
        IData/*31:0*/ rv32e__DOT__id_stage__DOT__immU;
        IData/*31:0*/ rv32e__DOT__id_stage__DOT__immS;
        IData/*31:0*/ rv32e__DOT__id_stage__DOT__immB;
        IData/*31:0*/ rv32e__DOT__id_stage__DOT__immJ;
        IData/*31:0*/ rv32e__DOT__regfile__DOT__state;
        IData/*31:0*/ rv32e__DOT__regfile__DOT__next_state;
        IData/*31:0*/ rv32e__DOT__regfile__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ rv32e__DOT__ex_stage__DOT__state;
        IData/*31:0*/ rv32e__DOT__ex_stage__DOT__next_state;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__state;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__next_state;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__sram_araddr;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__sram_rdata;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__sram_waddr;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__sram_wdata;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg;
        IData/*31:0*/ rv32e__DOT__wb_stage__DOT__state;
        IData/*31:0*/ rv32e__DOT__wb_stage__DOT__next_state;
        IData/*31:0*/ __Vfunc_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read__0__Vfuncout;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> rv32e__DOT__regfile__DOT__regs;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
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
