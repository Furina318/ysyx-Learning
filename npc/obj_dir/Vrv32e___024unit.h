// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv32e.h for the primary calling header

#ifndef VERILATED_VRV32E___024UNIT_H_
#define VERILATED_VRV32E___024UNIT_H_  // guard

#include "verilated.h"

class Vrv32e__Syms;

class Vrv32e___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    static VlUnpacked<std::string, 8> __Venumtab_enum_name0;
    static VlUnpacked<std::string, 8> __Venumtab_enum_name1;

    // INTERNAL VARIABLES
    Vrv32e__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv32e___024unit(Vrv32e__Syms* symsp, const char* v__name);
    ~Vrv32e___024unit();
    VL_UNCOPYABLE(Vrv32e___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
