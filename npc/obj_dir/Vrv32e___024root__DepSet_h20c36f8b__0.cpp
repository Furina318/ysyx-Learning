// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32e.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32e___024root.h"

void Vrv32e___024root___eval_act(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->rv32e__DOT__flush)) {
        VL_WRITEF("\033[32m         [FLUSH]\346\216\247\345\210\266\345\206\222\351\231\251\350\247\246\345\217\221! branch_target = 0x%x\033[0m\n",
                  32,vlSelf->rv32e__DOT__branch_target);
    }
    if (VL_UNLIKELY(vlSelf->rv32e__DOT__stall)) {
        VL_WRITEF("\033[32m         [STALL]\346\225\260\346\215\256\345\206\222\351\231\251\350\247\246\345\217\221!!!\033[0m\n");
    }
    VL_WRITEF("\033[36m[IF] PC = 0x%x | instr = 0x%x\033[0m\n",
              32,vlSelf->rv32e__DOT__if_pc,32,vlSelf->rv32e__DOT__if_instr);
}

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ len);

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__1(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read__0__Vfuncout;
    __Vfunc_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_read__14__Vfuncout;
    __Vfunc_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_read__14__Vfuncout = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__reg_file__DOT__regs__v0;
    __Vdlyvset__rv32e__DOT__reg_file__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__rv32e__DOT__reg_file__DOT__regs__v32;
    __Vdlyvdim0__rv32e__DOT__reg_file__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__rv32e__DOT__reg_file__DOT__regs__v32;
    __Vdlyvval__rv32e__DOT__reg_file__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__reg_file__DOT__regs__v32;
    __Vdlyvset__rv32e__DOT__reg_file__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__if_pc;
    __Vdly__rv32e__DOT__if_pc = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__if_stage__DOT__sram_araddr;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_araddr = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__if_stage__DOT__sram_rready;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_rready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__if_stage__DOT__sram_arready;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_arready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__if_stage__DOT__sram_rvalid;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_rvalid = 0;
    CData/*1:0*/ __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter;
    __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg;
    __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg;
    __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_ready;
    __Vdly__rv32e__DOT__mem_ready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_valid;
    __Vdly__rv32e__DOT__mem_valid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_araddr;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_araddr = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_awaddr;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_awaddr = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_awvalid;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_awvalid = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_wdata;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wdata = 0;
    CData/*3:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_wstrb;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wstrb = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_bready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_bready = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready = 0;
    CData/*1:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_bvalid;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_bvalid = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg = 0;
    CData/*3:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_awready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_awready = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 0;
    // Body
    __Vdlyvset__rv32e__DOT__reg_file__DOT__regs__v0 = 0U;
    __Vdlyvset__rv32e__DOT__reg_file__DOT__regs__v32 = 0U;
    __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg 
        = vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg;
    __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg 
        = vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg;
    __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter 
        = vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_rvalid 
        = vlSelf->rv32e__DOT__if_stage__DOT__sram_rvalid;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_arready 
        = vlSelf->rv32e__DOT__if_stage__DOT__sram_arready;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_awready 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_awready;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_bvalid 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_bvalid;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_rready 
        = vlSelf->rv32e__DOT__if_stage__DOT__sram_rready;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid 
        = vlSelf->rv32e__DOT__if_stage__DOT__sram_arvalid;
    __Vdly__rv32e__DOT__if_stage__DOT__sram_araddr 
        = vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr;
    __Vdly__rv32e__DOT__if_pc = vlSelf->rv32e__DOT__if_pc;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_bready 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_bready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wstrb 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_wstrb;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wdata 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_wdata;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_awvalid 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_awvalid;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid;
    __Vdly__rv32e__DOT__mem_valid = vlSelf->rv32e__DOT__mem_valid;
    __Vdly__rv32e__DOT__mem_ready = vlSelf->rv32e__DOT__mem_ready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_awaddr 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_araddr 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr;
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__reg_file__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__id_opcode = 0U;
        vlSelf->rv32e__DOT__id_rs1 = 0U;
        vlSelf->rv32e__DOT__id_rs2 = 0U;
        vlSelf->rv32e__DOT__id_rd = 0U;
        vlSelf->rv32e__DOT__id_imm = 0U;
        vlSelf->rv32e__DOT__id_func3 = 0U;
        vlSelf->rv32e__DOT__id_func7 = 0U;
        vlSelf->rv32e__DOT__id_RegWrite = 0U;
        vlSelf->rv32e__DOT__id_MemWrite = 0U;
        vlSelf->rv32e__DOT__id_MemRead = 0U;
        vlSelf->rv32e__DOT__id_alu_op = 0U;
        vlSelf->rv32e__DOT__id_MemLen = 2U;
        vlSelf->rv32e__DOT__is_ebreak = 0U;
    } else {
        vlSelf->rv32e__DOT__id_stage__DOT__state = vlSelf->rv32e__DOT__id_stage__DOT__next_state;
        if ((0U == vlSelf->rv32e__DOT__id_stage__DOT__state)) {
            vlSelf->rv32e__DOT__id_ready = 1U;
            vlSelf->rv32e__DOT__id_valid = 0U;
            vlSelf->rv32e__DOT__is_ebreak = 0U;
            if (vlSelf->rv32e__DOT__if_valid) {
                vlSelf->rv32e__DOT__id_opcode = (0x7fU 
                                                 & vlSelf->rv32e__DOT__if_id_instr);
                vlSelf->rv32e__DOT__id_rs1 = (0x1fU 
                                              & (vlSelf->rv32e__DOT__if_id_instr 
                                                 >> 0xfU));
                vlSelf->rv32e__DOT__id_rs2 = (0x1fU 
                                              & (vlSelf->rv32e__DOT__if_id_instr 
                                                 >> 0x14U));
                vlSelf->rv32e__DOT__id_rd = (0x1fU 
                                             & (vlSelf->rv32e__DOT__if_id_instr 
                                                >> 7U));
                vlSelf->rv32e__DOT__id_func3 = (7U 
                                                & (vlSelf->rv32e__DOT__if_id_instr 
                                                   >> 0xcU));
                vlSelf->rv32e__DOT__id_stage__DOT__next_state = 1U;
                vlSelf->rv32e__DOT__id_func7 = (vlSelf->rv32e__DOT__if_id_instr 
                                                >> 0x19U);
                vlSelf->rv32e__DOT__id_imm = 0U;
                vlSelf->rv32e__DOT__id_RegWrite = 0U;
                vlSelf->rv32e__DOT__id_MemWrite = 0U;
                vlSelf->rv32e__DOT__id_MemRead = 0U;
                vlSelf->rv32e__DOT__id_alu_op = 0U;
                vlSelf->rv32e__DOT__id_MemLen = 2U;
                vlSelf->rv32e__DOT__id_stage__DOT__get_opcode 
                    = (0x1fU & ((IData)(vlSelf->rv32e__DOT__id_opcode) 
                                >> 2U));
                if ((0x10U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                    if (VL_LIKELY((8U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                        if ((4U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                            if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__if_id_instr);
                                VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                          32,vlSelf->rv32e__DOT__if_id_instr);
                            } else if (VL_UNLIKELY(
                                                   (1U 
                                                    & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__if_id_instr);
                                VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                          32,vlSelf->rv32e__DOT__if_id_instr);
                            } else if ((0x100073U == vlSelf->rv32e__DOT__if_id_instr)) {
                                vlSelf->rv32e__DOT__is_ebreak = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                            if (VL_LIKELY((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                                vlSelf->rv32e__DOT__id_imm 
                                    = (((- (IData)(
                                                   (vlSelf->rv32e__DOT__if_id_instr 
                                                    >> 0x1fU))) 
                                        << 0x14U) | 
                                       ((0xff000U & vlSelf->rv32e__DOT__if_id_instr) 
                                        | ((0x800U 
                                            & (vlSelf->rv32e__DOT__if_id_instr 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->rv32e__DOT__if_id_instr 
                                                 >> 0x14U)))));
                                vlSelf->rv32e__DOT__id_RegWrite = 1U;
                            } else {
                                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__if_id_instr);
                                VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                          32,vlSelf->rv32e__DOT__if_id_instr);
                            }
                        } else if ((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                            if ((0U == (IData)(vlSelf->rv32e__DOT__id_func3))) {
                                vlSelf->rv32e__DOT__id_imm 
                                    = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                                vlSelf->rv32e__DOT__id_RegWrite = 1U;
                            }
                        } else {
                            vlSelf->rv32e__DOT__id_imm 
                                = (((- (IData)((vlSelf->rv32e__DOT__if_id_instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->rv32e__DOT__if_id_instr 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->rv32e__DOT__if_id_instr 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->rv32e__DOT__if_id_instr 
                                                         >> 7U)))));
                            if ((4U & (IData)(vlSelf->rv32e__DOT__id_func3))) {
                                vlSelf->rv32e__DOT__id_alu_op 
                                    = ((2U & (IData)(vlSelf->rv32e__DOT__id_func3))
                                        ? 6U : 7U);
                            } else if (VL_UNLIKELY(
                                                   (2U 
                                                    & (IData)(vlSelf->rv32e__DOT__id_func3)))) {
                                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__if_id_instr);
                                VL_WRITEF("\033[32m[ID] : Unknown B instruction with func3 = %b\033[0m\n",
                                          3,vlSelf->rv32e__DOT__id_func3);
                            } else {
                                vlSelf->rv32e__DOT__id_alu_op = 1U;
                            }
                        }
                    } else {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__if_id_instr);
                        VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                  32,vlSelf->rv32e__DOT__if_id_instr);
                    }
                } else if ((8U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                    if ((4U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                        if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__if_id_instr);
                            VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                      32,vlSelf->rv32e__DOT__if_id_instr);
                        } else if ((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                            vlSelf->rv32e__DOT__id_imm 
                                = (0xfffff000U & vlSelf->rv32e__DOT__if_id_instr);
                            vlSelf->rv32e__DOT__id_RegWrite = 1U;
                        } else {
                            vlSelf->rv32e__DOT__id_RegWrite = 1U;
                            vlSelf->rv32e__DOT__id_imm = 0U;
                            if ((4U & (IData)(vlSelf->rv32e__DOT__id_func3))) {
                                if ((2U & (IData)(vlSelf->rv32e__DOT__id_func3))) {
                                    vlSelf->rv32e__DOT__id_alu_op 
                                        = ((1U & (IData)(vlSelf->rv32e__DOT__id_func3))
                                            ? 2U : 3U);
                                } else if ((1U & (IData)(vlSelf->rv32e__DOT__id_func3))) {
                                    if ((0x20U == (IData)(vlSelf->rv32e__DOT__id_func7))) {
                                        vlSelf->rv32e__DOT__id_alu_op = 8U;
                                    } else if ((0U 
                                                == (IData)(vlSelf->rv32e__DOT__id_func7))) {
                                        vlSelf->rv32e__DOT__id_alu_op = 9U;
                                    }
                                } else {
                                    vlSelf->rv32e__DOT__id_alu_op = 4U;
                                }
                            } else if ((2U & (IData)(vlSelf->rv32e__DOT__id_func3))) {
                                if ((1U & (IData)(vlSelf->rv32e__DOT__id_func3))) {
                                    if ((0U == (IData)(vlSelf->rv32e__DOT__id_func7))) {
                                        vlSelf->rv32e__DOT__id_alu_op = 6U;
                                    } else if ((0U 
                                                == (IData)(vlSelf->rv32e__DOT__id_func7))) {
                                        vlSelf->rv32e__DOT__id_alu_op = 9U;
                                    }
                                } else if ((0U == (IData)(vlSelf->rv32e__DOT__id_func7))) {
                                    vlSelf->rv32e__DOT__id_alu_op = 7U;
                                }
                            } else if ((1U & (IData)(vlSelf->rv32e__DOT__id_func3))) {
                                if ((0U == (IData)(vlSelf->rv32e__DOT__id_func7))) {
                                    vlSelf->rv32e__DOT__id_alu_op = 5U;
                                }
                            } else {
                                vlSelf->rv32e__DOT__id_alu_op 
                                    = ((0x20U & (IData)(vlSelf->rv32e__DOT__id_func7))
                                        ? 1U : 0U);
                            }
                        }
                    } else if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__if_id_instr);
                        VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                  32,vlSelf->rv32e__DOT__if_id_instr);
                    } else if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__if_id_instr);
                        VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                  32,vlSelf->rv32e__DOT__if_id_instr);
                    } else {
                        vlSelf->rv32e__DOT__id_imm 
                            = (((- (IData)((vlSelf->rv32e__DOT__if_id_instr 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->rv32e__DOT__if_id_instr 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->rv32e__DOT__if_id_instr 
                                                  >> 7U))));
                        vlSelf->rv32e__DOT__id_MemWrite = 1U;
                        vlSelf->rv32e__DOT__id_alu_op = 0U;
                        if ((2U == (IData)(vlSelf->rv32e__DOT__id_func3))) {
                            vlSelf->rv32e__DOT__id_MemLen = 2U;
                        } else if ((1U == (IData)(vlSelf->rv32e__DOT__id_func3))) {
                            vlSelf->rv32e__DOT__id_MemLen = 1U;
                        } else if (VL_LIKELY((0U == (IData)(vlSelf->rv32e__DOT__id_func3)))) {
                            vlSelf->rv32e__DOT__id_MemLen = 4U;
                        } else {
                            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__if_id_instr);
                            VL_WRITEF("\033[32m[ID] : Unknown S instruction with func3 = %b\033[0m\n",
                                      3,vlSelf->rv32e__DOT__id_func3);
                        }
                    }
                } else if ((4U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                    if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__if_id_instr);
                        VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                  32,vlSelf->rv32e__DOT__if_id_instr);
                    } else if ((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                        vlSelf->rv32e__DOT__id_imm 
                            = (0xfffff000U & vlSelf->rv32e__DOT__if_id_instr);
                        vlSelf->rv32e__DOT__id_RegWrite = 1U;
                        vlSelf->rv32e__DOT__id_alu_op = 0U;
                    } else {
                        vlSelf->rv32e__DOT__id_imm 
                            = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                        vlSelf->rv32e__DOT__id_RegWrite = 1U;
                        if ((4U & (IData)(vlSelf->rv32e__DOT__id_func3))) {
                            if ((2U & (IData)(vlSelf->rv32e__DOT__id_func3))) {
                                vlSelf->rv32e__DOT__id_alu_op 
                                    = ((1U & (IData)(vlSelf->rv32e__DOT__id_func3))
                                        ? 2U : 3U);
                            } else if ((1U & (IData)(vlSelf->rv32e__DOT__id_func3))) {
                                if ((0x20U == (IData)(vlSelf->rv32e__DOT__id_func7))) {
                                    vlSelf->rv32e__DOT__id_alu_op = 8U;
                                } else if ((0U == (IData)(vlSelf->rv32e__DOT__id_func7))) {
                                    vlSelf->rv32e__DOT__id_alu_op = 9U;
                                }
                            } else {
                                vlSelf->rv32e__DOT__id_alu_op = 4U;
                            }
                        } else if ((2U & (IData)(vlSelf->rv32e__DOT__id_func3))) {
                            vlSelf->rv32e__DOT__id_alu_op 
                                = ((1U & (IData)(vlSelf->rv32e__DOT__id_func3))
                                    ? 6U : 7U);
                        } else if ((1U & (IData)(vlSelf->rv32e__DOT__id_func3))) {
                            if ((0U == (IData)(vlSelf->rv32e__DOT__id_func7))) {
                                vlSelf->rv32e__DOT__id_alu_op = 5U;
                            }
                        } else {
                            vlSelf->rv32e__DOT__id_alu_op = 0U;
                        }
                    }
                } else if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__if_id_instr);
                    VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                              32,vlSelf->rv32e__DOT__if_id_instr);
                } else if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__if_id_instr);
                    VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                              32,vlSelf->rv32e__DOT__if_id_instr);
                } else if ((2U == (IData)(vlSelf->rv32e__DOT__id_func3))) {
                    vlSelf->rv32e__DOT__id_imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                    vlSelf->rv32e__DOT__id_RegWrite = 1U;
                    vlSelf->rv32e__DOT__id_MemRead = 1U;
                    vlSelf->rv32e__DOT__id_alu_op = 0U;
                    vlSelf->rv32e__DOT__id_MemLen = 2U;
                } else if ((4U == (IData)(vlSelf->rv32e__DOT__id_func3))) {
                    vlSelf->rv32e__DOT__id_imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                    vlSelf->rv32e__DOT__id_RegWrite = 1U;
                    vlSelf->rv32e__DOT__id_MemRead = 1U;
                    vlSelf->rv32e__DOT__id_alu_op = 0U;
                    vlSelf->rv32e__DOT__id_MemLen = 0U;
                } else if ((1U == (IData)(vlSelf->rv32e__DOT__id_func3))) {
                    vlSelf->rv32e__DOT__id_imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                    vlSelf->rv32e__DOT__id_RegWrite = 1U;
                    vlSelf->rv32e__DOT__id_MemRead = 1U;
                    vlSelf->rv32e__DOT__id_alu_op = 0U;
                    vlSelf->rv32e__DOT__id_MemLen = 1U;
                } else if ((5U == (IData)(vlSelf->rv32e__DOT__id_func3))) {
                    vlSelf->rv32e__DOT__id_imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                    vlSelf->rv32e__DOT__id_RegWrite = 1U;
                    vlSelf->rv32e__DOT__id_MemRead = 1U;
                    vlSelf->rv32e__DOT__id_alu_op = 0U;
                    vlSelf->rv32e__DOT__id_MemLen = 3U;
                } else if (((0U == (IData)(vlSelf->rv32e__DOT__id_func3)) 
                            & (3U == (IData)(vlSelf->rv32e__DOT__id_opcode)))) {
                    vlSelf->rv32e__DOT__id_imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                    vlSelf->rv32e__DOT__id_RegWrite = 1U;
                    vlSelf->rv32e__DOT__id_MemRead = 1U;
                    vlSelf->rv32e__DOT__id_alu_op = 0U;
                    vlSelf->rv32e__DOT__id_MemLen = 4U;
                } else if ((0U == vlSelf->rv32e__DOT__if_id_instr)) {
                    vlSelf->rv32e__DOT__id_imm = 0U;
                    vlSelf->rv32e__DOT__id_RegWrite = 0U;
                    vlSelf->rv32e__DOT__id_MemWrite = 0U;
                    vlSelf->rv32e__DOT__id_MemRead = 0U;
                }
            } else {
                vlSelf->rv32e__DOT__id_stage__DOT__next_state = 0U;
            }
        } else if ((1U == vlSelf->rv32e__DOT__id_stage__DOT__state)) {
            vlSelf->rv32e__DOT__id_ready = 0U;
            vlSelf->rv32e__DOT__id_valid = 1U;
            vlSelf->rv32e__DOT__id_stage__DOT__next_state 
                = (((~ (IData)(vlSelf->rv32e__DOT__stall)) 
                    & (IData)(vlSelf->rv32e__DOT__ex_ready))
                    ? 0U : 1U);
        } else {
            vlSelf->rv32e__DOT__id_valid = 0U;
            vlSelf->rv32e__DOT__id_ready = 0U;
            vlSelf->rv32e__DOT__id_stage__DOT__next_state = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__ex_stage__DOT__state = 0U;
        vlSelf->rv32e__DOT__ex_ready = 1U;
        vlSelf->rv32e__DOT__ex_valid = 0U;
        vlSelf->rv32e__DOT__ex_alu_result = 0U;
        vlSelf->rv32e__DOT__ex_alu_zero = 0U;
        vlSelf->rv32e__DOT__ex_alu_less = 0U;
    } else {
        vlSelf->rv32e__DOT__ex_stage__DOT__state = vlSelf->rv32e__DOT__ex_stage__DOT__next_state;
        if ((0U == vlSelf->rv32e__DOT__ex_stage__DOT__state)) {
            vlSelf->rv32e__DOT__ex_ready = 1U;
            vlSelf->rv32e__DOT__ex_valid = 0U;
            if (vlSelf->rv32e__DOT__id_valid) {
                vlSelf->rv32e__DOT__ex_alu_result = 
                    ((8U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                      ? ((4U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                          ? 0U : ((2U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                                   ? 0U : ((1U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                                            ? (vlSelf->rv32e__DOT__id_ex_rs1_val 
                                               >> (0x1fU 
                                                   & (((0xcU 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                            >> 2U))) 
                                                       | (0x18U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                              >> 2U))))
                                                       ? vlSelf->rv32e__DOT__id_ex_rs2_val
                                                       : vlSelf->rv32e__DOT__id_ex_imm)))
                                            : VL_SHIFTRS_III(32,32,5, vlSelf->rv32e__DOT__id_ex_rs1_val, 
                                                             (0x1fU 
                                                              & (((0xcU 
                                                                   == 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                                       >> 2U))) 
                                                                  | (0x18U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                                         >> 2U))))
                                                                  ? vlSelf->rv32e__DOT__id_ex_rs2_val
                                                                  : vlSelf->rv32e__DOT__id_ex_imm))))))
                      : ((4U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                          ? ((2U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                              ? ((1U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                                  ? (VL_LTS_III(32, vlSelf->rv32e__DOT__id_ex_rs1_val, 
                                                (((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                       >> 2U))) 
                                                  | (0x18U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                         >> 2U))))
                                                  ? vlSelf->rv32e__DOT__id_ex_rs2_val
                                                  : vlSelf->rv32e__DOT__id_ex_imm))
                                      ? 1U : 0U) : 
                                 ((vlSelf->rv32e__DOT__id_ex_rs1_val 
                                   < (((0xcU == (0x1fU 
                                                 & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                    >> 2U))) 
                                       | (0x18U == 
                                          (0x1fU & 
                                           ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                            >> 2U))))
                                       ? vlSelf->rv32e__DOT__id_ex_rs2_val
                                       : vlSelf->rv32e__DOT__id_ex_imm))
                                   ? 1U : 0U)) : ((1U 
                                                   & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                                                   ? 
                                                  (vlSelf->rv32e__DOT__id_ex_rs1_val 
                                                   << 
                                                   (0x1fU 
                                                    & (((0xcU 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                             >> 2U))) 
                                                        | (0x18U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                               >> 2U))))
                                                        ? vlSelf->rv32e__DOT__id_ex_rs2_val
                                                        : vlSelf->rv32e__DOT__id_ex_imm)))
                                                   : 
                                                  (vlSelf->rv32e__DOT__id_ex_rs1_val 
                                                   ^ 
                                                   (((0xcU 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                          >> 2U))) 
                                                     | (0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                            >> 2U))))
                                                     ? vlSelf->rv32e__DOT__id_ex_rs2_val
                                                     : vlSelf->rv32e__DOT__id_ex_imm))))
                          : ((2U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                              ? ((1U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                                  ? (vlSelf->rv32e__DOT__id_ex_rs1_val 
                                     | (((0xcU == (0x1fU 
                                                   & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                      >> 2U))) 
                                         | (0x18U == 
                                            (0x1fU 
                                             & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                >> 2U))))
                                         ? vlSelf->rv32e__DOT__id_ex_rs2_val
                                         : vlSelf->rv32e__DOT__id_ex_imm))
                                  : (vlSelf->rv32e__DOT__id_ex_rs1_val 
                                     & (((0xcU == (0x1fU 
                                                   & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                      >> 2U))) 
                                         | (0x18U == 
                                            (0x1fU 
                                             & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                >> 2U))))
                                         ? vlSelf->rv32e__DOT__id_ex_rs2_val
                                         : vlSelf->rv32e__DOT__id_ex_imm)))
                              : ((1U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                                  ? (vlSelf->rv32e__DOT__id_ex_rs1_val 
                                     - (((0xcU == (0x1fU 
                                                   & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                      >> 2U))) 
                                         | (0x18U == 
                                            (0x1fU 
                                             & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                >> 2U))))
                                         ? vlSelf->rv32e__DOT__id_ex_rs2_val
                                         : vlSelf->rv32e__DOT__id_ex_imm))
                                  : (vlSelf->rv32e__DOT__id_ex_rs1_val 
                                     + (((0xcU == (0x1fU 
                                                   & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                      >> 2U))) 
                                         | (0x18U == 
                                            (0x1fU 
                                             & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                >> 2U))))
                                         ? vlSelf->rv32e__DOT__id_ex_rs2_val
                                         : vlSelf->rv32e__DOT__id_ex_imm))))));
                vlSelf->rv32e__DOT__ex_alu_zero = (0U 
                                                   == vlSelf->rv32e__DOT__ex_alu_result);
                vlSelf->rv32e__DOT__wb_jal_target = 
                    ((vlSelf->rv32e__DOT__id_ex_pc 
                      - (IData)(4U)) + vlSelf->rv32e__DOT__id_ex_imm);
                vlSelf->rv32e__DOT__wb_jalr_target 
                    = (0xfffffffeU & (vlSelf->rv32e__DOT__id_ex_rs1_val 
                                      + vlSelf->rv32e__DOT__id_ex_imm));
                vlSelf->rv32e__DOT__wb_is_jal = (0x6fU 
                                                 == (IData)(vlSelf->rv32e__DOT__id_ex_opcode));
                vlSelf->rv32e__DOT__wb_is_jalr = ((0x67U 
                                                   == (IData)(vlSelf->rv32e__DOT__id_ex_opcode)) 
                                                  & (0U 
                                                     == (IData)(vlSelf->rv32e__DOT__id_ex_func3)));
                if (vlSelf->rv32e__DOT__id_ex_is_ebreak) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(1U, vlSelf->rv32e__DOT__id_ex_instr);
                }
                vlSelf->rv32e__DOT__ex_stage__DOT__next_state = 1U;
                vlSelf->rv32e__DOT__ex_alu_less = (
                                                   (7U 
                                                    == (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                                                    ? 
                                                   VL_LTS_III(32, vlSelf->rv32e__DOT__id_ex_rs1_val, 
                                                              (((0xcU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                                     >> 2U))) 
                                                                | (0x18U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                                       >> 2U))))
                                                                ? vlSelf->rv32e__DOT__id_ex_rs2_val
                                                                : vlSelf->rv32e__DOT__id_ex_imm))
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                                                     ? 
                                                    (vlSelf->rv32e__DOT__id_ex_rs1_val 
                                                     < vlSelf->rv32e__DOT__id_ex_rs2_val)
                                                     : 
                                                    VL_LTS_III(32, vlSelf->rv32e__DOT__id_ex_rs1_val, 
                                                               (((0xcU 
                                                                  == 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                                      >> 2U))) 
                                                                 | (0x18U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                                        >> 2U))))
                                                                 ? vlSelf->rv32e__DOT__id_ex_rs2_val
                                                                 : vlSelf->rv32e__DOT__id_ex_imm))));
                vlSelf->rv32e__DOT__wb_take_branch 
                    = ((0x63U == (IData)(vlSelf->rv32e__DOT__id_ex_opcode)) 
                       & (((((((1U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)) 
                               & (~ (IData)(vlSelf->rv32e__DOT__ex_alu_zero))) 
                              | ((0U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)) 
                                 & (IData)(vlSelf->rv32e__DOT__ex_alu_zero))) 
                             | ((4U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)) 
                                & (IData)(vlSelf->rv32e__DOT__ex_alu_less))) 
                            | ((5U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)) 
                               & (~ (IData)(vlSelf->rv32e__DOT__ex_alu_less)))) 
                           | ((6U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)) 
                              & (IData)(vlSelf->rv32e__DOT__ex_alu_less))) 
                          | ((7U == (IData)(vlSelf->rv32e__DOT__id_ex_func3)) 
                             & (~ (IData)(vlSelf->rv32e__DOT__ex_alu_less)))));
            } else {
                vlSelf->rv32e__DOT__ex_stage__DOT__next_state = 0U;
            }
        } else if ((1U == vlSelf->rv32e__DOT__ex_stage__DOT__state)) {
            vlSelf->rv32e__DOT__ex_ready = 0U;
            vlSelf->rv32e__DOT__ex_valid = 1U;
            vlSelf->rv32e__DOT__ex_stage__DOT__next_state 
                = ((IData)(vlSelf->rv32e__DOT__mem_ready)
                    ? 0U : 1U);
        } else {
            vlSelf->rv32e__DOT__ex_ready = 0U;
            vlSelf->rv32e__DOT__ex_valid = 0U;
            vlSelf->rv32e__DOT__ex_stage__DOT__next_state = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__wb_stage__DOT__state = 1U;
        vlSelf->rv32e__DOT__wb_ready = 1U;
        vlSelf->rv32e__DOT__wb_valid = 1U;
        vlSelf->rv32e__DOT__wb_data = 0U;
    } else {
        vlSelf->rv32e__DOT__wb_stage__DOT__state = vlSelf->rv32e__DOT__wb_stage__DOT__next_state;
        if ((0U == vlSelf->rv32e__DOT__wb_stage__DOT__state)) {
            vlSelf->rv32e__DOT__wb_ready = 1U;
            vlSelf->rv32e__DOT__wb_valid = 0U;
            if (vlSelf->rv32e__DOT__mem_valid) {
                vlSelf->rv32e__DOT__wb_data = ((0x37U 
                                                == (IData)(vlSelf->rv32e__DOT__mem_wb_opcode))
                                                ? vlSelf->rv32e__DOT__mem_wb_imm
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelf->rv32e__DOT__mem_wb_opcode))
                                                    ? 
                                                   ((vlSelf->rv32e__DOT__mem_wb_pc 
                                                     - (IData)(4U)) 
                                                    + vlSelf->rv32e__DOT__mem_wb_imm)
                                                    : 
                                                   (((0x6fU 
                                                      == (IData)(vlSelf->rv32e__DOT__mem_wb_opcode)) 
                                                     | (0x67U 
                                                        == (IData)(vlSelf->rv32e__DOT__mem_wb_opcode)))
                                                     ? 
                                                    ((IData)(4U) 
                                                     + 
                                                     (vlSelf->rv32e__DOT__mem_wb_pc 
                                                      - (IData)(4U)))
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->rv32e__DOT__mem_wb_opcode))
                                                      ? vlSelf->rv32e__DOT__mem_wb_data_out
                                                      : 
                                                     (((0x33U 
                                                        == (IData)(vlSelf->rv32e__DOT__mem_wb_opcode)) 
                                                       | (0x13U 
                                                          == (IData)(vlSelf->rv32e__DOT__mem_wb_opcode)))
                                                       ? vlSelf->rv32e__DOT__mem_wb_alu_result
                                                       : 0U)))));
                vlSelf->rv32e__DOT__rd_wb = vlSelf->rv32e__DOT__mem_wb_rd;
                vlSelf->rv32e__DOT__RegWrite_wb = vlSelf->rv32e__DOT__mem_wb_RegWrite;
                vlSelf->rv32e__DOT__wb_stage__DOT__next_state = 1U;
            } else {
                vlSelf->rv32e__DOT__wb_stage__DOT__next_state = 0U;
            }
        } else if ((1U == vlSelf->rv32e__DOT__wb_stage__DOT__state)) {
            vlSelf->rv32e__DOT__wb_ready = 0U;
            vlSelf->rv32e__DOT__wb_valid = 1U;
            vlSelf->rv32e__DOT__wb_stage__DOT__next_state 
                = ((IData)(vlSelf->rv32e__DOT__if_ready)
                    ? 0U : 1U);
        } else {
            vlSelf->rv32e__DOT__wb_ready = 0U;
            vlSelf->rv32e__DOT__wb_valid = 0U;
            vlSelf->rv32e__DOT__wb_stage__DOT__next_state = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->rv32e__DOT__flush) {
            vlSelf->rv32e__DOT__mem_wb_rs1_val = 0U;
            vlSelf->rv32e__DOT__mem_wb_rs2_val = 0U;
            vlSelf->rv32e__DOT__ex_mem_rs1_val = 0U;
        } else {
            if (((IData)(vlSelf->rv32e__DOT__mem_valid) 
                 & (IData)(vlSelf->rv32e__DOT__wb_ready))) {
                vlSelf->rv32e__DOT__mem_wb_rs1_val 
                    = vlSelf->rv32e__DOT__ex_mem_rs1_val;
                vlSelf->rv32e__DOT__mem_wb_rs2_val 
                    = vlSelf->rv32e__DOT__ex_mem_rs2_val;
            }
            if (((IData)(vlSelf->rv32e__DOT__ex_valid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_ready))) {
                vlSelf->rv32e__DOT__ex_mem_rs1_val 
                    = vlSelf->rv32e__DOT__id_ex_rs1_val;
            }
        }
        if (((IData)(vlSelf->rv32e__DOT__flush) | (IData)(vlSelf->rv32e__DOT__stall))) {
            vlSelf->rv32e__DOT__id_ex_is_ebreak = 0U;
            vlSelf->rv32e__DOT__id_ex_instr = 0U;
        } else if (((IData)(vlSelf->rv32e__DOT__id_valid) 
                    & (IData)(vlSelf->rv32e__DOT__ex_ready))) {
            vlSelf->rv32e__DOT__id_ex_is_ebreak = vlSelf->rv32e__DOT__is_ebreak;
            vlSelf->rv32e__DOT__id_ex_instr = vlSelf->rv32e__DOT__if_id_instr;
        }
    }
    if (vlSelf->reset) {
        __Vdlyvset__rv32e__DOT__reg_file__DOT__regs__v0 = 1U;
        vlSelf->rv32e__DOT__mem_stage__DOT__delay = 3U;
        vlSelf->rv32e__DOT__id_ex_func7 = 0U;
        vlSelf->rv32e__DOT__mem_wb_alu_less = 0U;
        vlSelf->rv32e__DOT__mem_wb_alu_zero = 0U;
        vlSelf->rv32e__DOT__mem_wb_rs2 = 0U;
        vlSelf->rv32e__DOT__mem_wb_rs1 = 0U;
        vlSelf->rv32e__DOT__mem_wb_func3 = 0U;
        vlSelf->rv32e__DOT__id_ex_alu_op = 0U;
        vlSelf->rv32e__DOT__mem_wb_alu_result = 0U;
        vlSelf->rv32e__DOT__mem_wb_RegWrite = 0U;
        vlSelf->rv32e__DOT__mem_wb_imm = 0U;
        vlSelf->rv32e__DOT__mem_wb_opcode = 0U;
        vlSelf->rv32e__DOT__mem_wb_pc = 0U;
        vlSelf->rv32e__DOT__mem_wb_data_out = 0U;
        vlSelf->rv32e__DOT__ex_mem_alu_less = 0U;
        vlSelf->rv32e__DOT__ex_mem_alu_zero = 0U;
        vlSelf->rv32e__DOT__ex_mem_rs2 = 0U;
        vlSelf->rv32e__DOT__ex_mem_rs1 = 0U;
        vlSelf->rv32e__DOT__ex_mem_func3 = 0U;
        vlSelf->rv32e__DOT__if_id_instr = 0U;
    } else {
        if (((IData)(vlSelf->rv32e__DOT__RegWrite_wb) 
             & (0U != (IData)(vlSelf->rv32e__DOT__rd_wb)))) {
            __Vdlyvval__rv32e__DOT__reg_file__DOT__regs__v32 
                = vlSelf->rv32e__DOT__wb_data;
            __Vdlyvset__rv32e__DOT__reg_file__DOT__regs__v32 = 1U;
            __Vdlyvdim0__rv32e__DOT__reg_file__DOT__regs__v32 
                = vlSelf->rv32e__DOT__rd_wb;
        }
        if (((IData)(vlSelf->rv32e__DOT__flush) | (IData)(vlSelf->rv32e__DOT__stall))) {
            vlSelf->rv32e__DOT__id_ex_func7 = 0U;
            vlSelf->rv32e__DOT__id_ex_alu_op = 0U;
        } else if (((IData)(vlSelf->rv32e__DOT__id_valid) 
                    & (IData)(vlSelf->rv32e__DOT__ex_ready))) {
            vlSelf->rv32e__DOT__id_ex_func7 = vlSelf->rv32e__DOT__id_func7;
            vlSelf->rv32e__DOT__id_ex_alu_op = vlSelf->rv32e__DOT__id_alu_op;
        }
        if (vlSelf->rv32e__DOT__flush) {
            vlSelf->rv32e__DOT__mem_wb_alu_less = 0U;
            vlSelf->rv32e__DOT__mem_wb_alu_zero = 0U;
            vlSelf->rv32e__DOT__mem_wb_rs2 = 0U;
            vlSelf->rv32e__DOT__mem_wb_rs1 = 0U;
            vlSelf->rv32e__DOT__mem_wb_func3 = 0U;
            vlSelf->rv32e__DOT__mem_wb_alu_result = 0U;
            vlSelf->rv32e__DOT__mem_wb_RegWrite = 0U;
            vlSelf->rv32e__DOT__mem_wb_imm = 0U;
            vlSelf->rv32e__DOT__mem_wb_opcode = 0U;
            vlSelf->rv32e__DOT__mem_wb_pc = 0U;
            vlSelf->rv32e__DOT__mem_wb_data_out = 0U;
            vlSelf->rv32e__DOT__ex_mem_alu_less = 0U;
            vlSelf->rv32e__DOT__ex_mem_alu_zero = 0U;
            vlSelf->rv32e__DOT__ex_mem_rs2 = 0U;
            vlSelf->rv32e__DOT__ex_mem_rs1 = 0U;
            vlSelf->rv32e__DOT__ex_mem_func3 = 0U;
            vlSelf->rv32e__DOT__if_id_instr = 0U;
        } else {
            if (((IData)(vlSelf->rv32e__DOT__mem_valid) 
                 & (IData)(vlSelf->rv32e__DOT__wb_ready))) {
                vlSelf->rv32e__DOT__mem_wb_alu_less 
                    = vlSelf->rv32e__DOT__ex_mem_alu_less;
                vlSelf->rv32e__DOT__mem_wb_alu_zero 
                    = vlSelf->rv32e__DOT__ex_mem_alu_zero;
                vlSelf->rv32e__DOT__mem_wb_rs2 = vlSelf->rv32e__DOT__ex_mem_rs2;
                vlSelf->rv32e__DOT__mem_wb_rs1 = vlSelf->rv32e__DOT__ex_mem_rs1;
                vlSelf->rv32e__DOT__mem_wb_func3 = vlSelf->rv32e__DOT__ex_mem_func3;
                vlSelf->rv32e__DOT__mem_wb_alu_result 
                    = vlSelf->rv32e__DOT__ex_mem_alu_result;
                vlSelf->rv32e__DOT__mem_wb_RegWrite 
                    = vlSelf->rv32e__DOT__ex_mem_RegWrite;
                vlSelf->rv32e__DOT__mem_wb_imm = vlSelf->rv32e__DOT__ex_mem_imm;
                vlSelf->rv32e__DOT__mem_wb_opcode = vlSelf->rv32e__DOT__ex_mem_opcode;
                vlSelf->rv32e__DOT__mem_wb_pc = vlSelf->rv32e__DOT__ex_mem_pc;
                vlSelf->rv32e__DOT__mem_wb_data_out 
                    = vlSelf->rv32e__DOT__mem_data_out;
            }
            if (((IData)(vlSelf->rv32e__DOT__ex_valid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_ready))) {
                vlSelf->rv32e__DOT__ex_mem_alu_less 
                    = vlSelf->rv32e__DOT__ex_alu_less;
                vlSelf->rv32e__DOT__ex_mem_alu_zero 
                    = vlSelf->rv32e__DOT__ex_alu_zero;
                vlSelf->rv32e__DOT__ex_mem_rs2 = vlSelf->rv32e__DOT__id_ex_rs2;
                vlSelf->rv32e__DOT__ex_mem_rs1 = vlSelf->rv32e__DOT__id_ex_rs1;
                vlSelf->rv32e__DOT__ex_mem_func3 = vlSelf->rv32e__DOT__id_ex_func3;
            }
            if ((((~ (IData)(vlSelf->rv32e__DOT__stall)) 
                  & (IData)(vlSelf->rv32e__DOT__if_valid)) 
                 & (IData)(vlSelf->rv32e__DOT__id_ready))) {
                vlSelf->rv32e__DOT__if_id_instr = vlSelf->rv32e__DOT__if_instr;
            }
        }
    }
    vlSelf->rv32e__DOT__id_stage__DOT__immI = (((- (IData)(
                                                           (vlSelf->rv32e__DOT__if_id_instr 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->rv32e__DOT__if_id_instr 
                                                  >> 0x14U));
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__ex_mem_RegWrite = 0U;
        vlSelf->rv32e__DOT__ex_mem_imm = 0U;
        vlSelf->rv32e__DOT__ex_mem_opcode = 0U;
        vlSelf->rv32e__DOT__ex_mem_pc = 0U;
        vlSelf->rv32e__DOT__mem_stage__DOT__state = 0U;
        vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 0U;
        __Vdly__rv32e__DOT__mem_ready = 1U;
        __Vdly__rv32e__DOT__mem_valid = 0U;
        vlSelf->rv32e__DOT__mem_data_out = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_araddr = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_awaddr = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_awvalid = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_wdata = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_wstrb = 0xfU;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_bready = 0U;
        vlSelf->rv32e__DOT__load_access_fault = 0U;
        vlSelf->rv32e__DOT__store_access_fault = 0U;
        vlSelf->rv32e__DOT__mem_fault_addr = 0U;
        vlSelf->rv32e__DOT__id_ex_rs2 = 0U;
        vlSelf->rv32e__DOT__id_ex_rs1 = 0U;
        vlSelf->rv32e__DOT__id_ex_func3 = 0U;
        vlSelf->rv32e__DOT__id_ex_rs1_val = 0U;
        vlSelf->rv32e__DOT__id_ex_RegWrite = 0U;
        vlSelf->rv32e__DOT__id_ex_imm = 0U;
        vlSelf->rv32e__DOT__id_ex_opcode = 0U;
        vlSelf->rv32e__DOT__id_ex_pc = 0U;
        vlSelf->rv32e__DOT__ex_mem_alu_result = 0U;
    } else {
        vlSelf->rv32e__DOT__mem_stage__DOT__state = vlSelf->rv32e__DOT__mem_stage__DOT__next_state;
        if ((0U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            __Vdly__rv32e__DOT__mem_valid = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_bready = 0U;
            vlSelf->rv32e__DOT__load_access_fault = 0U;
            vlSelf->rv32e__DOT__store_access_fault = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_awvalid = 0U;
            if (((IData)(vlSelf->rv32e__DOT__ex_valid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_ready))) {
                if (vlSelf->rv32e__DOT__ex_mem_MemRead) {
                    vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 1U;
                    __Vdly__rv32e__DOT__mem_stage__DOT__sram_araddr 
                        = vlSelf->rv32e__DOT__ex_mem_alu_result;
                    __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid = 1U;
                } else if (vlSelf->rv32e__DOT__ex_mem_MemWrite) {
                    vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 3U;
                    __Vdly__rv32e__DOT__mem_stage__DOT__sram_awaddr 
                        = vlSelf->rv32e__DOT__ex_mem_alu_result;
                    __Vdly__rv32e__DOT__mem_stage__DOT__sram_awvalid = 1U;
                    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wdata 
                        = vlSelf->rv32e__DOT__ex_mem_rs2_val;
                    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wstrb 
                        = ((4U == (IData)(vlSelf->rv32e__DOT__ex_mem_MemLen))
                            ? 1U : ((1U == (IData)(vlSelf->rv32e__DOT__ex_mem_MemLen))
                                     ? 3U : 0xfU));
                } else {
                    vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 6U;
                }
            } else {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 0U;
            }
            __Vdly__rv32e__DOT__mem_ready = 1U;
        } else if ((1U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            vlSelf->rv32e__DOT__mem_stage__DOT__next_state 
                = (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready) 
                    & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid))
                    ? 2U : 1U);
            __Vdly__rv32e__DOT__mem_ready = 0U;
            __Vdly__rv32e__DOT__mem_valid = 0U;
        } else if ((2U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            __Vdly__rv32e__DOT__mem_ready = 0U;
            __Vdly__rv32e__DOT__mem_valid = 0U;
            if (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready))) {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 6U;
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__mem_data_out = 
                    ((4U & (IData)(vlSelf->rv32e__DOT__ex_mem_MemLen))
                      ? ((2U & (IData)(vlSelf->rv32e__DOT__ex_mem_MemLen))
                          ? 0U : ((1U & (IData)(vlSelf->rv32e__DOT__ex_mem_MemLen))
                                   ? 0U : (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata))))
                      : ((2U & (IData)(vlSelf->rv32e__DOT__ex_mem_MemLen))
                          ? ((1U & (IData)(vlSelf->rv32e__DOT__ex_mem_MemLen))
                              ? (0xffffU & vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata)
                              : vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata)
                          : ((1U & (IData)(vlSelf->rv32e__DOT__ex_mem_MemLen))
                              ? (((- (IData)((1U & 
                                              (vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata 
                                               >> 0xfU)))) 
                                  << 0x10U) | (0xffffU 
                                               & vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata))
                              : (0xffU & vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata))));
                if ((0U != (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rresp))) {
                    vlSelf->rv32e__DOT__load_access_fault = 1U;
                    vlSelf->rv32e__DOT__mem_fault_addr 
                        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr;
                } else {
                    vlSelf->rv32e__DOT__load_access_fault = 0U;
                    vlSelf->rv32e__DOT__mem_fault_addr = 0U;
                }
            } else {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 2U;
            }
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready = 1U;
        } else if ((3U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            __Vdly__rv32e__DOT__mem_ready = 0U;
            __Vdly__rv32e__DOT__mem_valid = 0U;
            if (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awready) 
                 & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awvalid))) {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 4U;
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid = 1U;
            } else {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 3U;
            }
        } else if ((4U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            __Vdly__rv32e__DOT__mem_ready = 0U;
            __Vdly__rv32e__DOT__mem_valid = 0U;
            if (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready) 
                 & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid))) {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 5U;
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_awvalid = 0U;
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_bready = 1U;
            } else {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 4U;
            }
        } else if ((5U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            __Vdly__rv32e__DOT__mem_ready = 0U;
            __Vdly__rv32e__DOT__mem_valid = 0U;
            if (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bvalid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bready))) {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 6U;
                if ((0U != (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bresp))) {
                    vlSelf->rv32e__DOT__store_access_fault = 1U;
                    vlSelf->rv32e__DOT__mem_fault_addr 
                        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr;
                } else {
                    vlSelf->rv32e__DOT__store_access_fault = 0U;
                    vlSelf->rv32e__DOT__mem_fault_addr = 0U;
                }
            } else {
                vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 5U;
            }
        } else if ((6U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            vlSelf->rv32e__DOT__mem_stage__DOT__next_state 
                = ((IData)(vlSelf->rv32e__DOT__wb_ready)
                    ? 0U : 6U);
            __Vdly__rv32e__DOT__mem_ready = 0U;
            __Vdly__rv32e__DOT__mem_valid = 1U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_bready = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_awvalid = 0U;
        } else {
            vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 0U;
            __Vdly__rv32e__DOT__mem_ready = 0U;
            __Vdly__rv32e__DOT__mem_valid = 0U;
        }
        if (vlSelf->rv32e__DOT__flush) {
            vlSelf->rv32e__DOT__ex_mem_RegWrite = 0U;
            vlSelf->rv32e__DOT__ex_mem_imm = 0U;
            vlSelf->rv32e__DOT__ex_mem_opcode = 0U;
            vlSelf->rv32e__DOT__ex_mem_pc = 0U;
            vlSelf->rv32e__DOT__ex_mem_alu_result = 0U;
        } else if (((IData)(vlSelf->rv32e__DOT__ex_valid) 
                    & (IData)(vlSelf->rv32e__DOT__mem_ready))) {
            vlSelf->rv32e__DOT__ex_mem_RegWrite = vlSelf->rv32e__DOT__id_ex_RegWrite;
            vlSelf->rv32e__DOT__ex_mem_imm = vlSelf->rv32e__DOT__id_ex_imm;
            vlSelf->rv32e__DOT__ex_mem_opcode = vlSelf->rv32e__DOT__id_ex_opcode;
            vlSelf->rv32e__DOT__ex_mem_pc = vlSelf->rv32e__DOT__id_ex_pc;
            vlSelf->rv32e__DOT__ex_mem_alu_result = vlSelf->rv32e__DOT__ex_alu_result;
        }
        if (((IData)(vlSelf->rv32e__DOT__flush) | (IData)(vlSelf->rv32e__DOT__stall))) {
            vlSelf->rv32e__DOT__id_ex_rs2 = 0U;
            vlSelf->rv32e__DOT__id_ex_rs1 = 0U;
            vlSelf->rv32e__DOT__id_ex_func3 = 0U;
            vlSelf->rv32e__DOT__id_ex_rs1_val = 0U;
            vlSelf->rv32e__DOT__id_ex_RegWrite = 0U;
            vlSelf->rv32e__DOT__id_ex_imm = 0U;
            vlSelf->rv32e__DOT__id_ex_opcode = 0U;
            vlSelf->rv32e__DOT__id_ex_pc = 0U;
        } else if (((IData)(vlSelf->rv32e__DOT__id_valid) 
                    & (IData)(vlSelf->rv32e__DOT__ex_ready))) {
            vlSelf->rv32e__DOT__id_ex_rs2 = vlSelf->rv32e__DOT__id_rs2;
            vlSelf->rv32e__DOT__id_ex_rs1 = vlSelf->rv32e__DOT__id_rs1;
            vlSelf->rv32e__DOT__id_ex_func3 = vlSelf->rv32e__DOT__id_func3;
            vlSelf->rv32e__DOT__id_ex_rs1_val = (((IData)(vlSelf->rv32e__DOT__id_rs1) 
                                                  == (IData)(vlSelf->rv32e__DOT__mem_wb_rd))
                                                  ? vlSelf->rv32e__DOT__wb_data
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->rv32e__DOT__id_rs1))
                                                   ? 0U
                                                   : 
                                                  vlSelf->rv32e__DOT__reg_file__DOT__regs
                                                  [vlSelf->rv32e__DOT__id_rs1]));
            vlSelf->rv32e__DOT__id_ex_RegWrite = vlSelf->rv32e__DOT__id_RegWrite;
            vlSelf->rv32e__DOT__id_ex_imm = vlSelf->rv32e__DOT__id_imm;
            vlSelf->rv32e__DOT__id_ex_opcode = vlSelf->rv32e__DOT__id_opcode;
            vlSelf->rv32e__DOT__id_ex_pc = vlSelf->rv32e__DOT__if_id_pc;
        }
    }
    if (vlSelf->reset) {
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready = 0U;
        vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready = 0U;
        vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg = 0U;
        vlSelf->rv32e__DOT__mem_stage__DOT__sram_rresp = 0U;
        vlSelf->rv32e__DOT__mem_stage__DOT__sram_bresp = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_bvalid = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg = 0U;
    } else {
        if ((0U == vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state)) {
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready = 1U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_awready = 1U;
            vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_bvalid = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter = 2U;
            if (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready))) {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg 
                    = vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr;
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready = 0U;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 1U;
            } else if (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awvalid) 
                        & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_awready))) {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg 
                    = vlSelf->rv32e__DOT__mem_stage__DOT__sram_wdata;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg 
                    = vlSelf->rv32e__DOT__mem_stage__DOT__sram_wstrb;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg 
                    = vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr;
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_awready = 0U;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 3U;
            } else {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 0U;
            }
        } else if ((1U == vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state)) {
            if ((0U < (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter))) {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter 
                    = (3U & ((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter) 
                             - (IData)(1U)));
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 1U;
            } else {
                if (vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__addr_valid) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg, 4U, __Vfunc_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_read__14__Vfuncout);
                    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg 
                        = __Vfunc_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_read__14__Vfuncout;
                    vlSelf->rv32e__DOT__mem_stage__DOT__sram_rresp = 0U;
                } else {
                    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg = 0U;
                    vlSelf->rv32e__DOT__mem_stage__DOT__sram_rresp = 2U;
                }
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 2U;
            }
        } else if ((2U == vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state)) {
            if (vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready) {
                vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata 
                    = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg;
                vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid = 1U;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg = 0U;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 0U;
            } else {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 2U;
            }
        } else if ((3U == vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state)) {
            if ((0U < (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter))) {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter 
                    = (3U & ((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter) 
                             - (IData)(1U)));
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 3U;
            } else {
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready = 1U;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 4U;
            }
        } else if ((4U == vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state)) {
            if (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready))) {
                if (vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__addr_valid) {
                    if ((1U == (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg, vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg, 1U);
                    } else if ((3U == (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg, vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg, 2U);
                    } else if ((0xfU == (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg, vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg, 4U);
                    } else {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg, vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg, 4U);
                    }
                    vlSelf->rv32e__DOT__mem_stage__DOT__sram_bresp = 0U;
                } else {
                    vlSelf->rv32e__DOT__mem_stage__DOT__sram_bresp = 2U;
                }
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_bvalid = 1U;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 5U;
            } else {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 4U;
            }
        } else if ((5U == vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state)) {
            if (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bvalid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_bready))) {
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_awready = 1U;
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_bvalid = 0U;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 0U;
            } else {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 5U;
            }
        } else {
            __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 0U;
        }
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state 
            = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state;
    }
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_wdata 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_wdata;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_wstrb 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_wstrb;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__awaddr_reg;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wstrb_reg;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__wdata_reg;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_awvalid 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_awvalid;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_awready 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_awready;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_bvalid 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_bvalid;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_bready 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_bready;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_araddr;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_awaddr;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__addr_valid 
        = (((0x80000000U <= vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr) 
            & (0x8fffffffU >= vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr)) 
           | (((0x80000000U <= vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr) 
               & (0x8fffffffU >= vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr)) 
              | (((0x10000000U <= vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr) 
                  & (0x10000007U >= vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr)) 
                 | (((0x10000000U <= vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr) 
                     & (0x10000007U >= vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr)) 
                    | ((0x10002000U <= vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr) 
                       & (0x10002007U >= vlSelf->rv32e__DOT__mem_stage__DOT__sram_awaddr))))));
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__ex_mem_MemWrite = 0U;
        vlSelf->rv32e__DOT__ex_mem_MemLen = 0U;
        vlSelf->rv32e__DOT__ex_mem_MemRead = 0U;
        vlSelf->rv32e__DOT__ex_mem_rs2_val = 0U;
        vlSelf->rv32e__DOT__if_id_pc = 0x80000000U;
        vlSelf->rv32e__DOT__id_ex_MemWrite = 0U;
        vlSelf->rv32e__DOT__id_ex_MemLen = 0U;
        vlSelf->rv32e__DOT__id_ex_MemRead = 0U;
        vlSelf->rv32e__DOT__id_ex_rs2_val = 0U;
    } else {
        if (vlSelf->rv32e__DOT__flush) {
            vlSelf->rv32e__DOT__ex_mem_MemWrite = 0U;
            vlSelf->rv32e__DOT__ex_mem_MemLen = 0U;
            vlSelf->rv32e__DOT__ex_mem_MemRead = 0U;
            vlSelf->rv32e__DOT__ex_mem_rs2_val = 0U;
            vlSelf->rv32e__DOT__if_id_pc = 0U;
        } else {
            if (((IData)(vlSelf->rv32e__DOT__ex_valid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_ready))) {
                vlSelf->rv32e__DOT__ex_mem_MemWrite 
                    = vlSelf->rv32e__DOT__id_ex_MemWrite;
                vlSelf->rv32e__DOT__ex_mem_MemLen = vlSelf->rv32e__DOT__id_ex_MemLen;
                vlSelf->rv32e__DOT__ex_mem_MemRead 
                    = vlSelf->rv32e__DOT__id_ex_MemRead;
                vlSelf->rv32e__DOT__ex_mem_rs2_val 
                    = vlSelf->rv32e__DOT__id_ex_rs2_val;
            }
            if ((((~ (IData)(vlSelf->rv32e__DOT__stall)) 
                  & (IData)(vlSelf->rv32e__DOT__if_valid)) 
                 & (IData)(vlSelf->rv32e__DOT__id_ready))) {
                vlSelf->rv32e__DOT__if_id_pc = vlSelf->rv32e__DOT__if_pc;
            }
        }
        if (((IData)(vlSelf->rv32e__DOT__flush) | (IData)(vlSelf->rv32e__DOT__stall))) {
            vlSelf->rv32e__DOT__id_ex_MemWrite = 0U;
            vlSelf->rv32e__DOT__id_ex_MemLen = 0U;
            vlSelf->rv32e__DOT__id_ex_MemRead = 0U;
            vlSelf->rv32e__DOT__id_ex_rs2_val = 0U;
        } else if (((IData)(vlSelf->rv32e__DOT__id_valid) 
                    & (IData)(vlSelf->rv32e__DOT__ex_ready))) {
            vlSelf->rv32e__DOT__id_ex_MemWrite = vlSelf->rv32e__DOT__id_MemWrite;
            vlSelf->rv32e__DOT__id_ex_MemLen = vlSelf->rv32e__DOT__id_MemLen;
            vlSelf->rv32e__DOT__id_ex_MemRead = vlSelf->rv32e__DOT__id_MemRead;
            vlSelf->rv32e__DOT__id_ex_rs2_val = (((IData)(vlSelf->rv32e__DOT__id_rs2) 
                                                  == (IData)(vlSelf->rv32e__DOT__mem_wb_rd))
                                                  ? vlSelf->rv32e__DOT__wb_data
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->rv32e__DOT__id_rs2))
                                                   ? 0U
                                                   : 
                                                  vlSelf->rv32e__DOT__reg_file__DOT__regs
                                                  [vlSelf->rv32e__DOT__id_rs2]));
        }
    }
    if (__Vdlyvset__rv32e__DOT__reg_file__DOT__regs__v0) {
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[1U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[2U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[3U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[4U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[5U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[6U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[7U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[8U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[9U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0xaU] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0xbU] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0xcU] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0xdU] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0xeU] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0xfU] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0x10U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0x11U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0x12U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0x13U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0x14U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0x15U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0x16U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0x17U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0x18U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0x19U] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0x1aU] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0x1bU] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0x1cU] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0x1dU] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0x1eU] = 0U;
        vlSelf->rv32e__DOT__reg_file__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__rv32e__DOT__reg_file__DOT__regs__v32) {
        vlSelf->rv32e__DOT__reg_file__DOT__regs[__Vdlyvdim0__rv32e__DOT__reg_file__DOT__regs__v32] 
            = __Vdlyvval__rv32e__DOT__reg_file__DOT__regs__v32;
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__if_stage__DOT__state = 1U;
        vlSelf->rv32e__DOT__if_stage__DOT__next_state = 1U;
        __Vdly__rv32e__DOT__if_pc = 0x80000000U;
        __Vdly__rv32e__DOT__if_stage__DOT__sram_araddr = 0x80000000U;
        vlSelf->rv32e__DOT__if_valid = 0U;
        vlSelf->rv32e__DOT__if_ready = 1U;
        __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid = 1U;
        __Vdly__rv32e__DOT__if_stage__DOT__sram_rready = 1U;
        vlSelf->rv32e__DOT__if_access_fault = 0U;
        vlSelf->rv32e__DOT__if_fault_addr = 0U;
    } else {
        vlSelf->rv32e__DOT__if_stage__DOT__state = vlSelf->rv32e__DOT__if_stage__DOT__next_state;
        if ((0U == vlSelf->rv32e__DOT__if_stage__DOT__state)) {
            if (vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src) {
                __Vdly__rv32e__DOT__if_pc = vlSelf->rv32e__DOT__branch_target;
                __Vdly__rv32e__DOT__if_stage__DOT__sram_araddr 
                    = vlSelf->rv32e__DOT__branch_target;
            } else {
                __Vdly__rv32e__DOT__if_pc = ((IData)(4U) 
                                             + vlSelf->rv32e__DOT__if_pc);
                __Vdly__rv32e__DOT__if_stage__DOT__sram_araddr 
                    = ((IData)(4U) + vlSelf->rv32e__DOT__if_pc);
            }
            vlSelf->rv32e__DOT__if_stage__DOT__next_state = 1U;
            vlSelf->rv32e__DOT__if_ready = 1U;
            vlSelf->rv32e__DOT__if_valid = 0U;
            __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid = 0U;
            __Vdly__rv32e__DOT__if_stage__DOT__sram_rready = 0U;
            __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid = 1U;
        } else if ((1U == vlSelf->rv32e__DOT__if_stage__DOT__state)) {
            vlSelf->rv32e__DOT__if_ready = 0U;
            vlSelf->rv32e__DOT__if_valid = 0U;
            if (((IData)(vlSelf->rv32e__DOT__if_stage__DOT__sram_arready) 
                 & (IData)(vlSelf->rv32e__DOT__if_stage__DOT__sram_arvalid))) {
                vlSelf->rv32e__DOT__if_stage__DOT__next_state = 2U;
                __Vdly__rv32e__DOT__if_stage__DOT__sram_rready = 1U;
            } else {
                vlSelf->rv32e__DOT__if_stage__DOT__next_state = 1U;
            }
        } else if ((2U == vlSelf->rv32e__DOT__if_stage__DOT__state)) {
            vlSelf->rv32e__DOT__if_valid = 0U;
            vlSelf->rv32e__DOT__if_ready = 0U;
            if (((IData)(vlSelf->rv32e__DOT__if_stage__DOT__sram_rvalid) 
                 & (IData)(vlSelf->rv32e__DOT__if_stage__DOT__sram_rready))) {
                vlSelf->rv32e__DOT__if_stage__DOT__next_state = 3U;
                __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__if_instr = vlSelf->rv32e__DOT__if_stage__DOT__sram_rdata;
                if ((0U != (IData)(vlSelf->rv32e__DOT__if_stage__DOT__sram_rresp))) {
                    vlSelf->rv32e__DOT__if_access_fault = 1U;
                    vlSelf->rv32e__DOT__if_fault_addr 
                        = vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr;
                } else {
                    vlSelf->rv32e__DOT__if_access_fault = 0U;
                    vlSelf->rv32e__DOT__if_fault_addr = 0U;
                }
            } else {
                vlSelf->rv32e__DOT__if_stage__DOT__next_state = 2U;
            }
        } else if ((3U == vlSelf->rv32e__DOT__if_stage__DOT__state)) {
            vlSelf->rv32e__DOT__if_stage__DOT__next_state 
                = (((~ (IData)(vlSelf->rv32e__DOT__stall)) 
                    & (IData)(vlSelf->rv32e__DOT__id_ready))
                    ? 0U : 3U);
            vlSelf->rv32e__DOT__if_ready = 0U;
            vlSelf->rv32e__DOT__if_valid = 1U;
            __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid = 0U;
        } else {
            vlSelf->rv32e__DOT__if_stage__DOT__next_state = 0U;
            vlSelf->rv32e__DOT__if_ready = 0U;
            vlSelf->rv32e__DOT__if_valid = 0U;
            __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid = 0U;
            __Vdly__rv32e__DOT__if_stage__DOT__sram_rready = 0U;
        }
    }
    vlSelf->rv32e__DOT__if_pc = __Vdly__rv32e__DOT__if_pc;
    vlSelf->rv32e__DOT__branch_target = ((IData)(vlSelf->rv32e__DOT__wb_is_jalr)
                                          ? vlSelf->rv32e__DOT__wb_jalr_target
                                          : vlSelf->rv32e__DOT__wb_jal_target);
    vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src 
        = ((IData)(vlSelf->rv32e__DOT__wb_is_jal) | 
           ((IData)(vlSelf->rv32e__DOT__wb_is_jalr) 
            | (IData)(vlSelf->rv32e__DOT__wb_take_branch)));
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__mem_wb_rd = 0U;
    } else if (vlSelf->rv32e__DOT__flush) {
        vlSelf->rv32e__DOT__mem_wb_rd = 0U;
    } else if (((IData)(vlSelf->rv32e__DOT__mem_valid) 
                & (IData)(vlSelf->rv32e__DOT__wb_ready))) {
        vlSelf->rv32e__DOT__mem_wb_rd = vlSelf->rv32e__DOT__ex_mem_rd;
    }
    vlSelf->rv32e__DOT__mem_valid = __Vdly__rv32e__DOT__mem_valid;
    if (VL_UNLIKELY(vlSelf->rv32e__DOT__if_access_fault)) {
        VL_WRITEF("\033[31m[IF]: IF access fault at address: %x\033[0m\n",
                  32,vlSelf->rv32e__DOT__if_fault_addr);
    }
    if (VL_UNLIKELY(vlSelf->rv32e__DOT__load_access_fault)) {
        VL_WRITEF("\033[31m[MEM]: Load access fault at address: %x\033[0m\n",
                  32,vlSelf->rv32e__DOT__mem_fault_addr);
    }
    if (VL_UNLIKELY(vlSelf->rv32e__DOT__store_access_fault)) {
        VL_WRITEF("\033[31m[MEM]: Store access fault at address: %x\033[0m\n",
                  32,vlSelf->rv32e__DOT__mem_fault_addr);
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__sram_state = 0U;
        __Vdly__rv32e__DOT__if_stage__DOT__sram_arready = 1U;
        __Vdly__rv32e__DOT__if_stage__DOT__sram_rvalid = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__sram_rdata = 0U;
        __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter = 0U;
        __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg = 0U;
        __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__sram_rresp = 0U;
    } else {
        vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__sram_state 
            = vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state;
        if ((0U == vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__sram_state)) {
            __Vdly__rv32e__DOT__if_stage__DOT__sram_rvalid = 0U;
            __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter = 2U;
            if (((IData)(vlSelf->rv32e__DOT__if_stage__DOT__sram_arvalid) 
                 & (IData)(vlSelf->rv32e__DOT__if_stage__DOT__sram_arready))) {
                vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state = 1U;
                __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg 
                    = vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr;
            } else {
                vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state = 0U;
            }
            __Vdly__rv32e__DOT__if_stage__DOT__sram_arready = 1U;
        } else if ((1U == vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__sram_state)) {
            if ((0U < (IData)(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter))) {
                __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter 
                    = (3U & ((IData)(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter) 
                             - (IData)(1U)));
                vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state = 1U;
            } else {
                vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state = 2U;
                if (((0x80000000U <= vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr) 
                     & (0x8fffffffU >= vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg, 4U, __Vfunc_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read__0__Vfuncout);
                    __Vdly__rv32e__DOT__if_stage__DOT__sram_arready = 0U;
                    __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg 
                        = __Vfunc_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read__0__Vfuncout;
                    vlSelf->rv32e__DOT__if_stage__DOT__sram_rresp = 0U;
                } else {
                    __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg = 0U;
                    vlSelf->rv32e__DOT__if_stage__DOT__sram_rresp = 2U;
                }
            }
        } else if ((2U == vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__sram_state)) {
            __Vdly__rv32e__DOT__if_stage__DOT__sram_arready = 0U;
            vlSelf->rv32e__DOT__if_stage__DOT__sram_rdata 
                = vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg;
            if (((IData)(vlSelf->rv32e__DOT__if_stage__DOT__sram_rready) 
                 & (IData)(vlSelf->rv32e__DOT__if_stage__DOT__sram_rvalid))) {
                vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state = 0U;
                vlSelf->rv32e__DOT__if_stage__DOT__sram_rresp = 0U;
            } else {
                vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state = 2U;
            }
            __Vdly__rv32e__DOT__if_stage__DOT__sram_rvalid = 1U;
        } else {
            vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__next_sram_state = 0U;
            __Vdly__rv32e__DOT__if_stage__DOT__sram_arready = 1U;
            __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg = 0U;
            __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__ex_mem_rd = 0U;
        vlSelf->rv32e__DOT__id_ex_rd = 0U;
    } else {
        if (vlSelf->rv32e__DOT__flush) {
            vlSelf->rv32e__DOT__ex_mem_rd = 0U;
        } else if (((IData)(vlSelf->rv32e__DOT__ex_valid) 
                    & (IData)(vlSelf->rv32e__DOT__mem_ready))) {
            vlSelf->rv32e__DOT__ex_mem_rd = vlSelf->rv32e__DOT__id_ex_rd;
        }
        if (((IData)(vlSelf->rv32e__DOT__flush) | (IData)(vlSelf->rv32e__DOT__stall))) {
            vlSelf->rv32e__DOT__id_ex_rd = 0U;
        } else if (((IData)(vlSelf->rv32e__DOT__id_valid) 
                    & (IData)(vlSelf->rv32e__DOT__ex_ready))) {
            vlSelf->rv32e__DOT__id_ex_rd = vlSelf->rv32e__DOT__id_rd;
        }
    }
    vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter 
        = __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__delay_counter;
    vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg 
        = __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__araddr_reg;
    vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg 
        = __Vdly__rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__rdata_reg;
    vlSelf->rv32e__DOT__if_stage__DOT__sram_arvalid 
        = __Vdly__rv32e__DOT__if_stage__DOT__sram_arvalid;
    vlSelf->rv32e__DOT__if_stage__DOT__sram_arready 
        = __Vdly__rv32e__DOT__if_stage__DOT__sram_arready;
    vlSelf->rv32e__DOT__if_stage__DOT__sram_araddr 
        = __Vdly__rv32e__DOT__if_stage__DOT__sram_araddr;
    vlSelf->rv32e__DOT__if_stage__DOT__sram_rready 
        = __Vdly__rv32e__DOT__if_stage__DOT__sram_rready;
    vlSelf->rv32e__DOT__if_stage__DOT__sram_rvalid 
        = __Vdly__rv32e__DOT__if_stage__DOT__sram_rvalid;
    vlSelf->rv32e__DOT__mem_ready = __Vdly__rv32e__DOT__mem_ready;
    vlSelf->rv32e__DOT__flush = ((IData)(vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src) 
                                 & (IData)(vlSelf->rv32e__DOT__wb_valid));
    vlSelf->rv32e__DOT__stall = ((IData)(vlSelf->rv32e__DOT__id_ex_MemRead) 
                                 & ((IData)(vlSelf->rv32e__DOT__id_ex_valid) 
                                    & ((((IData)(vlSelf->rv32e__DOT__id_ex_rd) 
                                         == (IData)(vlSelf->rv32e__DOT__id_rs1)) 
                                        | ((IData)(vlSelf->rv32e__DOT__id_ex_rd) 
                                           == (IData)(vlSelf->rv32e__DOT__id_rs2))) 
                                       & (0U != (IData)(vlSelf->rv32e__DOT__id_ex_rd)))));
}

void Vrv32e___024root___eval_nba(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vrv32e___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrv32e___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vrv32e___024root___eval_triggers__act(Vrv32e___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__act(Vrv32e___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__nba(Vrv32e___024root* vlSelf);
#endif  // VL_DEBUG

void Vrv32e___024root___eval(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vrv32e___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vrv32e___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/furina/ysyx-workbench/npc/vsrc/rv32e.v", 27, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vrv32e___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vrv32e___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/furina/ysyx-workbench/npc/vsrc/rv32e.v", 27, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vrv32e___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vrv32e___024root___eval_debug_assertions(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
