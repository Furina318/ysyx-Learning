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
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

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
#include "Vysyx_25010030_npc_bpu.h"
#include "Vysyx_25010030_npc_icache.h"
#include "Vysyx_25010030_npc_dcache.h"
#include "Vysyx_25010030_npc__Dpi.h"
#include "Vysyx_25010030_npc_store_buffer__I7.h"
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
        printf("\033[33mCPI = %lf\033[0m\n", (double)cycle_sum / g_nr_guest_inst);
    } else {
        printf("\033[33mIPC = N/A (no cycles or instructions)\033[0m\n");
    }

#ifdef NPC
    if (top->rootp->ysyx_25010030_npc->cpu->u_bpu->bp_cond_cnt > 0) {
        double cond_rate = 100.0 * (1.0 - (double)top->rootp->ysyx_25010030_npc->cpu->u_bpu->bp_cond_misp_cnt /
                                         (double)top->rootp->ysyx_25010030_npc->cpu->u_bpu->bp_cond_cnt);
        double all_rate  = 100.0 * (1.0 - (double)top->rootp->ysyx_25010030_npc->cpu->u_bpu->bp_all_misp_cnt /
                                         (double)top->rootp->ysyx_25010030_npc->cpu->u_bpu->bp_all_cnt);
        printf("\033[33mBranch pred: cond=%llu misp=%llu (%.2f%%), all=%llu misp=%llu (%.2f%%)\033[0m\n",
               (unsigned long long)top->rootp->ysyx_25010030_npc->cpu->u_bpu->bp_cond_cnt,
               (unsigned long long)top->rootp->ysyx_25010030_npc->cpu->u_bpu->bp_cond_misp_cnt,
               cond_rate,
               (unsigned long long)top->rootp->ysyx_25010030_npc->cpu->u_bpu->bp_all_cnt,
               (unsigned long long)top->rootp->ysyx_25010030_npc->cpu->u_bpu->bp_all_misp_cnt,
               all_rate);
    }
#endif

