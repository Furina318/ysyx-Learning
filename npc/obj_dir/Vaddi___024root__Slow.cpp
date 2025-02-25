// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaddi.h for the primary calling header

#include "verilated.h"

#include "Vaddi__Syms.h"
#include "Vaddi___024root.h"

void Vaddi___024root___ctor_var_reset(Vaddi___024root* vlSelf);

Vaddi___024root::Vaddi___024root(Vaddi__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaddi___024root___ctor_var_reset(this);
}

void Vaddi___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vaddi___024root::~Vaddi___024root() {
}
