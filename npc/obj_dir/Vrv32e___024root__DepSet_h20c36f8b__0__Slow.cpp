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
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
}

VL_ATTR_COLD void Vrv32e___024root___eval_initial__TOP(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->rv32e__DOT__wbu__DOT__k = 0U;
    while (VL_GTS_III(32, 0x1000U, vlSelf->rv32e__DOT__wbu__DOT__k)) {
        vlSelf->rv32e__DOT__wbu__DOT__CSR[(0xfffU & vlSelf->rv32e__DOT__wbu__DOT__k)] 
            = ((0x300U == vlSelf->rv32e__DOT__wbu__DOT__k)
                ? 0x1800U : 0U);
        vlSelf->rv32e__DOT__wbu__DOT__k = ((IData)(1U) 
                                           + vlSelf->rv32e__DOT__wbu__DOT__k);
    }
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
                VL_FATAL_MT("/home/furina/ysyx-workbench/npc/Npipeline-vsrc/rv32e.v", 4, "", "Settle region did not converge.");
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

void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);

VL_ATTR_COLD void Vrv32e___024root___stl_sequent__TOP__0(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->rv32e__DOT__idu__DOT__immI = (((- (IData)(
                                                      (vlSelf->rv32e__DOT__IF_ID_inst 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSelf->rv32e__DOT__IF_ID_inst 
                                             >> 0x14U));
    vlSelf->rv32e__DOT__lsu__DOT__rd_data = ((IData)(vlSelf->rv32e__DOT__lsu__DOT__l_load)
                                              ? ((0U 
                                                  == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                                  ? 
                                                 (0xffU 
                                                  & vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                                    ? 
                                                   (0xffffU 
                                                    & vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data 
                                                                     >> 0xfU)))) 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_MemLen))
                                                      ? vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data
                                                      : 0U)))))
                                              : ((IData)(vlSelf->rv32e__DOT__ex_lsu_forward_las)
                                                  ? vlSelf->rv32e__DOT__ex_lsu_src2
                                                  : 
                                                 ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemWrite)
                                                   ? 0U
                                                   : 
                                                  ((((IData)(vlSelf->rv32e__DOT__ex_lsu_csr) 
                                                     & (~ (IData)(vlSelf->rv32e__DOT__ex_lsu_csr_ecall))) 
                                                    & (~ (IData)(vlSelf->rv32e__DOT__ex_lsu_csr_mret)))
                                                    ? vlSelf->rv32e__DOT__ex_lsu_csr_rdata
                                                    : vlSelf->rv32e__DOT__ex_lsu_process_result))));
    vlSelf->rv32e__DOT__wb_ex_csr_num1 = vlSelf->rv32e__DOT__wbu__DOT__CSR
        [vlSelf->rv32e__DOT__id_wb_csr_addr1];
    vlSelf->rv32e__DOT__sram_awaddr = 0U;
    vlSelf->rv32e__DOT__sram_awvalid = 0U;
    vlSelf->rv32e__DOT__uart_awaddr = 0U;
    vlSelf->rv32e__DOT__uart_awvalid = 0U;
    vlSelf->rv32e__DOT__clint_awaddr = 0U;
    vlSelf->rv32e__DOT__clint_awvalid = 0U;
    vlSelf->rv32e__DOT__sram_lsu_awready = 0U;
    if ((3U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__30__addr 
            = vlSelf->rv32e__DOT__lsu_sram_awaddr;
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
                = vlSelf->rv32e__DOT__lsu_sram_awaddr;
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
                vlSelf->rv32e__DOT__clint_awaddr = vlSelf->rv32e__DOT__lsu_sram_awaddr;
                vlSelf->rv32e__DOT__clint_awvalid = vlSelf->rv32e__DOT__lsu_sram_awvalid;
                vlSelf->rv32e__DOT__sram_lsu_awready 
                    = vlSelf->rv32e__DOT__clint_awready;
                vlSelf->rv32e__DOT__sram_awaddr = 0U;
                vlSelf->rv32e__DOT__sram_awvalid = 0U;
                vlSelf->rv32e__DOT__uart_awaddr = 0U;
                vlSelf->rv32e__DOT__uart_awvalid = 0U;
            } else {
                vlSelf->rv32e__DOT__uart_awaddr = vlSelf->rv32e__DOT__lsu_sram_awaddr;
                vlSelf->rv32e__DOT__uart_awvalid = vlSelf->rv32e__DOT__lsu_sram_awvalid;
                vlSelf->rv32e__DOT__sram_lsu_awready 
                    = vlSelf->rv32e__DOT__uart_awready;
                vlSelf->rv32e__DOT__sram_awaddr = 0U;
                vlSelf->rv32e__DOT__sram_awvalid = 0U;
                vlSelf->rv32e__DOT__clint_awaddr = 0U;
                vlSelf->rv32e__DOT__clint_awvalid = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__addr 
                = vlSelf->rv32e__DOT__lsu_sram_awaddr;
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
            if (VL_LIKELY((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__32__Vfuncout)))) {
                vlSelf->rv32e__DOT__sram_awaddr = vlSelf->rv32e__DOT__lsu_sram_awaddr;
                vlSelf->rv32e__DOT__sram_awvalid = vlSelf->rv32e__DOT__lsu_sram_awvalid;
                vlSelf->rv32e__DOT__sram_lsu_awready 
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
                vlSelf->rv32e__DOT__sram_lsu_awready = 1U;
                VL_WRITEF("\033[31m[ARB][LSU][AW] \345\234\260\345\235\200\350\247\243\347\240\201\351\224\231\350\257\257\357\274\201\345\234\260\345\235\200: %x\033[0m\n",
                          32,vlSelf->rv32e__DOT__lsu_sram_awaddr);
            }
        }
    } else if ((4U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->rv32e__DOT__sram_lsu_awready = vlSelf->rv32e__DOT__lsu_sram_awvalid;
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
        vlSelf->rv32e__DOT__sram_lsu_awready = 0U;
    }
    vlSelf->rv32e__DOT__sram_wdata = 0U;
    vlSelf->rv32e__DOT__sram_wstrb = 0U;
    vlSelf->rv32e__DOT__sram_wvalid = 0U;
    vlSelf->rv32e__DOT__uart_wdata = 0U;
    vlSelf->rv32e__DOT__uart_wstrb = 0U;
    vlSelf->rv32e__DOT__uart_wvalid = 0U;
    vlSelf->rv32e__DOT__clint_wdata = 0U;
    vlSelf->rv32e__DOT__clint_wstrb = 0U;
    vlSelf->rv32e__DOT__clint_wvalid = 0U;
    vlSelf->rv32e__DOT__sram_lsu_wready = 0U;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h804502ec__0 
        = ((IData)(vlSelf->rv32e__DOT__ex_lsu_MemRead) 
           & (IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite));
    vlSelf->rv32e__DOT__sram_araddr = 0U;
    vlSelf->rv32e__DOT__sram_arvalid = 0U;
    vlSelf->rv32e__DOT__uart_araddr = 0U;
    vlSelf->rv32e__DOT__uart_arvalid = 0U;
    vlSelf->rv32e__DOT__clint_araddr = 0U;
    vlSelf->rv32e__DOT__clint_arvalid = 0U;
    vlSelf->rv32e__DOT__sram_if_arready = 0U;
    vlSelf->rv32e__DOT__sram_lsu_arready = 0U;
    if ((3U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__33__addr 
            = vlSelf->rv32e__DOT__lsu_sram_awaddr;
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
                = vlSelf->rv32e__DOT__lsu_sram_awaddr;
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
                vlSelf->rv32e__DOT__clint_wdata = vlSelf->rv32e__DOT__lsu_sram_wdata;
                vlSelf->rv32e__DOT__clint_wstrb = vlSelf->rv32e__DOT__lsu_sram_wstrb;
                vlSelf->rv32e__DOT__clint_wvalid = vlSelf->rv32e__DOT__lsu_sram_wvalid;
                vlSelf->rv32e__DOT__sram_lsu_wready 
                    = vlSelf->rv32e__DOT__clint_wready;
                vlSelf->rv32e__DOT__sram_wdata = 0U;
                vlSelf->rv32e__DOT__sram_wstrb = 0U;
                vlSelf->rv32e__DOT__sram_wvalid = 0U;
                vlSelf->rv32e__DOT__uart_wdata = 0U;
                vlSelf->rv32e__DOT__uart_wstrb = 0U;
                vlSelf->rv32e__DOT__uart_wvalid = 0U;
            } else {
                vlSelf->rv32e__DOT__uart_wdata = vlSelf->rv32e__DOT__lsu_sram_wdata;
                vlSelf->rv32e__DOT__uart_wstrb = vlSelf->rv32e__DOT__lsu_sram_wstrb;
                vlSelf->rv32e__DOT__uart_wvalid = vlSelf->rv32e__DOT__lsu_sram_wvalid;
                vlSelf->rv32e__DOT__sram_lsu_wready 
                    = vlSelf->rv32e__DOT__uart_wready;
                vlSelf->rv32e__DOT__sram_wdata = 0U;
                vlSelf->rv32e__DOT__sram_wstrb = 0U;
                vlSelf->rv32e__DOT__sram_wvalid = 0U;
                vlSelf->rv32e__DOT__clint_wdata = 0U;
                vlSelf->rv32e__DOT__clint_wstrb = 0U;
                vlSelf->rv32e__DOT__clint_wvalid = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__35__addr 
                = vlSelf->rv32e__DOT__lsu_sram_awaddr;
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
                vlSelf->rv32e__DOT__sram_wdata = vlSelf->rv32e__DOT__lsu_sram_wdata;
                vlSelf->rv32e__DOT__sram_wstrb = vlSelf->rv32e__DOT__lsu_sram_wstrb;
                vlSelf->rv32e__DOT__sram_wvalid = vlSelf->rv32e__DOT__lsu_sram_wvalid;
                vlSelf->rv32e__DOT__sram_lsu_wready 
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
                vlSelf->rv32e__DOT__sram_lsu_wready 
                    = vlSelf->rv32e__DOT__lsu_sram_wvalid;
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
        vlSelf->rv32e__DOT__sram_lsu_wready = 0U;
    }
    if ((1U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__24__addr 
            = vlSelf->rv32e__DOT__if_sram_araddr;
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
                = vlSelf->rv32e__DOT__if_sram_araddr;
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
                vlSelf->rv32e__DOT__clint_araddr = vlSelf->rv32e__DOT__if_sram_araddr;
                vlSelf->rv32e__DOT__clint_arvalid = vlSelf->rv32e__DOT__if_sram_arvalid;
                vlSelf->rv32e__DOT__sram_if_arready 
                    = vlSelf->rv32e__DOT__clint_arready;
                vlSelf->rv32e__DOT__sram_lsu_arready = 0U;
                vlSelf->rv32e__DOT__sram_araddr = 0U;
                vlSelf->rv32e__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__uart_araddr = 0U;
                vlSelf->rv32e__DOT__uart_arvalid = 0U;
            } else {
                vlSelf->rv32e__DOT__uart_araddr = vlSelf->rv32e__DOT__if_sram_araddr;
                vlSelf->rv32e__DOT__uart_arvalid = vlSelf->rv32e__DOT__if_sram_arvalid;
                vlSelf->rv32e__DOT__sram_if_arready 
                    = vlSelf->rv32e__DOT__uart_arready;
                vlSelf->rv32e__DOT__sram_lsu_arready = 0U;
                vlSelf->rv32e__DOT__sram_araddr = 0U;
                vlSelf->rv32e__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__clint_araddr = 0U;
                vlSelf->rv32e__DOT__clint_arvalid = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__26__addr 
                = vlSelf->rv32e__DOT__if_sram_araddr;
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
                vlSelf->rv32e__DOT__sram_araddr = vlSelf->rv32e__DOT__if_sram_araddr;
                vlSelf->rv32e__DOT__sram_arvalid = vlSelf->rv32e__DOT__if_sram_arvalid;
                vlSelf->rv32e__DOT__sram_if_arready 
                    = vlSelf->rv32e__DOT__sram_arready;
                vlSelf->rv32e__DOT__sram_lsu_arready = 0U;
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
                vlSelf->rv32e__DOT__sram_if_arready = 1U;
                vlSelf->rv32e__DOT__sram_lsu_arready = 0U;
                VL_WRITEF("\033[31m[ARB][IFU][AR] \345\234\260\345\235\200\350\247\243\347\240\201\351\224\231\350\257\257\357\274\201\345\234\260\345\235\200: %x\033[0m\n",
                          32,vlSelf->rv32e__DOT__if_sram_araddr);
            }
        }
    } else if ((2U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__27__addr 
            = vlSelf->rv32e__DOT__lsu_sram_araddr;
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
                = vlSelf->rv32e__DOT__lsu_sram_araddr;
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
                vlSelf->rv32e__DOT__clint_araddr = vlSelf->rv32e__DOT__lsu_sram_araddr;
                vlSelf->rv32e__DOT__clint_arvalid = vlSelf->rv32e__DOT__lsu_sram_arvalid;
                vlSelf->rv32e__DOT__sram_lsu_arready 
                    = vlSelf->rv32e__DOT__clint_arready;
                vlSelf->rv32e__DOT__sram_if_arready = 0U;
                vlSelf->rv32e__DOT__sram_araddr = 0U;
                vlSelf->rv32e__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__uart_araddr = 0U;
                vlSelf->rv32e__DOT__uart_arvalid = 0U;
            } else {
                vlSelf->rv32e__DOT__uart_araddr = vlSelf->rv32e__DOT__lsu_sram_araddr;
                vlSelf->rv32e__DOT__uart_arvalid = vlSelf->rv32e__DOT__lsu_sram_arvalid;
                vlSelf->rv32e__DOT__sram_lsu_arready 
                    = vlSelf->rv32e__DOT__uart_arready;
                vlSelf->rv32e__DOT__sram_if_arready = 0U;
                vlSelf->rv32e__DOT__sram_araddr = 0U;
                vlSelf->rv32e__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__clint_araddr = 0U;
                vlSelf->rv32e__DOT__clint_arvalid = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__addr 
                = vlSelf->rv32e__DOT__lsu_sram_araddr;
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
            if (VL_LIKELY((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__29__Vfuncout)))) {
                vlSelf->rv32e__DOT__sram_araddr = vlSelf->rv32e__DOT__lsu_sram_araddr;
                vlSelf->rv32e__DOT__sram_arvalid = vlSelf->rv32e__DOT__lsu_sram_arvalid;
                vlSelf->rv32e__DOT__sram_lsu_arready 
                    = vlSelf->rv32e__DOT__sram_arready;
                vlSelf->rv32e__DOT__sram_if_arready = 0U;
                vlSelf->rv32e__DOT__uart_araddr = 0U;
                vlSelf->rv32e__DOT__uart_arvalid = 0U;
                vlSelf->rv32e__DOT__clint_araddr = 0U;
                vlSelf->rv32e__DOT__clint_arvalid = 0U;
            } else {
                VL_WRITEF("\033[31m[ARB][LSU][AR] \345\234\260\345\235\200\350\247\243\347\240\201\351\224\231\350\257\257\357\274\201\345\234\260\345\235\200: %x\033[0m\n",
                          32,vlSelf->rv32e__DOT__lsu_sram_araddr);
                vlSelf->rv32e__DOT__sram_araddr = 0U;
                vlSelf->rv32e__DOT__sram_arvalid = 0U;
                vlSelf->rv32e__DOT__uart_araddr = 0U;
                vlSelf->rv32e__DOT__uart_arvalid = 0U;
                vlSelf->rv32e__DOT__clint_araddr = 0U;
                vlSelf->rv32e__DOT__clint_arvalid = 0U;
                vlSelf->rv32e__DOT__sram_lsu_arready = 1U;
                vlSelf->rv32e__DOT__sram_if_arready = 0U;
            }
        }
    } else if ((4U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->rv32e__DOT__sram_if_arready = vlSelf->rv32e__DOT__if_sram_arvalid;
        vlSelf->rv32e__DOT__sram_lsu_arready = vlSelf->rv32e__DOT__lsu_sram_arvalid;
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
        vlSelf->rv32e__DOT__sram_if_arready = 0U;
        vlSelf->rv32e__DOT__sram_lsu_arready = 0U;
    }
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0 
        = ((IData)(vlSelf->rv32e__DOT__ex_lsu_rd) == (IData)(vlSelf->rv32e__DOT__id_wb_rs2));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hc613623f__0 
        = (((IData)(vlSelf->rv32e__DOT__ex_lsu_rd) 
            == (IData)(vlSelf->rv32e__DOT__id_wb_rs1)) 
           & (IData)(vlSelf->rv32e__DOT__ex_lsu_valid));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h69af1a50__0 
        = ((IData)(vlSelf->rv32e__DOT__ex_lsu_RegWrite) 
           & (0U != (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h384f4e33__0 
        = ((IData)(vlSelf->rv32e__DOT__lsu_wb_RegWrite) 
           & (0U != (IData)(vlSelf->rv32e__DOT__lsu_wb_rd)));
    vlSelf->rv32e__DOT__sram_bready = 0U;
    vlSelf->rv32e__DOT__uart_bready = 0U;
    vlSelf->rv32e__DOT__clint_bready = 0U;
    vlSelf->rv32e__DOT__sram_lsu_bresp = 0U;
    vlSelf->rv32e__DOT__sram_lsu_bvalid = 0U;
    if ((3U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__addr 
            = vlSelf->rv32e__DOT__lsu_sram_awaddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__addr))
                                  ? 3U : 0U)));
        if ((2U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__Vfuncout))) {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__addr 
                = vlSelf->rv32e__DOT__lsu_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__Vfuncout))) {
                vlSelf->rv32e__DOT__sram_lsu_bresp 
                    = vlSelf->rv32e__DOT__clint_bresp;
                vlSelf->rv32e__DOT__sram_lsu_bvalid 
                    = vlSelf->rv32e__DOT__clint_bvalid;
                vlSelf->rv32e__DOT__clint_bready = vlSelf->rv32e__DOT__lsu_sram_bready;
                vlSelf->rv32e__DOT__sram_bready = 0U;
                vlSelf->rv32e__DOT__uart_bready = 0U;
            } else {
                vlSelf->rv32e__DOT__sram_lsu_bresp 
                    = vlSelf->rv32e__DOT__uart_bresp;
                vlSelf->rv32e__DOT__sram_lsu_bvalid 
                    = vlSelf->rv32e__DOT__uart_bvalid;
                vlSelf->rv32e__DOT__uart_bready = vlSelf->rv32e__DOT__lsu_sram_bready;
                vlSelf->rv32e__DOT__sram_bready = 0U;
                vlSelf->rv32e__DOT__clint_bready = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__addr 
                = vlSelf->rv32e__DOT__lsu_sram_awaddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__Vfuncout))) {
                vlSelf->rv32e__DOT__sram_lsu_bresp 
                    = vlSelf->rv32e__DOT__sram_bresp;
                vlSelf->rv32e__DOT__sram_lsu_bvalid 
                    = vlSelf->rv32e__DOT__sram_bvalid;
                vlSelf->rv32e__DOT__sram_bready = vlSelf->rv32e__DOT__lsu_sram_bready;
                vlSelf->rv32e__DOT__uart_bready = 0U;
                vlSelf->rv32e__DOT__clint_bready = 0U;
            } else {
                vlSelf->rv32e__DOT__sram_lsu_bresp = 3U;
                vlSelf->rv32e__DOT__sram_lsu_bvalid 
                    = vlSelf->rv32e__DOT__lsu_sram_awvalid;
                vlSelf->rv32e__DOT__sram_bready = 0U;
                vlSelf->rv32e__DOT__uart_bready = 0U;
                vlSelf->rv32e__DOT__clint_bready = 0U;
            }
        }
    } else if ((4U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        if (vlSelf->rv32e__DOT__lsu_sram_awvalid) {
            vlSelf->rv32e__DOT__sram_lsu_bresp = 3U;
            vlSelf->rv32e__DOT__sram_lsu_bvalid = 1U;
        }
        vlSelf->rv32e__DOT__sram_bready = 0U;
        vlSelf->rv32e__DOT__uart_bready = 0U;
        vlSelf->rv32e__DOT__clint_bready = 0U;
    } else {
        vlSelf->rv32e__DOT__sram_bready = 0U;
        vlSelf->rv32e__DOT__uart_bready = 0U;
        vlSelf->rv32e__DOT__clint_bready = 0U;
        vlSelf->rv32e__DOT__sram_lsu_bresp = 0U;
        vlSelf->rv32e__DOT__sram_lsu_bvalid = 0U;
    }
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hb53dc38f__0 
        = ((IData)(vlSelf->rv32e__DOT__lsu__DOT__l_load) 
           & ((IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_en) 
              & (0U != (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr))));
    vlSelf->rv32e__DOT__sram_rready = 0U;
    vlSelf->rv32e__DOT__uart_rready = 0U;
    vlSelf->rv32e__DOT__clint_rready = 0U;
    vlSelf->rv32e__DOT__sram_if_rdata = 0U;
    vlSelf->rv32e__DOT__sram_if_rvalid = 0U;
    vlSelf->rv32e__DOT__sram_if_rresp = 0U;
    vlSelf->rv32e__DOT__sram_lsu_rdata = 0U;
    vlSelf->rv32e__DOT__sram_lsu_rvalid = 0U;
    vlSelf->rv32e__DOT__sram_lsu_rresp = 0U;
    if ((1U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__36__addr 
            = vlSelf->rv32e__DOT__if_sram_araddr;
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
                = vlSelf->rv32e__DOT__if_sram_araddr;
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
                vlSelf->rv32e__DOT__sram_if_rdata = vlSelf->rv32e__DOT__clint_rdata;
                vlSelf->rv32e__DOT__sram_if_rvalid 
                    = vlSelf->rv32e__DOT__clint_rvalid;
                vlSelf->rv32e__DOT__sram_if_rresp = vlSelf->rv32e__DOT__clint_rresp;
                vlSelf->rv32e__DOT__clint_rready = vlSelf->rv32e__DOT__if_sram_rready;
                vlSelf->rv32e__DOT__sram_rready = 0U;
                vlSelf->rv32e__DOT__uart_rready = 0U;
            } else {
                vlSelf->rv32e__DOT__sram_if_rdata = vlSelf->rv32e__DOT__uart_rdata;
                vlSelf->rv32e__DOT__sram_if_rvalid 
                    = vlSelf->rv32e__DOT__uart_rvalid;
                vlSelf->rv32e__DOT__sram_if_rresp = vlSelf->rv32e__DOT__uart_rresp;
                vlSelf->rv32e__DOT__uart_rready = vlSelf->rv32e__DOT__if_sram_rready;
                vlSelf->rv32e__DOT__sram_rready = 0U;
                vlSelf->rv32e__DOT__clint_rready = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__38__addr 
                = vlSelf->rv32e__DOT__if_sram_araddr;
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
                vlSelf->rv32e__DOT__sram_if_rdata = vlSelf->rv32e__DOT__sram_rdata;
                vlSelf->rv32e__DOT__sram_if_rvalid 
                    = vlSelf->rv32e__DOT__sram_rvalid;
                vlSelf->rv32e__DOT__sram_if_rresp = vlSelf->rv32e__DOT__sram_rresp;
                vlSelf->rv32e__DOT__sram_rready = vlSelf->rv32e__DOT__if_sram_rready;
                vlSelf->rv32e__DOT__uart_rready = 0U;
                vlSelf->rv32e__DOT__clint_rready = 0U;
            } else {
                vlSelf->rv32e__DOT__sram_if_rdata = 0U;
                vlSelf->rv32e__DOT__sram_if_rvalid 
                    = vlSelf->rv32e__DOT__if_sram_arvalid;
                vlSelf->rv32e__DOT__sram_if_rresp = 3U;
                vlSelf->rv32e__DOT__sram_rready = 0U;
                vlSelf->rv32e__DOT__uart_rready = 0U;
                vlSelf->rv32e__DOT__clint_rready = 0U;
            }
        }
    } else if ((2U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr 
            = vlSelf->rv32e__DOT__lsu_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr))
                                  ? 3U : 0U)));
        if ((2U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__Vfuncout))) {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr 
                = vlSelf->rv32e__DOT__lsu_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__Vfuncout))) {
                vlSelf->rv32e__DOT__sram_lsu_rdata 
                    = vlSelf->rv32e__DOT__clint_rdata;
                vlSelf->rv32e__DOT__sram_lsu_rvalid 
                    = vlSelf->rv32e__DOT__clint_rvalid;
                vlSelf->rv32e__DOT__sram_lsu_rresp 
                    = vlSelf->rv32e__DOT__clint_rresp;
                vlSelf->rv32e__DOT__clint_rready = vlSelf->rv32e__DOT__lsu_sram_rready;
                vlSelf->rv32e__DOT__sram_rready = 0U;
                vlSelf->rv32e__DOT__uart_rready = 0U;
            } else {
                vlSelf->rv32e__DOT__sram_lsu_rdata 
                    = vlSelf->rv32e__DOT__uart_rdata;
                vlSelf->rv32e__DOT__sram_lsu_rvalid 
                    = vlSelf->rv32e__DOT__uart_rvalid;
                vlSelf->rv32e__DOT__sram_lsu_rresp 
                    = vlSelf->rv32e__DOT__uart_rresp;
                vlSelf->rv32e__DOT__uart_rready = vlSelf->rv32e__DOT__lsu_sram_rready;
                vlSelf->rv32e__DOT__sram_rready = 0U;
                vlSelf->rv32e__DOT__clint_rready = 0U;
            }
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr 
                = vlSelf->rv32e__DOT__lsu_sram_araddr;
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__Vfuncout 
                = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr) 
                    & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr))
                    ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr) 
                             & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr))
                             ? 2U : (((0xa0002000U 
                                       <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr) 
                                      & (0xa0002007U 
                                         >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr))
                                      ? 3U : 0U)));
            if ((1U & (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__Vfuncout))) {
                vlSelf->rv32e__DOT__sram_lsu_rdata 
                    = vlSelf->rv32e__DOT__sram_rdata;
                vlSelf->rv32e__DOT__sram_lsu_rvalid 
                    = vlSelf->rv32e__DOT__sram_rvalid;
                vlSelf->rv32e__DOT__sram_lsu_rresp 
                    = vlSelf->rv32e__DOT__sram_rresp;
                vlSelf->rv32e__DOT__sram_rready = vlSelf->rv32e__DOT__lsu_sram_rready;
                vlSelf->rv32e__DOT__uart_rready = 0U;
                vlSelf->rv32e__DOT__clint_rready = 0U;
            } else {
                vlSelf->rv32e__DOT__sram_lsu_rdata = 0U;
                vlSelf->rv32e__DOT__sram_lsu_rvalid 
                    = vlSelf->rv32e__DOT__lsu_sram_arvalid;
                vlSelf->rv32e__DOT__sram_lsu_rresp = 3U;
                vlSelf->rv32e__DOT__sram_rready = 0U;
                vlSelf->rv32e__DOT__uart_rready = 0U;
                vlSelf->rv32e__DOT__clint_rready = 0U;
            }
        }
    } else if ((4U == (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        if (vlSelf->rv32e__DOT__if_sram_arvalid) {
            vlSelf->rv32e__DOT__sram_if_rdata = 0U;
            vlSelf->rv32e__DOT__sram_if_rvalid = 1U;
            vlSelf->rv32e__DOT__sram_if_rresp = 3U;
        } else if (vlSelf->rv32e__DOT__lsu_sram_arvalid) {
            vlSelf->rv32e__DOT__sram_lsu_rdata = 0U;
            vlSelf->rv32e__DOT__sram_lsu_rvalid = 1U;
            vlSelf->rv32e__DOT__sram_lsu_rresp = 3U;
        }
        vlSelf->rv32e__DOT__sram_rready = 0U;
        vlSelf->rv32e__DOT__uart_rready = 0U;
        vlSelf->rv32e__DOT__clint_rready = 0U;
    } else {
        vlSelf->rv32e__DOT__sram_rready = 0U;
        vlSelf->rv32e__DOT__uart_rready = 0U;
        vlSelf->rv32e__DOT__clint_rready = 0U;
        vlSelf->rv32e__DOT__sram_if_rdata = 0U;
        vlSelf->rv32e__DOT__sram_if_rvalid = 0U;
        vlSelf->rv32e__DOT__sram_if_rresp = 0U;
        vlSelf->rv32e__DOT__sram_lsu_rdata = 0U;
        vlSelf->rv32e__DOT__sram_lsu_rvalid = 0U;
        vlSelf->rv32e__DOT__sram_lsu_rresp = 0U;
    }
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
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h69af1a50__0) 
           & ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0) 
              & (IData)(vlSelf->rv32e__DOT__ex_lsu_valid)));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h9653a62d__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h69af1a50__0) 
           & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hc613623f__0));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h3556a05f__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h384f4e33__0) 
           & (((IData)(vlSelf->rv32e__DOT__id_wb_rs2) 
               == (IData)(vlSelf->rv32e__DOT__lsu_wb_rd)) 
              & (IData)(vlSelf->rv32e__DOT__lsu_wb_valid)));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h666fa1ae__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h384f4e33__0) 
           & (((IData)(vlSelf->rv32e__DOT__id_wb_rs1) 
               == (IData)(vlSelf->rv32e__DOT__lsu_wb_rd)) 
              & (IData)(vlSelf->rv32e__DOT__lsu_wb_valid)));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hadc13f7a__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hb53dc38f__0) 
           & ((IData)(vlSelf->rv32e__DOT__id_wb_rs2) 
              == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr)));
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h0017749a__0 
        = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hb53dc38f__0) 
           & ((IData)(vlSelf->rv32e__DOT__id_wb_rs1) 
              == (IData)(vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr)));
    if ((4U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))) {
        vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
            = ((2U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))
                ? 0U : ((1U & (IData)(vlSelf->rv32e__DOT__axi_arb__DOT__current_master))
                         ? 0U : (((((IData)(vlSelf->rv32e__DOT__sram_if_rvalid) 
                                    & (IData)(vlSelf->rv32e__DOT__if_sram_rready)) 
                                   | ((IData)(vlSelf->rv32e__DOT__sram_lsu_rvalid) 
                                      & (IData)(vlSelf->rv32e__DOT__lsu_sram_rready))) 
                                  | ((IData)(vlSelf->rv32e__DOT__sram_lsu_bvalid) 
                                     & (IData)(vlSelf->rv32e__DOT__lsu_sram_bready)))
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
    } else if (vlSelf->rv32e__DOT__lsu_sram_awvalid) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr 
            = vlSelf->rv32e__DOT__lsu_sram_awaddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__addr))
                                  ? 3U : 0U)));
        if ((1U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__9__Vfuncout))) {
            vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 3U;
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__10__addr 
                = vlSelf->rv32e__DOT__lsu_sram_awaddr;
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
                vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 3U;
            } else {
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__11__addr 
                    = vlSelf->rv32e__DOT__lsu_sram_awaddr;
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
                        ? 3U : 4U);
            }
        }
    } else if (vlSelf->rv32e__DOT__lsu_sram_arvalid) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr 
            = vlSelf->rv32e__DOT__lsu_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__addr))
                                  ? 3U : 0U)));
        if ((1U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__15__Vfuncout))) {
            vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 2U;
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__16__addr 
                = vlSelf->rv32e__DOT__lsu_sram_araddr;
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
                vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 2U;
            } else {
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__17__addr 
                    = vlSelf->rv32e__DOT__lsu_sram_araddr;
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
                        ? 2U : 4U);
            }
        }
    } else if (vlSelf->rv32e__DOT__if_sram_arvalid) {
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr 
            = vlSelf->rv32e__DOT__if_sram_araddr;
        vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__Vfuncout 
            = (((0x80000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr) 
                & (0x87ffffffU >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr))
                ? 1U : (((0xa0000000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr) 
                         & (0xa0000007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr))
                         ? 2U : (((0xa0002000U <= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr) 
                                  & (0xa0002007U >= vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__addr))
                                  ? 3U : 0U)));
        if ((1U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__21__Vfuncout))) {
            vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 1U;
        } else {
            vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__addr 
                = vlSelf->rv32e__DOT__if_sram_araddr;
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
            if ((2U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__22__Vfuncout))) {
                vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 1U;
            } else {
                vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__addr 
                    = vlSelf->rv32e__DOT__if_sram_araddr;
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
                vlSelf->rv32e__DOT__axi_arb__DOT__next_master 
                    = ((3U == (IData)(vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__23__Vfuncout))
                        ? 1U : 4U);
            }
        }
    } else {
        vlSelf->rv32e__DOT__axi_arb__DOT__next_master = 0U;
    }
    vlSelf->rv32e__DOT__exu__DOT__src2 = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0)
                                           ? vlSelf->rv32e__DOT__ex_lsu_process_result
                                           : ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h3556a05f__0)
                                               ? vlSelf->rv32e__DOT__lsu_wb_write_rd_data
                                               : ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hadc13f7a__0)
                                                   ? vlSelf->rv32e__DOT__lsu_wb_write_rd_data
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->rv32e__DOT__id_wb_rs2))
                                                    ? 0U
                                                    : 
                                                   vlSelf->rv32e__DOT__wbu__DOT__regs
                                                   [vlSelf->rv32e__DOT__id_wb_rs2]))));
    vlSelf->rv32e__DOT__exu__DOT__load_use_flag = (
                                                   ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h0017749a__0) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hadc13f7a__0) 
                                                       << 2U) 
                                                      | ((((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h804502ec__0) 
                                                           & ((0U 
                                                               != (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)) 
                                                              & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hc613623f__0))) 
                                                          << 1U) 
                                                         | ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h804502ec__0) 
                                                            & ((IData)(vlSelf->rv32e__DOT__ex_lsu_valid) 
                                                               & ((0U 
                                                                   != (IData)(vlSelf->rv32e__DOT__ex_lsu_rd)) 
                                                                  & (IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0)))))));
    vlSelf->rv32e__DOT__exu__DOT__src1 = ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h9653a62d__0)
                                           ? vlSelf->rv32e__DOT__ex_lsu_process_result
                                           : ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h666fa1ae__0)
                                               ? vlSelf->rv32e__DOT__lsu_wb_write_rd_data
                                               : ((IData)(vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h0017749a__0)
                                                   ? vlSelf->rv32e__DOT__lsu_wb_write_rd_data
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->rv32e__DOT__id_wb_rs1))
                                                    ? 0U
                                                    : 
                                                   vlSelf->rv32e__DOT__wbu__DOT__regs
                                                   [vlSelf->rv32e__DOT__id_wb_rs1]))));
    if (((IData)(vlSelf->rv32e__DOT__id_ex_MemRead) 
         | (IData)(vlSelf->rv32e__DOT__id_ex_MemWrite))) {
        vlSelf->rv32e__DOT__exu__DOT__ex_num2 = vlSelf->rv32e__DOT__id_ex_imm;
        vlSelf->rv32e__DOT__exu__DOT__ex_num1 = vlSelf->rv32e__DOT__exu__DOT__src1;
    } else if (((IData)(vlSelf->rv32e__DOT__id_ex_jal) 
                | (IData)(vlSelf->rv32e__DOT__id_ex_jalr))) {
        vlSelf->rv32e__DOT__exu__DOT__ex_num2 = 4U;
        vlSelf->rv32e__DOT__exu__DOT__ex_num1 = vlSelf->rv32e__DOT__id_ex_pc;
    } else if ((0x37U == (IData)(vlSelf->rv32e__DOT__id_ex_opcode))) {
        vlSelf->rv32e__DOT__exu__DOT__ex_num2 = 0U;
        vlSelf->rv32e__DOT__exu__DOT__ex_num1 = vlSelf->rv32e__DOT__id_ex_imm;
    } else if ((0x17U == (IData)(vlSelf->rv32e__DOT__id_ex_opcode))) {
        vlSelf->rv32e__DOT__exu__DOT__ex_num2 = vlSelf->rv32e__DOT__id_ex_imm;
        vlSelf->rv32e__DOT__exu__DOT__ex_num1 = vlSelf->rv32e__DOT__id_ex_pc;
    } else {
        vlSelf->rv32e__DOT__exu__DOT__ex_num2 = (((
                                                   (5U 
                                                    == (IData)(vlSelf->rv32e__DOT__id_ex_alu_op)) 
                                                   | (9U 
                                                      == (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))) 
                                                  | (8U 
                                                     == (IData)(vlSelf->rv32e__DOT__id_ex_alu_op)))
                                                  ? 
                                                 ((IData)(
                                                          ((0x10U 
                                                            == 
                                                            (0x7cU 
                                                             & (IData)(vlSelf->rv32e__DOT__id_ex_opcode))) 
                                                           & (~ 
                                                              ((IData)(vlSelf->rv32e__DOT__id_ex_shamt) 
                                                               >> 5U))))
                                                   ? 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->rv32e__DOT__id_ex_shamt))
                                                   : 
                                                  ((0xcU 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->rv32e__DOT__id_ex_opcode) 
                                                        >> 2U)))
                                                    ? 
                                                   (0x1fU 
                                                    & vlSelf->rv32e__DOT__exu__DOT__src2)
                                                    : 0U))
                                                  : 
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
                                                   ? vlSelf->rv32e__DOT__exu__DOT__src2
                                                   : vlSelf->rv32e__DOT__id_ex_imm));
        vlSelf->rv32e__DOT__exu__DOT__ex_num1 = vlSelf->rv32e__DOT__exu__DOT__src1;
    }
    vlSelf->rv32e__DOT__ex_ready = (((~ (IData)(vlSelf->rv32e__DOT__ex_lsu_valid)) 
                                     | (IData)(vlSelf->rv32e__DOT__lsu_ex_ready)) 
                                    & (0U == (IData)(vlSelf->rv32e__DOT__exu__DOT__load_use_flag)));
    vlSelf->rv32e__DOT__exu__DOT__alu_less = ((7U == (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                                               ? VL_LTS_III(32, vlSelf->rv32e__DOT__exu__DOT__ex_num1, vlSelf->rv32e__DOT__exu__DOT__ex_num2)
                                               : ((6U 
                                                   == (IData)(vlSelf->rv32e__DOT__id_ex_alu_op)) 
                                                  & (vlSelf->rv32e__DOT__exu__DOT__ex_num1 
                                                     < vlSelf->rv32e__DOT__exu__DOT__ex_num2)));
    if ((8U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))) {
        if ((4U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))) {
            vlSelf->rv32e__DOT__exu__DOT__process_result = 0U;
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(2U, 0xdeadbeefU);
        } else if ((2U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))) {
            Vrv32e___024root____Vdpiimwrap_rv32e__DOT__ebreak_TOP(2U, 0xdeadbeefU);
            vlSelf->rv32e__DOT__exu__DOT__process_result = 0U;
        } else {
            vlSelf->rv32e__DOT__exu__DOT__process_result 
                = ((1U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                    ? (vlSelf->rv32e__DOT__exu__DOT__ex_num1 
                       >> (0x1fU & vlSelf->rv32e__DOT__exu__DOT__ex_num2))
                    : VL_SHIFTRS_III(32,32,5, vlSelf->rv32e__DOT__exu__DOT__ex_num1, 
                                     (0x1fU & vlSelf->rv32e__DOT__exu__DOT__ex_num2)));
        }
    } else {
        vlSelf->rv32e__DOT__exu__DOT__process_result 
            = ((4U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                ? ((2U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                    ? ((1U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                        ? (VL_LTS_III(32, vlSelf->rv32e__DOT__exu__DOT__ex_num1, vlSelf->rv32e__DOT__exu__DOT__ex_num2)
                            ? 1U : 0U) : ((vlSelf->rv32e__DOT__exu__DOT__ex_num1 
                                           < vlSelf->rv32e__DOT__exu__DOT__ex_num2)
                                           ? 1U : 0U))
                    : ((1U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                        ? (vlSelf->rv32e__DOT__exu__DOT__ex_num1 
                           << (0x1fU & vlSelf->rv32e__DOT__exu__DOT__ex_num2))
                        : (vlSelf->rv32e__DOT__exu__DOT__ex_num1 
                           ^ vlSelf->rv32e__DOT__exu__DOT__ex_num2)))
                : ((2U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                    ? ((1U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                        ? (vlSelf->rv32e__DOT__exu__DOT__ex_num1 
                           | vlSelf->rv32e__DOT__exu__DOT__ex_num2)
                        : (vlSelf->rv32e__DOT__exu__DOT__ex_num1 
                           & vlSelf->rv32e__DOT__exu__DOT__ex_num2))
                    : ((1U & (IData)(vlSelf->rv32e__DOT__id_ex_alu_op))
                        ? (vlSelf->rv32e__DOT__exu__DOT__ex_num1 
                           - vlSelf->rv32e__DOT__exu__DOT__ex_num2)
                        : (vlSelf->rv32e__DOT__exu__DOT__ex_num1 
                           + vlSelf->rv32e__DOT__exu__DOT__ex_num2))));
    }
    vlSelf->rv32e__DOT__exu__DOT__alu_zero = (0U == vlSelf->rv32e__DOT__exu__DOT__process_result);
    vlSelf->rv32e__DOT__exu__DOT__jal_target = (vlSelf->rv32e__DOT__id_ex_pc 
                                                + vlSelf->rv32e__DOT__id_ex_imm);
    vlSelf->rv32e__DOT__exu__DOT__jalr_target = (0xfffffffeU 
                                                 & (vlSelf->rv32e__DOT__exu__DOT__src1 
                                                    + vlSelf->rv32e__DOT__id_ex_imm));
    vlSelf->rv32e__DOT__exu__DOT__take_branch = ((0x63U 
                                                  == (IData)(vlSelf->rv32e__DOT__id_ex_opcode)) 
                                                 & (((((((1U 
                                                          == (IData)(vlSelf->rv32e__DOT__id_ex_func3)) 
                                                         & (~ (IData)(vlSelf->rv32e__DOT__exu__DOT__alu_zero))) 
                                                        | ((0U 
                                                            == (IData)(vlSelf->rv32e__DOT__id_ex_func3)) 
                                                           & (IData)(vlSelf->rv32e__DOT__exu__DOT__alu_zero))) 
                                                       | ((4U 
                                                           == (IData)(vlSelf->rv32e__DOT__id_ex_func3)) 
                                                          & (IData)(vlSelf->rv32e__DOT__exu__DOT__alu_less))) 
                                                      | ((5U 
                                                          == (IData)(vlSelf->rv32e__DOT__id_ex_func3)) 
                                                         & (~ (IData)(vlSelf->rv32e__DOT__exu__DOT__alu_less)))) 
                                                     | ((6U 
                                                         == (IData)(vlSelf->rv32e__DOT__id_ex_func3)) 
                                                        & (IData)(vlSelf->rv32e__DOT__exu__DOT__alu_less))) 
                                                    | ((7U 
                                                        == (IData)(vlSelf->rv32e__DOT__id_ex_func3)) 
                                                       & (~ (IData)(vlSelf->rv32e__DOT__exu__DOT__alu_less)))));
    if (vlSelf->rv32e__DOT__id_ex_jal) {
        vlSelf->rv32e__DOT__ex_flush = ((IData)(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->rv32e__DOT__exu__DOT__load_use_flag)))));
        vlSelf->rv32e__DOT__ex_flush_pc = vlSelf->rv32e__DOT__exu__DOT__jal_target;
    } else if (vlSelf->rv32e__DOT__id_ex_jalr) {
        vlSelf->rv32e__DOT__ex_flush = ((IData)(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->rv32e__DOT__exu__DOT__load_use_flag)))));
        vlSelf->rv32e__DOT__ex_flush_pc = vlSelf->rv32e__DOT__exu__DOT__jalr_target;
    } else if (vlSelf->rv32e__DOT__exu__DOT__take_branch) {
        vlSelf->rv32e__DOT__ex_flush = ((IData)(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->rv32e__DOT__exu__DOT__load_use_flag)))));
        vlSelf->rv32e__DOT__ex_flush_pc = (vlSelf->rv32e__DOT__id_ex_pc 
                                           + vlSelf->rv32e__DOT__id_ex_imm);
    } else if (vlSelf->rv32e__DOT__id_ex_csr_ecall) {
        vlSelf->rv32e__DOT__ex_flush = ((IData)(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->rv32e__DOT__exu__DOT__load_use_flag)))));
        vlSelf->rv32e__DOT__ex_flush_pc = vlSelf->rv32e__DOT__wb_ex_csr_num1;
    } else if (vlSelf->rv32e__DOT__id_ex_csr_mret) {
        vlSelf->rv32e__DOT__ex_flush = ((IData)(vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->rv32e__DOT__exu__DOT__load_use_flag)))));
        vlSelf->rv32e__DOT__ex_flush_pc = vlSelf->rv32e__DOT__wbu__DOT__CSR
            [vlSelf->rv32e__DOT__id_wb_csr_addr2];
    } else {
        vlSelf->rv32e__DOT__ex_flush = 0U;
        vlSelf->rv32e__DOT__ex_flush_pc = 0U;
    }
    vlSelf->rv32e__DOT__id_ready = (1U & ((~ (IData)(vlSelf->rv32e__DOT__ex_flush)) 
                                          & ((~ (IData)(vlSelf->rv32e__DOT__id_valid)) 
                                             | (IData)(vlSelf->rv32e__DOT__ex_ready))));
}

