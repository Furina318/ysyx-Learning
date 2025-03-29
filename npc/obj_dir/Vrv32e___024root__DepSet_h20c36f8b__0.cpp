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
    // Init
    CData/*4:0*/ __Vdlyvdim0__rv32e__DOT__regfile__DOT__regs__v0;
    __Vdlyvdim0__rv32e__DOT__regfile__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__rv32e__DOT__regfile__DOT__regs__v0;
    __Vdlyvval__rv32e__DOT__regfile__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__rv32e__DOT__regfile__DOT__regs__v0;
    __Vdlyvset__rv32e__DOT__regfile__DOT__regs__v0 = 0;
    // Body
    __Vdlyvset__rv32e__DOT__regfile__DOT__regs__v0 = 0U;
    if (((IData)(vlSelf->rv32e__DOT__RegWrite) & (0U 
                                                  != (IData)(vlSelf->rv32e__DOT__rd)))) {
        __Vdlyvval__rv32e__DOT__regfile__DOT__regs__v0 
            = vlSelf->rv32e__DOT__wb_data;
        __Vdlyvset__rv32e__DOT__regfile__DOT__regs__v0 = 1U;
        __Vdlyvdim0__rv32e__DOT__regfile__DOT__regs__v0 
            = vlSelf->rv32e__DOT__rd;
    }
    if (__Vdlyvset__rv32e__DOT__regfile__DOT__regs__v0) {
        vlSelf->rv32e__DOT__regfile__DOT__regs[__Vdlyvdim0__rv32e__DOT__regfile__DOT__regs__v0] 
            = __Vdlyvval__rv32e__DOT__regfile__DOT__regs__v0;
    }
}

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__if_stage__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ len);

