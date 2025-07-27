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
                VL_FATAL_MT("/home/furina/ysyx-workbench/npc/mul-vsrc/rv32e.v", 27, "", "Settle region did not converge.");
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

VL_ATTR_COLD void Vrv32e___024root___stl_sequent__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->rv32e__DOT__id_stage__DOT__immI = (((- (IData)(
                                                           (vlSelf->rv32e__DOT__instr 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->rv32e__DOT__instr 
                                                  >> 0x14U));
    vlSelf->rv32e__DOT__rs2_val = ((0U == (IData)(vlSelf->rv32e__DOT__rs2))
                                    ? 0U : vlSelf->rv32e__DOT__wb_stage__DOT__regs
                                   [vlSelf->rv32e__DOT__rs2]);
    if (VL_UNLIKELY(vlSelf->rv32e__DOT__if_access_fault)) {
        VL_WRITEF("\033[31m[IF]:IF access fault at address: %x\033[0m\n",
                  32,vlSelf->rv32e__DOT__if_fault_addr);
    }
    if (VL_UNLIKELY(vlSelf->rv32e__DOT__load_access_fault)) {
        VL_WRITEF("\033[31m[MEM]:Load access fault at address: %x\033[0m\n",
                  32,vlSelf->rv32e__DOT__mem_fault_addr);
    }
    if (VL_UNLIKELY(vlSelf->rv32e__DOT__store_access_fault)) {
        VL_WRITEF("\033[31m[MEM]:Store access fault at address: %x\033[0m\n",
                  32,vlSelf->rv32e__DOT__mem_fault_addr);
    }
    vlSelf->rv32e__DOT__branch_target = ((IData)(vlSelf->rv32e__DOT__is_jalr)
                                          ? vlSelf->rv32e__DOT__jalr_target
                                          : vlSelf->rv32e__DOT__jal_target);
    vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src 
        = ((IData)(vlSelf->rv32e__DOT__is_jal) | ((IData)(vlSelf->rv32e__DOT__is_jalr) 
                                                  | (IData)(vlSelf->rv32e__DOT__take_branch)));
    vlSelf->rv32e__DOT__rs1_val = ((0U == (IData)(vlSelf->rv32e__DOT__rs1))
                                    ? 0U : vlSelf->rv32e__DOT__wb_stage__DOT__regs
                                   [vlSelf->rv32e__DOT__rs1]);
    vlSelf->rv32e__DOT__sram_wdata = 0U;
    vlSelf->rv32e__DOT__sram_wstrb = 0U;
    vlSelf->rv32e__DOT__sram_wvalid = 0U;
    vlSelf->rv32e__DOT__uart_wdata = 0U;
    vlSelf->rv32e__DOT__uart_wstrb = 0U;
    vlSelf->rv32e__DOT__uart_wvalid = 0U;
    vlSelf->rv32e__DOT__clint_wdata = 0U;
    vlSelf->rv32e__DOT__clint_wstrb = 0U;
    vlSelf->rv32e__DOT__clint_wvalid = 0U;
    vlSelf->rv32e__DOT__mem_sram_wready = 0U;
    vlSelf->rv32e__DOT__sram_awaddr = 0U;
    vlSelf->rv32e__DOT__sram_awvalid = 0U;
    vlSelf->rv32e__DOT__uart_awaddr = 0U;
    vlSelf->rv32e__DOT__uart_awvalid = 0U;
    vlSelf->rv32e__DOT__clint_awaddr = 0U;
    vlSelf->rv32e__DOT__clint_awvalid = 0U;
    vlSelf->rv32e__DOT__mem_sram_awready = 0U;
    if ((3U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr 
            = vlSelf->rv32e__DOT__mem_sram_awaddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr))
                                  ? 3U : 0U)));
        if ((2U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__Vfuncout))) {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr 
                = vlSelf->rv32e__DOT__mem_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__Vfuncout))) {
                vlSelf->rv32e__DOT__clint_wdata = vlSelf->rv32e__DOT__mem_sram_wdata;
                vlSelf->rv32e__DOT__clint_wstrb = vlSelf->rv32e__DOT__mem_sram_wstrb;
                vlSelf->rv32e__DOT__clint_wvalid = vlSelf->rv32e__DOT__mem_sram_wvalid;
                vlSelf->rv32e__DOT__mem_sram_wready 
                    = vlSelf->rv32e__DOT__clint_wready;
                vlSelf->rv32e__DOT__sram_wdata = 0U;
                vlSelf->rv32e__DOT__sram_wstrb = 0U;
                vlSelf->rv32e__DOT__sram_wvalid = 0U;
                vlSelf->rv32e__DOT__uart_wdata = 0U;
                vlSelf->rv32e__DOT__uart_wstrb = 0U;
                vlSelf->rv32e__DOT__uart_wvalid = 0U;
            } else {
                vlSelf->rv32e__DOT__uart_wdata = vlSelf->rv32e__DOT__mem_sram_wdata;
                vlSelf->rv32e__DOT__uart_wstrb = vlSelf->rv32e__DOT__mem_sram_wstrb;
                vlSelf->rv32e__DOT__uart_wvalid = vlSelf->rv32e__DOT__mem_sram_wvalid;
                vlSelf->rv32e__DOT__mem_sram_wready 
                    = vlSelf->rv32e__DOT__uart_wready;
                vlSelf->rv32e__DOT__sram_wdata = 0U;
                vlSelf->rv32e__DOT__sram_wstrb = 0U;
                vlSelf->rv32e__DOT__sram_wvalid = 0U;
                vlSelf->rv32e__DOT__clint_wdata = 0U;
                vlSelf->rv32e__DOT__clint_wstrb = 0U;
                vlSelf->rv32e__DOT__clint_wvalid = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr 
                = vlSelf->rv32e__DOT__mem_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__Vfuncout))) {
                vlSelf->rv32e__DOT__sram_wdata = vlSelf->rv32e__DOT__mem_sram_wdata;
                vlSelf->rv32e__DOT__sram_wstrb = vlSelf->rv32e__DOT__mem_sram_wstrb;
                vlSelf->rv32e__DOT__sram_wvalid = vlSelf->rv32e__DOT__mem_sram_wvalid;
                vlSelf->rv32e__DOT__mem_sram_wready 
                    = vlSelf->rv32e__DOT__sram_wready;
                vlSelf->rv32e__DOT__uart_wdata = 0U;
                vlSelf->rv32e__DOT__uart_wstrb = 0U;
                vlSelf->rv32e__DOT__uart_wvalid = 0U;
                vlSelf->rv32e__DOT__clint_wdata = 0U;
                vlSelf->rv32e__DOT__clint_wstrb = 0U;
                vlSelf->rv32e__DOT__clint_wvalid = 0U;
            } else {
                vlSelf->rv32e__DOT__sram_wdata = 0U;
                vlSelf->rv32e__DOT__sram_wstrb = 0U;
                vlSelf->rv32e__DOT__sram_wvalid = 0U;
                vlSelf->rv32e__DOT__uart_wdata = 0U;
                vlSelf->rv32e__DOT__uart_wstrb = 0U;
                vlSelf->rv32e__DOT__uart_wvalid = 0U;
                vlSelf->rv32e__DOT__clint_wdata = 0U;
                vlSelf->rv32e__DOT__clint_wstrb = 0U;
                vlSelf->rv32e__DOT__clint_wvalid = 0U;
                vlSelf->rv32e__DOT__mem_sram_wready 
                    = vlSelf->rv32e__DOT__mem_sram_wvalid;
            }
        }
    } else {
        vlSelf->rv32e__DOT__sram_wdata = 0U;
        vlSelf->rv32e__DOT__sram_wstrb = 0U;
        vlSelf->rv32e__DOT__sram_wvalid = 0U;
        vlSelf->rv32e__DOT__uart_wdata = 0U;
        vlSelf->rv32e__DOT__uart_wstrb = 0U;
        vlSelf->rv32e__DOT__uart_wvalid = 0U;
        vlSelf->rv32e__DOT__clint_wdata = 0U;
        vlSelf->rv32e__DOT__clint_wstrb = 0U;
        vlSelf->rv32e__DOT__clint_wvalid = 0U;
        vlSelf->rv32e__DOT__mem_sram_wready = 0U;
    }
    if ((3U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__addr 
            = vlSelf->rv32e__DOT__mem_sram_awaddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__addr))
                                  ? 3U : 0U)));
        if ((2U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__Vfuncout))) {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__addr 
                = vlSelf->rv32e__DOT__mem_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__Vfuncout))) {
                vlSelf->rv32e__DOT__clint_awaddr = vlSelf->rv32e__DOT__mem_sram_awaddr;
                vlSelf->rv32e__DOT__clint_awvalid = vlSelf->rv32e__DOT__mem_sram_awvalid;
                vlSelf->rv32e__DOT__mem_sram_awready 
                    = vlSelf->rv32e__DOT__clint_awready;
                vlSelf->rv32e__DOT__sram_awaddr = 0U;
                vlSelf->rv32e__DOT__sram_awvalid = 0U;
                vlSelf->rv32e__DOT__uart_awaddr = 0U;
                vlSelf->rv32e__DOT__uart_awvalid = 0U;
            } else {
                vlSelf->rv32e__DOT__uart_awaddr = vlSelf->rv32e__DOT__mem_sram_awaddr;
                vlSelf->rv32e__DOT__uart_awvalid = vlSelf->rv32e__DOT__mem_sram_awvalid;
                vlSelf->rv32e__DOT__mem_sram_awready 
                    = vlSelf->rv32e__DOT__uart_awready;
                vlSelf->rv32e__DOT__sram_awaddr = 0U;
                vlSelf->rv32e__DOT__sram_awvalid = 0U;
                vlSelf->rv32e__DOT__clint_awaddr = 0U;
                vlSelf->rv32e__DOT__clint_awvalid = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__addr 
                = vlSelf->rv32e__DOT__mem_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__addr))
                                      ? 3U : 0U)));
            if (VL_LIKELY((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__Vfuncout)))) {
                vlSelf->rv32e__DOT__sram_awaddr = vlSelf->rv32e__DOT__mem_sram_awaddr;
                vlSelf->rv32e__DOT__sram_awvalid = vlSelf->rv32e__DOT__mem_sram_awvalid;
                vlSelf->rv32e__DOT__mem_sram_awready 
                    = vlSelf->rv32e__DOT__sram_awready;
                vlSelf->rv32e__DOT__uart_awaddr = 0U;
                vlSelf->rv32e__DOT__uart_awvalid = 0U;
                vlSelf->rv32e__DOT__clint_awaddr = 0U;
                vlSelf->rv32e__DOT__clint_awvalid = 0U;
            } else {
                vlSelf->rv32e__DOT__sram_awaddr = 0U;
                vlSelf->rv32e__DOT__sram_awvalid = 0U;
                vlSelf->rv32e__DOT__uart_awaddr = 0U;
                vlSelf->rv32e__DOT__uart_awvalid = 0U;
                vlSelf->rv32e__DOT__clint_awaddr = 0U;
                vlSelf->rv32e__DOT__clint_awvalid = 0U;
                vlSelf->rv32e__DOT__mem_sram_awready = 1U;
                VL_WRITEF("\033[31m[ARB][MEM][AW] \345\234\260\345\235\200\350\247\243\347\240\201\351\224\231\350\257\257\357\274\201\345\234\260\345\235\200: %x\033[0m\n",
                          32,vlSelf->rv32e__DOT__mem_sram_awaddr);
            }
        }
    } else if ((4U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->rv32e__DOT__mem_sram_awready = vlSelf->rv32e__DOT__mem_sram_awvalid;
        vlSelf->rv32e__DOT__sram_awaddr = 0U;
        vlSelf->rv32e__DOT__sram_awvalid = 0U;
        vlSelf->rv32e__DOT__uart_awaddr = 0U;
        vlSelf->rv32e__DOT__uart_awvalid = 0U;
        vlSelf->rv32e__DOT__clint_awaddr = 0U;
        vlSelf->rv32e__DOT__clint_awvalid = 0U;
    } else {
        vlSelf->rv32e__DOT__sram_awaddr = 0U;
        vlSelf->rv32e__DOT__sram_awvalid = 0U;
        vlSelf->rv32e__DOT__uart_awaddr = 0U;
        vlSelf->rv32e__DOT__uart_awvalid = 0U;
        vlSelf->rv32e__DOT__clint_awaddr = 0U;
        vlSelf->rv32e__DOT__clint_awvalid = 0U;
        vlSelf->rv32e__DOT__mem_sram_awready = 0U;
    }
    vlSelf->rv32e__DOT__sram_araddr = 0U;
    vlSelf->rv32e__DOT__sram_arvalid = 0U;
    vlSelf->rv32e__DOT__uart_araddr = 0U;
    vlSelf->rv32e__DOT__uart_arvalid = 0U;
    vlSelf->rv32e__DOT__clint_araddr = 0U;
    vlSelf->rv32e__DOT__clint_arvalid = 0U;
    vlSelf->rv32e__DOT__ifu_sram_arready = 0U;
    vlSelf->rv32e__DOT__mem_sram_arready = 0U;
    if ((1U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__18__addr 
            = vlSelf->rv32e__DOT__ifu_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__18__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__18__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__18__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__18__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__18__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__18__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__18__addr))
                                  ? 3U : 0U)));
        if ((2U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__18__Vfuncout))) {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__19__addr 
                = vlSelf->rv32e__DOT__ifu_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__19__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__19__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__19__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__19__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__19__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__19__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__19__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__19__Vfuncout))) {
                vlSelf->rv32e__DOT__clint_araddr = vlSelf->rv32e__DOT__ifu_sram_araddr;
                vlSelf->rv32e__DOT__clint_arvalid = vlSelf->rv32e__DOT__ifu_sram_arvalid;
                vlSelf->rv32e__DOT__ifu_sram_arready 
                    = vlSelf->rv32e__DOT__clint_arready;
                vlSelf->rv32e__DOT__mem_sram_arready = 0U;
                vlSelf->rv32e__DOT__sram_araddr = 0U;
                vlSelf->rv32e__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__uart_araddr = 0U;
                vlSelf->rv32e__DOT__uart_arvalid = 0U;
            } else {
                vlSelf->rv32e__DOT__uart_araddr = vlSelf->rv32e__DOT__ifu_sram_araddr;
                vlSelf->rv32e__DOT__uart_arvalid = vlSelf->rv32e__DOT__ifu_sram_arvalid;
                vlSelf->rv32e__DOT__ifu_sram_arready 
                    = vlSelf->rv32e__DOT__uart_arready;
                vlSelf->rv32e__DOT__mem_sram_arready = 0U;
                vlSelf->rv32e__DOT__sram_araddr = 0U;
                vlSelf->rv32e__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__clint_araddr = 0U;
                vlSelf->rv32e__DOT__clint_arvalid = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__20__addr 
                = vlSelf->rv32e__DOT__ifu_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__20__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__20__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__20__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__20__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__20__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__20__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__20__addr))
                                      ? 3U : 0U)));
            if (VL_LIKELY((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__20__Vfuncout)))) {
                vlSelf->rv32e__DOT__sram_araddr = vlSelf->rv32e__DOT__ifu_sram_araddr;
                vlSelf->rv32e__DOT__sram_arvalid = vlSelf->rv32e__DOT__ifu_sram_arvalid;
                vlSelf->rv32e__DOT__ifu_sram_arready 
                    = vlSelf->rv32e__DOT__sram_arready;
                vlSelf->rv32e__DOT__mem_sram_arready = 0U;
                vlSelf->rv32e__DOT__uart_araddr = 0U;
                vlSelf->rv32e__DOT__uart_arvalid = 0U;
                vlSelf->rv32e__DOT__clint_araddr = 0U;
                vlSelf->rv32e__DOT__clint_arvalid = 0U;
            } else {
                vlSelf->rv32e__DOT__sram_araddr = 0U;
                vlSelf->rv32e__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__uart_araddr = 0U;
                vlSelf->rv32e__DOT__uart_arvalid = 0U;
                vlSelf->rv32e__DOT__clint_araddr = 0U;
                vlSelf->rv32e__DOT__clint_arvalid = 0U;
                vlSelf->rv32e__DOT__ifu_sram_arready = 1U;
                vlSelf->rv32e__DOT__mem_sram_arready = 0U;
                VL_WRITEF("\033[31m[ARB][IFU][AR] \345\234\260\345\235\200\350\247\243\347\240\201\351\224\231\350\257\257\357\274\201\345\234\260\345\235\200: %x\033[0m\n",
                          32,vlSelf->rv32e__DOT__ifu_sram_araddr);
            }
        }
    } else if ((2U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr 
            = vlSelf->rv32e__DOT__mem_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr))
                                  ? 3U : 0U)));
        if ((2U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__Vfuncout))) {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr 
                = vlSelf->rv32e__DOT__mem_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__Vfuncout))) {
                vlSelf->rv32e__DOT__clint_araddr = vlSelf->rv32e__DOT__mem_sram_araddr;
                vlSelf->rv32e__DOT__clint_arvalid = vlSelf->rv32e__DOT__mem_sram_arvalid;
                vlSelf->rv32e__DOT__mem_sram_arready 
                    = vlSelf->rv32e__DOT__clint_arready;
                vlSelf->rv32e__DOT__ifu_sram_arready = 0U;
                vlSelf->rv32e__DOT__sram_araddr = 0U;
                vlSelf->rv32e__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__uart_araddr = 0U;
                vlSelf->rv32e__DOT__uart_arvalid = 0U;
            } else {
                vlSelf->rv32e__DOT__uart_araddr = vlSelf->rv32e__DOT__mem_sram_araddr;
                vlSelf->rv32e__DOT__uart_arvalid = vlSelf->rv32e__DOT__mem_sram_arvalid;
                vlSelf->rv32e__DOT__mem_sram_arready 
                    = vlSelf->rv32e__DOT__uart_arready;
                vlSelf->rv32e__DOT__ifu_sram_arready = 0U;
                vlSelf->rv32e__DOT__sram_araddr = 0U;
                vlSelf->rv32e__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__clint_araddr = 0U;
                vlSelf->rv32e__DOT__clint_arvalid = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr 
                = vlSelf->rv32e__DOT__mem_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr))
                                      ? 3U : 0U)));
            if (VL_LIKELY((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__Vfuncout)))) {
                vlSelf->rv32e__DOT__sram_araddr = vlSelf->rv32e__DOT__mem_sram_araddr;
                vlSelf->rv32e__DOT__sram_arvalid = vlSelf->rv32e__DOT__mem_sram_arvalid;
                vlSelf->rv32e__DOT__mem_sram_arready 
                    = vlSelf->rv32e__DOT__sram_arready;
                vlSelf->rv32e__DOT__ifu_sram_arready = 0U;
                vlSelf->rv32e__DOT__uart_araddr = 0U;
                vlSelf->rv32e__DOT__uart_arvalid = 0U;
                vlSelf->rv32e__DOT__clint_araddr = 0U;
                vlSelf->rv32e__DOT__clint_arvalid = 0U;
            } else {
                VL_WRITEF("\033[31m[ARB][MEM][AR] \345\234\260\345\235\200\350\247\243\347\240\201\351\224\231\350\257\257\357\274\201\345\234\260\345\235\200: %x\033[0m\n",
                          32,vlSelf->rv32e__DOT__mem_sram_araddr);
                vlSelf->rv32e__DOT__sram_araddr = 0U;
                vlSelf->rv32e__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__uart_araddr = 0U;
                vlSelf->rv32e__DOT__uart_arvalid = 0U;
                vlSelf->rv32e__DOT__clint_araddr = 0U;
                vlSelf->rv32e__DOT__clint_arvalid = 0U;
                vlSelf->rv32e__DOT__mem_sram_arready = 1U;
                vlSelf->rv32e__DOT__ifu_sram_arready = 0U;
            }
        }
    } else if ((4U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->rv32e__DOT__ifu_sram_arready = vlSelf->rv32e__DOT__ifu_sram_arvalid;
        vlSelf->rv32e__DOT__mem_sram_arready = vlSelf->rv32e__DOT__mem_sram_arvalid;
        vlSelf->rv32e__DOT__sram_araddr = 0U;
        vlSelf->rv32e__DOT__sram_arvalid = 0U;
        vlSelf->rv32e__DOT__uart_araddr = 0U;
        vlSelf->rv32e__DOT__uart_arvalid = 0U;
        vlSelf->rv32e__DOT__clint_araddr = 0U;
        vlSelf->rv32e__DOT__clint_arvalid = 0U;
    } else {
        vlSelf->rv32e__DOT__sram_araddr = 0U;
        vlSelf->rv32e__DOT__sram_arvalid = 0U;
        vlSelf->rv32e__DOT__uart_araddr = 0U;
        vlSelf->rv32e__DOT__uart_arvalid = 0U;
        vlSelf->rv32e__DOT__clint_araddr = 0U;
        vlSelf->rv32e__DOT__clint_arvalid = 0U;
        vlSelf->rv32e__DOT__ifu_sram_arready = 0U;
        vlSelf->rv32e__DOT__mem_sram_arready = 0U;
    }
    vlSelf->rv32e__DOT__sram_bready = 0U;
    vlSelf->rv32e__DOT__uart_bready = 0U;
    vlSelf->rv32e__DOT__clint_bready = 0U;
    vlSelf->rv32e__DOT__mem_sram_bresp = 0U;
    vlSelf->rv32e__DOT__mem_sram_bvalid = 0U;
    if ((3U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__addr 
            = vlSelf->rv32e__DOT__mem_sram_awaddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__addr))
                                  ? 3U : 0U)));
        if ((2U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__Vfuncout))) {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__addr 
                = vlSelf->rv32e__DOT__mem_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__Vfuncout))) {
                vlSelf->rv32e__DOT__mem_sram_bresp 
                    = vlSelf->rv32e__DOT__clint_bresp;
                vlSelf->rv32e__DOT__mem_sram_bvalid 
                    = vlSelf->rv32e__DOT__clint_bvalid;
                vlSelf->rv32e__DOT__clint_bready = vlSelf->rv32e__DOT__mem_sram_bready;
                vlSelf->rv32e__DOT__sram_bready = 0U;
                vlSelf->rv32e__DOT__uart_bready = 0U;
            } else {
                vlSelf->rv32e__DOT__mem_sram_bresp 
                    = vlSelf->rv32e__DOT__uart_bresp;
                vlSelf->rv32e__DOT__mem_sram_bvalid 
                    = vlSelf->rv32e__DOT__uart_bvalid;
                vlSelf->rv32e__DOT__uart_bready = vlSelf->rv32e__DOT__mem_sram_bready;
                vlSelf->rv32e__DOT__sram_bready = 0U;
                vlSelf->rv32e__DOT__clint_bready = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__addr 
                = vlSelf->rv32e__DOT__mem_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__Vfuncout))) {
                vlSelf->rv32e__DOT__mem_sram_bresp 
                    = vlSelf->rv32e__DOT__sram_bresp;
                vlSelf->rv32e__DOT__mem_sram_bvalid 
                    = vlSelf->rv32e__DOT__sram_bvalid;
                vlSelf->rv32e__DOT__sram_bready = vlSelf->rv32e__DOT__mem_sram_bready;
                vlSelf->rv32e__DOT__uart_bready = 0U;
                vlSelf->rv32e__DOT__clint_bready = 0U;
            } else {
                vlSelf->rv32e__DOT__mem_sram_bresp = 3U;
                vlSelf->rv32e__DOT__mem_sram_bvalid 
                    = vlSelf->rv32e__DOT__mem_sram_awvalid;
                vlSelf->rv32e__DOT__sram_bready = 0U;
                vlSelf->rv32e__DOT__uart_bready = 0U;
                vlSelf->rv32e__DOT__clint_bready = 0U;
            }
        }
    } else if ((4U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        if (vlSelf->rv32e__DOT__mem_sram_awvalid) {
            vlSelf->rv32e__DOT__mem_sram_bresp = 3U;
            vlSelf->rv32e__DOT__mem_sram_bvalid = 1U;
        }
        vlSelf->rv32e__DOT__sram_bready = 0U;
        vlSelf->rv32e__DOT__uart_bready = 0U;
        vlSelf->rv32e__DOT__clint_bready = 0U;
    } else {
        vlSelf->rv32e__DOT__sram_bready = 0U;
        vlSelf->rv32e__DOT__uart_bready = 0U;
        vlSelf->rv32e__DOT__clint_bready = 0U;
        vlSelf->rv32e__DOT__mem_sram_bresp = 0U;
        vlSelf->rv32e__DOT__mem_sram_bvalid = 0U;
    }
    vlSelf->rv32e__DOT__sram_rready = 0U;
    vlSelf->rv32e__DOT__uart_rready = 0U;
    vlSelf->rv32e__DOT__clint_rready = 0U;
    vlSelf->rv32e__DOT__ifu_sram_rdata = 0U;
    vlSelf->rv32e__DOT__ifu_sram_rvalid = 0U;
    vlSelf->rv32e__DOT__ifu_sram_rresp = 0U;
    vlSelf->rv32e__DOT__mem_sram_rdata = 0U;
    vlSelf->rv32e__DOT__mem_sram_rvalid = 0U;
    vlSelf->rv32e__DOT__mem_sram_rresp = 0U;
    if ((1U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__addr 
            = vlSelf->rv32e__DOT__ifu_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__addr))
                                  ? 3U : 0U)));
        if ((2U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__Vfuncout))) {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__addr 
                = vlSelf->rv32e__DOT__ifu_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__Vfuncout))) {
                vlSelf->rv32e__DOT__ifu_sram_rdata 
                    = vlSelf->rv32e__DOT__clint_rdata;
                vlSelf->rv32e__DOT__ifu_sram_rvalid 
                    = vlSelf->rv32e__DOT__clint_rvalid;
                vlSelf->rv32e__DOT__ifu_sram_rresp 
                    = vlSelf->rv32e__DOT__clint_rresp;
                vlSelf->rv32e__DOT__clint_rready = vlSelf->rv32e__DOT__ifu_sram_rready;
                vlSelf->rv32e__DOT__sram_rready = 0U;
                vlSelf->rv32e__DOT__uart_rready = 0U;
            } else {
                vlSelf->rv32e__DOT__ifu_sram_rdata 
                    = vlSelf->rv32e__DOT__uart_rdata;
                vlSelf->rv32e__DOT__ifu_sram_rvalid 
                    = vlSelf->rv32e__DOT__uart_rvalid;
                vlSelf->rv32e__DOT__ifu_sram_rresp 
                    = vlSelf->rv32e__DOT__uart_rresp;
                vlSelf->rv32e__DOT__uart_rready = vlSelf->rv32e__DOT__ifu_sram_rready;
                vlSelf->rv32e__DOT__sram_rready = 0U;
                vlSelf->rv32e__DOT__clint_rready = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__addr 
                = vlSelf->rv32e__DOT__ifu_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__Vfuncout))) {
                vlSelf->rv32e__DOT__ifu_sram_rdata 
                    = vlSelf->rv32e__DOT__sram_rdata;
                vlSelf->rv32e__DOT__ifu_sram_rvalid 
                    = vlSelf->rv32e__DOT__sram_rvalid;
                vlSelf->rv32e__DOT__ifu_sram_rresp 
                    = vlSelf->rv32e__DOT__sram_rresp;
                vlSelf->rv32e__DOT__sram_rready = vlSelf->rv32e__DOT__ifu_sram_rready;
                vlSelf->rv32e__DOT__uart_rready = 0U;
                vlSelf->rv32e__DOT__clint_rready = 0U;
            } else {
                vlSelf->rv32e__DOT__ifu_sram_rdata = 0U;
                vlSelf->rv32e__DOT__ifu_sram_rvalid 
                    = vlSelf->rv32e__DOT__ifu_sram_arvalid;
                vlSelf->rv32e__DOT__ifu_sram_rresp = 3U;
                vlSelf->rv32e__DOT__sram_rready = 0U;
                vlSelf->rv32e__DOT__uart_rready = 0U;
                vlSelf->rv32e__DOT__clint_rready = 0U;
            }
        }
    } else if ((2U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr 
            = vlSelf->rv32e__DOT__mem_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr))
                                  ? 3U : 0U)));
        if ((2U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__Vfuncout))) {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr 
                = vlSelf->rv32e__DOT__mem_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__Vfuncout))) {
                vlSelf->rv32e__DOT__mem_sram_rdata 
                    = vlSelf->rv32e__DOT__clint_rdata;
                vlSelf->rv32e__DOT__mem_sram_rvalid 
                    = vlSelf->rv32e__DOT__clint_rvalid;
                vlSelf->rv32e__DOT__mem_sram_rresp 
                    = vlSelf->rv32e__DOT__clint_rresp;
                vlSelf->rv32e__DOT__clint_rready = vlSelf->rv32e__DOT__mem_sram_rready;
                vlSelf->rv32e__DOT__sram_rready = 0U;
                vlSelf->rv32e__DOT__uart_rready = 0U;
            } else {
                vlSelf->rv32e__DOT__mem_sram_rdata 
                    = vlSelf->rv32e__DOT__uart_rdata;
                vlSelf->rv32e__DOT__mem_sram_rvalid 
                    = vlSelf->rv32e__DOT__uart_rvalid;
                vlSelf->rv32e__DOT__mem_sram_rresp 
                    = vlSelf->rv32e__DOT__uart_rresp;
                vlSelf->rv32e__DOT__uart_rready = vlSelf->rv32e__DOT__mem_sram_rready;
                vlSelf->rv32e__DOT__sram_rready = 0U;
                vlSelf->rv32e__DOT__clint_rready = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr 
                = vlSelf->rv32e__DOT__mem_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__Vfuncout))) {
                vlSelf->rv32e__DOT__mem_sram_rdata 
                    = vlSelf->rv32e__DOT__sram_rdata;
                vlSelf->rv32e__DOT__mem_sram_rvalid 
                    = vlSelf->rv32e__DOT__sram_rvalid;
                vlSelf->rv32e__DOT__mem_sram_rresp 
                    = vlSelf->rv32e__DOT__sram_rresp;
                vlSelf->rv32e__DOT__sram_rready = vlSelf->rv32e__DOT__mem_sram_rready;
                vlSelf->rv32e__DOT__uart_rready = 0U;
                vlSelf->rv32e__DOT__clint_rready = 0U;
            } else {
                vlSelf->rv32e__DOT__mem_sram_rdata = 0U;
                vlSelf->rv32e__DOT__mem_sram_rvalid 
                    = vlSelf->rv32e__DOT__mem_sram_arvalid;
                vlSelf->rv32e__DOT__mem_sram_rresp = 3U;
                vlSelf->rv32e__DOT__sram_rready = 0U;
                vlSelf->rv32e__DOT__uart_rready = 0U;
                vlSelf->rv32e__DOT__clint_rready = 0U;
            }
        }
    } else if ((4U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        if (vlSelf->rv32e__DOT__ifu_sram_arvalid) {
            vlSelf->rv32e__DOT__ifu_sram_rdata = 0U;
            vlSelf->rv32e__DOT__ifu_sram_rvalid = 1U;
            vlSelf->rv32e__DOT__ifu_sram_rresp = 3U;
        } else if (vlSelf->rv32e__DOT__mem_sram_arvalid) {
            vlSelf->rv32e__DOT__mem_sram_rdata = 0U;
            vlSelf->rv32e__DOT__mem_sram_rvalid = 1U;
            vlSelf->rv32e__DOT__mem_sram_rresp = 3U;
        }
        vlSelf->rv32e__DOT__sram_rready = 0U;
        vlSelf->rv32e__DOT__uart_rready = 0U;
        vlSelf->rv32e__DOT__clint_rready = 0U;
    } else {
        vlSelf->rv32e__DOT__sram_rready = 0U;
        vlSelf->rv32e__DOT__uart_rready = 0U;
        vlSelf->rv32e__DOT__clint_rready = 0U;
        vlSelf->rv32e__DOT__ifu_sram_rdata = 0U;
        vlSelf->rv32e__DOT__ifu_sram_rvalid = 0U;
        vlSelf->rv32e__DOT__ifu_sram_rresp = 0U;
        vlSelf->rv32e__DOT__mem_sram_rdata = 0U;
        vlSelf->rv32e__DOT__mem_sram_rvalid = 0U;
        vlSelf->rv32e__DOT__mem_sram_rresp = 0U;
    }
    vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr 
        = (vlSelf->rv32e__DOT__imm + vlSelf->rv32e__DOT__rs1_val);
    vlSelf->rv32e__DOT__sram__DOT__addr_valid = (((0x80000000U 
                                                   <= vlSelf->rv32e__DOT__sram_araddr) 
                                                  & (0x8fffffffU 
                                                     >= vlSelf->rv32e__DOT__sram_araddr)) 
                                                 | (((0x80000000U 
                                                      <= vlSelf->rv32e__DOT__sram_awaddr) 
                                                     & (0x8fffffffU 
                                                        >= vlSelf->rv32e__DOT__sram_awaddr)) 
                                                    | (((0xa0000000U 
                                                         <= vlSelf->rv32e__DOT__sram_araddr) 
                                                        & (0xa0000007U 
                                                           >= vlSelf->rv32e__DOT__sram_araddr)) 
                                                       | (((0xa0001000U 
                                                            <= vlSelf->rv32e__DOT__sram_awaddr) 
                                                           & (0xa0001003U 
                                                              >= vlSelf->rv32e__DOT__sram_awaddr)) 
                                                          | ((0xa0002000U 
                                                              <= vlSelf->rv32e__DOT__sram_awaddr) 
                                                             & (0xa0002007U 
                                                                >= vlSelf->rv32e__DOT__sram_awaddr))))));
    vlSelf->rv32e__DOT__uart__DOT__addr_valid = (((0xa0000000U 
                                                   <= vlSelf->rv32e__DOT__uart_araddr) 
                                                  & (0xa0000007U 
                                                     >= vlSelf->rv32e__DOT__uart_araddr)) 
                                                 | ((0xa0000000U 
                                                     <= vlSelf->rv32e__DOT__uart_awaddr) 
                                                    & (0xa0000007U 
                                                       >= vlSelf->rv32e__DOT__uart_awaddr)));
    vlSelf->rv32e__DOT__clint__DOT__addr_valid = ((
                                                   (0xa0002000U 
                                                    <= vlSelf->rv32e__DOT__clint_araddr) 
                                                   & (0xa0002007U 
                                                      >= vlSelf->rv32e__DOT__clint_araddr)) 
                                                  | ((0xa0002000U 
                                                      <= vlSelf->rv32e__DOT__clint_awaddr) 
                                                     & (0xa0002007U 
                                                        >= vlSelf->rv32e__DOT__clint_awaddr)));
    if ((4U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
            = ((2U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))
                ? 0U : ((1U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))
                         ? 0U : (((((IData)(vlSelf->rv32e__DOT__ifu_sram_rvalid) 
                                    & (IData)(vlSelf->rv32e__DOT__ifu_sram_rready)) 
                                   | ((IData)(vlSelf->rv32e__DOT__mem_sram_rvalid) 
                                      & (IData)(vlSelf->rv32e__DOT__mem_sram_rready))) 
                                  | ((IData)(vlSelf->rv32e__DOT__mem_sram_bvalid) 
                                     & (IData)(vlSelf->rv32e__DOT__mem_sram_bready)))
                                  ? 0U : 4U)));
    } else if ((2U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
            = ((1U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))
                ? (((((IData)(vlSelf->rv32e__DOT__sram_bvalid) 
                      & (IData)(vlSelf->rv32e__DOT__sram_bready)) 
                     | ((IData)(vlSelf->rv32e__DOT__uart_bvalid) 
                        & (IData)(vlSelf->rv32e__DOT__uart_bready))) 
                    | ((IData)(vlSelf->rv32e__DOT__clint_bvalid) 
                       & (IData)(vlSelf->rv32e__DOT__clint_bready)))
                    ? 0U : 3U) : (((((IData)(vlSelf->rv32e__DOT__sram_rvalid) 
                                     & (IData)(vlSelf->rv32e__DOT__sram_rready)) 
                                    | ((IData)(vlSelf->rv32e__DOT__uart_rvalid) 
                                       & (IData)(vlSelf->rv32e__DOT__uart_rready))) 
                                   | ((IData)(vlSelf->rv32e__DOT__clint_rvalid) 
                                      & (IData)(vlSelf->rv32e__DOT__clint_rready)))
                                   ? 0U : 2U));
    } else if ((1U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
            = (((((IData)(vlSelf->rv32e__DOT__sram_rvalid) 
                  & (IData)(vlSelf->rv32e__DOT__sram_rready)) 
                 | ((IData)(vlSelf->rv32e__DOT__uart_rvalid) 
                    & (IData)(vlSelf->rv32e__DOT__uart_rready))) 
                | ((IData)(vlSelf->rv32e__DOT__clint_rvalid) 
                   & (IData)(vlSelf->rv32e__DOT__clint_rready)))
                ? 0U : 1U);
    } else if (vlSelf->rv32e__DOT__mem_sram_awvalid) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__addr 
            = vlSelf->rv32e__DOT__mem_sram_awaddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__addr))
                                  ? 3U : 0U)));
        if ((1U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__Vfuncout))) {
            vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 3U;
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__4__addr 
                = vlSelf->rv32e__DOT__mem_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__4__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__4__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__4__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__4__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__4__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__4__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__4__addr))
                                      ? 3U : 0U)));
            if ((2U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__4__Vfuncout))) {
                vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 3U;
            } else {
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__5__addr 
                    = vlSelf->rv32e__DOT__mem_sram_awaddr;
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__5__Vfuncout 
                    = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__5__addr) 
                        & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__5__addr))
                        ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__5__addr) 
                                 & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__5__addr))
                                 ? 2U : (((0xa0002000U 
                                           <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__5__addr) 
                                          & (0xa0002007U 
                                             >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__5__addr))
                                          ? 3U : 0U)));
                vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
                    = ((3U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__5__Vfuncout))
                        ? 3U : 4U);
            }
        }
    } else if (vlSelf->rv32e__DOT__mem_sram_arvalid) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr 
            = vlSelf->rv32e__DOT__mem_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr))
                                  ? 3U : 0U)));
        if ((1U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__Vfuncout))) {
            vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 2U;
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr 
                = vlSelf->rv32e__DOT__mem_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr))
                                      ? 3U : 0U)));
            if ((2U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__Vfuncout))) {
                vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 2U;
            } else {
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr 
                    = vlSelf->rv32e__DOT__mem_sram_araddr;
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__Vfuncout 
                    = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr) 
                        & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr))
                        ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr) 
                                 & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr))
                                 ? 2U : (((0xa0002000U 
                                           <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr) 
                                          & (0xa0002007U 
                                             >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr))
                                          ? 3U : 0U)));
                vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
                    = ((3U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__Vfuncout))
                        ? 2U : 4U);
            }
        }
    } else if (vlSelf->rv32e__DOT__ifu_sram_arvalid) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr 
            = vlSelf->rv32e__DOT__ifu_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr))
                                  ? 3U : 0U)));
        if ((1U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__Vfuncout))) {
            vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 1U;
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr 
                = vlSelf->rv32e__DOT__ifu_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr))
                                      ? 3U : 0U)));
            if ((2U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__Vfuncout))) {
                vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 1U;
            } else {
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr 
                    = vlSelf->rv32e__DOT__ifu_sram_araddr;
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__Vfuncout 
                    = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr) 
                        & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr))
                        ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr) 
                                 & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr))
                                 ? 2U : (((0xa0002000U 
                                           <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr) 
                                          & (0xa0002007U 
                                             >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr))
                                          ? 3U : 0U)));
                vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
                    = ((3U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__Vfuncout))
                        ? 1U : 4U);
            }
        }
    } else {
        vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 0U;
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
    vlSelf->rv32e__DOT__if_ready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__wb_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__if_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__if_access_fault = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__if_fault_addr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__trap_pc = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ifu_sram_araddr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ifu_sram_arvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ifu_sram_arready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ifu_sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ifu_sram_rvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ifu_sram_rready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ifu_sram_rresp = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__ifu_sram_awaddr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ifu_sram_awvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ifu_sram_awready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ifu_sram_wdata = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ifu_sram_wstrb = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__ifu_sram_wvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ifu_sram_wready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ifu_sram_bresp = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__ifu_sram_bvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ifu_sram_bready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->rv32e__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__func3 = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__func7 = VL_RAND_RESET_I(7);
    vlSelf->rv32e__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__MemRead = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__MemLen = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__id_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_ready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__reg_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__rs1_val = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__rs2_val = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__alu_zero = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__alu_less = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__data_out = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__wb_ready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__load_access_fault = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__store_access_fault = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_fault_addr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_sram_araddr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_sram_arvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_sram_arready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_sram_rvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_sram_rready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_sram_rresp = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__mem_sram_awaddr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_sram_awvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_sram_awready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_sram_wdata = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__mem_sram_wstrb = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__mem_sram_wvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_sram_wready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_sram_bresp = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__mem_sram_bvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__mem_sram_bready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__wb_data = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__jal_target = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__jalr_target = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__take_branch = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__branch_target = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__rd_wb = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__RegWrite_wb = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__wb_MemRead = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__wb_MemWrite = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__wb_MemLen = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__wb_addr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__wb_data_in = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram_araddr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram_arvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_arready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_rresp = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram_rvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_rready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_awaddr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram_awready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_awvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_wdata = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram_wstrb = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__sram_wvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_wready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_bresp = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__sram_bvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_bready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__uart_araddr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__uart_arvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__uart_arready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__uart_rresp = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__uart_rdata = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__uart_rvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__uart_rready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__uart_awaddr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__uart_awready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__uart_awvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__uart_wdata = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__uart_wstrb = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__uart_wvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__uart_wready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__uart_bresp = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__uart_bvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__uart_bready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__clint_araddr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__clint_arvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__clint_arready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__clint_rresp = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__clint_rdata = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__clint_rvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__clint_rready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__clint_awaddr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__clint_awready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__clint_awvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__clint_wdata = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__clint_wstrb = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__clint_wvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__clint_wready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__clint_bresp = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__clint_bvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__clint_bready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT____Vcellinp__if_stage__pc_src = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT____Vcellinp__mem_stage__addr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__axi_arb__DOT__current_master = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__axi_arb__DOT__next_master = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__clint__DOT__clint_state = 0;
    vlSelf->rv32e__DOT__clint__DOT__next_clint_state = 0;
    vlSelf->rv32e__DOT__clint__DOT__LFSR = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__clint__DOT__araddr_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__clint__DOT__awaddr_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__clint__DOT__wdata_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__clint__DOT__rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__clint__DOT__wstrb_reg = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__clint__DOT__addr_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__clint__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->rv32e__DOT__uart__DOT__uart_state = 0;
    vlSelf->rv32e__DOT__uart__DOT__next_uart_state = 0;
    vlSelf->rv32e__DOT__uart__DOT__LFSR = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__uart__DOT__araddr_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__uart__DOT__awaddr_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__uart__DOT__wdata_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__uart__DOT__rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__uart__DOT__wstrb_reg = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__uart__DOT__addr_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram__DOT__sram_state = 0;
    vlSelf->rv32e__DOT__sram__DOT__next_sram_state = 0;
    vlSelf->rv32e__DOT__sram__DOT__LFSR = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram__DOT__random_delay = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram__DOT__araddr_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram__DOT__awaddr_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram__DOT__rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram__DOT__wdata_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram__DOT__wstrb_reg = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__sram__DOT__addr_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__if_stage__DOT__state = 0;
    vlSelf->rv32e__DOT__if_stage__DOT__next_state = 0;
    vlSelf->rv32e__DOT__if_stage__DOT__rresp = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__id_stage__DOT__state = 0;
    vlSelf->rv32e__DOT__id_stage__DOT__next_state = 0;
    vlSelf->rv32e__DOT__id_stage__DOT__immI = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__id_stage__DOT__get_opcode = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__ex_stage__DOT__state = 0;
    vlSelf->rv32e__DOT__ex_stage__DOT__next_state = 0;
    vlSelf->rv32e__DOT__mem_stage__DOT__state = 0;
    vlSelf->rv32e__DOT__mem_stage__DOT__next_state = 0;
    vlSelf->rv32e__DOT__mem_stage__DOT__delay = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__wb_stage__DOT__state = 0;
    vlSelf->rv32e__DOT__wb_stage__DOT__next_state = 0;
    vlSelf->rv32e__DOT__wb_stage__DOT__RegWrite_wb = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__wb_stage__DOT__rd_wb_pre = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->rv32e__DOT__wb_stage__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rv32e__DOT__wb_stage__DOT__btb_valid = VL_RAND_RESET_Q(64);
    vlSelf->rv32e__DOT__wb_stage__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__wb_stage__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__3__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__4__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__4__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__5__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__5__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__18__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__18__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__19__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__19__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__20__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__20__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__25__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__28__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__31__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__34__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__37__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
