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

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ len);
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_read__18__Vfuncout;
    __Vfunc_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_read__18__Vfuncout = 0;
    CData/*4:0*/ __Vdlyvdim0__rv32e__DOT__regfile__DOT__regs__v0;
    __Vdlyvdim0__rv32e__DOT__regfile__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__rv32e__DOT__regfile__DOT__regs__v0;
    __Vdlyvval__rv32e__DOT__regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__regfile__DOT__regs__v0;
    __Vdlyvset__rv32e__DOT__regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_ready;
    __Vdly__rv32e__DOT__mem_ready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_rvalid;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_rvalid = 0;
    CData/*0:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__sram_rdata;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_rdata = 0;
    CData/*1:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg = 0;
    IData/*31:0*/ __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 0;
    // Body
    __Vdlyvset__rv32e__DOT__regfile__DOT__regs__v0 = 0U;
    __Vdly__rv32e__DOT__mem_ready = vlSelf->rv32e__DOT__mem_ready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg;
    __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state 
        = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_rdata 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready;
    __Vdly__rv32e__DOT__mem_stage__DOT__sram_rvalid 
        = vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid;
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__pc = 0x80000000U;
        vlSelf->rv32e__DOT__if_valid = 0U;
        vlSelf->rv32e__DOT__if_ready = 1U;
        vlSelf->rv32e__DOT__if_stage__DOT__state = 1U;
        vlSelf->rv32e__DOT__if_stage__DOT__next_state = 1U;
        vlSelf->rv32e__DOT__if_stage__DOT__delay = 1U;
        vlSelf->rv32e__DOT__if_stage__DOT__ren = 0U;
    } else {
        vlSelf->rv32e__DOT__if_stage__DOT__state = vlSelf->rv32e__DOT__if_stage__DOT__next_state;
        if ((0U == vlSelf->rv32e__DOT__if_stage__DOT__state)) {
            if (vlSelf->rv32e__DOT__wb_valid) {
                vlSelf->rv32e__DOT__pc = (((IData)(vlSelf->rv32e__DOT__is_jal) 
                                           | ((IData)(vlSelf->rv32e__DOT__is_jalr) 
                                              | (IData)(vlSelf->rv32e__DOT__take_branch)))
                                           ? ((IData)(vlSelf->rv32e__DOT__is_jalr)
                                               ? vlSelf->rv32e__DOT__jalr_target
                                               : vlSelf->rv32e__DOT__jal_target)
                                           : ((IData)(4U) 
                                              + vlSelf->rv32e__DOT__pc));
                vlSelf->rv32e__DOT__if_stage__DOT__next_state = 1U;
            } else {
                vlSelf->rv32e__DOT__if_stage__DOT__next_state = 0U;
            }
            vlSelf->rv32e__DOT__if_ready = 1U;
            vlSelf->rv32e__DOT__if_valid = 0U;
            vlSelf->rv32e__DOT__if_stage__DOT__ren = 0U;
            vlSelf->rv32e__DOT__if_stage__DOT__delay = 1U;
        } else if ((1U == vlSelf->rv32e__DOT__if_stage__DOT__state)) {
            vlSelf->rv32e__DOT__instr = vlSelf->rv32e__DOT__if_stage__DOT__get_instr;
            vlSelf->rv32e__DOT__if_ready = 0U;
            vlSelf->rv32e__DOT__if_valid = 0U;
            vlSelf->rv32e__DOT__if_stage__DOT__ren = 1U;
            if ((0U < (IData)(vlSelf->rv32e__DOT__if_stage__DOT__delay))) {
                vlSelf->rv32e__DOT__if_stage__DOT__delay 
                    = (3U & ((IData)(vlSelf->rv32e__DOT__if_stage__DOT__delay) 
                             - (IData)(1U)));
            } else if ((0U != vlSelf->rv32e__DOT__instr)) {
                vlSelf->rv32e__DOT__if_stage__DOT__next_state = 2U;
            }
        } else if ((2U == vlSelf->rv32e__DOT__if_stage__DOT__state)) {
            vlSelf->rv32e__DOT__if_ready = 0U;
            vlSelf->rv32e__DOT__if_valid = 1U;
            vlSelf->rv32e__DOT__if_stage__DOT__next_state 
                = ((IData)(vlSelf->rv32e__DOT__id_ready)
                    ? 0U : 2U);
        } else {
            vlSelf->rv32e__DOT__if_ready = 0U;
            vlSelf->rv32e__DOT__if_valid = 0U;
            vlSelf->rv32e__DOT__if_stage__DOT__next_state = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__opcode = 0U;
        vlSelf->rv32e__DOT__rs1 = 0U;
        vlSelf->rv32e__DOT__rs2 = 0U;
        vlSelf->rv32e__DOT__rd = 0U;
        vlSelf->rv32e__DOT__imm = 0U;
        vlSelf->rv32e__DOT__func3 = 0U;
        vlSelf->rv32e__DOT__func7 = 0U;
        vlSelf->rv32e__DOT__RegWrite = 0U;
        vlSelf->rv32e__DOT__MemWrite = 0U;
        vlSelf->rv32e__DOT__MemRead = 0U;
        vlSelf->rv32e__DOT__alu_op = 0U;
        vlSelf->rv32e__DOT__MemLen = 2U;
    } else {
        vlSelf->rv32e__DOT__id_stage__DOT__state = vlSelf->rv32e__DOT__id_stage__DOT__next_state;
        if ((0U == vlSelf->rv32e__DOT__id_stage__DOT__state)) {
            vlSelf->rv32e__DOT__id_ready = 1U;
            vlSelf->rv32e__DOT__id_valid = 0U;
            vlSelf->rv32e__DOT__id_stage__DOT__delay = 1U;
            if (vlSelf->rv32e__DOT__if_valid) {
                vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                    = vlSelf->rv32e__DOT__instr;
                vlSelf->rv32e__DOT__id_stage__DOT__next_state = 1U;
            } else {
                vlSelf->rv32e__DOT__id_stage__DOT__next_state = 0U;
            }
        } else if ((1U == vlSelf->rv32e__DOT__id_stage__DOT__state)) {
            vlSelf->rv32e__DOT__id_ready = 0U;
            vlSelf->rv32e__DOT__id_valid = 0U;
            if ((0U < (IData)(vlSelf->rv32e__DOT__id_stage__DOT__delay))) {
                vlSelf->rv32e__DOT__opcode = (0x7fU 
                                              & vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                vlSelf->rv32e__DOT__id_stage__DOT__delay 
                    = (3U & ((IData)(vlSelf->rv32e__DOT__id_stage__DOT__delay) 
                             - (IData)(1U)));
                vlSelf->rv32e__DOT__rs1 = (0x1fU & 
                                           (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                            >> 0xfU));
                vlSelf->rv32e__DOT__id_stage__DOT__next_state 
                    = ((0U == (IData)(vlSelf->rv32e__DOT__id_stage__DOT__delay))
                        ? 2U : 1U);
                vlSelf->rv32e__DOT__rs2 = (0x1fU & 
                                           (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                            >> 0x14U));
                vlSelf->rv32e__DOT__rd = (0x1fU & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                   >> 7U));
                vlSelf->rv32e__DOT__func3 = (7U & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                   >> 0xcU));
                vlSelf->rv32e__DOT__func7 = (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                             >> 0x19U);
                vlSelf->rv32e__DOT__imm = 0U;
                vlSelf->rv32e__DOT__RegWrite = 0U;
                vlSelf->rv32e__DOT__MemWrite = 0U;
                vlSelf->rv32e__DOT__MemRead = 0U;
                vlSelf->rv32e__DOT__alu_op = 0U;
                vlSelf->rv32e__DOT__MemLen = 2U;
                vlSelf->rv32e__DOT__id_stage__DOT__get_opcode 
                    = (0x1fU & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                >> 2U));
                if ((0x10U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                    if (VL_LIKELY((8U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                        if ((4U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                            if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                                VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                          32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                            } else if (VL_UNLIKELY(
                                                   (1U 
                                                    & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                                VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                          32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                            } else if (VL_UNLIKELY(
                                                   (0x100073U 
                                                    == vlSelf->rv32e__DOT__id_stage__DOT__instr_reg))) {
                                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(1U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                                VL_WRITEF("ebreak instruction\n");
                            }
                        } else if ((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                            if (VL_LIKELY((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                                vlSelf->rv32e__DOT__imm 
                                    = vlSelf->rv32e__DOT__id_stage__DOT__immJ;
                                vlSelf->rv32e__DOT__RegWrite = 1U;
                            } else {
                                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                                VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                          32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                            }
                        } else if ((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                            if ((0U == (IData)(vlSelf->rv32e__DOT__func3))) {
                                vlSelf->rv32e__DOT__imm 
                                    = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                                vlSelf->rv32e__DOT__RegWrite = 1U;
                            }
                        } else {
                            vlSelf->rv32e__DOT__imm 
                                = vlSelf->rv32e__DOT__id_stage__DOT__immB;
                            if ((4U & (IData)(vlSelf->rv32e__DOT__func3))) {
                                vlSelf->rv32e__DOT__alu_op 
                                    = ((2U & (IData)(vlSelf->rv32e__DOT__func3))
                                        ? 6U : 7U);
                            } else if (VL_UNLIKELY(
                                                   (2U 
                                                    & (IData)(vlSelf->rv32e__DOT__func3)))) {
                                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                                VL_WRITEF("\033[32m[ID] : Unknown B instruction with func3 = %b\033[0m\n",
                                          3,vlSelf->rv32e__DOT__func3);
                            } else {
                                vlSelf->rv32e__DOT__alu_op = 1U;
                            }
                        }
                    } else {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                        VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                  32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                    }
                } else if ((8U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                    if ((4U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                        if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                            VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                      32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                        } else if (VL_UNLIKELY((1U 
                                                & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                            VL_WRITEF("\033[32m[ID]: LUI \033[0m\n");
                            vlSelf->rv32e__DOT__imm 
                                = vlSelf->rv32e__DOT__id_stage__DOT__immU;
                            vlSelf->rv32e__DOT__RegWrite = 1U;
                        } else {
                            vlSelf->rv32e__DOT__RegWrite = 1U;
                            vlSelf->rv32e__DOT__imm = 0U;
                            if ((4U & (IData)(vlSelf->rv32e__DOT__func3))) {
                                if ((2U & (IData)(vlSelf->rv32e__DOT__func3))) {
                                    vlSelf->rv32e__DOT__alu_op 
                                        = ((1U & (IData)(vlSelf->rv32e__DOT__func3))
                                            ? 2U : 3U);
                                } else if ((1U & (IData)(vlSelf->rv32e__DOT__func3))) {
                                    if ((0x20U == (IData)(vlSelf->rv32e__DOT__func7))) {
                                        vlSelf->rv32e__DOT__alu_op = 8U;
                                    } else if ((0U 
                                                == (IData)(vlSelf->rv32e__DOT__func7))) {
                                        vlSelf->rv32e__DOT__alu_op = 9U;
                                    }
                                } else {
                                    vlSelf->rv32e__DOT__alu_op = 4U;
                                }
                            } else if ((2U & (IData)(vlSelf->rv32e__DOT__func3))) {
                                if ((1U & (IData)(vlSelf->rv32e__DOT__func3))) {
                                    if ((0U == (IData)(vlSelf->rv32e__DOT__func7))) {
                                        vlSelf->rv32e__DOT__alu_op = 6U;
                                    } else if ((0U 
                                                == (IData)(vlSelf->rv32e__DOT__func7))) {
                                        vlSelf->rv32e__DOT__alu_op = 9U;
                                    }
                                } else if ((0U == (IData)(vlSelf->rv32e__DOT__func7))) {
                                    vlSelf->rv32e__DOT__alu_op = 7U;
                                }
                            } else if ((1U & (IData)(vlSelf->rv32e__DOT__func3))) {
                                if ((0U == (IData)(vlSelf->rv32e__DOT__func7))) {
                                    vlSelf->rv32e__DOT__alu_op = 5U;
                                }
                            } else {
                                vlSelf->rv32e__DOT__alu_op 
                                    = ((0x20U & (IData)(vlSelf->rv32e__DOT__func7))
                                        ? 1U : 0U);
                            }
                        }
                    } else if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                        VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                  32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                    } else if ((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                        VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                  32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                    } else {
                        vlSelf->rv32e__DOT__imm = vlSelf->rv32e__DOT__id_stage__DOT__immS;
                        vlSelf->rv32e__DOT__MemWrite = 1U;
                        vlSelf->rv32e__DOT__alu_op = 0U;
                        if ((2U == (IData)(vlSelf->rv32e__DOT__func3))) {
                            vlSelf->rv32e__DOT__MemLen = 2U;
                        } else if ((1U == (IData)(vlSelf->rv32e__DOT__func3))) {
                            vlSelf->rv32e__DOT__MemLen = 1U;
                        } else if (VL_LIKELY((0U == (IData)(vlSelf->rv32e__DOT__func3)))) {
                            vlSelf->rv32e__DOT__MemLen = 0U;
                        } else {
                            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                            VL_WRITEF("\033[32m[ID] : Unknown S instruction with func3 = %b\033[0m\n",
                                      3,vlSelf->rv32e__DOT__func3);
                        }
                        VL_WRITEF("\033[32m[ID]: S Instr\033[0m\n");
                    }
                } else if ((4U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                    if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                        VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                                  32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                    } else if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                        VL_WRITEF("\033[32m[ID]: AUIPC \033[0m\n");
                        vlSelf->rv32e__DOT__imm = vlSelf->rv32e__DOT__id_stage__DOT__immU;
                        vlSelf->rv32e__DOT__RegWrite = 1U;
                        vlSelf->rv32e__DOT__alu_op = 0U;
                    } else {
                        vlSelf->rv32e__DOT__imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                        vlSelf->rv32e__DOT__RegWrite = 1U;
                        if ((4U & (IData)(vlSelf->rv32e__DOT__func3))) {
                            if ((2U & (IData)(vlSelf->rv32e__DOT__func3))) {
                                vlSelf->rv32e__DOT__alu_op 
                                    = ((1U & (IData)(vlSelf->rv32e__DOT__func3))
                                        ? 2U : 3U);
                            } else if ((1U & (IData)(vlSelf->rv32e__DOT__func3))) {
                                if ((0x20U == (IData)(vlSelf->rv32e__DOT__func7))) {
                                    vlSelf->rv32e__DOT__alu_op = 8U;
                                } else if ((0U == (IData)(vlSelf->rv32e__DOT__func7))) {
                                    vlSelf->rv32e__DOT__alu_op = 9U;
                                }
                            } else {
                                vlSelf->rv32e__DOT__alu_op = 4U;
                            }
                        } else if ((2U & (IData)(vlSelf->rv32e__DOT__func3))) {
                            vlSelf->rv32e__DOT__alu_op 
                                = ((1U & (IData)(vlSelf->rv32e__DOT__func3))
                                    ? 6U : 7U);
                        } else if ((1U & (IData)(vlSelf->rv32e__DOT__func3))) {
                            if ((0U == (IData)(vlSelf->rv32e__DOT__func7))) {
                                vlSelf->rv32e__DOT__alu_op = 5U;
                            }
                        } else {
                            vlSelf->rv32e__DOT__alu_op = 0U;
                        }
                    }
                } else if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                    VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                              32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                } else if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                    VL_WRITEF("\033[32m[ID] : Unknow instruction with inst = %x\033[0m\n",
                              32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                } else if ((2U == (IData)(vlSelf->rv32e__DOT__func3))) {
                    vlSelf->rv32e__DOT__imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                    vlSelf->rv32e__DOT__RegWrite = 1U;
                    vlSelf->rv32e__DOT__MemRead = 1U;
                    vlSelf->rv32e__DOT__alu_op = 0U;
                    vlSelf->rv32e__DOT__MemLen = 2U;
                } else if (VL_UNLIKELY((4U == (IData)(vlSelf->rv32e__DOT__func3)))) {
                    VL_WRITEF("\033[32m[ID]: LBU\033[0m\n");
                    vlSelf->rv32e__DOT__imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                    vlSelf->rv32e__DOT__RegWrite = 1U;
                    vlSelf->rv32e__DOT__MemRead = 1U;
                    vlSelf->rv32e__DOT__alu_op = 0U;
                    vlSelf->rv32e__DOT__MemLen = 0U;
                } else if ((1U == (IData)(vlSelf->rv32e__DOT__func3))) {
                    vlSelf->rv32e__DOT__imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                    vlSelf->rv32e__DOT__RegWrite = 1U;
                    vlSelf->rv32e__DOT__MemRead = 1U;
                    vlSelf->rv32e__DOT__alu_op = 0U;
                    vlSelf->rv32e__DOT__MemLen = 1U;
                } else if ((5U == (IData)(vlSelf->rv32e__DOT__func3))) {
                    vlSelf->rv32e__DOT__imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                    vlSelf->rv32e__DOT__RegWrite = 1U;
                    vlSelf->rv32e__DOT__MemRead = 1U;
                    vlSelf->rv32e__DOT__alu_op = 0U;
                    vlSelf->rv32e__DOT__MemLen = 3U;
                }
            }
        } else if ((2U == vlSelf->rv32e__DOT__id_stage__DOT__state)) {
            vlSelf->rv32e__DOT__id_ready = 0U;
            vlSelf->rv32e__DOT__id_valid = 1U;
            vlSelf->rv32e__DOT__id_stage__DOT__next_state 
                = ((IData)(vlSelf->rv32e__DOT__reg_ready)
                    ? 0U : 2U);
        } else {
            vlSelf->rv32e__DOT__id_valid = 0U;
            vlSelf->rv32e__DOT__id_ready = 0U;
            vlSelf->rv32e__DOT__id_stage__DOT__next_state = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__ex_stage__DOT__state = 0U;
        vlSelf->rv32e__DOT__ex_stage__DOT__delay = 1U;
        vlSelf->rv32e__DOT__ex_ready = 1U;
        vlSelf->rv32e__DOT__ex_valid = 0U;
        vlSelf->rv32e__DOT__alu_result = 0U;
        vlSelf->rv32e__DOT__alu_zero = 0U;
        vlSelf->rv32e__DOT__alu_less = 0U;
    } else {
        vlSelf->rv32e__DOT__ex_stage__DOT__state = vlSelf->rv32e__DOT__ex_stage__DOT__next_state;
        if ((0U == vlSelf->rv32e__DOT__ex_stage__DOT__state)) {
            vlSelf->rv32e__DOT__ex_ready = 1U;
            vlSelf->rv32e__DOT__ex_valid = 0U;
            vlSelf->rv32e__DOT__ex_stage__DOT__delay = 1U;
            vlSelf->rv32e__DOT__ex_stage__DOT__next_state 
                = ((IData)(vlSelf->rv32e__DOT__reg_valid)
                    ? 1U : 0U);
        } else if (VL_UNLIKELY((1U == vlSelf->rv32e__DOT__ex_stage__DOT__state))) {
            vlSelf->rv32e__DOT__ex_ready = 0U;
            vlSelf->rv32e__DOT__ex_valid = 0U;
            if ((0U < (IData)(vlSelf->rv32e__DOT__ex_stage__DOT__delay))) {
                vlSelf->rv32e__DOT__alu_result = ((8U 
                                                   & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                      ? 
                                                     (vlSelf->rv32e__DOT__rs1_val 
                                                      >> 
                                                      (0x1fU 
                                                       & (((0xcU 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                >> 2U))) 
                                                           | (0x18U 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                  >> 2U))))
                                                           ? vlSelf->rv32e__DOT__rs2_val
                                                           : vlSelf->rv32e__DOT__imm)))
                                                      : 
                                                     VL_SHIFTRS_III(32,32,5, vlSelf->rv32e__DOT__rs1_val, 
                                                                    (0x1fU 
                                                                     & (((0xcU 
                                                                          == 
                                                                          (0x1fU 
                                                                           & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                              >> 2U))) 
                                                                         | (0x18U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                                >> 2U))))
                                                                         ? vlSelf->rv32e__DOT__rs2_val
                                                                         : vlSelf->rv32e__DOT__imm))))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                      ? 
                                                     (VL_LTS_III(32, vlSelf->rv32e__DOT__rs1_val, 
                                                                 (((0xcU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                        >> 2U))) 
                                                                   | (0x18U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                          >> 2U))))
                                                                   ? vlSelf->rv32e__DOT__rs2_val
                                                                   : vlSelf->rv32e__DOT__imm))
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     ((vlSelf->rv32e__DOT__rs1_val 
                                                       < 
                                                       (((0xcU 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                              >> 2U))) 
                                                         | (0x18U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                >> 2U))))
                                                         ? vlSelf->rv32e__DOT__rs2_val
                                                         : vlSelf->rv32e__DOT__imm))
                                                       ? 1U
                                                       : 0U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                      ? 
                                                     (vlSelf->rv32e__DOT__rs1_val 
                                                      << 
                                                      (0x1fU 
                                                       & (((0xcU 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                >> 2U))) 
                                                           | (0x18U 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                  >> 2U))))
                                                           ? vlSelf->rv32e__DOT__rs2_val
                                                           : vlSelf->rv32e__DOT__imm)))
                                                      : 
                                                     (vlSelf->rv32e__DOT__rs1_val 
                                                      ^ 
                                                      (((0xcU 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                             >> 2U))) 
                                                        | (0x18U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                               >> 2U))))
                                                        ? vlSelf->rv32e__DOT__rs2_val
                                                        : vlSelf->rv32e__DOT__imm))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                      ? 
                                                     (vlSelf->rv32e__DOT__rs1_val 
                                                      | (((0xcU 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                               >> 2U))) 
                                                          | (0x18U 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                 >> 2U))))
                                                          ? vlSelf->rv32e__DOT__rs2_val
                                                          : vlSelf->rv32e__DOT__imm))
                                                      : 
                                                     (vlSelf->rv32e__DOT__rs1_val 
                                                      & (((0xcU 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                               >> 2U))) 
                                                          | (0x18U 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                 >> 2U))))
                                                          ? vlSelf->rv32e__DOT__rs2_val
                                                          : vlSelf->rv32e__DOT__imm)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->rv32e__DOT__alu_op))
                                                      ? 
                                                     (vlSelf->rv32e__DOT__rs1_val 
                                                      - 
                                                      (((0xcU 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                             >> 2U))) 
                                                        | (0x18U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                               >> 2U))))
                                                        ? vlSelf->rv32e__DOT__rs2_val
                                                        : vlSelf->rv32e__DOT__imm))
                                                      : 
                                                     (vlSelf->rv32e__DOT__rs1_val 
                                                      + 
                                                      (((0xcU 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                             >> 2U))) 
                                                        | (0x18U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                               >> 2U))))
                                                        ? vlSelf->rv32e__DOT__rs2_val
                                                        : vlSelf->rv32e__DOT__imm))))));
                vlSelf->rv32e__DOT__ex_stage__DOT__delay 
                    = (3U & ((IData)(vlSelf->rv32e__DOT__ex_stage__DOT__delay) 
                             - (IData)(1U)));
                vlSelf->rv32e__DOT__alu_zero = (0U 
                                                == vlSelf->rv32e__DOT__alu_result);
                vlSelf->rv32e__DOT__alu_less = VL_LTS_III(32, vlSelf->rv32e__DOT__rs1_val, 
                                                          (((0xcU 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                 >> 2U))) 
                                                            | (0x18U 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(vlSelf->rv32e__DOT__opcode) 
                                                                   >> 2U))))
                                                            ? vlSelf->rv32e__DOT__rs2_val
                                                            : vlSelf->rv32e__DOT__imm));
                vlSelf->rv32e__DOT__rd_ex = vlSelf->rv32e__DOT__rd;
                vlSelf->rv32e__DOT__RegWrite_ex = vlSelf->rv32e__DOT__RegWrite;
            }
            vlSelf->rv32e__DOT__ex_stage__DOT__next_state 
                = ((0U == (IData)(vlSelf->rv32e__DOT__ex_stage__DOT__delay))
                    ? 2U : 1U);
            VL_WRITEF("\033[33m[EX]: alu_result = %x | alu_zero=%b | alu_less=%b\033[0m\n\033[33m[EX]: imm=%x | rs1_val=%x | rs2_val=%x\033[0m\n",
                      32,vlSelf->rv32e__DOT__alu_result,
                      1,(IData)(vlSelf->rv32e__DOT__alu_zero),
                      1,vlSelf->rv32e__DOT__alu_less,
                      32,vlSelf->rv32e__DOT__imm,32,
                      vlSelf->rv32e__DOT__rs1_val,32,
                      vlSelf->rv32e__DOT__rs2_val);
        } else if ((2U == vlSelf->rv32e__DOT__ex_stage__DOT__state)) {
            vlSelf->rv32e__DOT__ex_ready = 0U;
            vlSelf->rv32e__DOT__ex_valid = 1U;
            vlSelf->rv32e__DOT__ex_stage__DOT__next_state 
                = ((IData)(vlSelf->rv32e__DOT__mem_ready)
                    ? 0U : 2U);
        } else {
            vlSelf->rv32e__DOT__ex_ready = 0U;
            vlSelf->rv32e__DOT__ex_valid = 0U;
            vlSelf->rv32e__DOT__ex_stage__DOT__next_state = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__wb_stage__DOT__state = 2U;
        vlSelf->rv32e__DOT__wb_stage__DOT__delay = 1U;
        vlSelf->rv32e__DOT__wb_ready = 1U;
        vlSelf->rv32e__DOT__wb_valid = 1U;
        vlSelf->rv32e__DOT__jal_target = 0U;
        vlSelf->rv32e__DOT__jalr_target = 0U;
        vlSelf->rv32e__DOT__is_jal = 0U;
        vlSelf->rv32e__DOT__is_jalr = 0U;
        vlSelf->rv32e__DOT__take_branch = 0U;
        vlSelf->rv32e__DOT__wb_data = 0U;
    } else {
        vlSelf->rv32e__DOT__wb_stage__DOT__state = vlSelf->rv32e__DOT__wb_stage__DOT__next_state;
        if ((0U == vlSelf->rv32e__DOT__wb_stage__DOT__state)) {
            vlSelf->rv32e__DOT__wb_ready = 1U;
            vlSelf->rv32e__DOT__wb_valid = 0U;
            vlSelf->rv32e__DOT__wb_stage__DOT__delay = 1U;
            vlSelf->rv32e__DOT__wb_stage__DOT__next_state 
                = ((IData)(vlSelf->rv32e__DOT__mem_valid)
                    ? 1U : 0U);
        } else if ((1U == vlSelf->rv32e__DOT__wb_stage__DOT__state)) {
            vlSelf->rv32e__DOT__wb_ready = 0U;
            vlSelf->rv32e__DOT__wb_valid = 0U;
            if (VL_UNLIKELY((0U < (IData)(vlSelf->rv32e__DOT__wb_stage__DOT__delay)))) {
                vlSelf->rv32e__DOT__wb_data = ((0x37U 
                                                == (IData)(vlSelf->rv32e__DOT__opcode))
                                                ? vlSelf->rv32e__DOT__imm
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelf->rv32e__DOT__opcode))
                                                    ? 
                                                   (vlSelf->rv32e__DOT__pc 
                                                    + vlSelf->rv32e__DOT__imm)
                                                    : 
                                                   (((0x6fU 
                                                      == (IData)(vlSelf->rv32e__DOT__opcode)) 
                                                     | (0x67U 
                                                        == (IData)(vlSelf->rv32e__DOT__opcode)))
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSelf->rv32e__DOT__pc)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->rv32e__DOT__opcode))
                                                      ? vlSelf->rv32e__DOT__data_out
                                                      : 
                                                     (((0x33U 
                                                        == (IData)(vlSelf->rv32e__DOT__opcode)) 
                                                       | (0x13U 
                                                          == (IData)(vlSelf->rv32e__DOT__opcode)))
                                                       ? vlSelf->rv32e__DOT__alu_result
                                                       : 0U)))));
                vlSelf->rv32e__DOT__wb_stage__DOT__delay 
                    = (3U & ((IData)(vlSelf->rv32e__DOT__wb_stage__DOT__delay) 
                             - (IData)(1U)));
                vlSelf->rv32e__DOT__jal_target = (vlSelf->rv32e__DOT__pc 
                                                  + vlSelf->rv32e__DOT__imm);
                vlSelf->rv32e__DOT__jalr_target = (0xfffffffeU 
                                                   & (vlSelf->rv32e__DOT__rs1_val 
                                                      + vlSelf->rv32e__DOT__imm));
                vlSelf->rv32e__DOT__is_jal = (0x6fU 
                                              == (IData)(vlSelf->rv32e__DOT__opcode));
                vlSelf->rv32e__DOT__is_jalr = ((0x67U 
                                                == (IData)(vlSelf->rv32e__DOT__opcode)) 
                                               & (0U 
                                                  == (IData)(vlSelf->rv32e__DOT__func3)));
                vlSelf->rv32e__DOT__take_branch = (
                                                   (0x63U 
                                                    == (IData)(vlSelf->rv32e__DOT__opcode)) 
                                                   & (((((((1U 
                                                            == (IData)(vlSelf->rv32e__DOT__func3)) 
                                                           & (~ (IData)(vlSelf->rv32e__DOT__alu_zero))) 
                                                          | ((0U 
                                                              == (IData)(vlSelf->rv32e__DOT__func3)) 
                                                             & (IData)(vlSelf->rv32e__DOT__alu_zero))) 
                                                         | ((4U 
                                                             == (IData)(vlSelf->rv32e__DOT__func3)) 
                                                            & (IData)(vlSelf->rv32e__DOT__alu_less))) 
                                                        | ((5U 
                                                            == (IData)(vlSelf->rv32e__DOT__func3)) 
                                                           & (~ (IData)(vlSelf->rv32e__DOT__alu_less)))) 
                                                       | ((6U 
                                                           == (IData)(vlSelf->rv32e__DOT__func3)) 
                                                          & (IData)(vlSelf->rv32e__DOT__alu_less))) 
                                                      | ((7U 
                                                          == (IData)(vlSelf->rv32e__DOT__func3)) 
                                                         & (~ (IData)(vlSelf->rv32e__DOT__alu_less)))));
                vlSelf->rv32e__DOT__rd_wb = vlSelf->rv32e__DOT__rd_mem;
                vlSelf->rv32e__DOT__RegWrite_wb = vlSelf->rv32e__DOT__RegWrite_mem;
                vlSelf->rv32e__DOT__wb_MemRead = vlSelf->rv32e__DOT__MemRead;
                vlSelf->rv32e__DOT__wb_MemWrite = vlSelf->rv32e__DOT__MemWrite;
                vlSelf->rv32e__DOT__wb_MemLen = vlSelf->rv32e__DOT__MemLen;
                vlSelf->rv32e__DOT__wb_addr = vlSelf->rv32e__DOT__alu_result;
                vlSelf->rv32e__DOT__wb_data_in = vlSelf->rv32e__DOT__rs2_val;
                VL_WRITEF("\033[31m[WB]: wb_data=0x%08x\033[0m\n",
                          32,vlSelf->rv32e__DOT__wb_data);
            }
            vlSelf->rv32e__DOT__wb_stage__DOT__next_state 
                = ((0U == (IData)(vlSelf->rv32e__DOT__wb_stage__DOT__delay))
                    ? 2U : 1U);
        } else if ((2U == vlSelf->rv32e__DOT__wb_stage__DOT__state)) {
            vlSelf->rv32e__DOT__wb_ready = 0U;
            vlSelf->rv32e__DOT__wb_valid = 1U;
            vlSelf->rv32e__DOT__wb_stage__DOT__next_state 
                = ((IData)(vlSelf->rv32e__DOT__if_ready)
                    ? 0U : 2U);
        } else {
            vlSelf->rv32e__DOT__wb_ready = 0U;
            vlSelf->rv32e__DOT__wb_valid = 0U;
            vlSelf->rv32e__DOT__wb_stage__DOT__next_state = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__regfile__DOT__state = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__delay = 1U;
        vlSelf->rv32e__DOT__reg_ready = 1U;
        vlSelf->rv32e__DOT__reg_valid = 0U;
        vlSelf->rv32e__DOT__rs1_val = 0U;
        vlSelf->rv32e__DOT__rs2_val = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[1U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[2U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[3U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[4U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[5U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[6U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[7U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[8U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[9U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0xaU] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0xbU] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0xcU] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0xdU] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0xeU] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0xfU] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0x10U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0x11U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0x12U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0x13U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0x14U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0x15U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0x16U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0x17U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0x18U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0x19U] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0x1aU] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0x1bU] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0x1cU] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0x1dU] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0x1eU] = 0U;
        vlSelf->rv32e__DOT__regfile__DOT__regs[0x1fU] = 0U;
    } else {
        vlSelf->rv32e__DOT__regfile__DOT__state = vlSelf->rv32e__DOT__regfile__DOT__next_state;
        if ((0U == vlSelf->rv32e__DOT__regfile__DOT__state)) {
            vlSelf->rv32e__DOT__reg_ready = 1U;
            vlSelf->rv32e__DOT__reg_valid = 0U;
            vlSelf->rv32e__DOT__regfile__DOT__delay = 1U;
            vlSelf->rv32e__DOT__regfile__DOT__next_state 
                = ((IData)(vlSelf->rv32e__DOT__id_valid)
                    ? 1U : 0U);
        } else if ((1U == vlSelf->rv32e__DOT__regfile__DOT__state)) {
            vlSelf->rv32e__DOT__reg_ready = 0U;
            vlSelf->rv32e__DOT__reg_valid = 0U;
            if ((0U < (IData)(vlSelf->rv32e__DOT__regfile__DOT__delay))) {
                vlSelf->rv32e__DOT__regfile__DOT__delay 
                    = (3U & ((IData)(vlSelf->rv32e__DOT__regfile__DOT__delay) 
                             - (IData)(1U)));
                if (VL_UNLIKELY(((IData)(vlSelf->rv32e__DOT__RegWrite_wb) 
                                 & (0U != (IData)(vlSelf->rv32e__DOT__rd_wb))))) {
                    VL_WRITEF("\033[35m[REG]: regs[%2#] = %x\033[0m\n",
                              5,vlSelf->rv32e__DOT__rd_wb,
                              32,vlSelf->rv32e__DOT__wb_data);
                    __Vdlyvval__rv32e__DOT__regfile__DOT__regs__v0 
                        = vlSelf->rv32e__DOT__wb_data;
                    __Vdlyvset__rv32e__DOT__regfile__DOT__regs__v0 = 1U;
                    __Vdlyvdim0__rv32e__DOT__regfile__DOT__regs__v0 
                        = vlSelf->rv32e__DOT__rd_wb;
                }
            }
            vlSelf->rv32e__DOT__regfile__DOT__next_state 
                = ((0U == (IData)(vlSelf->rv32e__DOT__regfile__DOT__delay))
                    ? 2U : 1U);
        } else if ((2U == vlSelf->rv32e__DOT__regfile__DOT__state)) {
            vlSelf->rv32e__DOT__reg_ready = 0U;
            vlSelf->rv32e__DOT__reg_valid = 1U;
            vlSelf->rv32e__DOT__regfile__DOT__next_state 
                = ((IData)(vlSelf->rv32e__DOT__ex_ready)
                    ? 0U : 2U);
        }
    }
    if (vlSelf->reset) {
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_rvalid = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_rdata = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter = 2U;
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg = 0U;
    } else {
        if ((0U == vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state)) {
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready = 1U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready = 1U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_rvalid = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter = 2U;
            if (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready))) {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg 
                    = vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr;
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready = 0U;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 1U;
            } else if (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid) 
                        & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready))) {
                if ((1U == (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wmask))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__mem_stage__DOT__sram_waddr, vlSelf->rv32e__DOT__mem_stage__DOT__sram_wdata, 1U);
                } else if ((3U == (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wmask))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__mem_stage__DOT__sram_waddr, vlSelf->rv32e__DOT__mem_stage__DOT__sram_wdata, 2U);
                } else if ((0xfU == (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wmask))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__mem_stage__DOT__sram_waddr, vlSelf->rv32e__DOT__mem_stage__DOT__sram_wdata, 4U);
                } else {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_write_TOP(vlSelf->rv32e__DOT__mem_stage__DOT__sram_waddr, vlSelf->rv32e__DOT__mem_stage__DOT__sram_wdata, 4U);
                }
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready = 0U;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 3U;
            } else {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 0U;
            }
        } else if ((1U == vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state)) {
            if (VL_LIKELY((0U < (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter)))) {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter 
                    = (3U & ((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter) 
                             - (IData)(1U)));
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 1U;
            } else {
                VL_WRITEF("\nRead form MEM SRAM\n");
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg, 4U, __Vfunc_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_read__18__Vfuncout);
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 2U;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg 
                    = __Vfunc_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_read__18__Vfuncout;
            }
        } else if ((2U == vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state)) {
            if (vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready) {
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_rdata 
                    = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg;
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_rvalid = 1U;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 0U;
            } else {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 2U;
            }
        } else if ((3U == vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state)) {
            if ((0U < (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter))) {
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter 
                    = (3U & ((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter) 
                             - (IData)(1U)));
            } else {
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready = 1U;
                __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 0U;
            }
        } else {
            __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state = 0U;
        }
        __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state 
            = vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state;
    }
    vlSelf->rv32e__DOT__id_stage__DOT__immU = (0xfffff000U 
                                               & vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
    vlSelf->rv32e__DOT__id_stage__DOT__immJ = (((- (IData)(
                                                           (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                            >> 0x1fU))) 
                                                << 0x14U) 
                                               | ((0xff000U 
                                                   & vlSelf->rv32e__DOT__id_stage__DOT__instr_reg) 
                                                  | ((0x800U 
                                                      & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                           >> 0x14U)))));
    vlSelf->rv32e__DOT__id_stage__DOT__immI = (((- (IData)(
                                                           (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                  >> 0x14U));
    vlSelf->rv32e__DOT__id_stage__DOT__immS = (((- (IData)(
                                                           (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                        >> 7U))));
    vlSelf->rv32e__DOT__id_stage__DOT__immB = (((- (IData)(
                                                           (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0x800U 
                                                   & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                           >> 7U)))));
    VL_WRITEF("\033[33m[EX]: state = %11d | ex_ready=%b | ex_valid=%b\033[0m\n\033[31m[WB]: state = %11d | wb_ready=%b | wb_valid=%b\033[0m\n",
              32,vlSelf->rv32e__DOT__ex_stage__DOT__state,
              1,(IData)(vlSelf->rv32e__DOT__ex_ready),
              1,vlSelf->rv32e__DOT__ex_valid,32,vlSelf->rv32e__DOT__wb_stage__DOT__state,
              1,(IData)(vlSelf->rv32e__DOT__wb_ready),
              1,vlSelf->rv32e__DOT__wb_valid);
    if (__Vdlyvset__rv32e__DOT__regfile__DOT__regs__v0) {
        vlSelf->rv32e__DOT__regfile__DOT__regs[__Vdlyvdim0__rv32e__DOT__regfile__DOT__regs__v0] 
            = __Vdlyvval__rv32e__DOT__regfile__DOT__regs__v0;
    }
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__delay_counter;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__rdata_reg;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__next_sram_state;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state;
    vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg 
        = __Vdly__rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg;
    vlSelf->rv32e__DOT__rs1_val = ((0U != (IData)(vlSelf->rv32e__DOT__rs1))
                                    ? vlSelf->rv32e__DOT__regfile__DOT__regs
                                   [vlSelf->rv32e__DOT__rs1]
                                    : 0U);
    vlSelf->rv32e__DOT__rs2_val = ((0U != (IData)(vlSelf->rv32e__DOT__rs2))
                                    ? vlSelf->rv32e__DOT__regfile__DOT__regs
                                   [vlSelf->rv32e__DOT__rs2]
                                    : 0U);
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__mem_stage__DOT__state = 0U;
        vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 0U;
        vlSelf->rv32e__DOT__mem_stage__DOT__delay = 3U;
        __Vdly__rv32e__DOT__mem_ready = 1U;
        vlSelf->rv32e__DOT__mem_valid = 0U;
        vlSelf->rv32e__DOT__data_out = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready = 0U;
        __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid = 0U;
        vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr = 0U;
        vlSelf->rv32e__DOT__mem_stage__DOT__sram_waddr = 0U;
        vlSelf->rv32e__DOT__mem_stage__DOT__sram_wdata = 0U;
        vlSelf->rv32e__DOT__mem_stage__DOT__sram_wmask = 0xfU;
    } else {
        vlSelf->rv32e__DOT__mem_stage__DOT__state = vlSelf->rv32e__DOT__mem_stage__DOT__next_state;
        if ((0U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            vlSelf->rv32e__DOT__mem_valid = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid = 0U;
            if (((IData)(vlSelf->rv32e__DOT__ex_valid) 
                 & (IData)(vlSelf->rv32e__DOT__mem_ready))) {
                if (vlSelf->rv32e__DOT__wb_MemRead) {
                    vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr 
                        = vlSelf->rv32e__DOT__wb_addr;
                    __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid = 1U;
                } else if (vlSelf->rv32e__DOT__wb_MemWrite) {
                    vlSelf->rv32e__DOT__mem_stage__DOT__sram_waddr 
                        = vlSelf->rv32e__DOT__wb_addr;
                    vlSelf->rv32e__DOT__mem_stage__DOT__sram_wdata 
                        = vlSelf->rv32e__DOT__wb_data_in;
                    vlSelf->rv32e__DOT__mem_stage__DOT__sram_wmask 
                        = ((0U == (IData)(vlSelf->rv32e__DOT__wb_MemLen))
                            ? 1U : ((1U == (IData)(vlSelf->rv32e__DOT__wb_MemLen))
                                     ? 3U : 0xfU));
                    __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid = 1U;
                } else {
                    vlSelf->rv32e__DOT__rd_mem = vlSelf->rv32e__DOT__rd_ex;
                    vlSelf->rv32e__DOT__RegWrite_mem 
                        = vlSelf->rv32e__DOT__RegWrite_ex;
                }
            }
            __Vdly__rv32e__DOT__mem_ready = 1U;
        } else if ((1U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            if (VL_UNLIKELY(((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready) 
                             & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid)))) {
                VL_WRITEF("\033[31m[MEM]: READ_ADDR\347\212\266\346\200\201\346\217\241\346\211\213\346\210\220\345\212\237\033[0m\n");
            }
            __Vdly__rv32e__DOT__mem_ready = 0U;
            vlSelf->rv32e__DOT__mem_valid = 0U;
        } else if ((2U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            __Vdly__rv32e__DOT__mem_ready = 0U;
            vlSelf->rv32e__DOT__mem_valid = 0U;
            if (VL_UNLIKELY(((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid) 
                             & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready)))) {
                VL_WRITEF("FUCKING ERROR IS HERE\n");
                __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__data_out = ((2U 
                                                 & (IData)(vlSelf->rv32e__DOT__wb_MemLen))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->rv32e__DOT__wb_MemLen))
                                                  ? 
                                                 (0xffffU 
                                                  & vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata)
                                                  : vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->rv32e__DOT__wb_MemLen))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata))
                                                  : 
                                                 (0xffU 
                                                  & vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata)));
                vlSelf->rv32e__DOT__rd_mem = vlSelf->rv32e__DOT__rd_ex;
                vlSelf->rv32e__DOT__RegWrite_mem = vlSelf->rv32e__DOT__RegWrite_ex;
            }
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready = 1U;
        } else if ((3U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            __Vdly__rv32e__DOT__mem_ready = 0U;
            vlSelf->rv32e__DOT__mem_valid = 0U;
            if (VL_UNLIKELY(((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready) 
                             & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid)))) {
                VL_WRITEF("\033[31m[MEM]: WRITE\347\212\266\346\200\201\346\217\241\346\211\213\346\210\220\345\212\237\033[0m\n");
                vlSelf->rv32e__DOT__rd_mem = vlSelf->rv32e__DOT__rd_ex;
                vlSelf->rv32e__DOT__RegWrite_mem = vlSelf->rv32e__DOT__RegWrite_ex;
            }
        } else if ((4U == vlSelf->rv32e__DOT__mem_stage__DOT__state)) {
            __Vdly__rv32e__DOT__mem_ready = 0U;
            vlSelf->rv32e__DOT__mem_valid = 1U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready = 0U;
            __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid = 0U;
        } else {
            __Vdly__rv32e__DOT__mem_ready = 0U;
            vlSelf->rv32e__DOT__mem_valid = 0U;
        }
    }
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_rdata;
    vlSelf->rv32e__DOT__mem_ready = __Vdly__rv32e__DOT__mem_ready;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_arready;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_arvalid;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_wready;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_wvalid;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_rvalid;
    vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready 
        = __Vdly__rv32e__DOT__mem_stage__DOT__sram_rready;
    VL_WRITEF("\033[36m[MEM]:state = %11d | mem_ready=%b| mem_valid=%b\033[0m\n\033[36m[MEM]:sram_rready=%b | sram_rvalid=%b | sram_rdata=%x\033[0m\n \n\033[1m[mem_sram]: state=%11d | araddr=%x | araddr_reg=%x | arvalid=%b | arready=%b | rready=%b | rvalid=%b | rdata=%x\033[0m\n\033[1m[mem_sram]: waddr=%x | wdata=%x | wmask=%b | wvalid=%b | wready=%b\033[0m\n",
              32,vlSelf->rv32e__DOT__mem_stage__DOT__state,
              1,(IData)(vlSelf->rv32e__DOT__mem_ready),
              1,vlSelf->rv32e__DOT__mem_valid,1,(IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready),
              1,vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid,
              32,vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata,
              32,vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__sram_state,
              32,vlSelf->rv32e__DOT__mem_stage__DOT__sram_araddr,
              32,vlSelf->rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__araddr_reg,
              1,(IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid),
              1,vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready,
              1,(IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready),
              1,vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid,
              32,vlSelf->rv32e__DOT__mem_stage__DOT__sram_rdata,
              32,vlSelf->rv32e__DOT__mem_stage__DOT__sram_waddr,
              32,vlSelf->rv32e__DOT__mem_stage__DOT__sram_wdata,
              4,(IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wmask),
              1,vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid,
              1,(IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready));
    vlSelf->rv32e__DOT__mem_stage__DOT__next_state 
        = ((0U == vlSelf->rv32e__DOT__mem_stage__DOT__state)
            ? (((IData)(vlSelf->rv32e__DOT__ex_valid) 
                & (IData)(vlSelf->rv32e__DOT__mem_ready))
                ? ((IData)(vlSelf->rv32e__DOT__wb_MemRead)
                    ? 1U : ((IData)(vlSelf->rv32e__DOT__wb_MemWrite)
                             ? 3U : 4U)) : 0U) : ((1U 
                                                   == vlSelf->rv32e__DOT__mem_stage__DOT__state)
                                                   ? 
                                                  (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arready) 
                                                    & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_arvalid))
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((2U 
                                                    == vlSelf->rv32e__DOT__mem_stage__DOT__state)
                                                    ? 
                                                   (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rvalid) 
                                                     & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_rready))
                                                     ? 4U
                                                     : 2U)
                                                    : 
                                                   ((3U 
                                                     == vlSelf->rv32e__DOT__mem_stage__DOT__state)
                                                     ? 
                                                    (((IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wready) 
                                                      & (IData)(vlSelf->rv32e__DOT__mem_stage__DOT__sram_wvalid))
                                                      ? 4U
                                                      : 3U)
                                                     : 
                                                    ((4U 
                                                      == vlSelf->rv32e__DOT__mem_stage__DOT__state)
                                                      ? 
                                                     ((IData)(vlSelf->rv32e__DOT__wb_ready)
                                                       ? 0U
                                                       : 4U)
                                                      : 0U)))));
}

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__1(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__read_pending 
        = vlSelf->rv32e__DOT__if_stage__DOT__ren;
    vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__raddr_reg 
        = vlSelf->rv32e__DOT__pc;
    if (VL_UNLIKELY(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__read_pending)) {
        VL_WRITEF("\nRead from IFU SRAM\n");
    }
    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__raddr_reg, 4U, vlSelf->__Vfunc_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read__0__Vfuncout);
    vlSelf->rv32e__DOT__if_stage__DOT__get_instr = 
        ((IData)(vlSelf->rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__read_pending)
          ? vlSelf->__Vfunc_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read__0__Vfuncout
          : 0U);
}

VL_INLINE_OPT void Vrv32e___024root___nba_comb__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_comb__TOP__0\n"); );
    // Body
    VL_WRITEF("\033[34m[IF]: state = %11d | PC=0x%08x | get_instr=0x%08x | instr=0x%08x | if_ready=%b | if_valid=%b\033[0m\n",
              32,vlSelf->rv32e__DOT__if_stage__DOT__state,
              32,vlSelf->rv32e__DOT__pc,32,vlSelf->rv32e__DOT__if_stage__DOT__get_instr,
              32,vlSelf->rv32e__DOT__instr,1,(IData)(vlSelf->rv32e__DOT__if_ready),
              1,vlSelf->rv32e__DOT__if_valid);
}

void Vrv32e___024root___eval_nba(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrv32e___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vrv32e___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vrv32e___024root___nba_comb__TOP__0(vlSelf);
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
                    VL_FATAL_MT("/home/furina/ysyx-workbench/npc/vsrc/rv32e.v", 2, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/furina/ysyx-workbench/npc/vsrc/rv32e.v", 2, "", "NBA region did not converge.");
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
