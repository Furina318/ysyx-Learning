// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaddi.h for the primary calling header

#include "verilated.h"

#include "Vaddi__Syms.h"
#include "Vaddi___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddi___024root___dump_triggers__act(Vaddi___024root* vlSelf);
#endif  // VL_DEBUG

void Vaddi___024root___eval_triggers__act(Vaddi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddi___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->reset) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__reset))));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaddi___024root___dump_triggers__act(vlSelf);
    }
#endif
}
