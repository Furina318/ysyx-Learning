// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/furina/ysyx-workbench/npc/pipeline-soc-vsrc/ysyx_25010030.v:79:34
    extern void ebreak(int station, int inst);
    // DPI import at /home/furina/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at ../ysyxSoC/build/ysyxSoCFull.v:6723:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/furina/ysyx-workbench/ysyxSoC/perip/psram/psram.v:8:32
    extern void psram_read(int addr, int* data);
    // DPI import at /home/furina/ysyx-workbench/ysyxSoC/perip/psram/psram.v:9:32
    extern void psram_write(int addr, int data, int mask);

#ifdef __cplusplus
}
#endif

#endif  // guard
