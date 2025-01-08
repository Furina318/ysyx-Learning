// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdouble_sw__Syms.h"
#include "Vdouble_sw.h"
#include "Vdouble_sw___024root.h"

// FUNCTIONS
Vdouble_sw__Syms::~Vdouble_sw__Syms()
{
}

Vdouble_sw__Syms::Vdouble_sw__Syms(VerilatedContext* contextp, const char* namep, Vdouble_sw* modelp)
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
}
