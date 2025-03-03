// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vonly_addi.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vonly_addi__Syms.h"
#include "Vonly_addi___024root.h"

extern "C" void dpi_ebreak();

VL_INLINE_OPT void Vonly_addi___024root____Vdpiimwrap_only_addi__DOT__dpi_ebreak_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonly_addi___024root____Vdpiimwrap_only_addi__DOT__dpi_ebreak_TOP\n"); );
    // Body
    dpi_ebreak();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vonly_addi___024root___dump_triggers__act(Vonly_addi___024root* vlSelf);
#endif  // VL_DEBUG

void Vonly_addi___024root___eval_triggers__act(Vonly_addi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonly_addi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonly_addi___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vonly_addi___024root___dump_triggers__act(vlSelf);
    }
#endif
}
