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
        CData/*0:0*/ rv32e__DOT__if_id_valid;
        CData/*6:0*/ rv32e__DOT__id_ex_opcode;
        CData/*4:0*/ rv32e__DOT__id_ex_rs1;
        CData/*4:0*/ rv32e__DOT__id_ex_rs2;
        CData/*4:0*/ rv32e__DOT__id_ex_rd;
        CData/*2:0*/ rv32e__DOT__id_ex_func3;
        CData/*6:0*/ rv32e__DOT__id_ex_func7;
        CData/*0:0*/ rv32e__DOT__id_ex_RegWrite;
        CData/*0:0*/ rv32e__DOT__id_ex_MemWrite;
        CData/*0:0*/ rv32e__DOT__id_ex_MemRead;
        CData/*3:0*/ rv32e__DOT__id_ex_alu_op;
        CData/*2:0*/ rv32e__DOT__id_ex_MemLen;
        CData/*0:0*/ rv32e__DOT__id_ex_valid;
        CData/*0:0*/ rv32e__DOT__id_ex_is_ebreak;
        CData/*0:0*/ rv32e__DOT__ex_mem_alu_zero;
        CData/*0:0*/ rv32e__DOT__ex_mem_alu_less;
        CData/*0:0*/ rv32e__DOT__ex_mem_RegWrite;
        CData/*0:0*/ rv32e__DOT__ex_mem_MemWrite;
        CData/*0:0*/ rv32e__DOT__ex_mem_MemRead;
        CData/*2:0*/ rv32e__DOT__ex_mem_MemLen;
        CData/*4:0*/ rv32e__DOT__ex_mem_rd;
        CData/*4:0*/ rv32e__DOT__ex_mem_rs1;
        CData/*4:0*/ rv32e__DOT__ex_mem_rs2;
        CData/*0:0*/ rv32e__DOT__ex_mem_valid;
        CData/*6:0*/ rv32e__DOT__ex_mem_opcode;
        CData/*2:0*/ rv32e__DOT__ex_mem_func3;
        CData/*0:0*/ rv32e__DOT__mem_wb_alu_zero;
        CData/*0:0*/ rv32e__DOT__mem_wb_alu_less;
        CData/*6:0*/ rv32e__DOT__mem_wb_opcode;
        CData/*2:0*/ rv32e__DOT__mem_wb_func3;
        CData/*0:0*/ rv32e__DOT__mem_wb_RegWrite;
        CData/*4:0*/ rv32e__DOT__mem_wb_rd;
        CData/*4:0*/ rv32e__DOT__mem_wb_rs1;
        CData/*4:0*/ rv32e__DOT__mem_wb_rs2;
        CData/*0:0*/ rv32e__DOT__mem_wb_valid;
        CData/*0:0*/ rv32e__DOT__if_ready;
        CData/*0:0*/ rv32e__DOT__if_valid;
        CData/*0:0*/ rv32e__DOT__id_ready;
        CData/*0:0*/ rv32e__DOT__wb_valid;
        CData/*0:0*/ rv32e__DOT__if_access_fault;
        CData/*6:0*/ rv32e__DOT__id_opcode;
        CData/*4:0*/ rv32e__DOT__id_rs1;
        CData/*4:0*/ rv32e__DOT__id_rs2;
        CData/*4:0*/ rv32e__DOT__id_rd;
        CData/*2:0*/ rv32e__DOT__id_func3;
        CData/*6:0*/ rv32e__DOT__id_func7;
        CData/*0:0*/ rv32e__DOT__id_RegWrite;
        CData/*0:0*/ rv32e__DOT__id_MemWrite;
        CData/*0:0*/ rv32e__DOT__id_MemRead;
        CData/*3:0*/ rv32e__DOT__id_alu_op;
        CData/*2:0*/ rv32e__DOT__id_MemLen;
        CData/*0:0*/ rv32e__DOT__id_valid;
        CData/*0:0*/ rv32e__DOT__ex_ready;
        CData/*0:0*/ rv32e__DOT__is_ebreak;
        CData/*0:0*/ rv32e__DOT__ex_alu_zero;
        CData/*0:0*/ rv32e__DOT__ex_alu_less;
        CData/*0:0*/ rv32e__DOT__ex_valid;
        CData/*0:0*/ rv32e__DOT__mem_ready;
        CData/*0:0*/ rv32e__DOT__mem_valid;
        CData/*0:0*/ rv32e__DOT__wb_ready;
        CData/*0:0*/ rv32e__DOT__load_access_fault;
        CData/*0:0*/ rv32e__DOT__store_access_fault;
    };
    struct {
        CData/*0:0*/ rv32e__DOT__wb_is_jal;
        CData/*0:0*/ rv32e__DOT__wb_is_jalr;
        CData/*0:0*/ rv32e__DOT__wb_take_branch;
        CData/*0:0*/ rv32e__DOT__stall;
        CData/*0:0*/ rv32e__DOT__flush;
        CData/*0:0*/ rv32e__DOT____Vcellinp__if_stage__pc_src;
        CData/*1:0*/ rv32e__DOT__if_stage__DOT__rresp;
        CData/*0:0*/ rv32e__DOT__if_stage__DOT__sram_arvalid;
        CData/*0:0*/ rv32e__DOT__if_stage__DOT__sram_arready;
        CData/*0:0*/ rv32e__DOT__if_stage__DOT__sram_rvalid;
        CData/*0:0*/ rv32e__DOT__if_stage__DOT__sram_rready;
        CData/*1:0*/ rv32e__DOT__if_stage__DOT__sram_rresp;
        CData/*0:0*/ rv32e__DOT__if_stage__DOT__sram_awvalid;
        CData/*3:0*/ rv32e__DOT__if_stage__DOT__sram_wstrb;
        CData/*0:0*/ rv32e__DOT__if_stage__DOT__sram_wvalid;
        CData/*0:0*/ rv32e__DOT__if_stage__DOT__sram_bready;
        CData/*1:0*/ rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter;
        CData/*4:0*/ rv32e__DOT__id_stage__DOT__get_opcode;
        CData/*1:0*/ rv32e__DOT__mem_stage__DOT__delay;
        CData/*0:0*/ rv32e__DOT__mem_stage__DOT__sram_arvalid;
        CData/*0:0*/ rv32e__DOT__mem_stage__DOT__sram_arready;
        CData/*1:0*/ rv32e__DOT__mem_stage__DOT__sram_rresp;
        CData/*0:0*/ rv32e__DOT__mem_stage__DOT__sram_rvalid;
        CData/*0:0*/ rv32e__DOT__mem_stage__DOT__sram_rready;
        CData/*0:0*/ rv32e__DOT__mem_stage__DOT__sram_awready;
        CData/*0:0*/ rv32e__DOT__mem_stage__DOT__sram_awvalid;
        CData/*3:0*/ rv32e__DOT__mem_stage__DOT__sram_wstrb;
        CData/*0:0*/ rv32e__DOT__mem_stage__DOT__sram_wvalid;
        CData/*0:0*/ rv32e__DOT__mem_stage__DOT__sram_wready;
        CData/*1:0*/ rv32e__DOT__mem_stage__DOT__sram_bresp;
        CData/*0:0*/ rv32e__DOT__mem_stage__DOT__sram_bvalid;
        CData/*0:0*/ rv32e__DOT__mem_stage__DOT__sram_bready;
        CData/*1:0*/ rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter;
        CData/*3:0*/ rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg;
        CData/*0:0*/ rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__addr_valid;
        CData/*0:0*/ rv32e__DOT__wb_stage__DOT__RegWrite_wb;
        CData/*4:0*/ rv32e__DOT__wb_stage__DOT__rd_wb;
        CData/*4:0*/ rv32e__DOT__wb_stage__DOT__rd_wb_pre;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__reset;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ rv32e__DOT__if_id_pc;
        IData/*31:0*/ rv32e__DOT__if_id_instr;
        IData/*31:0*/ rv32e__DOT__id_ex_imm;
        IData/*31:0*/ rv32e__DOT__id_ex_instr;
        IData/*31:0*/ rv32e__DOT__id_ex_rs1_val;
        IData/*31:0*/ rv32e__DOT__id_ex_rs2_val;
        IData/*31:0*/ rv32e__DOT__id_ex_pc;
        IData/*31:0*/ rv32e__DOT__ex_mem_alu_result;
        IData/*31:0*/ rv32e__DOT__ex_mem_rs1_val;
        IData/*31:0*/ rv32e__DOT__ex_mem_rs2_val;
        IData/*31:0*/ rv32e__DOT__ex_mem_imm;
        IData/*31:0*/ rv32e__DOT__ex_mem_pc;
        IData/*31:0*/ rv32e__DOT__mem_wb_data_out;
        IData/*31:0*/ rv32e__DOT__mem_wb_alu_result;
        IData/*31:0*/ rv32e__DOT__mem_wb_rs1_val;
        IData/*31:0*/ rv32e__DOT__mem_wb_rs2_val;
        IData/*31:0*/ rv32e__DOT__mem_wb_pc;
        IData/*31:0*/ rv32e__DOT__mem_wb_imm;
        IData/*31:0*/ rv32e__DOT__if_pc;
        IData/*31:0*/ rv32e__DOT__if_instr;
        IData/*31:0*/ rv32e__DOT__if_fault_addr;
        IData/*31:0*/ rv32e__DOT__branch_target;
        IData/*31:0*/ rv32e__DOT__id_imm;
    };
    struct {
        IData/*31:0*/ rv32e__DOT__ex_alu_result;
        IData/*31:0*/ rv32e__DOT__mem_data_out;
        IData/*31:0*/ rv32e__DOT__mem_fault_addr;
        IData/*31:0*/ rv32e__DOT__wb_data;
        IData/*31:0*/ rv32e__DOT__wb_jal_target;
        IData/*31:0*/ rv32e__DOT__wb_jalr_target;
        IData/*31:0*/ rv32e__DOT__reg_file__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ rv32e__DOT__if_stage__DOT__state;
        IData/*31:0*/ rv32e__DOT__if_stage__DOT__next_state;
        IData/*31:0*/ rv32e__DOT__if_stage__DOT__sram_araddr;
        IData/*31:0*/ rv32e__DOT__if_stage__DOT__sram_rdata;
        IData/*31:0*/ rv32e__DOT__if_stage__DOT__sram_awaddr;
        IData/*31:0*/ rv32e__DOT__if_stage__DOT__sram_wdata;
        IData/*31:0*/ rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__sram_state;
        IData/*31:0*/ rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state;
        IData/*31:0*/ rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg;
        IData/*31:0*/ rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg;
        IData/*31:0*/ rv32e__DOT__id_stage__DOT__state;
        IData/*31:0*/ rv32e__DOT__id_stage__DOT__next_state;
        IData/*31:0*/ rv32e__DOT__id_stage__DOT__immI;
        IData/*31:0*/ rv32e__DOT__ex_stage__DOT__state;
        IData/*31:0*/ rv32e__DOT__ex_stage__DOT__next_state;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__state;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__next_state;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__sram_araddr;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__sram_rdata;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__sram_awaddr;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__sram_wdata;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg;
        IData/*31:0*/ rv32e__DOT__wb_stage__DOT__state;
        IData/*31:0*/ rv32e__DOT__wb_stage__DOT__next_state;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> rv32e__DOT__reg_file__DOT__regs;
        VlUnpacked<IData/*31:0*/, 32> rv32e__DOT__wb_stage__DOT__regs;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
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
