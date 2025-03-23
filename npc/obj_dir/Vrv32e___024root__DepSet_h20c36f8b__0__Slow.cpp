// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32e.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32e___024root.h"

VL_ATTR_COLD void Vrv32e___024root___eval_static(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vrv32e___024root___eval_initial(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
}

VL_ATTR_COLD void Vrv32e___024root___eval_final(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vrv32e___024root___eval_triggers__stl(Vrv32e___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__stl(Vrv32e___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___eval_stl(Vrv32e___024root* vlSelf);

VL_ATTR_COLD void Vrv32e___024root___eval_settle(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vrv32e___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vrv32e___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/furina/ysyx-workbench/npc/vsrc/rv32e.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vrv32e___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__stl(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__if_stage__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);

VL_ATTR_COLD void Vrv32e___024root___stl_sequent__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___stl_sequent__TOP__0\n"); );
    // Body
    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__if_stage__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__pc, 4U, vlSelf->__Vfunc_rv32e__DOT__if_stage__DOT__pmem_read__0__Vfuncout);
    vlSelf->rv32e__DOT__instr = vlSelf->__Vfunc_rv32e__DOT__if_stage__DOT__pmem_read__0__Vfuncout;
    VL_WRITEF("PC=0x%08x | instr=0x%08x\n",32,vlSelf->rv32e__DOT__pc,
              32,vlSelf->rv32e__DOT__instr);
    vlSelf->rv32e__DOT__rs1_val = ((0U == (0x1fU & 
                                           (vlSelf->rv32e__DOT__instr 
                                            >> 0xfU)))
                                    ? 0U : vlSelf->rv32e__DOT__regfile__DOT__regs
                                   [(0x1fU & (vlSelf->rv32e__DOT__instr 
                                              >> 0xfU))]);
    vlSelf->rv32e__DOT__rs2_val = ((0U == (0x1fU & 
                                           (vlSelf->rv32e__DOT__instr 
                                            >> 0x14U)))
                                    ? 0U : vlSelf->rv32e__DOT__regfile__DOT__regs
                                   [(0x1fU & (vlSelf->rv32e__DOT__instr 
                                              >> 0x14U))]);
    vlSelf->rv32e__DOT__id_stage__DOT__immI = (((- (IData)(
                                                           (vlSelf->rv32e__DOT__instr 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->rv32e__DOT__instr 
                                                  >> 0x14U));
    vlSelf->rv32e__DOT__opcode = (0x7fU & vlSelf->rv32e__DOT__instr);
    vlSelf->rv32e__DOT__func3 = (7U & (vlSelf->rv32e__DOT__instr 
                                       >> 0xcU));
    vlSelf->rv32e__DOT__func7 = (vlSelf->rv32e__DOT__instr 
                                 >> 0x19U);
    vlSelf->rv32e__DOT__imm = 0U;
    vlSelf->rv32e__DOT__RegWrite = 0U;
    vlSelf->rv32e__DOT__MemWrite = 0U;
    vlSelf->rv32e__DOT__MemRead = 0U;
    vlSelf->rv32e__DOT__alu_op = 0U;
    vlSelf->rv32e__DOT__id_stage__DOT__get_opcode = 
        (0x1fU & ((IData)(vlSelf->rv32e__DOT__opcode) 
                  >> 2U));
    if ((0x10U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
        if (VL_LIKELY((8U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
            if ((4U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                    VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__instr);
                } else if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                    VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__instr);
                } else if (VL_UNLIKELY((0x100073U == vlSelf->rv32e__DOT__instr))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(1U, vlSelf->rv32e__DOT__instr);
                    VL_WRITEF("ebreak instruction\n");
                }
            } else if ((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                if (VL_LIKELY((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                    vlSelf->rv32e__DOT__imm = (((- (IData)(
                                                           (vlSelf->rv32e__DOT__instr 
                                                            >> 0x1fU))) 
                                                << 0x14U) 
                                               | ((0xff000U 
                                                   & vlSelf->rv32e__DOT__instr) 
                                                  | ((0x800U 
                                                      & (vlSelf->rv32e__DOT__instr 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->rv32e__DOT__instr 
                                                           >> 0x14U)))));
                    vlSelf->rv32e__DOT__RegWrite = 1U;
                } else {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                    VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__instr);
                }
            } else if ((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                if ((0U == (IData)(vlSelf->rv32e__DOT__func3))) {
                    vlSelf->rv32e__DOT__imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
                    vlSelf->rv32e__DOT__RegWrite = 1U;
                }
            } else {
                vlSelf->rv32e__DOT__imm = (((- (IData)(
                                                       (vlSelf->rv32e__DOT__instr 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0x800U 
                                               & (vlSelf->rv32e__DOT__instr 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->rv32e__DOT__instr 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->rv32e__DOT__instr 
                                                       >> 7U)))));
                vlSelf->rv32e__DOT__alu_op = 1U;
            }
        } else {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
            VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                      32,vlSelf->rv32e__DOT__instr);
        }
    } else if ((8U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
        if ((4U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
            if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                          32,vlSelf->rv32e__DOT__instr);
            } else if ((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
                vlSelf->rv32e__DOT__imm = (0xfffff000U 
                                           & vlSelf->rv32e__DOT__instr);
                vlSelf->rv32e__DOT__RegWrite = 1U;
            } else {
                vlSelf->rv32e__DOT__RegWrite = 1U;
                vlSelf->rv32e__DOT__imm = 0U;
                if ((4U & (IData)(vlSelf->rv32e__DOT__func3))) {
                    if ((2U & (IData)(vlSelf->rv32e__DOT__func3))) {
                        vlSelf->rv32e__DOT__alu_op 
                            = ((1U & (IData)(vlSelf->rv32e__DOT__func3))
                                ? 2U : 3U);
                    } else if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__func3)))) {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                        VL_WRITEF("ID : Unknown R instruction with func3 = %b\n",
                                  3,vlSelf->rv32e__DOT__func3);
                    } else {
                        vlSelf->rv32e__DOT__alu_op = 4U;
                    }
                } else if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__func3)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                    VL_WRITEF("ID : Unknown R instruction with func3 = %b\n",
                              3,vlSelf->rv32e__DOT__func3);
                } else if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__func3)))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                    VL_WRITEF("ID : Unknown R instruction with func3 = %b\n",
                              3,vlSelf->rv32e__DOT__func3);
                } else {
                    vlSelf->rv32e__DOT__alu_op = ((0x20U 
                                                   & (IData)(vlSelf->rv32e__DOT__func7))
                                                   ? 1U
                                                   : 0U);
                }
            }
        } else if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
            VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                      32,vlSelf->rv32e__DOT__instr);
        } else if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
            VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                      32,vlSelf->rv32e__DOT__instr);
        } else if ((2U == (IData)(vlSelf->rv32e__DOT__func3))) {
            vlSelf->rv32e__DOT__imm = (((- (IData)(
                                                   (vlSelf->rv32e__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0xfe0U & (vlSelf->rv32e__DOT__instr 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->rv32e__DOT__instr 
                                            >> 7U))));
            vlSelf->rv32e__DOT__MemWrite = 1U;
        }
    } else if ((4U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
        if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
            VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                      32,vlSelf->rv32e__DOT__instr);
        } else if ((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode))) {
            vlSelf->rv32e__DOT__imm = (0xfffff000U 
                                       & vlSelf->rv32e__DOT__instr);
            vlSelf->rv32e__DOT__RegWrite = 1U;
            vlSelf->rv32e__DOT__alu_op = 0U;
        } else {
            vlSelf->rv32e__DOT__imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
            vlSelf->rv32e__DOT__RegWrite = 1U;
            if ((4U & (IData)(vlSelf->rv32e__DOT__func3))) {
                if (VL_LIKELY((2U & (IData)(vlSelf->rv32e__DOT__func3)))) {
                    vlSelf->rv32e__DOT__alu_op = ((1U 
                                                   & (IData)(vlSelf->rv32e__DOT__func3))
                                                   ? 2U
                                                   : 3U);
                } else {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                    VL_WRITEF("ID : Unknown I instruction with func3 = %b\n",
                              3,vlSelf->rv32e__DOT__func3);
                }
            } else if ((2U & (IData)(vlSelf->rv32e__DOT__func3))) {
                if (VL_LIKELY((1U & (IData)(vlSelf->rv32e__DOT__func3)))) {
                    vlSelf->rv32e__DOT__alu_op = 6U;
                } else {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                    VL_WRITEF("ID : Unknown I instruction with func3 = %b\n",
                              3,vlSelf->rv32e__DOT__func3);
                }
            } else if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__func3)))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
                VL_WRITEF("ID : Unknown I instruction with func3 = %b\n",
                          3,vlSelf->rv32e__DOT__func3);
            } else {
                vlSelf->rv32e__DOT__alu_op = 0U;
            }
        }
    } else if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
        VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                  32,vlSelf->rv32e__DOT__instr);
    } else if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__id_stage__DOT__get_opcode)))) {
        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__instr);
        VL_WRITEF("ID : Unknow instruction with inst = %x\n",
                  32,vlSelf->rv32e__DOT__instr);
    } else if ((2U == (IData)(vlSelf->rv32e__DOT__func3))) {
        vlSelf->rv32e__DOT__imm = vlSelf->rv32e__DOT__id_stage__DOT__immI;
        vlSelf->rv32e__DOT__RegWrite = 1U;
        vlSelf->rv32e__DOT__MemRead = 1U;
    }
    vlSelf->rv32e__DOT__is_jalr = ((0x67U == (IData)(vlSelf->rv32e__DOT__opcode)) 
                                   & (0U == (IData)(vlSelf->rv32e__DOT__func3)));
    vlSelf->rv32e__DOT__jal_target = (vlSelf->rv32e__DOT__imm 
                                      + vlSelf->rv32e__DOT__pc);
    vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr 
        = (vlSelf->rv32e__DOT__imm + vlSelf->rv32e__DOT__rs1_val);
    vlSelf->rv32e__DOT____Vcellinp__alu__b = (((0xcU 
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
                                               : vlSelf->rv32e__DOT__imm);
    vlSelf->rv32e__DOT__alu_less = ((8U & (IData)(vlSelf->rv32e__DOT__alu_op))
                                     ? (vlSelf->rv32e__DOT__rs1_val 
                                        < vlSelf->rv32e__DOT____Vcellinp__alu__b)
                                     : VL_LTS_III(32, vlSelf->rv32e__DOT__rs1_val, vlSelf->rv32e__DOT____Vcellinp__alu__b));
    if (VL_UNLIKELY((8U & (IData)(vlSelf->rv32e__DOT__alu_op)))) {
        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, 0xdeadbeefU);
        vlSelf->rv32e__DOT__alu_result = 0U;
        VL_WRITEF("ALU : Unknown alu_op = %b\n",4,vlSelf->rv32e__DOT__alu_op);
    } else if ((4U & (IData)(vlSelf->rv32e__DOT__alu_op))) {
        if ((2U & (IData)(vlSelf->rv32e__DOT__alu_op))) {
            if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__alu_op)))) {
                vlSelf->rv32e__DOT__alu_result = 0U;
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, 0xdeadbeefU);
                VL_WRITEF("ALU : Unknown alu_op = %b\n",
                          4,vlSelf->rv32e__DOT__alu_op);
            } else {
                vlSelf->rv32e__DOT__alu_result = vlSelf->rv32e__DOT__alu_less;
            }
        } else if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__alu_op)))) {
            vlSelf->rv32e__DOT__alu_result = 0U;
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(2U, 0xdeadbeefU);
            VL_WRITEF("ALU : Unknown alu_op = %b\n",
                      4,vlSelf->rv32e__DOT__alu_op);
        } else {
            vlSelf->rv32e__DOT__alu_result = (vlSelf->rv32e__DOT__rs1_val 
                                              ^ vlSelf->rv32e__DOT____Vcellinp__alu__b);
        }
    } else {
        vlSelf->rv32e__DOT__alu_result = ((2U & (IData)(vlSelf->rv32e__DOT__alu_op))
                                           ? ((1U & (IData)(vlSelf->rv32e__DOT__alu_op))
                                               ? (vlSelf->rv32e__DOT__rs1_val 
                                                  | vlSelf->rv32e__DOT____Vcellinp__alu__b)
                                               : (vlSelf->rv32e__DOT__rs1_val 
                                                  & vlSelf->rv32e__DOT____Vcellinp__alu__b))
                                           : ((1U & (IData)(vlSelf->rv32e__DOT__alu_op))
                                               ? (vlSelf->rv32e__DOT__rs1_val 
                                                  - vlSelf->rv32e__DOT____Vcellinp__alu__b)
                                               : (vlSelf->rv32e__DOT__rs1_val 
                                                  + vlSelf->rv32e__DOT____Vcellinp__alu__b)));
    }
}

VL_ATTR_COLD void Vrv32e___024root___eval_stl(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vrv32e___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__act(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__nba(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrv32e___024root___ctor_var_reset(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->rv32e__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__func3 = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__func7 = VL_RAND_RESET_I(7);
    vlSelf->rv32e__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__MemRead = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__rs1_val = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__rs2_val = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__jal_target = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__data_out = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__alu_less = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT____Vcellinp__alu__b = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__id_stage__DOT__immI = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__id_stage__DOT__get_opcode = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->rv32e__DOT__regfile__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vfunc_rv32e__DOT__if_stage__DOT__pmem_read__0__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
