// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRV32E__SYMS_H_
#define VERILATED_VRV32E__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vrv32e.h"

// INCLUDE MODULE CLASSES
#include "Vrv32e___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vrv32e__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrv32e* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrv32e___024root               TOP;

    // CONSTRUCTORS
    Vrv32e__Syms(VerilatedContext* contextp, const char* namep, Vrv32e* modelp);
    ~Vrv32e__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
