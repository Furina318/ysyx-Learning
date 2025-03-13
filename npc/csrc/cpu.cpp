#include "../include/common.h"
#include "../include/utils.h"
#include "../include/debug.h"
#include "../include/macro.h"
#include "../include/conf.h"
#include "Vrv32e.h"
#include "Vrv32e__Dpi.h"
#include "../obj_dir/Vrv32e___024root.h"
#include "svdpi.h"
#include "verilated_vcd_c.h"

/********extern functions or variables********/

extern void single_cycle(void);
// extern NPCState npc_state;
extern Vrv32e *top;
extern VerilatedVcdC *tfp;
extern vluint64_t main_time;
extern void die();

/*********************************************/

#define MAX_INST_TO_PRINT 20
static uint64_t g_nr_guest_inst = 0;
static bool g_print_step = false;

static struct {
    word_t pc;
    word_t next_pc;
    word_t inst;
    word_t ninst;
} PCSet = {0, 0, 0, 0};

static void statistic() {
    Log("total guest instructions = %lu", g_nr_guest_inst);
}

static void execute_once() {
    PCSet.pc = top->rootp->rv32e__DOT__pc_now;
    PCSet.inst = top->rootp->rv32e__DOT__inst;
    single_cycle();
    single_cycle(); // 执行一个时钟周期
 
    PCSet.next_pc = top->rootp->rv32e__DOT__pc_now;
    PCSet.ninst = top->rootp->rv32e__DOT__inst;
}

static void execute(uint64_t n) {
    for (; n > 0; n--) {
        
        execute_once();
        g_nr_guest_inst++;

        if (npc_state.state != NPC_RUNNING){
            printf("some\n");
            break;
        }
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
            Log("NPC: %s at pc = 0x%08x",
                (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
                (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
                                           ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
                npc_state.halt_pc);
                die();
        case NPC_QUIT:
            statistic();
            die();
    }
}