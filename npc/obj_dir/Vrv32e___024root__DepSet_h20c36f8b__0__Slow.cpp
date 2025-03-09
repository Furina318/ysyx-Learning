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

VL_ATTR_COLD void Vrv32e___024root___eval_initial__TOP(Vrv32e___024root* vlSelf);

VL_ATTR_COLD void Vrv32e___024root___eval_initial(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_initial\n"); );
    // Body
    Vrv32e___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vrv32e___024root___eval_initial__TOP(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[1U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[2U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[3U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[4U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[5U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[6U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[7U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[8U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[9U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0xaU] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0xbU] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0xcU] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0xdU] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0xeU] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0xfU] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x10U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x11U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x12U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x13U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x14U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x15U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x16U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x17U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x18U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x19U] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x1aU] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x1bU] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x1cU] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x1dU] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x1eU] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__regs[0x1fU] = 0U;
    vlSelf->rv32e__DOT__register_files_inst__DOT__i = 0x20U;
    vlSelf->rv32e__DOT__pc_a_src = 0U;
    vlSelf->rv32e__DOT__pc_b_src = 0U;
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
                VL_FATAL_MT("/home/furina/ysyx-workbench/npc/vsrc/rv32e.v", 3, "", "Settle region did not converge.");
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

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_inst__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);

