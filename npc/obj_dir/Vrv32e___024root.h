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
        CData/*0:0*/ rv32e__DOT__if_access_fault;
        CData/*0:0*/ rv32e__DOT__ifu_sram_arvalid;
        CData/*0:0*/ rv32e__DOT__ifu_sram_arready;
        CData/*0:0*/ rv32e__DOT__ifu_sram_rvalid;
        CData/*0:0*/ rv32e__DOT__ifu_sram_rready;
        CData/*1:0*/ rv32e__DOT__ifu_sram_rresp;
        CData/*0:0*/ rv32e__DOT__ifu_sram_awvalid;
        CData/*0:0*/ rv32e__DOT__ifu_sram_awready;
        CData/*3:0*/ rv32e__DOT__ifu_sram_wstrb;
        CData/*0:0*/ rv32e__DOT__ifu_sram_wvalid;
        CData/*0:0*/ rv32e__DOT__ifu_sram_wready;
        CData/*1:0*/ rv32e__DOT__ifu_sram_bresp;
        CData/*0:0*/ rv32e__DOT__ifu_sram_bvalid;
        CData/*0:0*/ rv32e__DOT__ifu_sram_bready;
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
        CData/*2:0*/ rv32e__DOT__MemLen;
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
        CData/*0:0*/ rv32e__DOT__load_access_fault;
        CData/*0:0*/ rv32e__DOT__store_access_fault;
        CData/*0:0*/ rv32e__DOT__mem_sram_arvalid;
        CData/*0:0*/ rv32e__DOT__mem_sram_arready;
        CData/*0:0*/ rv32e__DOT__mem_sram_rvalid;
        CData/*0:0*/ rv32e__DOT__mem_sram_rready;
        CData/*1:0*/ rv32e__DOT__mem_sram_rresp;
        CData/*0:0*/ rv32e__DOT__mem_sram_awvalid;
        CData/*0:0*/ rv32e__DOT__mem_sram_awready;
        CData/*3:0*/ rv32e__DOT__mem_sram_wstrb;
        CData/*0:0*/ rv32e__DOT__mem_sram_wvalid;
        CData/*0:0*/ rv32e__DOT__mem_sram_wready;
        CData/*1:0*/ rv32e__DOT__mem_sram_bresp;
        CData/*0:0*/ rv32e__DOT__mem_sram_bvalid;
        CData/*0:0*/ rv32e__DOT__mem_sram_bready;
        CData/*0:0*/ rv32e__DOT__is_jal;
        CData/*0:0*/ rv32e__DOT__is_jalr;
        CData/*0:0*/ rv32e__DOT__take_branch;
        CData/*4:0*/ rv32e__DOT__rd_wb;
        CData/*0:0*/ rv32e__DOT__RegWrite_wb;
        CData/*0:0*/ rv32e__DOT__wb_MemRead;
        CData/*0:0*/ rv32e__DOT__wb_MemWrite;
        CData/*2:0*/ rv32e__DOT__wb_MemLen;
    };
    struct {
        CData/*0:0*/ rv32e__DOT__sram_arvalid;
        CData/*0:0*/ rv32e__DOT__sram_arready;
        CData/*1:0*/ rv32e__DOT__sram_rresp;
        CData/*0:0*/ rv32e__DOT__sram_rvalid;
        CData/*0:0*/ rv32e__DOT__sram_rready;
        CData/*0:0*/ rv32e__DOT__sram_awready;
        CData/*0:0*/ rv32e__DOT__sram_awvalid;
        CData/*3:0*/ rv32e__DOT__sram_wstrb;
        CData/*0:0*/ rv32e__DOT__sram_wvalid;
        CData/*0:0*/ rv32e__DOT__sram_wready;
        CData/*1:0*/ rv32e__DOT__sram_bresp;
        CData/*0:0*/ rv32e__DOT__sram_bvalid;
        CData/*0:0*/ rv32e__DOT__sram_bready;
        CData/*0:0*/ rv32e__DOT__uart_arvalid;
        CData/*0:0*/ rv32e__DOT__uart_arready;
        CData/*1:0*/ rv32e__DOT__uart_rresp;
        CData/*0:0*/ rv32e__DOT__uart_rvalid;
        CData/*0:0*/ rv32e__DOT__uart_rready;
        CData/*0:0*/ rv32e__DOT__uart_awready;
        CData/*0:0*/ rv32e__DOT__uart_awvalid;
        CData/*3:0*/ rv32e__DOT__uart_wstrb;
        CData/*0:0*/ rv32e__DOT__uart_wvalid;
        CData/*0:0*/ rv32e__DOT__uart_wready;
        CData/*1:0*/ rv32e__DOT__uart_bresp;
        CData/*0:0*/ rv32e__DOT__uart_bvalid;
        CData/*0:0*/ rv32e__DOT__uart_bready;
        CData/*0:0*/ rv32e__DOT____Vcellinp__if_stage__pc_src;
        CData/*2:0*/ rv32e__DOT__axi_arb__DOT__current_master;
        CData/*2:0*/ rv32e__DOT__axi_arb__DOT__next_master;
        CData/*3:0*/ rv32e__DOT__uart__DOT__wstrb_reg;
        CData/*0:0*/ rv32e__DOT__uart__DOT__addr_valid;
        CData/*3:0*/ rv32e__DOT__sram__DOT__wstrb_reg;
        CData/*0:0*/ rv32e__DOT__sram__DOT__addr_valid;
        CData/*1:0*/ rv32e__DOT__if_stage__DOT__rresp;
        CData/*4:0*/ rv32e__DOT__id_stage__DOT__get_opcode;
        CData/*1:0*/ rv32e__DOT__mem_stage__DOT__delay;
        CData/*0:0*/ rv32e__DOT__wb_stage__DOT__RegWrite_wb;
        CData/*4:0*/ rv32e__DOT__wb_stage__DOT__rd_wb;
        CData/*4:0*/ rv32e__DOT__wb_stage__DOT__rd_wb_pre;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__2__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__6__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__7__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__45__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__46__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__47__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__51__Vfuncout;
    };
    struct {
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__52__Vfuncout;
        CData/*1:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__53__Vfuncout;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__reset;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ rv32e__DOT__pc;
        IData/*31:0*/ rv32e__DOT__instr;
        IData/*31:0*/ rv32e__DOT__if_fault_addr;
        IData/*31:0*/ rv32e__DOT__trap_pc;
        IData/*31:0*/ rv32e__DOT__ifu_sram_araddr;
        IData/*31:0*/ rv32e__DOT__ifu_sram_rdata;
        IData/*31:0*/ rv32e__DOT__ifu_sram_awaddr;
        IData/*31:0*/ rv32e__DOT__ifu_sram_wdata;
        IData/*31:0*/ rv32e__DOT__imm;
        IData/*31:0*/ rv32e__DOT__rs1_val;
        IData/*31:0*/ rv32e__DOT__rs2_val;
        IData/*31:0*/ rv32e__DOT__alu_result;
        IData/*31:0*/ rv32e__DOT__data_out;
        IData/*31:0*/ rv32e__DOT__mem_fault_addr;
        IData/*31:0*/ rv32e__DOT__mem_sram_araddr;
        IData/*31:0*/ rv32e__DOT__mem_sram_rdata;
        IData/*31:0*/ rv32e__DOT__mem_sram_awaddr;
        IData/*31:0*/ rv32e__DOT__mem_sram_wdata;
        IData/*31:0*/ rv32e__DOT__wb_data;
        IData/*31:0*/ rv32e__DOT__jal_target;
        IData/*31:0*/ rv32e__DOT__jalr_target;
        IData/*31:0*/ rv32e__DOT__branch_target;
        IData/*31:0*/ rv32e__DOT__wb_addr;
        IData/*31:0*/ rv32e__DOT__wb_data_in;
        IData/*31:0*/ rv32e__DOT__sram_araddr;
        IData/*31:0*/ rv32e__DOT__sram_rdata;
        IData/*31:0*/ rv32e__DOT__sram_awaddr;
        IData/*31:0*/ rv32e__DOT__sram_wdata;
        IData/*31:0*/ rv32e__DOT__uart_araddr;
        IData/*31:0*/ rv32e__DOT__uart_rdata;
        IData/*31:0*/ rv32e__DOT__uart_awaddr;
        IData/*31:0*/ rv32e__DOT__uart_wdata;
        IData/*31:0*/ rv32e__DOT____Vcellinp__mem_stage__addr;
        IData/*31:0*/ rv32e__DOT__uart__DOT__uart_state;
        IData/*31:0*/ rv32e__DOT__uart__DOT__next_uart_state;
        IData/*31:0*/ rv32e__DOT__uart__DOT__LFSR;
        IData/*31:0*/ rv32e__DOT__uart__DOT__araddr_reg;
        IData/*31:0*/ rv32e__DOT__uart__DOT__awaddr_reg;
        IData/*31:0*/ rv32e__DOT__uart__DOT__wdata_reg;
        IData/*31:0*/ rv32e__DOT__uart__DOT__rdata_reg;
        IData/*31:0*/ rv32e__DOT__sram__DOT__sram_state;
        IData/*31:0*/ rv32e__DOT__sram__DOT__next_sram_state;
        IData/*31:0*/ rv32e__DOT__sram__DOT__LFSR;
        IData/*31:0*/ rv32e__DOT__sram__DOT__random_delay;
        IData/*31:0*/ rv32e__DOT__sram__DOT__araddr_reg;
        IData/*31:0*/ rv32e__DOT__sram__DOT__awaddr_reg;
        IData/*31:0*/ rv32e__DOT__sram__DOT__rdata_reg;
        IData/*31:0*/ rv32e__DOT__sram__DOT__wdata_reg;
        IData/*31:0*/ rv32e__DOT__if_stage__DOT__state;
        IData/*31:0*/ rv32e__DOT__if_stage__DOT__next_state;
        IData/*31:0*/ rv32e__DOT__id_stage__DOT__state;
        IData/*31:0*/ rv32e__DOT__id_stage__DOT__next_state;
        IData/*31:0*/ rv32e__DOT__id_stage__DOT__immI;
        IData/*31:0*/ rv32e__DOT__ex_stage__DOT__state;
        IData/*31:0*/ rv32e__DOT__ex_stage__DOT__next_state;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__state;
        IData/*31:0*/ rv32e__DOT__mem_stage__DOT__next_state;
        IData/*31:0*/ rv32e__DOT__wb_stage__DOT__state;
        IData/*31:0*/ rv32e__DOT__wb_stage__DOT__next_state;
    };
    struct {
        IData/*31:0*/ rv32e__DOT__wb_stage__DOT__i;
        IData/*31:0*/ rv32e__DOT__wb_stage__DOT__j;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__2__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__6__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__7__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__45__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__46__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__47__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__51__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__52__addr;
        IData/*31:0*/ __Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__53__addr;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ rv32e__DOT__wb_stage__DOT__btb_valid;
        VlUnpacked<IData/*31:0*/, 32> rv32e__DOT__wb_stage__DOT__regs;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
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