#ifdef NPC
    // Print demand-cache metrics.  Accesses are de-duplicated in RTL; D-cache
    // counters exclude uncached/MMIO traffic and split loads from stores.
    auto *icache = top->rootp->ysyx_25010030_npc->cpu->u_icache;
    auto *dcache = top->rootp->ysyx_25010030_npc->cpu->u_dcache;

    // 表格标题
    printf("\n%-16s %12s %12s %12s %10s %10s %10s\n",
           "Name", "Access", "Hit", "Miss", "Hit Rate", "Miss Rate", "MPKI");
    printf("%-16s %12s %12s %12s %10s %10s %10s\n",
           "----------------", "------------", "------------", "------------",
           "----------", "----------", "----------");

    // 收集各行数据
    struct CacheStatRow {
        const char *name;
        uint64_t access;
        uint64_t hit;
        uint64_t miss;
    };
    struct CacheStatRow rows[] = {
        {"ICache demand", icache->icache_access_cnt, icache->icache_hit_cnt, icache->icache_miss_cnt},
        {"DCache total", dcache->dcache_access_cnt, dcache->dcache_hit_cnt, dcache->dcache_miss_cnt},
        {"  loads", dcache->dcache_load_access_cnt, dcache->dcache_load_hit_cnt, dcache->dcache_load_miss_cnt},
        {"  stores", dcache->dcache_store_access_cnt, dcache->dcache_store_hit_cnt, dcache->dcache_store_miss_cnt}
    };

    // 逐行打印数据
    for (int i = 0; i < 4; i++) {
        const struct CacheStatRow *row = &rows[i];
        if (row->access == 0) {
            // 无访问时显示 0，百分比为 0.00%
            printf("%-16s %12llu %12llu %12llu %9.2f%% %10.2f%% %10.2f\n",
                   row->name, 0ULL, 0ULL, 0ULL, 0.0, 0.0, 0.0);
        } else {
            double hit_rate  = 100.0 * (double)row->hit / (double)row->access;
            double miss_rate = 100.0 * (double)row->miss / (double)row->access;
            double mpki = (g_nr_guest_inst == 0) ? 0.0 :
                          1000.0 * (double)row->miss / (double)g_nr_guest_inst;
            printf("%-16s %12llu %12llu %12llu %9.2f%% %10.2f%% %10.2f\n",
                   row->name,
                   (unsigned long long)row->access,
                   (unsigned long long)row->hit,
                   (unsigned long long)row->miss,
                   hit_rate, miss_rate, mpki);
        }
    }

    // MMIO 独立行（不计入缓存命中率）
    unsigned long long mmio = (unsigned long long)dcache->dcache_mmio_cnt;
    if (mmio > 0) {
        printf("%-16s %12llu %12s %12s %10s %10s %10s\n",
               "DCache MMIO", mmio, "-", "-", "-", "-", "-");
        printf("  (uncached/MMIO, excluded from hit-rate)\n");
    }

    // 底部分隔线
    printf("%-16s %12s %12s %12s %10s %10s %10s\n",
           "----------------", "------------", "------------", "------------",
           "----------", "----------", "----------");

    // 计数器一致性检查（红色警告）
    for (int i = 0; i < 4; i++) {
        const struct CacheStatRow *row = &rows[i];
        if (row->access != row->hit + row->miss) {
            printf("\033[31m%-14s inconsistent counters: access != hit + miss\033[0m\n",
                   row->name);
        }
    }

    // ══════ 前端/发射/后端流水统计 (方案A: RTL 精确累计计数器) ══════
    {
        auto *cp = top->rootp->ysyx_25010030_npc->cpu;
        unsigned long long occ        = (unsigned long long)cp->iq_occup_acc;
        unsigned long long cyc        = (unsigned long long)cp->iq_cyc_acc;
        unsigned long long full       = (unsigned long long)cp->iq_full_acc;
        unsigned long long dispatch   = (unsigned long long)cp->iq_dispatch_acc;
        unsigned long long s1         = (unsigned long long)cp->iq_issue_slot1_acc;
        unsigned long long s2         = (unsigned long long)cp->iq_issue_slot2_acc;
        unsigned long long quick      = (unsigned long long)cp->iq_issue_quick_acc;
        unsigned long long mdu        = (unsigned long long)cp->iq_issue_mdu_acc;
        unsigned long long lsu        = (unsigned long long)cp->iq_issue_lsu_acc;
        unsigned long long lsu_load   = (unsigned long long)cp->iq_issue_lsu_load_acc;
        unsigned long long lsu_store  = (unsigned long long)cp->iq_issue_lsu_store_acc;
        unsigned long long ctrl       = (unsigned long long)cp->iq_issue_ctrl_acc;
        unsigned long long special    = (unsigned long long)cp->iq_issue_special_acc;

        double avg_occ  = (cyc > 0)   ? (double)occ / (double)cyc : 0.0;
        double full_pct = (cyc > 0)   ? 100.0 * (double)full / (double)cyc : 0.0;
        unsigned long long total_issue = s1 + s2;

        printf("\n=== Issue Queue & Execution Statistics ===\n");
        printf("IQ active cycles        : %llu\n", cyc);
        printf("Average IQ occupancy    : %.2f / %d entries\n", avg_occ, 16);
        printf("IQ full cycles          : %llu  (%.2f%% of cycles)\n", full, full_pct);
        printf("Total dispatched (entry): %llu\n", dispatch);
        printf("Total issues            : %llu  (slot1=%llu slot2=%llu)\n", total_issue, s1, s2);
        double issue_bw = (cyc > 0) ? (double)total_issue / (double)cyc : 0.0;
        printf("Issue bandwidth         : %.3f inst/cycle (%d issue slots)\n", issue_bw, 2);

        printf("\n=== FU Issue Mix (by function unit) ===\n");
        struct FuRow { const char *name; unsigned long long cnt; };
        struct FuRow furows[] = {
            {"ALU (quick)",        quick},
            {"MDU (mul/div)",      mdu},
            {"LSU load",           lsu_load},
            {"LSU store",          lsu_store},
            {"Branch/ctrl",        ctrl},
            {"CSR/special",        special},
        };
        printf("%-18s %12s %10s\n", "FunctionUnit", "Issues", "% of issues");
        printf("%-18s %12s %10s\n", "----------------", "------------", "----------");
        for (int i = 0; i < 6; i++) {
            double pct = (total_issue > 0) ? 100.0 * (double)furows[i].cnt / (double)total_issue : 0.0;
            printf("%-18s %12llu %9.2f%%\n", furows[i].name, furows[i].cnt, pct);
        }

        // 瓶颈归因: 判断是发射瓶颈还是 ISA 固有 (分支/访存)
        //    简单启发: IQ 高占用 + 低发射带宽 => 后端/发射受限
        //              低 IQ 占用 + 高分支错误率/高访存miss => 前端/访存受限
        printf("\n=== Bottleneck Hint ===\n");
        double br_misp_rate = 0.0;
        if (top->rootp->ysyx_25010030_npc->cpu->u_bpu->bp_all_cnt > 0)
            br_misp_rate = (double)top->rootp->ysyx_25010030_npc->cpu->u_bpu->bp_all_misp_cnt /
                           (double)top->rootp->ysyx_25010030_npc->cpu->u_bpu->bp_all_cnt;
        double icache_miss_rate = (icache->icache_access_cnt > 0) ?
                           (double)icache->icache_miss_cnt / (double)icache->icache_access_cnt : 0.0;
        if (avg_occ >= 12.0 && issue_bw < 1.6)
            printf("- likely BACKEND/ISSUE-limited: IQ heavily occupied (%.1f/16) while issue bw=%.2f\n",
                   avg_occ, issue_bw);
        else if (avg_occ < 6.0 && br_misp_rate > 0.15)
            printf("- likely FRONTEND/BPD-limited: IQ light (%.1f/16) but high branch mispred (%.1f%%)\n",
                   avg_occ, br_misp_rate * 100.0);
        else if (avg_occ < 6.0 && icache_miss_rate > 0.03)
            printf("- likely FRONTEND/ICACHE-limited: IQ light but high icache miss (%.1f%%)\n",
                   icache_miss_rate * 100.0);
        else
            printf("- balanced/no dominant single limiter (occ=%.1f/16, issue_bw=%.2f)\n",
                   avg_occ, issue_bw);
    }
