// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_single_cycle.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv_single_cycle__Syms.h"
#include "Vriscv_single_cycle___024root.h"

extern "C" void dpi_ebreak();

VL_INLINE_OPT void Vriscv_single_cycle___024root____Vdpiimwrap_riscv_single_cycle__DOT__dpi_ebreak_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root____Vdpiimwrap_riscv_single_cycle__DOT__dpi_ebreak_TOP\n"); );
    // Body
    dpi_ebreak();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_single_cycle___024root___dump_triggers__act(Vriscv_single_cycle___024root* vlSelf);
#endif  // VL_DEBUG

void Vriscv_single_cycle___024root___eval_triggers__act(Vriscv_single_cycle___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_single_cycle__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_single_cycle___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv_single_cycle___024root___dump_triggers__act(vlSelf);
    }
#endif
}
