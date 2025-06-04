// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vrv32e__Syms.h"
#include "Vrv32e.h"
#include "Vrv32e___024root.h"

// FUNCTIONS
Vrv32e__Syms::~Vrv32e__Syms()
{
}

Vrv32e__Syms::Vrv32e__Syms(VerilatedContext* contextp, const char* namep, Vrv32e* modelp)
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