#endif
}

uint64_t last_pc;

// ---- LightSSS (fork-based lightweight simulation snapshot) ----
static void execute_once();   // 前向声明: LightSSS 子进程重演需调用
#ifdef CONFIG_LIGHTSSS
extern bool lightsss_child_active;        // rv32e.cpp
extern vluint64_t lightsss_epoch_time;    // rv32e.cpp
extern void lightsss_child_wave_begin();  // rv32e.cpp
extern void lightsss_child_wave_close();  // rv32e.cpp

static pid_t lightsss_child = -1;         // 当前快照子进程 pid
static uint64_t lightsss_last_fork = 0;   // 上次 fork 的 cycle_sum
static vluint64_t lightsss_replay_limit = 0;  // 子进程重演上限(main_time), 0=不限

// SIGUSR1 handler: 空操作, 仅用于打断 pause(), 使子进程开始重演
static void lightsss_sig_handler(int sig) { (void)sig; }

// 子进程: 被唤醒后从 fork 时刻重演并 dump 波形, 结束时退出
static void lightsss_child_run() {
    lightsss_child_active = true;
    signal(SIGUSR1, lightsss_sig_handler);
    printf("\033[33m[LightSSS] child %d snapshot at main_time=%llu, blocking...\033[0m\n",
           getpid(), (unsigned long long)main_time);
    pause();  // 阻塞直到父进程发出 SIGUSR1
    printf("\033[33m[LightSSS] child %d woken, re-running to reproduce error...\033[0m\n",
           getpid());
    lightsss_child_wave_begin();
    // 从 fork 时刻的状态重演, 直到再次出错 (HIT/ABORT/freeze) 或达到上限
    while (npc_state.state == NPC_RUNNING) {
        execute_once();
        if (lightsss_replay_limit && main_time >= lightsss_replay_limit) break;
    }
    lightsss_child_wave_close();
    printf("\033[33m[LightSSS] child %d done, wave dumped.\033[0m\n", getpid());
    _exit(0);
}

// 父进程: 每 FORK_INTERVAL 周期 fork 一个快照子进程
static void lightsss_may_fork() {
    if (lightsss_child_active) return;               // 子进程不嵌套 fork
    if (cycle_sum - lightsss_last_fork < (uint64_t)CONFIG_LIGHTSSS_FORK_INTERVAL) return;
    lightsss_last_fork = cycle_sum;
    if (lightsss_child > 0) {                        // 淘汰更旧的快照子进程
        kill(lightsss_child, SIGKILL);
        waitpid(lightsss_child, NULL, WNOHANG);
    }
    pid_t pid = fork();
    if (pid == 0) {
        lightsss_child_run();                        // 子进程 (不返回)
    } else if (pid > 0) {
        lightsss_child = pid;
    } else {
        fprintf(stderr, "[LightSSS] fork failed\n");
    }
}

