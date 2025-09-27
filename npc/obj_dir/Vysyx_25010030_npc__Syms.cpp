// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_25010030_npc__pch.h"
#include "Vysyx_25010030_npc.h"
#include "Vysyx_25010030_npc___024root.h"

// FUNCTIONS
Vysyx_25010030_npc__Syms::~Vysyx_25010030_npc__Syms()
{
}

Vysyx_25010030_npc__Syms::Vysyx_25010030_npc__Syms(VerilatedContext* contextp, const char* namep, Vysyx_25010030_npc* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
