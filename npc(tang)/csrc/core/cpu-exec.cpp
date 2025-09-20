#include "../include/common.h"
#include "../include/monitor.h"
#include "../include/trace.h"
#include "../include/switch.h"
#include "../include/debug.h"
#include "../include/macro.h"
#include "../include/difftest-def.h"

#include <time.h>
#include <sys/time.h>

#ifdef CONFIG_YSYXSOC
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull.h"
extern VysyxSoCFull *top;
#define pc top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__pc
#define inst 32//(uint32_t)(top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fu_to_du_bus & 0xFFFFFFFF)
#define exu_dnpc_valid top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exu_dnpc_valid
#define lsu_valid top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_valid
#define ifu_access_fault top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_access_fault
#define lsu_access_fault top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_access_fault
#define araddr top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_araddr
#define arvalid top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid
#define awaddr top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awaddr
#define wdata top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wdata
#define awvalid top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid
#else
#include "Vysyx_25020037_npc___024root.h"
#include "Vysyx_25020037_npc.h"
extern Vysyx_25020037_npc *top;
#define pc top->rootp->ysyx_25020037_npc__DOT__cpu__DOT__ifu_cpu__DOT__pc
#define inst 32
#endif

typedef struct {
    uint64_t count;      // 指令数量
    uint64_t clk;        // 消耗的时钟数
    uint64_t time;       // 消耗的时间(us)
} TypeStats;

typedef struct {
    uint64_t inst_sum;   // 总指令数
    uint64_t clk_sum;    // 总时钟数
    uint64_t g_timer;    // 总时间(us)
} Stats;
static Stats stats = {0};
static int prev_valid = 0;
static void exec_once();

static uint64_t us;
extern uint64_t get_time();
static uint64_t current_total_clk_reg = 0;
static int last_pc;


static void inst_infomation() {
    Log("IPC = %.4f", (double)stats.inst_sum / stats.clk_sum);
    Log("host time spent = %ld us", stats.g_timer);
    Log("total guest instructions = %ld", stats.inst_sum);
    Log("total guest clocks = %ld", stats.clk_sum);
    Log("simulation frequency = %ld inst/s", stats.inst_sum * 1000000 / stats.g_timer);
}

static void trace_and_difftest() {

#ifdef CONFIG_DIFFTEST
    difftest_step(pc, pc);
#endif

#ifdef CONFIG_WATCHPOINT			//监视点
  //printf("enter(1)\n");
  int sign = 0, i = 0;
  i = watchpoint_exec(&sign);
  if(sign == 1) {
    NPC_STATE = (NPC_STATE == NPC_END) ? NPC_END : NPC_STOP;
    printf("watchpoint %d not equavolent\n", i);
  }
  else if (sign == 2) {
    printf("caculate error\n");
    assert(0);
  }
#endif

}

void cpu_exec(int n){
    if(NPC_STATE == NPC_RUNING){
        if(n < 0){
            while(true){
#ifdef CONFIG_ITRACE
                iringbuf(pc, inst);
#endif
#ifdef CONFIG_YSYXSOC
                if(ifu_access_fault) {
                    printf("ifu_access_fault\n");
                    inst_infomation();
                    finish();
                    break;
                }
                if(lsu_access_fault) {
                    printf("lsu_access_fault\n");
                    inst_infomation();
                    finish();
                    break;
                }
#endif
                if(NPC_STATE == NPC_END || NPC_STATE == NPC_ABORT){
                    inst_infomation();
                    finish();
                    break;
                }
                else if (NPC_STATE == NPC_STOP) {
                    NPC_STATE = NPC_RUNING;
                    break;
                }
                exec_once();
            }
        }
        else{
            for(int i = 0; i < n; i++){
#ifdef CONFIG_ITRACE
                iringbuf(pc, inst);
#endif
#ifdef CONFIG_YSYXSOC
                if(ifu_access_fault) {
                    printf("ifu_access_fault\n");
                    inst_infomation();
                    finish();
                    break;
                }
                if(lsu_access_fault) {
                    printf("lsu_access_fault\n");
                    inst_infomation();
                    finish();
                    break;
                }
#endif
                if(NPC_STATE == NPC_RUNING) {
                    exec_once();
                    if(NPC_STATE == NPC_RUNING) printf("0x%08x: %08x\n", pc, inst);
                }
                else if (NPC_STATE == NPC_STOP) {
                    NPC_STATE = NPC_RUNING;
                    break;
                }
                else if(NPC_STATE == NPC_END || NPC_STATE == NPC_ABORT) {
                    inst_infomation();
                    finish();
                    break;
                }
            }
        }
    }
    else if(NPC_STATE == NPC_END) {
        printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
        return;
    }
}

static void exec_once() {
    stats.inst_sum++;
    last_pc = pc;

    uint64_t timer_start, timer_end, time_spent = 0;
    uint64_t clk_sum_reg = 0;
    int prev_valid_reg = 0x10;
    do{
#ifdef CONFIG_YSYXSOC
#ifdef CONFIG_DIFFTEST
        if((((araddr < 0x30000000) | (araddr > 0x3fffffff)) & arvalid) & 
           (((araddr < 0x0f000000) | (araddr > 0x0f002000)) & arvalid) & 
           (((araddr < 0xa0000000) | (araddr > 0xbfffffff)) & arvalid)) {difftest_skip_ref();}
        if((((awaddr < 0x30000000) | (awaddr > 0x3fffffff)) & awvalid) & 
           (((awaddr < 0x0f000000) | (awaddr > 0x0f002000)) & awvalid) & 
           (((awaddr < 0xa0000000) | (awaddr > 0xbfffffff)) & awvalid)) {difftest_skip_ref();}
#endif
#endif
        timer_start = get_time();
#ifdef CONFIG_NVBOARD
        nvboard_update();
#endif
        single_cycle();
        timer_end = get_time();
        time_spent += timer_end - timer_start;
        clk_sum_reg++;
    } while (pc == last_pc);
    
    stats.clk_sum += clk_sum_reg;
    stats.g_timer += time_spent;

#ifdef CONFIG_YSYXSOC
#ifdef CONFIG_DIFFTEST
    if(!exu_dnpc_valid & lsu_valid) trace_and_difftest();
#endif
#endif
}
