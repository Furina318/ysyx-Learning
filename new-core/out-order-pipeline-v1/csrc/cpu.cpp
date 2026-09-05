#include "../include/common.h"
#include "../include/utils.h"
#include "../include/debug.h"
#include "../include/macro.h"
#include "../include/conf.h"
#include "../include/paddr.h"
#include "../include/difftest.h"
#include "../include/watchpoint.h"
#include "svdpi.h"
#include "verilated_vcd_c.h"

extern vluint64_t main_time;

#ifdef YSYXSOC
#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Dpi.h"
#include "../../obj_dir/VysyxSoCFull___024root.h"
extern VysyxSoCFull *top;
#else
#include "Vysyx_25010030_npc.h"
#include "Vysyx_25010030_npc___024root.h"
#include "Vysyx_25010030_npc_ysyx_25010030_npc.h"
#include "Vysyx_25010030_npc_ysyx_25010030.h"
#include "Vysyx_25010030_npc__Dpi.h"
#include "../../obj_dir/Vysyx_25010030_npc___024root.h"
extern Vysyx_25010030_npc *top;
#endif

#ifdef NVBOARD
#include <nvboard.h>
#endif
/********extern functions or variables********/

extern void single_cycle(void);
extern VerilatedVcdC *tfp;
extern void die();
extern word_t expr(char *e);

extern void append_iringbuf(char *s);
extern void display_iringbuf(void);

#ifdef CONFIG_DIFFTEST
extern void difftest_step(vaddr_t pc, vaddr_t npc, bool dual_cmt);
extern void difftest_skip_ref();
// extern void update_cpu_state(CPU_state *cpu);
// extern void (*ref_difftest_regcpy)(void *dut, bool direction);
#endif

int run_time = 0;
#define start_time 10
bool once = false;
/*********************************************/

#define MAX_INST_TO_PRINT 20
static uint64_t g_nr_guest_inst = 0;
static bool g_print_step = false;
IFDEF(CONFIG_ITRACE,char logbuf[128]);

static struct {
    word_t pc;
    word_t next_pc;
    word_t inst;
    word_t ninst;
} PCSet = {0, 0, 0, 0};

//==================================== 统计与性能计数 =============================//
uint64_t cycle_sum;
static void statistic() {
    Log("total guest instructions = %lu", g_nr_guest_inst);
    if (cycle_sum > 0 && g_nr_guest_inst > 0) {
        printf("\033[33mIPC = %lf\033[0m\n", (double)g_nr_guest_inst / cycle_sum);
        printf("\033[33m平均每条指令执行周期: %lf\033[0m\n", (double)cycle_sum / g_nr_guest_inst);
    } else {
        printf("\033[33mIPC = N/A (no cycles or instructions)\033[0m\n");
    }
    // printf("+--------------------------+------------+-----------+\n");
    // printf("| iCache 统计信息          | 数量       | 占比 (%%)  |\n");
    // printf("+--------------------------+------------+-----------+\n");
    // printf("| 总访问次数               | %10" PRIu64 " |     -     |\n", icache_total_access);
    // printf("| 命中次数                 | %10" PRIu64 " | %7.2f %% |\n", 
    //        icache_hit, 
    //        icache_total_access ? (double)icache_hit / icache_total_access * 100 : 0.0);
    // printf("| 未命中次数               | %10" PRIu64 " | %7.2f %% |\n", 
    //        icache_miss, 
    //        icache_total_access ? (double)icache_miss / icache_total_access * 100 : 0.0);
    // printf("| 平均每条指令缓存访问次数 |            | %7.2f   |\n", 
    //        total ? (double)icache_total_access / total : 0.0);
    // printf("+--------------------------+------------+-----------+\n");
}

//===============================================================================//