VL_INLINE_OPT void Vrv32e___024root___nba_sequent__TOP__1(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_rv32e__DOT__if_stage__DOT__pmem_read__0__Vfuncout;
    __Vfunc_rv32e__DOT__if_stage__DOT__pmem_read__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rv32e__DOT__mem_stage__DOT__pmem_read__14__Vfuncout;
    __Vfunc_rv32e__DOT__mem_stage__DOT__pmem_read__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rv32e__DOT__mem_stage__DOT__pmem_read__15__Vfuncout;
    __Vfunc_rv32e__DOT__mem_stage__DOT__pmem_read__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rv32e__DOT__mem_stage__DOT__pmem_read__16__Vfuncout;
    __Vfunc_rv32e__DOT__mem_stage__DOT__pmem_read__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rv32e__DOT__mem_stage__DOT__pmem_read__17__Vfuncout;
    __Vfunc_rv32e__DOT__mem_stage__DOT__pmem_read__17__Vfuncout = 0;
    // Body
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
    } else if ((1U == vlSelf->rv32e__DOT__id_stage__DOT__state)) {
        vlSelf->rv32e__DOT__opcode = (0x7fU & vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
        vlSelf->rv32e__DOT__rs1 = (0x1fU & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                            >> 0xfU));
        vlSelf->rv32e__DOT__rs2 = (0x1fU & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
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
                        VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                                  32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                    } else if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                        VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                                  32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                    } else if (VL_UNLIKELY((0x100073U 
                                            == vlSelf->rv32e__DOT__id_stage__DOT__instr_reg))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(1U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                        VL_WRITEF("ebreak instruction\n");
                    }
                } else if ((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                    if (VL_LIKELY((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                        vlSelf->rv32e__DOT__imm = (
                                                   ((- (IData)(
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
                        vlSelf->rv32e__DOT__RegWrite = 1U;
                    } else {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                        VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                                  32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                    }
                } else if ((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                    if ((0U == (IData)(vlSelf->rv32e__DOT__func3))) {
                        vlSelf->rv32e__DOT__imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                        vlSelf->rv32e__DOT__RegWrite = 1U;
                    }
                } else {
                    vlSelf->rv32e__DOT__imm = (((- (IData)(
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
                    if ((4U & (IData)(vlSelf->rv32e__DOT__func3))) {
                        vlSelf->rv32e__DOT__alu_op 
                            = ((2U & (IData)(vlSelf->rv32e__DOT__func3))
                                ? 6U : 7U);
                    } else if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__func3)))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                        VL_WRITEF("ID : Unknown B instruction with func3 = %b\n",
                                  3,vlSelf->rv32e__DOT__func3);
                    } else {
                        vlSelf->rv32e__DOT__alu_op = 1U;
                    }
                }
            } else {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                          32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
            }
        } else if ((8U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
            if ((4U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                    VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                } else if ((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                    vlSelf->rv32e__DOT__imm = (0xfffff000U 
                                               & vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
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
                            } else if ((0U == (IData)(vlSelf->rv32e__DOT__func7))) {
                                vlSelf->rv32e__DOT__alu_op = 9U;
                            }
                        } else {
                            vlSelf->rv32e__DOT__alu_op = 4U;
                        }
                    } else if ((2U & (IData)(vlSelf->rv32e__DOT__func3))) {
                        if ((1U & (IData)(vlSelf->rv32e__DOT__func3))) {
                            if ((0U == (IData)(vlSelf->rv32e__DOT__func7))) {
                                vlSelf->rv32e__DOT__alu_op = 6U;
                            } else if ((0U == (IData)(vlSelf->rv32e__DOT__func7))) {
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
                VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                          32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
            } else if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                          32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
            } else {
                vlSelf->rv32e__DOT__imm = (((- (IData)(
                                                       (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                    >> 7U))));
                vlSelf->rv32e__DOT__MemWrite = 1U;
                if ((2U == (IData)(vlSelf->rv32e__DOT__func3))) {
                    vlSelf->rv32e__DOT__MemLen = 2U;
                } else if ((1U == (IData)(vlSelf->rv32e__DOT__func3))) {
                    vlSelf->rv32e__DOT__MemLen = 1U;
                } else if (VL_LIKELY((0U == (IData)(vlSelf->rv32e__DOT__func3)))) {
                    vlSelf->rv32e__DOT__MemLen = 0U;
                } else {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                    VL_WRITEF("ID : Uknown S instruction with func3 = %b\n",
                              3,vlSelf->rv32e__DOT__func3);
                }
            }
        } else if ((4U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
            if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
                VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                          32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
            } else if ((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                vlSelf->rv32e__DOT__imm = (0xfffff000U 
                                           & vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
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
                    vlSelf->rv32e__DOT__alu_op = ((1U 
                                                   & (IData)(vlSelf->rv32e__DOT__func3))
                                                   ? 6U
                                                   : 7U);
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
            VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                      32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
        } else if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
            VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                      32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg);
        } else if ((2U == (IData)(vlSelf->rv32e__DOT__func3))) {
            vlSelf->rv32e__DOT__imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
            vlSelf->rv32e__DOT__RegWrite = 1U;
            vlSelf->rv32e__DOT__MemRead = 1U;
            vlSelf->rv32e__DOT__alu_op = 0U;
            vlSelf->rv32e__DOT__MemLen = 2U;
        } else if ((4U == (IData)(vlSelf->rv32e__DOT__func3))) {
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
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__id_stage__DOT__instr_reg = 0U;
        vlSelf->rv32e__DOT__id_ready = 1U;
        vlSelf->rv32e__DOT__id_stage__DOT__state = 0U;
        vlSelf->rv32e__DOT__id_valid = 0U;
    } else {
        if (((IData)(vlSelf->rv32e__DOT__if_valid) 
             & (IData)(vlSelf->rv32e__DOT__id_ready))) {
            vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                = vlSelf->rv32e__DOT__instr;
        }
        vlSelf->rv32e__DOT__id_stage__DOT__state = vlSelf->rv32e__DOT__id_stage__DOT__next_state;
        if ((((2U == vlSelf->rv32e__DOT__id_stage__DOT__state) 
              & (IData)(vlSelf->rv32e__DOT__ex_ready)) 
             & (IData)(vlSelf->rv32e__DOT__id_valid))) {
            vlSelf->rv32e__DOT__id_valid = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__mem_stage__DOT__state = 0U;
        vlSelf->rv32e__DOT__mem_ready = 1U;
        vlSelf->rv32e__DOT__mem_valid = 0U;
        vlSelf->rv32e__DOT__data_out = 0U;
    } else {
        vlSelf->rv32e__DOT__mem_stage__DOT__state = vlSelf->rv32e__DOT__mem_stage__DOT__next_state;
        if (((IData)(vlSelf->rv32e__DOT__ex_valid) 
             & (IData)(vlSelf->rv32e__DOT__wb_ready))) {
            if (vlSelf->rv32e__DOT__MemRead) {
                if ((2U & (IData)(vlSelf->rv32e__DOT__MemLen))) {
                    if ((1U & (IData)(vlSelf->rv32e__DOT__MemLen))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__if_stage__DOT__pmem_read_TOP(vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr, 2U, __Vfunc_rv32e__DOT__mem_stage__DOT__pmem_read__14__Vfuncout);
                        vlSelf->rv32e__DOT__mem_stage__DOT__read_data 
                            = __Vfunc_rv32e__DOT__mem_stage__DOT__pmem_read__14__Vfuncout;
                        vlSelf->rv32e__DOT__data_out 
                            = (0xffffU & vlSelf->rv32e__DOT__mem_stage__DOT__read_data);
                    } else {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__if_stage__DOT__pmem_read_TOP(vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr, 4U, __Vfunc_rv32e__DOT__mem_stage__DOT__pmem_read__15__Vfuncout);
                        vlSelf->rv32e__DOT__data_out 
                            = __Vfunc_rv32e__DOT__mem_stage__DOT__pmem_read__15__Vfuncout;
                    }
                } else if ((1U & (IData)(vlSelf->rv32e__DOT__MemLen))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__if_stage__DOT__pmem_read_TOP(vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr, 2U, __Vfunc_rv32e__DOT__mem_stage__DOT__pmem_read__16__Vfuncout);
                    vlSelf->rv32e__DOT__mem_stage__DOT__read_data 
                        = __Vfunc_rv32e__DOT__mem_stage__DOT__pmem_read__16__Vfuncout;
                    vlSelf->rv32e__DOT__data_out = 
                        (((- (IData)((1U & (vlSelf->rv32e__DOT__mem_stage__DOT__read_data 
                                            >> 0xfU)))) 
                          << 0x10U) | (0xffffU & vlSelf->rv32e__DOT__mem_stage__DOT__read_data));
                } else {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__if_stage__DOT__pmem_read_TOP(vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr, 1U, __Vfunc_rv32e__DOT__mem_stage__DOT__pmem_read__17__Vfuncout);
                    vlSelf->rv32e__DOT__mem_stage__DOT__read_data 
                        = __Vfunc_rv32e__DOT__mem_stage__DOT__pmem_read__17__Vfuncout;
                    vlSelf->rv32e__DOT__data_out = 
                        (0xffU & vlSelf->rv32e__DOT__mem_stage__DOT__read_data);
                }
                vlSelf->rv32e__DOT__mem_valid = 1U;
            } else if (vlSelf->rv32e__DOT__MemWrite) {
                if ((0U == (IData)(vlSelf->rv32e__DOT__MemLen))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__pmem_write_TOP(vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr, vlSelf->rv32e__DOT__rs2_val, 1U);
                } else if ((1U == (IData)(vlSelf->rv32e__DOT__MemLen))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__pmem_write_TOP(vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr, vlSelf->rv32e__DOT__rs2_val, 2U);
                } else if ((2U == (IData)(vlSelf->rv32e__DOT__MemLen))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__pmem_write_TOP(vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr, vlSelf->rv32e__DOT__rs2_val, 4U);
                } else {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__pmem_write_TOP(vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr, vlSelf->rv32e__DOT__rs2_val, 4U);
                }
            } else {
                vlSelf->rv32e__DOT__data_out = 0U;
            }
        }
        if (((1U == vlSelf->rv32e__DOT__mem_stage__DOT__state) 
             & (IData)(vlSelf->rv32e__DOT__wb_ready))) {
            vlSelf->rv32e__DOT__mem_valid = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__ex_stage__DOT__state = 0U;
        vlSelf->rv32e__DOT__ex_ready = 1U;
        vlSelf->rv32e__DOT__ex_valid = 0U;
        vlSelf->rv32e__DOT__alu_result = 0U;
        vlSelf->rv32e__DOT__alu_zero = 0U;
        vlSelf->rv32e__DOT__alu_less = 0U;
    } else {
        vlSelf->rv32e__DOT__ex_stage__DOT__state = vlSelf->rv32e__DOT__ex_stage__DOT__next_state;
        if ((((1U == vlSelf->rv32e__DOT__ex_stage__DOT__state) 
              & (IData)(vlSelf->rv32e__DOT__id_valid)) 
             & (IData)(vlSelf->rv32e__DOT__ex_ready))) {
            vlSelf->rv32e__DOT__alu_result = ((8U & (IData)(vlSelf->rv32e__DOT__alu_op))
                                               ? ((4U 
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
                                               : ((4U 
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
            vlSelf->rv32e__DOT__alu_zero = (0U == vlSelf->rv32e__DOT__alu_result);
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
            vlSelf->rv32e__DOT__ex_valid = 1U;
        }
        if ((2U == vlSelf->rv32e__DOT__ex_stage__DOT__state)) {
            vlSelf->rv32e__DOT__ex_valid = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__pc = 0x80000000U;
        vlSelf->rv32e__DOT__if_valid = 0U;
        vlSelf->rv32e__DOT__if_ready = 1U;
        vlSelf->rv32e__DOT__instr = 0U;
        vlSelf->rv32e__DOT__if_stage__DOT__state = 0U;
    } else {
        vlSelf->rv32e__DOT__if_stage__DOT__state = vlSelf->rv32e__DOT__if_stage__DOT__next_state;
        if (((0U == vlSelf->rv32e__DOT__if_stage__DOT__state) 
             & (IData)(vlSelf->rv32e__DOT__id_ready))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__if_stage__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__pc, 4U, __Vfunc_rv32e__DOT__if_stage__DOT__pmem_read__0__Vfuncout);
            vlSelf->rv32e__DOT__if_ready = 1U;
            vlSelf->rv32e__DOT__instr = __Vfunc_rv32e__DOT__if_stage__DOT__pmem_read__0__Vfuncout;
            vlSelf->rv32e__DOT__if_valid = 1U;
        }
        if ((((1U == vlSelf->rv32e__DOT__if_stage__DOT__state) 
              & (IData)(vlSelf->rv32e__DOT__if_ready)) 
             & (IData)(vlSelf->rv32e__DOT__wb_valid))) {
            vlSelf->rv32e__DOT__pc = ((IData)(vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src)
                                       ? vlSelf->rv32e__DOT__branch_target
                                       : ((IData)(4U) 
                                          + vlSelf->rv32e__DOT__pc));
            vlSelf->rv32e__DOT__if_valid = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->rv32e__DOT__wb_stage__DOT__state = 0U;
        vlSelf->rv32e__DOT__wb_ready = 1U;
        vlSelf->rv32e__DOT__wb_valid = 0U;
        vlSelf->rv32e__DOT__jal_target = 0U;
        vlSelf->rv32e__DOT__jalr_target = 0U;
        vlSelf->rv32e__DOT__is_jal = 0U;
        vlSelf->rv32e__DOT__is_jalr = 0U;
        vlSelf->rv32e__DOT__take_branch = 0U;
        vlSelf->rv32e__DOT__wb_data = 0U;
    } else {
        vlSelf->rv32e__DOT__wb_stage__DOT__state = vlSelf->rv32e__DOT__wb_stage__DOT__next_state;
        if (((IData)(vlSelf->rv32e__DOT__mem_valid) 
             & (IData)(vlSelf->rv32e__DOT__wb_ready))) {
            vlSelf->rv32e__DOT__jal_target = (vlSelf->rv32e__DOT__pc 
                                              + vlSelf->rv32e__DOT__imm);
            vlSelf->rv32e__DOT__jalr_target = (0xfffffffeU 
                                               & (vlSelf->rv32e__DOT__rs1_val 
                                                  + vlSelf->rv32e__DOT__imm));
            vlSelf->rv32e__DOT__is_jal = (0x6fU == (IData)(vlSelf->rv32e__DOT__opcode));
            vlSelf->rv32e__DOT__is_jalr = ((0x67U == (IData)(vlSelf->rv32e__DOT__opcode)) 
                                           & (0U == (IData)(vlSelf->rv32e__DOT__func3)));
            vlSelf->rv32e__DOT__take_branch = ((0x63U 
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
            vlSelf->rv32e__DOT__wb_data = ((0x37U == (IData)(vlSelf->rv32e__DOT__opcode))
                                            ? vlSelf->rv32e__DOT__imm
                                            : ((0x17U 
                                                == (IData)(vlSelf->rv32e__DOT__opcode))
                                                ? (vlSelf->rv32e__DOT__pc 
                                                   + vlSelf->rv32e__DOT__imm)
                                                : (
                                                   ((0x6fU 
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
            vlSelf->rv32e__DOT__wb_stage__DOT__next_state = 2U;
        }
        if ((((2U == vlSelf->rv32e__DOT__wb_stage__DOT__state) 
              & (IData)(vlSelf->rv32e__DOT__if_ready)) 
             & (IData)(vlSelf->rv32e__DOT__wb_valid))) {
            vlSelf->rv32e__DOT__wb_valid = 0U;
        }
    }
    vlSelf->rv32e__DOT__id_stage__DOT__immI = (((- (IData)(
                                                           (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->rv32e__DOT__id_stage__DOT__instr_reg 
                                                  >> 0x14U));
    vlSelf->rv32e__DOT__mem_ready = (0U == vlSelf->rv32e__DOT__mem_stage__DOT__state);
    vlSelf->rv32e__DOT__id_valid = ((0U != vlSelf->rv32e__DOT__id_stage__DOT__state) 
                                    & ((1U != vlSelf->rv32e__DOT__id_stage__DOT__state) 
                                       & (2U == vlSelf->rv32e__DOT__id_stage__DOT__state)));
    vlSelf->rv32e__DOT__ex_valid = ((0U != vlSelf->rv32e__DOT__ex_stage__DOT__state) 
                                    & ((1U == vlSelf->rv32e__DOT__ex_stage__DOT__state) 
                                       | (2U == vlSelf->rv32e__DOT__ex_stage__DOT__state)));
    vlSelf->rv32e__DOT__ex_ready = (0U == vlSelf->rv32e__DOT__ex_stage__DOT__state);
    vlSelf->rv32e__DOT__id_ready = (0U == vlSelf->rv32e__DOT__id_stage__DOT__state);
    vlSelf->rv32e__DOT__mem_valid = ((0U != vlSelf->rv32e__DOT__mem_stage__DOT__state) 
                                     & (1U == vlSelf->rv32e__DOT__mem_stage__DOT__state));
    vlSelf->rv32e__DOT__if_ready = (0U == vlSelf->rv32e__DOT__if_stage__DOT__state);
    vlSelf->rv32e__DOT__wb_ready = (0U == vlSelf->rv32e__DOT__wb_stage__DOT__state);
    vlSelf->rv32e__DOT__wb_valid = ((0U != vlSelf->rv32e__DOT__wb_stage__DOT__state) 
                                    & ((1U != vlSelf->rv32e__DOT__wb_stage__DOT__state) 
                                       & (2U == vlSelf->rv32e__DOT__wb_stage__DOT__state)));
    vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src 
        = ((IData)(vlSelf->rv32e__DOT__is_jal) | ((IData)(vlSelf->rv32e__DOT__is_jalr) 
                                                  | (IData)(vlSelf->rv32e__DOT__take_branch)));
    vlSelf->rv32e__DOT__ex_stage__DOT__next_state = 
        ((0U == vlSelf->rv32e__DOT__ex_stage__DOT__state)
          ? ((IData)(vlSelf->rv32e__DOT__id_valid) ? 1U
              : 0U) : ((1U == vlSelf->rv32e__DOT__ex_stage__DOT__state)
                        ? ((IData)(vlSelf->rv32e__DOT__mem_ready)
                            ? 0U : 2U) : ((2U == vlSelf->rv32e__DOT__ex_stage__DOT__state)
                                           ? ((IData)(vlSelf->rv32e__DOT__mem_ready)
                                               ? 0U
                                               : 2U)
                                           : 0U)));
    vlSelf->rv32e__DOT__wb_stage__DOT__next_state = 
        ((0U == vlSelf->rv32e__DOT__wb_stage__DOT__state)
          ? ((IData)(vlSelf->rv32e__DOT__mem_valid)
              ? 1U : 0U) : ((1U == vlSelf->rv32e__DOT__wb_stage__DOT__state)
                             ? ((IData)(vlSelf->rv32e__DOT__if_ready)
                                 ? 2U : 1U) : ((2U 
                                                == vlSelf->rv32e__DOT__wb_stage__DOT__state)
                                                ? ((IData)(vlSelf->rv32e__DOT__if_ready)
                                                    ? 0U
                                                    : 2U)
                                                : 0U)));
    vlSelf->rv32e__DOT__mem_stage__DOT__next_state 
        = ((0U == vlSelf->rv32e__DOT__mem_stage__DOT__state)
            ? ((IData)(vlSelf->rv32e__DOT__ex_valid)
                ? 1U : 0U) : ((1U == vlSelf->rv32e__DOT__mem_stage__DOT__state)
                               ? ((IData)(vlSelf->rv32e__DOT__wb_ready)
                                   ? 0U : 1U) : 0U));
    vlSelf->rv32e__DOT__if_stage__DOT__next_state = 
        ((0U == vlSelf->rv32e__DOT__if_stage__DOT__state)
          ? ((IData)(vlSelf->rv32e__DOT__wb_valid) ? 1U
              : 0U) : ((1U == vlSelf->rv32e__DOT__if_stage__DOT__state)
                        ? ((IData)(vlSelf->rv32e__DOT__id_ready)
                            ? 2U : 1U) : ((2U == vlSelf->rv32e__DOT__if_stage__DOT__state)
                                           ? ((IData)(vlSelf->rv32e__DOT__id_ready)
                                               ? 0U
                                               : 2U)
                                           : 0U)));
    vlSelf->rv32e__DOT__if_valid = ((0U != vlSelf->rv32e__DOT__if_stage__DOT__state) 
                                    & ((1U == vlSelf->rv32e__DOT__if_stage__DOT__state) 
                                       | (2U == vlSelf->rv32e__DOT__if_stage__DOT__state)));
    VL_WRITEF("IF: PC=0x%08x | instr=0x%08x | if_valid=%b | id_ready=%b | pc_src=%b | branch_target=0x%08x\n",
              32,vlSelf->rv32e__DOT__pc,32,vlSelf->rv32e__DOT__instr,
              1,(IData)(vlSelf->rv32e__DOT__if_valid),
              1,vlSelf->rv32e__DOT__id_ready,1,(IData)(vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src),
              32,vlSelf->rv32e__DOT__branch_target);
    vlSelf->rv32e__DOT__id_stage__DOT__next_state = 
        ((0U == vlSelf->rv32e__DOT__id_stage__DOT__state)
          ? ((IData)(vlSelf->rv32e__DOT__if_valid) ? 1U
              : 0U) : ((1U == vlSelf->rv32e__DOT__id_stage__DOT__state)
                        ? ((IData)(vlSelf->rv32e__DOT__ex_ready)
                            ? 2U : 1U) : ((2U == vlSelf->rv32e__DOT__id_stage__DOT__state)
                                           ? ((IData)(vlSelf->rv32e__DOT__ex_ready)
                                               ? 0U
                                               : 2U)
                                           : 0U)));
    VL_WRITEF("ID: instr=0x%08x | if_valid=%b | id_ready=%b | id_valid=%b | ex_ready=%b\n",
              32,vlSelf->rv32e__DOT__id_stage__DOT__instr_reg,
              1,(IData)(vlSelf->rv32e__DOT__if_valid),
              1,vlSelf->rv32e__DOT__id_ready,1,(IData)(vlSelf->rv32e__DOT__id_valid),
              1,vlSelf->rv32e__DOT__ex_ready);
}

VL_INLINE_OPT void Vrv32e___024root___nba_comb__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->rv32e__DOT__rs2_val = ((0U == (IData)(vlSelf->rv32e__DOT__rs2))
                                    ? 0U : vlSelf->rv32e__DOT__regfile__DOT__regs
                                   [vlSelf->rv32e__DOT__rs2]);
    vlSelf->rv32e__DOT__rs1_val = ((0U == (IData)(vlSelf->rv32e__DOT__rs1))
                                    ? 0U : vlSelf->rv32e__DOT__regfile__DOT__regs
                                   [vlSelf->rv32e__DOT__rs1]);
    vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr 
        = (vlSelf->rv32e__DOT__imm + vlSelf->rv32e__DOT__rs1_val);
}

void Vrv32e___024root___eval_nba(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vrv32e___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vrv32e___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vrv32e___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
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