VL_ATTR_COLD void Vrv32e___024root___eval_stl(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vrv32e___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
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
    vlSelf->rv32e__DOT__IF_ID_pc = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__IF_ID_inst = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__IF_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_pc = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__id_ex_inst = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__id_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_ready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_rd = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__id_wb_rs1 = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__id_wb_rs2 = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__id_ex_zimm = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__id_ex_imm = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__id_ex_shamt = VL_RAND_RESET_I(6);
    vlSelf->rv32e__DOT__id_ex_alu_op = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__id_ex_MemLen = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__id_ex_MemWrite = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_MemRead = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_opcode = VL_RAND_RESET_I(7);
    vlSelf->rv32e__DOT__id_ex_func3 = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__id_ex_jal = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_jalr = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_csr = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_csr_wen1 = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_csr_wen2 = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_csr_ecall = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_csr_mret = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__id_ex_csr_op = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__id_ex_csr_wr_addr1 = VL_RAND_RESET_I(12);
    vlSelf->rv32e__DOT__id_ex_csr_wr_addr2 = VL_RAND_RESET_I(12);
    vlSelf->rv32e__DOT__id_wb_csr_addr1 = VL_RAND_RESET_I(12);
    vlSelf->rv32e__DOT__id_wb_csr_addr2 = VL_RAND_RESET_I(12);
    vlSelf->rv32e__DOT__ex_lsu_pc = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_lsu_inst = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_lsu_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu_ex_ready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_lsu_src2 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_lsu_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_lsu_rd = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__ex_lsu_MemRead = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_lsu_MemWrite = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_lsu_MemLen = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__ex_lsu_process_result = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_flush = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_flush_pc = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_lsu_csr = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_lsu_csr_wen1 = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_lsu_csr_wen2 = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr1 = VL_RAND_RESET_I(12);
    vlSelf->rv32e__DOT__ex_lsu_csr_wr_addr2 = VL_RAND_RESET_I(12);
    vlSelf->rv32e__DOT__ex_lsu_csr_wr_data1 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_lsu_csr_wr_data2 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_lsu_csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_lsu_csr_ecall = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_lsu_csr_mret = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ex_lsu_imm = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_lsu_opcode = VL_RAND_RESET_I(7);
    vlSelf->rv32e__DOT__lsu_wb_pc = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__lsu_wb_inst = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__lsu_wb_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu_wb_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu_wb_rd = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__lsu_wb_write_rd_data = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__lsu_wb_csr_wr_data1 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__lsu_wb_csr_wr_data2 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr1 = VL_RAND_RESET_I(12);
    vlSelf->rv32e__DOT__lsu_wb_csr_wr_addr2 = VL_RAND_RESET_I(12);
    vlSelf->rv32e__DOT__lsu_wb_csr_wen1 = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu_wb_csr_wen2 = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu_wb_flush = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__wb_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__wb_ex_csr_num1 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ex_lsu_forward_las = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu_sram_arvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_lsu_arready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu_sram_araddr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram_lsu_rdata = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram_lsu_rvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu_sram_rready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_lsu_rresp = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__lsu_sram_awaddr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__lsu_sram_awvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_lsu_awready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu_sram_wdata = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__lsu_sram_wstrb = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__lsu_sram_wvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_lsu_wready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_lsu_bresp = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__sram_lsu_bvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu_sram_bready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__if_sram_arvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_if_arready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__if_sram_araddr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram_if_rdata = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram_if_rvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__if_sram_rready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_if_rresp = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__sram_arvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_arready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_araddr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram_rdata = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram_rvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_rready = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_rresp = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__sram_awaddr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram_awvalid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram_awready = VL_RAND_RESET_I(1);
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
    vlSelf->rv32e__DOT__sram__DOT__read_addr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram__DOT__LFSR = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram__DOT__read_pending = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram__DOT__write_addr = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram__DOT__write_addr_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__sram__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__sram__DOT__write_strb = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__sram__DOT__write_data_valid = VL_RAND_RESET_I(1);
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
    vlSelf->rv32e__DOT__axi_arb__DOT__current_master = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__axi_arb__DOT__next_master = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__ifu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->rv32e__DOT__ifu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__ifu__DOT__once = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ifu__DOT__flush_reg = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ifu__DOT__flush_once = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__ifu__DOT__flush_pc_reg = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__idu__DOT__immI = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__idu__DOT__inst_type = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__exu__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__exu__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__exu__DOT__ex_num1 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__exu__DOT__ex_num2 = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__exu__DOT__process_result = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__exu__DOT__alu_zero = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__exu__DOT__alu_less = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__exu__DOT__jal_target = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__exu__DOT__jalr_target = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__exu__DOT__take_branch = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__exu__DOT__ex_flush_condition = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__exu__DOT__load_use_flag = VL_RAND_RESET_I(4);
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h9653a62d__0 = 0;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h666fa1ae__0 = 0;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h0017749a__0 = 0;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hadc13f7a__0 = 0;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h804502ec__0 = 0;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hc613623f__0 = 0;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_he5bf04e5__0 = 0;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hcfc89bc9__0 = 0;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h3556a05f__0 = 0;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h69af1a50__0 = 0;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_h384f4e33__0 = 0;
    vlSelf->rv32e__DOT__exu__DOT____VdfgTmp_hb53dc38f__0 = 0;
    vlSelf->rv32e__DOT__lsu__DOT__l_load = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu__DOT__l_rd_en = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu__DOT__l_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->rv32e__DOT__lsu__DOT__l_inst = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__lsu__DOT__l_pc = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__lsu__DOT__l_MemLen = VL_RAND_RESET_I(3);
    vlSelf->rv32e__DOT__lsu__DOT__l_opcode = VL_RAND_RESET_I(7);
    vlSelf->rv32e__DOT__lsu__DOT__read_pending = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu__DOT__write_pending = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu__DOT__read_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu__DOT__write_valid = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__lsu__DOT__read_lsu_data = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__lsu__DOT__rd_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->rv32e__DOT__wbu__DOT__CSR[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->rv32e__DOT__wbu__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rv32e__DOT__wbu__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->rv32e__DOT__wbu__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->rv32e__DOT__wbu__DOT__k = VL_RAND_RESET_I(32);
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
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__39__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__40__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__41__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__42__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__43__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__Vfuncout = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_rv32e__DOT__axi_arb__DOT__decode_address__44__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__rv32e__DOT__id_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rv32e__DOT__idu__DOT__inst_type = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__rv32e__DOT__lsu_ex_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rv32e__DOT__ifu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__rv32e__DOT__if_sram_arvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rv32e__DOT__if_sram_rready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rv32e__DOT__IF_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rv32e__DOT__ifu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__rv32e__DOT__ifu__DOT__once = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