// static void check_resp() {
// #ifdef YSYXSOC
// #define lsu_rresp top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_rresp
// #define lsu_bresp top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_lsu_bresp
// #define ifu_rresp top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__axi_if_rresp
// #else
// #define lsu_rresp top->rootp->ysyx_25010030_npc->cpu->axi_lsu_rresp
// #define lsu_bresp top->rootp->ysyx_25010030_npc->cpu->axi_lsu_bresp
// #define ifu_rresp top->rootp->ysyx_25010030_npc->cpu->axi_if_rresp
// // #define clint_ar_addr top->rootp->ysyx_25010030_npc->cpu->clint_araddr
// // #define clint_ar_valid top->rootp->ysyx_25010030_npc->cpu->clint_arvalid
// #endif
// if(lsu_rresp != 0) printf("LSU <R> CHANNEL ACCESS FAULT!\n");
// if(lsu_bresp != 0) printf("LSU <W> CHANNEL ACCESS FAULT!\n");
// if(ifu_rresp != 0) printf("IFU <R> CHANNEL ACCESS FAULT!\n");
// // if((clint_ar_addr <= 0x02000000 || clint_ar_addr >= 0x0200ffff) && clint_ar_valid) printf("CLINT <R> CHANNEL ACCESS FAULLT!\n");
// }

uint64_t last_pc;
static void trace_and_difftest();
static void execute_once() {
    #ifdef YSYXSOC
    PCSet.pc = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bpu_pc;
    PCSet.inst = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_inst1;
    last_pc = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bpu_pc;
    do{
      trace_and_difftest();

      single_cycle();
      single_cycle();
      // 每时钟周期采样 ROB 双提交通路，统计实际提交的指令数
      if(!top->reset) {
        if(top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rob_cmt_valid_1) g_nr_guest_inst++;
        if(top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rob_cmt_valid_2) g_nr_guest_inst++;
      }
      #ifdef NVBOARD
      nvboard_update();
      #endif
      cycle_sum++;
      if (npc_state.state != NPC_RUNNING) break;
    } while (last_pc == top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bpu_pc);
    #else
    PCSet.pc = top->rootp->ysyx_25010030_npc->cpu->bpu_pc;
    PCSet.inst = top->rootp->ysyx_25010030_npc->cpu->icache_inst1;
    last_pc = top->rootp->ysyx_25010030_npc->cpu->bpu_pc;
    do{
      trace_and_difftest();

      single_cycle();
      single_cycle();
      // 每时钟周期采样 ROB 双提交通路，统计实际提交的指令数
      if(!top->reset) {
        if(top->rootp->ysyx_25010030_npc->cpu->rob_cmt_valid_1) g_nr_guest_inst++;
        if(top->rootp->ysyx_25010030_npc->cpu->rob_cmt_valid_2) g_nr_guest_inst++;
      }
      cycle_sum++;
      if ((cycle_sum % 100000) == 0)
        printf("[PROG] cycle=%lu bpu_pc=0x%08x cmt1=%d cmt2=%d\n", cycle_sum,
               (unsigned)top->rootp->ysyx_25010030_npc->cpu->bpu_pc,
               (int)top->rootp->ysyx_25010030_npc->cpu->rob_cmt_valid_1,
               (int)top->rootp->ysyx_25010030_npc->cpu->rob_cmt_valid_2);
      fflush(stdout);
      if (npc_state.state != NPC_RUNNING) break;
    } while (last_pc == top->rootp->ysyx_25010030_npc->cpu->bpu_pc);
    #endif

    if(run_time <= start_time) run_time++;

    #ifdef YSYXSOC
    PCSet.next_pc = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bpu_pc;
    PCSet.ninst = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_inst1;
    #else
    PCSet.next_pc = top->rootp->ysyx_25010030_npc->cpu->bpu_pc;
    PCSet.ninst = top->rootp->ysyx_25010030_npc->cpu->icache_inst1;
    #endif
    // printf("next_pc=0x%08x | next_inst=0x%08x\n\n",PCSet.next_pc,PCSet.ninst);

#ifdef CONFIG_ITRACE
    char *p = logbuf;
    p += snprintf(p, sizeof(logbuf), "0x%08x: 0x%08x ", PCSet.pc, PCSet.inst);
    *p = '\0';
    append_iringbuf(logbuf);
#endif

}

static bool first_step = true; // 用于第一次执行时的特殊处理

