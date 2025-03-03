// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vonly_addi.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vonly_addi__Syms.h"
#include "Vonly_addi___024root.h"

void Vonly_addi___024root___ctor_var_reset(Vonly_addi___024root* vlSelf);

Vonly_addi___024root::Vonly_addi___024root(Vonly_addi__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vonly_addi___024root___ctor_var_reset(this);
}

void Vonly_addi___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vonly_addi___024root::~Vonly_addi___024root() {
}
