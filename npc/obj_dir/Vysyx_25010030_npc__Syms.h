// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYX_25010030_NPC__SYMS_H_
#define VERILATED_VYSYX_25010030_NPC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vysyx_25010030_npc.h"

// INCLUDE MODULE CLASSES
#include "Vysyx_25010030_npc___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vysyx_25010030_npc__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vysyx_25010030_npc* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vysyx_25010030_npc___024root   TOP;

    // CONSTRUCTORS
    Vysyx_25010030_npc__Syms(VerilatedContext* contextp, const char* namep, Vysyx_25010030_npc* modelp);
    ~Vysyx_25010030_npc__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
