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
    // DPI import at /home/furina/ysyx-workbench/npc/soc-vsrc/CLINT.v:39:34
    extern void ebreak(int station, int inst);
    // DPI import at /home/furina/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at ../ysyxSoC/build/ysyxSoCFull.v:5402:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/furina/ysyx-workbench/npc/soc-vsrc/SRAM.v:35:42
    extern unsigned int pmem_read(unsigned int raddr, int len);
    // DPI import at /home/furina/ysyx-workbench/npc/soc-vsrc/SRAM.v:36:34
    extern void pmem_write(unsigned int waddr, unsigned int wdata, int len);

#ifdef __cplusplus
}
#endif

#endif  // guard
