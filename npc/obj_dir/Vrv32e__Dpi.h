// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VRV32E__DPI_H_
#define VERILATED_VRV32E__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/furina/ysyx-workbench/npc/pipeline-vsrc/rv32e.v:8:34
    extern void ebreak(int station, int inst);
    // DPI import at /home/furina/ysyx-workbench/npc/pipeline-vsrc/IF.v:18:42
    extern unsigned int pmem_read(unsigned int raddr, int len);
    // DPI import at /home/furina/ysyx-workbench/npc/pipeline-vsrc/LSU.v:64:34
    extern void pmem_write(unsigned int waddr, unsigned int wdata, int len);

#ifdef __cplusplus
}
#endif

#endif  // guard
