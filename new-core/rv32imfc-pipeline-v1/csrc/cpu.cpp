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

#ifdef YSYXSOC
#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Dpi.h"
#include "VysyxSoCFull___024root.h"
extern VysyxSoCFull *top;
#else
#include "Vysyx_25010030_npc.h"
#include "Vysyx_25010030_npc__Dpi.h"
#include "Vysyx_25010030_npc___024root.h"
extern Vysyx_25010030_npc *top;
#endif

#ifdef NVBOARD
#include <nvboard.h>
#endif

extern void single_cycle(void);
extern VerilatedVcdC *tfp;
extern void die();
extern word_t expr(char *e);

extern void append_iringbuf(char *s);
extern void display_iringbuf(void);

#define RETIRED_RING 60
static struct { vaddr_t pc; uint32_t inst; } s_retired[RETIRED_RING];
static int s_retired_cnt = 0;
static void trace_retired(vaddr_t pc, uint32_t inst, uint32_t a0) {
    s_retired[s_retired_cnt % RETIRED_RING] = (typeof(s_retired[0])){pc, inst};
    s_retired_cnt++;
}

static void dump_retired(void) {
    int n = s_retired_cnt < RETIRED_RING ? s_retired_cnt : RETIRED_RING;
    int start = s_retired_cnt < RETIRED_RING ? 0 : s_retired_cnt - RETIRED_RING;
    printf("\n\033[33mRetired instructions:\033[0m\n");
    for (int i = 0; i < n; i++) {
        int idx = (start + i) % RETIRED_RING;
        printf("[RET] pc=0x%08x inst=0x%08x\n",
               s_retired[idx].pc, s_retired[idx].inst);
    }
    fflush(stdout);
}

#ifdef CONFIG_DIFFTEST
extern void difftest_step(vaddr_t pc, vaddr_t npc);
extern void difftest_skip_ref();
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
    uint64_t total = g_nr_guest_inst;
    printf("\033[33mIPC = %lf\033[0m\n", (double)g_nr_guest_inst / cycle_sum);
    printf("\033[33m平均每条指令执行周期: %lf\033[0m\n", (double)cycle_sum / g_nr_guest_inst);
}

uint64_t last_pc;
static void trace_and_difftest();
static void execute_once() {
    #ifdef YSYXSOC
    PCSet.pc = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_pc;
    PCSet.inst = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__icache_inst;
    // printf("pc=0x%08x | inst=0x%08x\n",PCSet.pc,PCSet.inst);
    last_pc = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_pc;
    do{
      trace_and_difftest();
      // check_resp();
      
      single_cycle();
      single_cycle();
      #ifdef NVBOARD
      nvboard_update();
      #endif
      cycle_sum++;
      if (npc_state.state != NPC_RUNNING) break;
    } while (last_pc == top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_pc);
    #else
    PCSet.pc = top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__ifu_pc;
    PCSet.inst = top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__icache_inst;
    last_pc = top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__ifu_pc;
    do{
      trace_and_difftest();
      // check_resp();

      single_cycle();
      single_cycle();
      cycle_sum++;
      // trace_and_difftest();      
      if (!top->reset && top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__wbu_valid) {
          g_nr_guest_inst++;
          trace_retired(top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__wbu_pc,
                        top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__wbu_inst,
                        top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[10]);
      }
      if (npc_state.state != NPC_RUNNING) break;
    } while (last_pc == top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__ifu_pc);
    #endif

    // if(!top->reset) g_nr_guest_inst++;
    if(run_time <= start_time) run_time++;

    #ifdef YSYXSOC
    #else
    PCSet.next_pc = top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__ifu_pc;
    PCSet.ninst = top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__icache_inst;
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
       (((lsu_araddr < 0xa0000000) | (lsu_araddr > 0xbfffffff)) & lsu_arvalid)) {difftest_skip_ref();}
    if((((lsu_awaddr < 0x30000000) | (lsu_awaddr > 0x3fffffff)) & lsu_awvalid) & 
       (((lsu_awaddr < 0x0f000000) | (lsu_awaddr > 0x0f002000)) & lsu_awvalid) & 
       (((lsu_awaddr < 0xa0000000) | (lsu_awaddr > 0xbfffffff)) & lsu_awvalid)) {difftest_skip_ref();}
#else
    // bool if_valid = top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__IF_valid;
    bool wbu_valid = top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__wbu_valid;
    vaddr_t diff_pc = top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__wbu_pc;
    bool master_arvalid = top->rootp->ysyx_25010030_npc__DOT__io_master_arvalid;
    bool clint_arvalid = top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__clint_arvalid;
    bool master_awvalid = top->rootp->ysyx_25010030_npc__DOT__io_master_awvalid;
    vaddr_t master_araddr = top->rootp->ysyx_25010030_npc__DOT__io_master_araddr;
    // vaddr_t clint_araddr = top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__clint_araddr;
    bool is_clint_addr = top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__u_axi_bridge__DOT__is_clint_addr;
    vaddr_t master_awaddr = top->rootp->ysyx_25010030_npc__DOT__io_master_awaddr;
    // vaddr_t csr_addr = top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__id_wb_csr_addr1;
    // vaddr_t opcode = top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__id_ex_opcode;

    if(((master_araddr < 0x80000000) | (master_araddr > 0x90000000)) & master_arvalid) {difftest_skip_ref();}
    if((is_clint_addr) & clint_arvalid ) {difftest_skip_ref();}
    // MMIO 范围(0xa0000000-0xbfffffff)的 store 经 store buffer 延迟晚到,
    // 不能靠 awaddr 条件触发 skip(会晚到误触发双重 skip), 由下方 WBU 解码处理。
    bool aw_is_dram = (master_awaddr >= 0x80000000) && (master_awaddr <= 0x90000000);
    bool aw_is_mmio = (master_awaddr >= 0xa0000000) && (master_awaddr <= 0xbfffffff);
    if(!(aw_is_dram || aw_is_mmio) && master_awvalid) {difftest_skip_ref();}
    // if((opcode == 0x73) & (csr_addr == 0x342 || csr_addr == 0x300 || csr_addr == 0x341)) {difftest_skip_ref();} // 忽略对mepc和mstatus的R操作
#endif

    if(wbu_valid){
      // 串口/设备的 store 会经 store buffer 延迟数周期才 drain 到 io_master,
      // 无法靠上面的 awaddr 条件在 retire 时触发 skip。这里在 WBU 周期直接解码:
      // S 型 store 的目标地址落在 MMIO 范围 (0xa0000000-0xbfffffff) 时,
      // spike ref 没有该地址映射(store access fault), 必须跳过该指令。
      vaddr_t wbu_vaddr = top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__wbu__DOT__regs[(top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__wbu_inst >> 15) & 0x1f]
        + ((((top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__wbu_inst >> 25) & 0x7f) << 5) | ((top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__wbu_inst >> 7) & 0x1f));
      if(((top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__wbu_inst & 0x7f) == 0x23)
         && (wbu_vaddr >= 0xa0000000) && (wbu_vaddr <= 0xbfffffff)) {difftest_skip_ref();}
      difftest_step(diff_pc, diff_pc);
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
        execute_once();
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
            if(npc_state.state == NPC_ABORT || npc_state.halt_ret != 0) { dump_retired(); }
            Log("%s: %s at pc = 0x%08x",ANSI_FMT("NPC", ANSI_FG_YELLOW ANSI_BG_RED),
                (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
                (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
                                           ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
                npc_state.halt_pc);
            Log("halt_ret = %d", npc_state.halt_ret);
            fflush(stdout);
        case NPC_QUIT:
            statistic();
    }
}