// 父进程: 仿真出错时唤醒最近快照子进程重演, 等其 dump 完
static void lightsss_on_error() {
    if (lightsss_child <= 0) return;
    if (npc_state.state == NPC_ABORT) {
        // 出错 (bad trap / difftest mismatch): 让快照子进程重演并 dump
        lightsss_replay_limit = main_time;
        printf("\033[33m[LightSSS] error at main_time=%llu, waking child %d...\033[0m\n",
               (unsigned long long)main_time, lightsss_child);
        kill(lightsss_child, SIGUSR1);
        waitpid(lightsss_child, NULL, 0);
    } else {
        // 正常结束 (HIT GOOD TRAP / QUIT): 无需重演, 直接回收快照子进程
        kill(lightsss_child, SIGKILL);
        waitpid(lightsss_child, NULL, WNOHANG);
    }
    lightsss_child = -1;
}
#endif // CONFIG_LIGHTSSS

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
    vluint64_t spin_cnt = 0;
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
      if (npc_state.state != NPC_RUNNING) break;
      // 冻结检测: bpu_pc 长时间不变 => 管线死锁, 打印诊断并退出
      if (++spin_cnt > 100000) {
        fprintf(stderr, "\n[FROZEN] pc=0x%08x main=%llu cs=%llu inst=%llu\n",
                (unsigned)top->rootp->ysyx_25010030_npc->cpu->bpu_pc,
                (unsigned long long)main_time, (unsigned long long)cycle_sum,
                (unsigned long long)g_nr_guest_inst);
        fprintf(stderr, "[FROZEN] rob_full=%d rename_full=%d iq_full=%d\n",
                (int)top->rootp->ysyx_25010030_npc->cpu->u_rob__DOT__rob_full,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_rename__DOT__rename_full,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_issue__DOT__iq_full);
        fprintf(stderr, "[FROZEN] stb_ready=%d stb_count=%d stb_drain_v=%d stb_drain_r=%d cmt1=%d cmt2=%d wbu_v=%d\n",
                (int)top->rootp->ysyx_25010030_npc->cpu->stb->stb_ready,
                (int)top->rootp->ysyx_25010030_npc->cpu->stb->count,
                (int)top->rootp->ysyx_25010030_npc->cpu->stb->stb_drain_valid,
                (int)top->rootp->ysyx_25010030_npc->cpu->stb->stb_drain_ready,
                (int)top->rootp->ysyx_25010030_npc->cpu->rob_cmt_valid_1,
                (int)top->rootp->ysyx_25010030_npc->cpu->rob_cmt_valid_2,
                (int)top->rootp->ysyx_25010030_npc->cpu->wbu_valid);
        fprintf(stderr, "[FROZEN] lb_count=%d\n",
                (int)top->rootp->ysyx_25010030_npc->cpu->u_slot2__DOT__u_load_buffer__DOT__count);
        fprintf(stderr, "[FROZEN] dcache state=%d next=%d front_busy=%d ax_busy=%d fill=%d wb=%d pend=%d vset_lock=%d\n",
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->state,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->next_state,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->front_busy,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->ax_busy,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->cur_fill_valid,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->cur_wb_valid,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->front_txn_pending,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->front_vset_lock);
        fprintf(stderr, "[FROZEN] front_rd=%d front_wr=%d vset=%d pmem=%d pwe=%d burst=%d poff=%d\n",
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->front_rd_active,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->front_wr_active,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->front_valid_set,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->pend_is_mem,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->pend_we,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->burst_cnt,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->pend_offset);
        fprintf(stderr, "[FROZEN] dcache awv=%d awr=%d wv=%d wr=%d bv=%d br=%d arv=%d arr=%d rv=%d rd=%d writedone=%d addr=0x%08x\n",
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->awvalid,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->awready,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->wvalid,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->wready,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->bvalid,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->bready,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->arvalid,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->arready,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->rvalid,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->rlast,
                (int)top->rootp->ysyx_25010030_npc->cpu->u_dcache->write_done,
                (unsigned)top->rootp->ysyx_25010030_npc->cpu->u_dcache->awaddr);
        fflush(stderr);
        npc_state.state = NPC_ABORT;
        break;
      }
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


    // zombie skip 伪提交 (rob_bus 全 0, inst=0, gpr_we=0) 仅用于推进
    // ROB/rename 指针, 不产生架构效果, difftest 必须跳过, 否则 REF 会
    // 多执行一条 pc=0 的指令导致状态漂移 (div/pascal 的 a4 差 1)。
    uint32_t wbu_inst = top->rootp->ysyx_25010030_npc->cpu->wbu_inst;
    if(wbu_valid && wbu_inst != 0){
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
        if (npc_state.state != NPC_RUNNING){
#ifdef CONFIG_LIGHTSSS
            // 出错 (bad trap/difftest mismatch/freeze): 不 fork, 唤醒错误点之前的快照
            if (!lightsss_child_active) lightsss_on_error();
#endif
            break;
        }
#ifdef CONFIG_LIGHTSSS
        if (!lightsss_child_active) lightsss_may_fork();  // 仍在 RUNNING 才定期 fork 快照
#endif
        // if(!top->reset && last_pc != top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bpu_pc) g_nr_guest_inst++;
        // g_nr_guest_inst++;
        // trace_and_difftest();
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
            if(npc_state.state == NPC_ABORT) { IFDEF(CONFIG_ITRACE, display_iringbuf()); }
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