static void trace_and_difftest() {
#ifdef CONFIG_ITRACE
    log_write("%s\n", logbuf);
#endif
    if (g_print_step) {
        IFDEF(CONFIG_ITRACE, puts(logbuf));
    }

#ifdef CONFIG_DIFFTEST

#ifdef YSYXSOC
    bool wbu_valid = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_valid;
    vaddr_t diff_pc = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_pc;
    vaddr_t lsu_araddr = top->rootp->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr;
    vaddr_t lsu_awaddr = top->rootp->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr;
    bool lsu_arvalid = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_arvalid;
    bool lsu_awvalid = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_axi_awvalid;

    if((((lsu_araddr < 0x30000000) | (lsu_araddr > 0x3fffffff)) & lsu_arvalid) & 
       (((lsu_araddr < 0x0f000000) | (lsu_araddr > 0x0f002000)) & lsu_arvalid) & 
       (((lsu_araddr < 0x80000000) | (lsu_araddr > 0x9fffffff)) & lsu_arvalid) &
       (((lsu_araddr < 0xa0000000) | (lsu_araddr > 0xbfffffff)) & lsu_arvalid)) {difftest_skip_ref();}
    if((((lsu_awaddr < 0x30000000) | (lsu_awaddr > 0x3fffffff)) & lsu_awvalid) &
       (((lsu_awaddr < 0x0f000000) | (lsu_awaddr > 0x0f002000)) & lsu_awvalid) &
       (((lsu_awaddr < 0x80000000) | (lsu_awaddr > 0x9fffffff)) & lsu_awvalid) &
       (((lsu_awaddr < 0xa0000000) | (lsu_awaddr > 0xbfffffff)) & lsu_awvalid)) {difftest_skip_ref();}

    bool wbu_dual_cmt = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_dual_cmt;
#else
    // bool if_valid = top->rootp->ysyx_25010030_npc->cpu->IF_valid;
    bool wbu_valid = top->rootp->ysyx_25010030_npc->cpu->wbu_valid;
    vaddr_t diff_pc = top->rootp->ysyx_25010030_npc->cpu->wbu_pc;
    bool wbu_dual_cmt = top->rootp->ysyx_25010030_npc->cpu->wbu_dual_cmt;

    // 设备访问 (mmio) store 的判定在 difftest_step 提交时用 stb_cmt_addr_* 完成,
    // 无需在发射侧计数。CLINT 等设备写被 RTL 直接路由, 不经过 STB 提交路径。
#endif


    if(wbu_valid){
      difftest_step(diff_pc, diff_pc, wbu_dual_cmt);
    }
#endif

#ifdef CONFIG_WATCHPOINTS
  WP *wp=get_wp_head();
  while(wp != NULL){
    word_t val = expr(wp->expr);
    if(val != wp->old_val){
      // printf("Watchpoint NO.%d: Expression '%s' changed from 0x%08x to 0x%08x.\n", wp->NO, wp->expr, wp->old_val, val);
      _Log("Watchpoint NO.%d: Expression" ANSI_FG_YELLOW " '%s' " ANSI_NONE "changed from"
      ANSI_FG_BLUE " 0x%08x " ANSI_NONE "to" ANSI_FG_BLUE " 0x%08x\n" ANSI_NONE,wp->NO, wp->expr, wp->old_val, val);
      npc_state.state = NPC_STOP;
      wp->old_val = val;
      //sdb_mainloop();
      break;
    }
    // wp->old_val=val;
    wp = wp->next;
  }
#endif
}

// word_t last_pc; 

static void execute(uint64_t n) {
    
    for (; n > 0; n--) {
        // last_pc = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bpu_pc;
        execute_once();
        // if(!top->reset && last_pc != top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bpu_pc) g_nr_guest_inst++;
        // g_nr_guest_inst++;
        // trace_and_difftest();
        if (npc_state.state != NPC_RUNNING){
            break;
        }
    }
    if(npc_state.state==NPC_END || npc_state.state==NPC_ABORT){
        IFDEF(CONFIG_MTRACE,close_mtrace());
    }
}

void cpu_exec(uint64_t n) {
    g_print_step = (n < MAX_INST_TO_PRINT);

    switch (npc_state.state) {
        case NPC_END:
        case NPC_ABORT:
            printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
            return;
        default:
            npc_state.state = NPC_RUNNING;
    }

    execute(n);

    switch (npc_state.state) {
        case NPC_RUNNING:
            npc_state.state = NPC_STOP;
            break;

        case NPC_END:
        case NPC_ABORT:
            if(npc_state.state == NPC_ABORT) IFDEF(CONFIG_ITRACE,display_iringbuf());
            Log("%s: %s at pc = 0x%08x",ANSI_FMT("NPC", ANSI_FG_YELLOW ANSI_BG_RED),
                (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
                (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
                                           ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
                npc_state.halt_pc);
                // die();
        case NPC_QUIT:
            statistic();
            // die();
    }
}