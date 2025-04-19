// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32e.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32e___024unit.h"

VL_ATTR_COLD void Vrv32e___024unit___ctor_var_reset(Vrv32e___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrv32e___024unit___ctor_var_reset\n"); );
    // Body
    for (int __Vi = 0; __Vi < 8; ++__Vi) {
        vlSelf->__Venumtab_enum_name0[__Vi] = std::string{""};
    }
    vlSelf->__Venumtab_enum_name0[0] = std::string{"IDLE"};
    vlSelf->__Venumtab_enum_name0[1] = std::string{"READ_ADDR"};
    vlSelf->__Venumtab_enum_name0[2] = std::string{"READ_DATA"};
    vlSelf->__Venumtab_enum_name0[3] = std::string{"WRITE_ADDR"};
    vlSelf->__Venumtab_enum_name0[4] = std::string{"WRITE_DATA"};
    vlSelf->__Venumtab_enum_name0[5] = std::string{"WRITE_RESP"};
    for (int __Vi = 0; __Vi < 8; ++__Vi) {
        vlSelf->__Venumtab_enum_name1[__Vi] = std::string{""};
    }
    vlSelf->__Venumtab_enum_name1[0] = std::string{"IDLE"};
    vlSelf->__Venumtab_enum_name1[1] = std::string{"READ_ADDR"};
    vlSelf->__Venumtab_enum_name1[2] = std::string{"READ_DATA"};
    vlSelf->__Venumtab_enum_name1[3] = std::string{"WRITE_ADDR"};
    vlSelf->__Venumtab_enum_name1[4] = std::string{"WRITE_DATA"};
    vlSelf->__Venumtab_enum_name1[5] = std::string{"WRITE_RESP"};
    vlSelf->__Venumtab_enum_name1[6] = std::string{"STALL"};
}
