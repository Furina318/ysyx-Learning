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
        CData/*0:0*/ rv32e__DOT__IF_valid;
        CData/*0:0*/ rv32e__DOT__id_ready;
        CData/*0:0*/ rv32e__DOT__id_valid;
        CData/*0:0*/ rv32e__DOT__ex_ready;
        CData/*0:0*/ rv32e__DOT__id_ex_RegWrite;
        CData/*4:0*/ rv32e__DOT__id_ex_rd;
        CData/*4:0*/ rv32e__DOT__id_wb_rs1;
        CData/*4:0*/ rv32e__DOT__id_wb_rs2;
        CData/*4:0*/ rv32e__DOT__id_ex_zimm;
        CData/*5:0*/ rv32e__DOT__id_ex_shamt;
        CData/*3:0*/ rv32e__DOT__id_ex_alu_op;
        CData/*2:0*/ rv32e__DOT__id_ex_MemLen;
        CData/*0:0*/ rv32e__DOT__id_ex_MemWrite;
        CData/*0:0*/ rv32e__DOT__id_ex_MemRead;
        CData/*6:0*/ rv32e__DOT__id_ex_opcode;
        CData/*2:0*/ rv32e__DOT__id_ex_func3;
        CData/*0:0*/ rv32e__DOT__id_ex_jal;
        CData/*0:0*/ rv32e__DOT__id_ex_jalr;
        CData/*0:0*/ rv32e__DOT__id_ex_csr;
        CData/*0:0*/ rv32e__DOT__id_ex_csr_wen1;
        CData/*0:0*/ rv32e__DOT__id_ex_csr_wen2;
        CData/*0:0*/ rv32e__DOT__id_ex_csr_ecall;
        CData/*0:0*/ rv32e__DOT__id_ex_csr_mret;
        CData/*1:0*/ rv32e__DOT__id_ex_csr_op;
        CData/*0:0*/ rv32e__DOT__ex_lsu_valid;
        CData/*0:0*/ rv32e__DOT__lsu_ex_ready;
        CData/*0:0*/ rv32e__DOT__ex_lsu_RegWrite;
        CData/*4:0*/ rv32e__DOT__ex_lsu_rd;
        CData/*0:0*/ rv32e__DOT__ex_lsu_MemRead;
        CData/*0:0*/ rv32e__DOT__ex_lsu_MemWrite;
        CData/*2:0*/ rv32e__DOT__ex_lsu_MemLen;
        CData/*0:0*/ rv32e__DOT__ex_flush;
        CData/*0:0*/ rv32e__DOT__ex_lsu_csr;
        CData/*0:0*/ rv32e__DOT__ex_lsu_csr_wen1;
        CData/*0:0*/ rv32e__DOT__ex_lsu_csr_wen2;
        CData/*0:0*/ rv32e__DOT__ex_lsu_csr_ecall;
        CData/*0:0*/ rv32e__DOT__ex_lsu_csr_mret;
        CData/*6:0*/ rv32e__DOT__ex_lsu_opcode;
        CData/*0:0*/ rv32e__DOT__lsu_wb_valid;
        CData/*0:0*/ rv32e__DOT__lsu_wb_RegWrite;
        CData/*4:0*/ rv32e__DOT__lsu_wb_rd;
        CData/*0:0*/ rv32e__DOT__lsu_wb_csr_wen1;
        CData/*0:0*/ rv32e__DOT__lsu_wb_csr_wen2;
        CData/*0:0*/ rv32e__DOT__lsu_wb_flush;
        CData/*0:0*/ rv32e__DOT__wb_valid;
        CData/*0:0*/ rv32e__DOT__ex_lsu_forward_las;
        CData/*0:0*/ rv32e__DOT__lsu_sram_arvalid;
        CData/*0:0*/ rv32e__DOT__sram_lsu_arready;
        CData/*0:0*/ rv32e__DOT__sram_lsu_rvalid;
        CData/*0:0*/ rv32e__DOT__lsu_sram_rready;
        CData/*1:0*/ rv32e__DOT__sram_lsu_rresp;
        CData/*0:0*/ rv32e__DOT__lsu_sram_awvalid;
        CData/*0:0*/ rv32e__DOT__sram_lsu_awready;
        CData/*3:0*/ rv32e__DOT__lsu_sram_wstrb;
        CData/*0:0*/ rv32e__DOT__lsu_sram_wvalid;
        CData/*0:0*/ rv32e__DOT__sram_lsu_wready;
        CData/*1:0*/ rv32e__DOT__sram_lsu_bresp;
        CData/*0:0*/ rv32e__DOT__sram_lsu_bvalid;
        CData/*0:0*/ rv32e__DOT__lsu_sram_bready;
        CData/*0:0*/ rv32e__DOT__if_sram_arvalid;
        CData/*0:0*/ rv32e__DOT__sram_if_arready;
        CData/*0:0*/ rv32e__DOT__sram_if_rvalid;
    };
    struct {
        CData/*0:0*/ rv32e__DOT__if_sram_rready;
        CData/*1:0*/ rv32e__DOT__sram_if_rresp;
        CData/*0:0*/ rv32e__DOT__sram_arvalid;
        CData/*0:0*/ rv32e__DOT__sram_arready;
        CData/*0:0*/ rv32e__DOT__sram_rvalid;
        CData/*0:0*/ rv32e__DOT__sram_rready;
        CData/*1:0*/ rv32e__DOT__sram_rresp;
        CData/*0:0*/ rv32e__DOT__sram_awvalid;
        CData/*0:0*/ rv32e__DOT__sram_awready;
        CData/*3:0*/ rv32e__DOT__sram_wstrb;
        CData/*0:0*/ rv32e__DOT__sram_wvalid;
        CData/*0:0*/ rv32e__DOT__sram_wready;
        CData/*1:0*/ rv32e__DOT__sram_bresp;
        CData/*0:0*/ rv32e__DOT__sram_bvalid;
        CData/*0:0*/ rv32e__DOT__sram_bready;
        CData/*0:0*/ rv32e__DOT__msram__DOT__read_pending;
        CData/*0:0*/ rv32e__DOT__msram__DOT__write_addr_valid;
        CData/*3:0*/ rv32e__DOT__msram__DOT__write_strb;
        CData/*0:0*/ rv32e__DOT__msram__DOT__write_data_valid;
        CData/*0:0*/ rv32e__DOT__isram__DOT__sram_awready;
        CData/*0:0*/ rv32e__DOT__isram__DOT__sram_wready;
        CData/*1:0*/ rv32e__DOT__isram__DOT__sram_bresp;
        CData/*0:0*/ rv32e__DOT__isram__DOT__sram_bvalid;
        CData/*0:0*/ rv32e__DOT__isram__DOT__read_pending;
        CData/*0:0*/ rv32e__DOT__isram__DOT__write_addr_valid;
        CData/*3:0*/ rv32e__DOT__isram__DOT__write_strb;
        CData/*0:0*/ rv32e__DOT__isram__DOT__write_data_valid;
        CData/*1:0*/ rv32e__DOT__ifu__DOT__state;
        CData/*0:0*/ rv32e__DOT__ifu__DOT__once;
        CData/*3:0*/ rv32e__DOT__idu__DOT__alu_op;
        CData/*0:0*/ rv32e__DOT__idu__DOT__csr_ecall;
        CData/*0:0*/ rv32e__DOT__idu__DOT__csr_mret;
        CData/*0:0*/ rv32e__DOT__idu__DOT____VdfgTmp_h4eb56789__0;
        CData/*0:0*/ rv32e__DOT__idu__DOT____VdfgTmp_h05244652__0;
        CData/*0:0*/ rv32e__DOT__idu__DOT____VdfgTmp_hcf9d2862__0;
        CData/*0:0*/ rv32e__DOT__idu__DOT____VdfgTmp_h69b43165__0;
        CData/*0:0*/ rv32e__DOT__exu__DOT__alu_zero;
        CData/*0:0*/ rv32e__DOT__exu__DOT__alu_less;
        CData/*0:0*/ rv32e__DOT__exu__DOT__take_branch;
        CData/*0:0*/ rv32e__DOT__exu__DOT__ex_flush_condition;
        CData/*3:0*/ rv32e__DOT__exu__DOT__load_use_flag;
        CData/*0:0*/ rv32e__DOT__exu__DOT____VdfgTmp_h9653a62d__0;
        CData/*0:0*/ rv32e__DOT__exu__DOT____VdfgTmp_h666fa1ae__0;
        CData/*0:0*/ rv32e__DOT__exu__DOT____VdfgTmp_h0017749a__0;
        CData/*0:0*/ rv32e__DOT__exu__DOT____VdfgTmp_hadc13f7a__0;
        CData/*0:0*/ rv32e__DOT__exu__DOT____VdfgTmp_h804502ec__0;
        CData/*0:0*/ rv32e__DOT__exu__DOT____VdfgTmp_hc613623f__0;
        CData/*0:0*/ rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0;
        CData/*0:0*/ rv32e__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0;
        CData/*0:0*/ rv32e__DOT__exu__DOT____VdfgTmp_h3556a05f__0;
        CData/*0:0*/ rv32e__DOT__exu__DOT____VdfgTmp_h69af1a50__0;
        CData/*0:0*/ rv32e__DOT__exu__DOT____VdfgTmp_h384f4e33__0;
        CData/*0:0*/ rv32e__DOT__exu__DOT____VdfgTmp_hb53dc38f__0;
        CData/*0:0*/ rv32e__DOT__lsu__DOT__l_load;
        CData/*0:0*/ rv32e__DOT__lsu__DOT__l_rd_en;
        CData/*4:0*/ rv32e__DOT__lsu__DOT__l_rd_addr;
        CData/*2:0*/ rv32e__DOT__lsu__DOT__l_MemLen;
        CData/*6:0*/ rv32e__DOT__lsu__DOT__l_opcode;
        CData/*0:0*/ rv32e__DOT__lsu__DOT__read_pending;
        CData/*0:0*/ rv32e__DOT__lsu__DOT__write_pending;
        CData/*0:0*/ rv32e__DOT__lsu__DOT__read_valid;
        CData/*0:0*/ rv32e__DOT__lsu__DOT__write_valid;
        CData/*0:0*/ rv32e__DOT__wbu__DOT__flush;
        CData/*0:0*/ __Vdly__rv32e__DOT__sram_if_arready;
    };
    struct {
        CData/*0:0*/ __Vdly__rv32e__DOT__sram_if_rvalid;
        CData/*0:0*/ __Vdly__rv32e__DOT__id_valid;
        CData/*0:0*/ __Vdly__rv32e__DOT__lsu_ex_ready;
        CData/*0:0*/ __Vdly__rv32e__DOT__if_sram_arvalid;
        CData/*0:0*/ __Vdly__rv32e__DOT__if_sram_rready;
        CData/*0:0*/ __Vdly__rv32e__DOT__IF_valid;
        CData/*1:0*/ __Vdly__rv32e__DOT__ifu__DOT__state;
        CData/*0:0*/ __Vdly__rv32e__DOT__ifu__DOT__once;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__reset;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ rv32e__DOT__id_ex_csr_wr_addr1;
        SData/*11:0*/ rv32e__DOT__id_ex_csr_wr_addr2;
        SData/*11:0*/ rv32e__DOT__id_wb_csr_addr1;
        SData/*11:0*/ rv32e__DOT__id_wb_csr_addr2;
        SData/*11:0*/ rv32e__DOT__ex_lsu_csr_wr_addr1;
        SData/*11:0*/ rv32e__DOT__ex_lsu_csr_wr_addr2;
        SData/*11:0*/ rv32e__DOT__lsu_wb_csr_wr_addr1;
        SData/*11:0*/ rv32e__DOT__lsu_wb_csr_wr_addr2;
        SData/*11:0*/ rv32e__DOT__idu__DOT____VdfgTmp_hf81b0dad__0;
        IData/*31:0*/ rv32e__DOT__IF_ID_pc;
        IData/*31:0*/ rv32e__DOT__IF_ID_inst;
        IData/*31:0*/ rv32e__DOT__id_ex_pc;
        IData/*31:0*/ rv32e__DOT__id_ex_inst;
        IData/*31:0*/ rv32e__DOT__id_ex_imm;
        IData/*31:0*/ rv32e__DOT__ex_lsu_pc;
        IData/*31:0*/ rv32e__DOT__ex_lsu_inst;
        IData/*31:0*/ rv32e__DOT__ex_lsu_src2;
        IData/*31:0*/ rv32e__DOT__ex_lsu_process_result;
        IData/*31:0*/ rv32e__DOT__ex_flush_pc;
        IData/*31:0*/ rv32e__DOT__ex_lsu_csr_wr_data1;
        IData/*31:0*/ rv32e__DOT__ex_lsu_csr_wr_data2;
        IData/*31:0*/ rv32e__DOT__ex_lsu_csr_rdata;
        IData/*31:0*/ rv32e__DOT__ex_lsu_imm;
        IData/*31:0*/ rv32e__DOT__lsu_wb_pc;
        IData/*31:0*/ rv32e__DOT__lsu_wb_inst;
        IData/*31:0*/ rv32e__DOT__lsu_wb_write_rd_data;
        IData/*31:0*/ rv32e__DOT__lsu_wb_csr_wr_data1;
        IData/*31:0*/ rv32e__DOT__lsu_wb_csr_wr_data2;
        IData/*31:0*/ rv32e__DOT__wb_ex_csr_num1;
        IData/*31:0*/ rv32e__DOT__lsu_sram_araddr;
        IData/*31:0*/ rv32e__DOT__sram_lsu_rdata;
        IData/*31:0*/ rv32e__DOT__lsu_sram_awaddr;
        IData/*31:0*/ rv32e__DOT__lsu_sram_wdata;
        IData/*31:0*/ rv32e__DOT__if_sram_araddr;
        IData/*31:0*/ rv32e__DOT__sram_if_rdata;
        IData/*31:0*/ rv32e__DOT__sram_araddr;
        IData/*31:0*/ rv32e__DOT__sram_rdata;
        IData/*31:0*/ rv32e__DOT__sram_awaddr;
        IData/*31:0*/ rv32e__DOT__sram_wdata;
        IData/*31:0*/ rv32e__DOT__inst_cnt;
        IData/*31:0*/ rv32e__DOT__cycle_cnt;
        IData/*31:0*/ rv32e__DOT__msram__DOT__read_addr;
        IData/*31:0*/ rv32e__DOT__msram__DOT__LFSR;
        IData/*31:0*/ rv32e__DOT__msram__DOT__write_addr;
        IData/*31:0*/ rv32e__DOT__msram__DOT__write_data;
        IData/*31:0*/ rv32e__DOT__isram__DOT__read_addr;
        IData/*31:0*/ rv32e__DOT__isram__DOT__LFSR;
        IData/*31:0*/ rv32e__DOT__isram__DOT__write_addr;
        IData/*31:0*/ rv32e__DOT__isram__DOT__write_data;
        IData/*31:0*/ rv32e__DOT__ifu__DOT__next_pc;
        IData/*31:0*/ rv32e__DOT__idu__DOT__imm;
        IData/*31:0*/ rv32e__DOT__exu__DOT__src1;
        IData/*31:0*/ rv32e__DOT__exu__DOT__src2;
    };
    struct {
        IData/*31:0*/ rv32e__DOT__exu__DOT__ex_num1;
        IData/*31:0*/ rv32e__DOT__exu__DOT__ex_num2;
        IData/*31:0*/ rv32e__DOT__exu__DOT__process_result;
        IData/*31:0*/ rv32e__DOT__exu__DOT__jal_target;
        IData/*31:0*/ rv32e__DOT__exu__DOT__jalr_target;
        IData/*31:0*/ rv32e__DOT__lsu__DOT__l_inst;
        IData/*31:0*/ rv32e__DOT__lsu__DOT__l_pc;
        IData/*31:0*/ rv32e__DOT__lsu__DOT__read_lsu_data;
        IData/*31:0*/ rv32e__DOT__lsu__DOT__rd_data;
        IData/*31:0*/ rv32e__DOT__wbu__DOT__i;
        IData/*31:0*/ rv32e__DOT__wbu__DOT__k;
        IData/*31:0*/ __Vdly__rv32e__DOT__sram_if_rdata;
        IData/*31:0*/ __Vdly__rv32e__DOT__ifu__DOT__next_pc;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 4096> rv32e__DOT__wbu__DOT__CSR;
        VlUnpacked<IData/*31:0*/, 32> rv32e__DOT__wbu__DOT__regs;
        VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    };
    double rv32e__DOT__unnamedblk1__DOT__IPC;
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
