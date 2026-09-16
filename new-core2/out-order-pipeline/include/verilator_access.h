#ifndef VERILATOR_ACCESS_H
#define VERILATOR_ACCESS_H

// Verilator 5 分层模型访问适配
// Verilator v4 通过 rootp->TOP__DOT__xxx__DOT__yyy 扁平访问内部信号;
// v5 改为分层访问: top-><顶层模块实例>-><子模块实例>->信号。
// 统一入口宏 (使用前需已声明 extern top):
//   CPU_TOP      : CPU 核心模块 ysyx_25010030 的类指针
//   SOC_ASIC_TOP : SoC 中 asic 模块的类指针 (仅 YSYXSOC 模式)
#ifdef YSYXSOC
#include "VysyxSoCFull.h"
#include "VysyxSoCFull_ysyxSoCFull.h"
#include "VysyxSoCFull_ysyxSoCASIC.h"
#include "VysyxSoCFull_CPU.h"
#include "VysyxSoCFull_ysyx_25010030.h"
#define CPU_TOP      (top->ysyxSoCFull->asic->cpu->cpu)
#define SOC_ASIC_TOP (top->ysyxSoCFull->asic)
#else
#include "Vysyx_25010030_npc.h"
#include "Vysyx_25010030_npc_ysyx_25010030_npc.h"
#include "Vysyx_25010030_npc_ysyx_25010030.h"
#define CPU_TOP      (top->ysyx_25010030_npc->cpu)
#endif

#endif
