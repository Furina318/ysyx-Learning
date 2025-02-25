// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaddi.h for the primary calling header

#include "verilated.h"

#include "Vaddi__Syms.h"
#include "Vaddi___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaddi___024root___dump_triggers__stl(Vaddi___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaddi___024root___eval_triggers__stl(Vaddi___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaddi__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaddi___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaddi___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
