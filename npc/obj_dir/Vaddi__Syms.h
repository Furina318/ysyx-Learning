// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VADDI__SYMS_H_
#define VERILATED_VADDI__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vaddi.h"

// INCLUDE MODULE CLASSES
#include "Vaddi___024root.h"

// SYMS CLASS (contains all model state)
class Vaddi__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vaddi* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vaddi___024root                TOP;

    // CONSTRUCTORS
    Vaddi__Syms(VerilatedContext* contextp, const char* namep, Vaddi* modelp);
    ~Vaddi__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
