// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv32e.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vrv32e__Syms.h"
#include "Vrv32e___024root.h"

extern "C" unsigned int pmem_read(unsigned int raddr, int len);

VL_INLINE_OPT void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__if_stage__DOT__ifu_sram_inst__DOT__pmem_read_TOP\n"); );
    // Body
    unsigned int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    unsigned int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt, len__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

extern "C" void ebreak(int station, int inst);

VL_INLINE_OPT void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__id_stage__DOT__ebreak_TOP\n"); );
    // Body
    int station__Vcvt;
    for (size_t station__Vidx = 0; station__Vidx < 1; ++station__Vidx) station__Vcvt = station;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    ebreak(station__Vcvt, inst__Vcvt);
}

extern "C" void pmem_write(unsigned int waddr, unsigned int wdata, int len);

VL_INLINE_OPT void Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ len) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root____Vdpiimwrap_rv32e__DOT__mem_stage__DOT__mem_sram_inst__DOT__pmem_write_TOP\n"); );
    // Body
    unsigned int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    unsigned int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    pmem_write(waddr__Vcvt, wdata__Vcvt, len__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv32e___024root___dump_triggers__act(Vrv32e___024root* vlSelf);
#endif  // VL_DEBUG

void Vrv32e___024root___eval_triggers__act(Vrv32e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv32e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv32e___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->reset) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__reset))));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrv32e___024root___dump_triggers__act(vlSelf);
    }
#endif
}
