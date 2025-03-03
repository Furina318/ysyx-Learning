// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VONLY_ADDI__SYMS_H_
#define VERILATED_VONLY_ADDI__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vonly_addi.h"

// INCLUDE MODULE CLASSES
#include "Vonly_addi___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vonly_addi__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vonly_addi* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vonly_addi___024root           TOP;

    // CONSTRUCTORS
    Vonly_addi__Syms(VerilatedContext* contextp, const char* namep, Vonly_addi* modelp);
    ~Vonly_addi__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