VL_ATTR_COLD void Vrv32e___024root___stl_sequent__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_rv32e__DOT__mem_inst__DOT__pmem_read__1__Vfuncout;
    __Vfunc_rv32e__DOT__mem_inst__DOT__pmem_read__1__Vfuncout = 0;
    // Body
    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_inst__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__pc, 4U, __Vfunc_rv32e__DOT__mem_inst__DOT__pmem_read__1__Vfuncout);
    vlSelf->rv32e__DOT__inst = __Vfunc_rv32e__DOT__mem_inst__DOT__pmem_read__1__Vfuncout;
    vlSelf->rv32e__DOT__rs1_data = ((0U == (0x1fU & 
                                            (vlSelf->rv32e__DOT__inst 
                                             >> 0xfU)))
                                     ? 0U : vlSelf->rv32e__DOT__register_files_inst__DOT__regs
                                    [(0x1fU & (vlSelf->rv32e__DOT__inst 
                                               >> 0xfU))]);
    vlSelf->rv32e__DOT__rs2_data = ((0U == (0x1fU & 
                                            (vlSelf->rv32e__DOT__inst 
                                             >> 0x14U)))
                                     ? 0U : vlSelf->rv32e__DOT__register_files_inst__DOT__regs
                                    [(0x1fU & (vlSelf->rv32e__DOT__inst 
                                               >> 0x14U))]);
    vlSelf->rv32e__DOT__i_type = 0U;
    vlSelf->rv32e__DOT__reg_wr = 0U;
    vlSelf->rv32e__DOT__alu_a_src = 0U;
    vlSelf->rv32e__DOT__alu_b_src = 0U;
    vlSelf->rv32e__DOT__alu_ctr = 0U;
    vlSelf->rv32e__DOT__mem_to_reg = 0U;
    vlSelf->rv32e__DOT__mem_wr = 0U;
    vlSelf->rv32e__DOT__mem_op = 0U;
    vlSelf->rv32e__DOT__branch = 0U;
    if ((0x40U & vlSelf->rv32e__DOT__inst)) {
        if (VL_LIKELY((0x20U & vlSelf->rv32e__DOT__inst))) {
            if ((0x10U & vlSelf->rv32e__DOT__inst)) {
                if (VL_UNLIKELY((8U & vlSelf->rv32e__DOT__inst))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("Unknown instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__inst);
                } else if (VL_UNLIKELY((4U & vlSelf->rv32e__DOT__inst))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("Unknown instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__inst);
                } else if (VL_LIKELY((2U & vlSelf->rv32e__DOT__inst))) {
                    if (VL_LIKELY((1U & vlSelf->rv32e__DOT__inst))) {
                        if (VL_UNLIKELY((0x73U == vlSelf->rv32e__DOT__inst))) {
                            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                            VL_WRITEF("ebreak instruction\n");
                        }
                    } else {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                        VL_WRITEF("Unknown instruction with inst = %x\n",
                                  32,vlSelf->rv32e__DOT__inst);
                    }
                } else {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("Unknown instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__inst);
                }
            } else if ((8U & vlSelf->rv32e__DOT__inst)) {
                if (VL_LIKELY((4U & vlSelf->rv32e__DOT__inst))) {
                    if (VL_LIKELY((2U & vlSelf->rv32e__DOT__inst))) {
                        if (VL_LIKELY((1U & vlSelf->rv32e__DOT__inst))) {
                            vlSelf->rv32e__DOT__i_type = 4U;
                            vlSelf->rv32e__DOT__reg_wr = 1U;
                            vlSelf->rv32e__DOT__alu_a_src = 1U;
                            vlSelf->rv32e__DOT__alu_b_src = 2U;
                            vlSelf->rv32e__DOT__alu_ctr = 0U;
                            vlSelf->rv32e__DOT__branch = 1U;
                        } else {
                            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                            VL_WRITEF("Unknown instruction with inst = %x\n",
                                      32,vlSelf->rv32e__DOT__inst);
                        }
                    } else {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                        VL_WRITEF("Unknown instruction with inst = %x\n",
                                  32,vlSelf->rv32e__DOT__inst);
                    }
                } else {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("Unknown instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__inst);
                }
            } else if ((4U & vlSelf->rv32e__DOT__inst)) {
                if (VL_LIKELY((2U & vlSelf->rv32e__DOT__inst))) {
                    if (VL_LIKELY((1U & vlSelf->rv32e__DOT__inst))) {
                        vlSelf->rv32e__DOT__i_type = 0U;
                        vlSelf->rv32e__DOT__reg_wr = 1U;
                        vlSelf->rv32e__DOT__alu_a_src = 0U;
                        vlSelf->rv32e__DOT__alu_b_src = 1U;
                        vlSelf->rv32e__DOT__alu_ctr = 0U;
                        vlSelf->rv32e__DOT__branch = 2U;
                    } else {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                        VL_WRITEF("Unknown instruction with inst = %x\n",
                                  32,vlSelf->rv32e__DOT__inst);
                    }
                } else {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("Unknown instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__inst);
                }
            } else if (VL_LIKELY((2U & vlSelf->rv32e__DOT__inst))) {
                if (VL_LIKELY((1U & vlSelf->rv32e__DOT__inst))) {
                    vlSelf->rv32e__DOT__i_type = 3U;
                    vlSelf->rv32e__DOT__alu_a_src = 0U;
                    vlSelf->rv32e__DOT__alu_b_src = 0U;
                    vlSelf->rv32e__DOT__alu_ctr = 2U;
                    vlSelf->rv32e__DOT__branch = (7U 
                                                  & (vlSelf->rv32e__DOT__inst 
                                                     >> 0xcU));
                } else {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("Unknown instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__inst);
                }
            } else {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                VL_WRITEF("Unknown instruction with inst = %x\n",
                          32,vlSelf->rv32e__DOT__inst);
            }
        } else {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
            VL_WRITEF("Unknown instruction with inst = %x\n",
                      32,vlSelf->rv32e__DOT__inst);
        }
    } else if ((0x20U & vlSelf->rv32e__DOT__inst)) {
        if ((0x10U & vlSelf->rv32e__DOT__inst)) {
            if (VL_UNLIKELY((8U & vlSelf->rv32e__DOT__inst))) {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                VL_WRITEF("Unknown instruction with inst = %x\n",
                          32,vlSelf->rv32e__DOT__inst);
            } else if ((4U & vlSelf->rv32e__DOT__inst)) {
                if (VL_LIKELY((2U & vlSelf->rv32e__DOT__inst))) {
                    if (VL_LIKELY((1U & vlSelf->rv32e__DOT__inst))) {
                        vlSelf->rv32e__DOT__i_type = 1U;
                        vlSelf->rv32e__DOT__reg_wr = 1U;
                        vlSelf->rv32e__DOT__alu_a_src = 0U;
                        vlSelf->rv32e__DOT__alu_b_src = 1U;
                        vlSelf->rv32e__DOT__alu_ctr = 0U;
                    } else {
                        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                        VL_WRITEF("Unknown instruction with inst = %x\n",
                                  32,vlSelf->rv32e__DOT__inst);
                    }
                } else {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("Unknown instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__inst);
                }
            } else if (VL_LIKELY((2U & vlSelf->rv32e__DOT__inst))) {
                if (VL_LIKELY((1U & vlSelf->rv32e__DOT__inst))) {
                    vlSelf->rv32e__DOT__i_type = 5U;
                    vlSelf->rv32e__DOT__reg_wr = 1U;
                    vlSelf->rv32e__DOT__alu_a_src = 0U;
                    vlSelf->rv32e__DOT__alu_b_src = 0U;
                    vlSelf->rv32e__DOT__alu_ctr = (
                                                   (0x4000U 
                                                    & vlSelf->rv32e__DOT__inst)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->rv32e__DOT__inst)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->rv32e__DOT__inst)
                                                      ? 7U
                                                      : 6U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->rv32e__DOT__inst)
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSelf->rv32e__DOT__inst)
                                                       ? 0xdU
                                                       : 5U)
                                                      : 4U))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->rv32e__DOT__inst)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->rv32e__DOT__inst)
                                                      ? 0xaU
                                                      : 2U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->rv32e__DOT__inst)
                                                      ? 1U
                                                      : 
                                                     ((0x40000000U 
                                                       & vlSelf->rv32e__DOT__inst)
                                                       ? 8U
                                                       : 0U))));
                } else {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("Unknown instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__inst);
                }
            } else {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                VL_WRITEF("Unknown instruction with inst = %x\n",
                          32,vlSelf->rv32e__DOT__inst);
            }
        } else if (VL_UNLIKELY((8U & vlSelf->rv32e__DOT__inst))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
            VL_WRITEF("Unknown instruction with inst = %x\n",
                      32,vlSelf->rv32e__DOT__inst);
        } else if (VL_UNLIKELY((4U & vlSelf->rv32e__DOT__inst))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
            VL_WRITEF("Unknown instruction with inst = %x\n",
                      32,vlSelf->rv32e__DOT__inst);
        } else if (VL_LIKELY((2U & vlSelf->rv32e__DOT__inst))) {
            if (VL_LIKELY((1U & vlSelf->rv32e__DOT__inst))) {
                vlSelf->rv32e__DOT__i_type = 2U;
                vlSelf->rv32e__DOT__alu_a_src = 0U;
                vlSelf->rv32e__DOT__alu_b_src = 1U;
                vlSelf->rv32e__DOT__alu_ctr = 0U;
                vlSelf->rv32e__DOT__mem_wr = 1U;
                if ((0U == (7U & (vlSelf->rv32e__DOT__inst 
                                  >> 0xcU)))) {
                    vlSelf->rv32e__DOT__mem_op = 0U;
                } else if ((1U == (7U & (vlSelf->rv32e__DOT__inst 
                                         >> 0xcU)))) {
                    vlSelf->rv32e__DOT__mem_op = 1U;
                } else if (VL_LIKELY((2U == (7U & (vlSelf->rv32e__DOT__inst 
                                                   >> 0xcU))))) {
                    vlSelf->rv32e__DOT__mem_op = 2U;
                } else {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("Unknown store instruction with func3 = %b\n",
                              3,(7U & (vlSelf->rv32e__DOT__inst 
                                       >> 0xcU)));
                }
            } else {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                VL_WRITEF("Unknown instruction with inst = %x\n",
                          32,vlSelf->rv32e__DOT__inst);
            }
        } else {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
            VL_WRITEF("Unknown instruction with inst = %x\n",
                      32,vlSelf->rv32e__DOT__inst);
        }
    } else if ((0x10U & vlSelf->rv32e__DOT__inst)) {
        if (VL_UNLIKELY((8U & vlSelf->rv32e__DOT__inst))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
            VL_WRITEF("Unknown instruction with inst = %x\n",
                      32,vlSelf->rv32e__DOT__inst);
        } else if ((4U & vlSelf->rv32e__DOT__inst)) {
            if (VL_LIKELY((2U & vlSelf->rv32e__DOT__inst))) {
                if (VL_LIKELY((1U & vlSelf->rv32e__DOT__inst))) {
                    vlSelf->rv32e__DOT__i_type = 1U;
                    vlSelf->rv32e__DOT__reg_wr = 1U;
                    vlSelf->rv32e__DOT__alu_a_src = 1U;
                    vlSelf->rv32e__DOT__alu_b_src = 1U;
                    vlSelf->rv32e__DOT__alu_ctr = 0U;
                } else {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("Unknown instruction with inst = %x\n",
                              32,vlSelf->rv32e__DOT__inst);
                }
            } else {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                VL_WRITEF("Unknown instruction with inst = %x\n",
                          32,vlSelf->rv32e__DOT__inst);
            }
        } else if (VL_LIKELY((2U & vlSelf->rv32e__DOT__inst))) {
            if (VL_LIKELY((1U & vlSelf->rv32e__DOT__inst))) {
                vlSelf->rv32e__DOT__i_type = 0U;
                vlSelf->rv32e__DOT__reg_wr = 1U;
                vlSelf->rv32e__DOT__alu_a_src = 0U;
                vlSelf->rv32e__DOT__alu_b_src = 1U;
                vlSelf->rv32e__DOT__alu_ctr = ((0x4000U 
                                                & vlSelf->rv32e__DOT__inst)
                                                ? (
                                                   (0x2000U 
                                                    & vlSelf->rv32e__DOT__inst)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->rv32e__DOT__inst)
                                                     ? 7U
                                                     : 6U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->rv32e__DOT__inst)
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSelf->rv32e__DOT__inst)
                                                      ? 0xdU
                                                      : 5U)
                                                     : 4U))
                                                : (
                                                   (0x2000U 
                                                    & vlSelf->rv32e__DOT__inst)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->rv32e__DOT__inst)
                                                     ? 0xaU
                                                     : 2U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->rv32e__DOT__inst)
                                                     ? 1U
                                                     : 0U)));
            } else {
                Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                VL_WRITEF("Unknown instruction with inst = %x\n",
                          32,vlSelf->rv32e__DOT__inst);
            }
        } else {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
            VL_WRITEF("Unknown instruction with inst = %x\n",
                      32,vlSelf->rv32e__DOT__inst);
        }
    } else if (VL_UNLIKELY((8U & vlSelf->rv32e__DOT__inst))) {
        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
        VL_WRITEF("Unknown instruction with inst = %x\n",
                  32,vlSelf->rv32e__DOT__inst);
    } else if (VL_UNLIKELY((4U & vlSelf->rv32e__DOT__inst))) {
        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
        VL_WRITEF("Unknown instruction with inst = %x\n",
                  32,vlSelf->rv32e__DOT__inst);
    } else if (VL_LIKELY((2U & vlSelf->rv32e__DOT__inst))) {
        if (VL_LIKELY((1U & vlSelf->rv32e__DOT__inst))) {
            vlSelf->rv32e__DOT__i_type = 0U;
            vlSelf->rv32e__DOT__reg_wr = 1U;
            vlSelf->rv32e__DOT__alu_a_src = 0U;
            vlSelf->rv32e__DOT__alu_b_src = 1U;
            vlSelf->rv32e__DOT__alu_ctr = 0U;
            vlSelf->rv32e__DOT__mem_to_reg = 1U;
            if ((0x4000U & vlSelf->rv32e__DOT__inst)) {
                if (VL_UNLIKELY((0x2000U & vlSelf->rv32e__DOT__inst))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("Unknown load instruction with func3 = %b\n",
                              3,(7U & (vlSelf->rv32e__DOT__inst 
                                       >> 0xcU)));
                } else {
                    vlSelf->rv32e__DOT__mem_op = ((0x1000U 
                                                   & vlSelf->rv32e__DOT__inst)
                                                   ? 5U
                                                   : 4U);
                }
            } else if ((0x2000U & vlSelf->rv32e__DOT__inst)) {
                if (VL_UNLIKELY((0x1000U & vlSelf->rv32e__DOT__inst))) {
                    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
                    VL_WRITEF("Unknown load instruction with func3 = %b\n",
                              3,(7U & (vlSelf->rv32e__DOT__inst 
                                       >> 0xcU)));
                } else {
                    vlSelf->rv32e__DOT__mem_op = 2U;
                }
            } else {
                vlSelf->rv32e__DOT__mem_op = ((0x1000U 
                                               & vlSelf->rv32e__DOT__inst)
                                               ? 1U
                                               : 0U);
            }
        } else {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
            VL_WRITEF("Unknown instruction with inst = %x\n",
                      32,vlSelf->rv32e__DOT__inst);
        }
    } else {
        Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, vlSelf->rv32e__DOT__inst);
        VL_WRITEF("Unknown instruction with inst = %x\n",
                  32,vlSelf->rv32e__DOT__inst);
    }
    vlSelf->rv32e__DOT__alu_inst__DOT__A = ((IData)(vlSelf->rv32e__DOT__alu_a_src)
                                             ? vlSelf->rv32e__DOT__pc
                                             : vlSelf->rv32e__DOT__rs1_data);
    if ((4U & (IData)(vlSelf->rv32e__DOT__i_type))) {
        if (VL_UNLIKELY((2U & (IData)(vlSelf->rv32e__DOT__i_type)))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, 0xdeadbeafU);
            vlSelf->rv32e__DOT__imm = 0U;
            VL_WRITEF("imm_gen: unknown i_type %1#\n",
                      3,vlSelf->rv32e__DOT__i_type);
        } else {
            vlSelf->rv32e__DOT__imm = ((1U & (IData)(vlSelf->rv32e__DOT__i_type))
                                        ? 0U : (((- (IData)(
                                                            (vlSelf->rv32e__DOT__inst 
                                                             >> 0x1fU))) 
                                                 << 0x14U) 
                                                | ((0xff000U 
                                                    & vlSelf->rv32e__DOT__inst) 
                                                   | ((0x800U 
                                                       & (vlSelf->rv32e__DOT__inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->rv32e__DOT__inst 
                                                            >> 0x14U))))));
        }
    } else {
        vlSelf->rv32e__DOT__imm = ((2U & (IData)(vlSelf->rv32e__DOT__i_type))
                                    ? ((1U & (IData)(vlSelf->rv32e__DOT__i_type))
                                        ? (((- (IData)(
                                                       (vlSelf->rv32e__DOT__inst 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0x800U 
                                               & (vlSelf->rv32e__DOT__inst 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->rv32e__DOT__inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->rv32e__DOT__inst 
                                                       >> 7U)))))
                                        : (((- (IData)(
                                                       (vlSelf->rv32e__DOT__inst 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & (vlSelf->rv32e__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelf->rv32e__DOT__inst 
                                                    >> 7U)))))
                                    : ((1U & (IData)(vlSelf->rv32e__DOT__i_type))
                                        ? (0xfffff000U 
                                           & vlSelf->rv32e__DOT__inst)
                                        : (((- (IData)(
                                                       (vlSelf->rv32e__DOT__inst 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelf->rv32e__DOT__inst 
                                              >> 0x14U))));
    }
    vlSelf->rv32e__DOT__alu_inst__DOT__B = ((0U == (IData)(vlSelf->rv32e__DOT__alu_b_src))
                                             ? vlSelf->rv32e__DOT__rs2_data
                                             : ((1U 
                                                 == (IData)(vlSelf->rv32e__DOT__alu_b_src))
                                                 ? vlSelf->rv32e__DOT__imm
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->rv32e__DOT__alu_b_src))
                                                  ? 4U
                                                  : 0U)));
    vlSelf->rv32e__DOT__alu_inst__DOT__shift_out = 
        ((1U == (7U & (IData)(vlSelf->rv32e__DOT__alu_ctr)))
          ? (vlSelf->rv32e__DOT__alu_inst__DOT__A << 
             (0x1fU & vlSelf->rv32e__DOT__alu_inst__DOT__B))
          : ((5U == (7U & (IData)(vlSelf->rv32e__DOT__alu_ctr)))
              ? ((8U & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                  ? (vlSelf->rv32e__DOT__alu_inst__DOT__A 
                     >> (0x1fU & vlSelf->rv32e__DOT__alu_inst__DOT__B))
                  : (vlSelf->rv32e__DOT__alu_inst__DOT__A 
                     >> (0x1fU & vlSelf->rv32e__DOT__alu_inst__DOT__B)))
              : 0U));
    vlSelf->rv32e__DOT__less = ((8U & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                 ? (vlSelf->rv32e__DOT__alu_inst__DOT__A 
                                    < vlSelf->rv32e__DOT__alu_inst__DOT__B)
                                 : VL_LTS_III(32, vlSelf->rv32e__DOT__alu_inst__DOT__A, vlSelf->rv32e__DOT__alu_inst__DOT__B));
    vlSelf->rv32e__DOT__alu_result = ((4U & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                       ? ((2U & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                           ? ((1U & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                               ? (vlSelf->rv32e__DOT__alu_inst__DOT__A 
                                                  & vlSelf->rv32e__DOT__alu_inst__DOT__B)
                                               : (vlSelf->rv32e__DOT__alu_inst__DOT__A 
                                                  | vlSelf->rv32e__DOT__alu_inst__DOT__B))
                                           : ((1U & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                               ? vlSelf->rv32e__DOT__alu_inst__DOT__shift_out
                                               : (vlSelf->rv32e__DOT__alu_inst__DOT__A 
                                                  ^ vlSelf->rv32e__DOT__alu_inst__DOT__B)))
                                       : ((2U & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                           ? ((1U & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                               ? vlSelf->rv32e__DOT__alu_inst__DOT__B
                                               : (IData)(vlSelf->rv32e__DOT__less))
                                           : ((1U & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                               ? vlSelf->rv32e__DOT__alu_inst__DOT__shift_out
                                               : ((8U 
                                                   & (IData)(vlSelf->rv32e__DOT__alu_ctr))
                                                   ? 
                                                  (vlSelf->rv32e__DOT__alu_inst__DOT__A 
                                                   - vlSelf->rv32e__DOT__alu_inst__DOT__B)
                                                   : 
                                                  (vlSelf->rv32e__DOT__alu_inst__DOT__A 
                                                   + vlSelf->rv32e__DOT__alu_inst__DOT__B)))));
    vlSelf->rv32e__DOT__zero = (0U == vlSelf->rv32e__DOT__alu_result);
    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_inst__DOT__pmem_read_TOP(vlSelf->rv32e__DOT__alu_result, 4U, vlSelf->__Vfunc_rv32e__DOT__mem_inst__DOT__pmem_read__2__Vfuncout);
    vlSelf->rv32e__DOT__mem_inst__DOT__read_data = vlSelf->__Vfunc_rv32e__DOT__mem_inst__DOT__pmem_read__2__Vfuncout;
    if ((4U & (IData)(vlSelf->rv32e__DOT__branch))) {
        if ((2U & (IData)(vlSelf->rv32e__DOT__branch))) {
            if ((1U & (IData)(vlSelf->rv32e__DOT__branch))) {
                if (vlSelf->rv32e__DOT__less) {
                    if (vlSelf->rv32e__DOT__less) {
                        vlSelf->rv32e__DOT__pc_a_src = 0U;
                        vlSelf->rv32e__DOT__pc_b_src = 0U;
                    }
                } else {
                    vlSelf->rv32e__DOT__pc_a_src = 1U;
                    vlSelf->rv32e__DOT__pc_b_src = 0U;
                }
            } else if (vlSelf->rv32e__DOT__less) {
                if (vlSelf->rv32e__DOT__less) {
                    vlSelf->rv32e__DOT__pc_a_src = 1U;
                    vlSelf->rv32e__DOT__pc_b_src = 0U;
                }
            } else {
                vlSelf->rv32e__DOT__pc_a_src = 0U;
                vlSelf->rv32e__DOT__pc_b_src = 0U;
            }
        } else if ((1U & (IData)(vlSelf->rv32e__DOT__branch))) {
            if (vlSelf->rv32e__DOT__zero) {
                if (vlSelf->rv32e__DOT__zero) {
                    vlSelf->rv32e__DOT__pc_a_src = 0U;
                    vlSelf->rv32e__DOT__pc_b_src = 0U;
                }
            } else {
                vlSelf->rv32e__DOT__pc_a_src = 1U;
                vlSelf->rv32e__DOT__pc_b_src = 0U;
            }
        } else if (vlSelf->rv32e__DOT__zero) {
            if (vlSelf->rv32e__DOT__zero) {
                vlSelf->rv32e__DOT__pc_a_src = 1U;
                vlSelf->rv32e__DOT__pc_b_src = 0U;
            }
        } else {
            vlSelf->rv32e__DOT__pc_a_src = 0U;
            vlSelf->rv32e__DOT__pc_b_src = 0U;
        }
    } else if ((2U & (IData)(vlSelf->rv32e__DOT__branch))) {
        if (VL_UNLIKELY((1U & (IData)(vlSelf->rv32e__DOT__branch)))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__imm_gen_inst__DOT__ebreak_TOP(2U, 0xdeafbeafU);
            VL_WRITEF("Something wrong in Branch_Cond\n");
        } else {
            vlSelf->rv32e__DOT__pc_a_src = 1U;
            vlSelf->rv32e__DOT__pc_b_src = 1U;
        }
    } else if ((1U & (IData)(vlSelf->rv32e__DOT__branch))) {
        vlSelf->rv32e__DOT__pc_a_src = 1U;
        vlSelf->rv32e__DOT__pc_b_src = 0U;
    } else {
        vlSelf->rv32e__DOT__pc_a_src = 0U;
        vlSelf->rv32e__DOT__pc_b_src = 0U;
    }
}

VL_ATTR_COLD void Vrv32e___024root___eval_stl(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vrv32e___024root___stl_sequent__TOP__0(vlSelf);
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrv32e___024root___ctor_var_reset(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_data_out = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__reg_write_data = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__less = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__i_type = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__reg_wr = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__alu_a_src = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__alu_b_src = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__alu_ctr = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_wr = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_op = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__branch = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__pc_a_src = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__pc_b_src = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__pc_inst__DOT__PCa = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__pc_inst__DOT__PCb = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->rv32e__DOT__register_files_inst__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rv32e__DOT__register_files_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__alu_inst__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__alu_inst__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__alu_inst__DOT__shift_out = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_inst__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_inst__DOT__temp_data = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__mem_inst__DOT__pmem_read__2__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
