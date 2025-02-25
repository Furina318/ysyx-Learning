// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_single_cycle.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv_single_cycle__Syms.h"
#include "Vriscv_single_cycle___024root.h"

void Vriscv_single_cycle___024root___ctor_var_reset(Vriscv_single_cycle___024root* vlSelf);

Vriscv_single_cycle___024root::Vriscv_single_cycle___024root(Vriscv_single_cycle__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vriscv_single_cycle___024root___ctor_var_reset(this);
}

void Vriscv_single_cycle___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vriscv_single_cycle___024root::~Vriscv_single_cycle___024root() {
}
