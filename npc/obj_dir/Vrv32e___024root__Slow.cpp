// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32e.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32e__Syms.h"
#include "Vrv32e___024root.h"

void Vrv32e___024root___ctor_var_reset(Vrv32e___024root* vlSelf);

Vrv32e___024root::Vrv32e___024root(Vrv32e__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrv32e___024root___ctor_var_reset(this);
}

void Vrv32e___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrv32e___024root::~Vrv32e___024root() {
}
