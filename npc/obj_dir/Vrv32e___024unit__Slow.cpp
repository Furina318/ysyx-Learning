// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32e.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32e__Syms.h"
#include "Vrv32e___024unit.h"
VlUnpacked<std::string, 8> Vrv32e___024unit::__Venumtab_enum_name0;
VlUnpacked<std::string, 8> Vrv32e___024unit::__Venumtab_enum_name1;

void Vrv32e___024unit___ctor_var_reset(Vrv32e___024unit* vlSelf);

Vrv32e___024unit::Vrv32e___024unit(Vrv32e__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrv32e___024unit___ctor_var_reset(this);
}

void Vrv32e___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrv32e___024unit::~Vrv32e___024unit() {
}
