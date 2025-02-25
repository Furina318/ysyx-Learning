// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRISCV_SINGLE_CYCLE__SYMS_H_
#define VERILATED_VRISCV_SINGLE_CYCLE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vriscv_single_cycle.h"

// INCLUDE MODULE CLASSES
#include "Vriscv_single_cycle___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vriscv_single_cycle__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vriscv_single_cycle* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vriscv_single_cycle___024root  TOP;

    // CONSTRUCTORS
    Vriscv_single_cycle__Syms(VerilatedContext* contextp, const char* namep, Vriscv_single_cycle* modelp);
    ~Vriscv_single_cycle__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
