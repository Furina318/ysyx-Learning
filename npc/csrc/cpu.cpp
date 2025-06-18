#include "../include/common.h"
#include "../include/utils.h"
#include "../include/debug.h"
#include "../include/macro.h"
#include "../include/conf.h"
#include "../include/paddr.h"
#include "../include/difftest.h"
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
// extern vluint64_t main_time;
extern void die();

#ifdef CONFIG_ITRACE 
extern void append_iringbuf(char *s);
extern void display_iringbuf(void);
#endif

#ifdef CONFIG_DIFFTEST
extern void difftest_step(vaddr_t pc, vaddr_t npc);
extern void difftest_skip_ref();
// extern void update_cpu_state(CPU_state *cpu);
extern void (*ref_difftest_regcpy)(void *dut, bool direction);
#endif

// extern vluint64_t main_time;
int run_time = 0;
#define start_time 10
bool once = false;
/*********************************************/

/*********** FUNC_TRACE ***********/
#define MAX_FTRACE_SIZE 1000

typedef struct {
  uint32_t addr;  // 函数地址
  uint32_t size;  // 函数大小
  char name[64];  // 函数名
} func_symbol_t;
extern int func_count;
extern func_symbol_t func_table[];

typedef struct{
  vaddr_t pc;//函数调用地址
  const char *name;//函数名
  vaddr_t back;//返回地址
}ftrace_info;

static ftrace_info ftrace[MAX_FTRACE_SIZE];
static int ftrace_size=0;//当前调用栈深度

typedef struct {
  const char *name;
  uint64_t call_count;
} func_call_stats_t;

static func_call_stats_t func_call_stats[MAX_FTRACE_SIZE];
static int func_call_stats_size = 0;

void ftrace_call(vaddr_t pc,const char *name,vaddr_t back,vaddr_t dnpc){
  if(ftrace_size>=MAX_FTRACE_SIZE){
    printf("Call stack overflow!\n");
    return;
  }

  // 查找或创建函数调用统计记录
  int index = -1;
  for (int i = 0; i < func_call_stats_size; i++) {
    if (strcmp(func_call_stats[i].name, name) == 0) {
      index = i;
      break;
    }
  }
  if (index == -1) {
    index = func_call_stats_size++;
    func_call_stats[index].name = name;
    func_call_stats[index].call_count = 0;
  }
  // 增加调用次数
  func_call_stats[index].call_count++;
  
  // 输出调用信息
  printf("0x%x: ",pc);
  for(int i=0;i<ftrace_size;i++){
    printf(" | "); // 缩进
  }
  printf("call [%s @ 0x%08x]\n",name,dnpc);
  // printf("call [0x%x]\n",back);
  // 压栈
  ftrace[ftrace_size].pc=pc;
  ftrace[ftrace_size].name=name;
  ftrace[ftrace_size].back=back;
  ftrace_size++;
}

void ftrace_ret(vaddr_t pc,const char *name){
  if(ftrace_size <= 0){
    printf("Call stack underflow!\n");
    return;
  }

  ftrace_size--;
  // 输出返回信息
  printf("0x%x: ",pc);
  for (int i = 0; i < ftrace_size; i++) {
    printf(" | "); // 缩进
  }
  printf("ret  [%s]\n", name);
}

const char *get_func_name(vaddr_t addr){
  for(int i=0;i<func_count;i++){
    if(addr>=func_table[i].addr && addr<func_table[i].addr+func_table[i].size){// 检查给出的地址是否落在区间[Value, Value + Size)内
      return func_table[i].name;
    }
  }
  return "???"; // 未知函数
}

#ifdef CONFIG_FTRACE
static void ftrace_handle() {
    // 获取当前流水线级信号
    // uint32_t pc = top->rootp->rv32e__DOT__IF_ID_pc;
    // uint32_t instr = top->rootp->rv32e__DOT__IF_ID_inst;
    uint32_t pc = top->rootp->rv32e__DOT__id_ex_pc;
    uint32_t instr = top->rootp->rv32e__DOT__id_ex_inst;
    uint32_t opcode = instr & 0x7F;
    
    // 获取译码阶段信号
    // uint32_t imm = top->rootp->rv32e__DOT__id_ex_imm;
    // uint32_t rs1_val = top->rootp->rv32e__DOT__exu__DOT__src1;
    uint32_t target = top->rootp->rv32e__DOT__ex_flush_pc;

    // 计算真实跳转目标
    if (opcode == 0x6F) { // JAL
        // uint32_t target = pc + imm;
        const char* name = get_func_name(target);
        ftrace_call(pc, name, pc + 4, target);
    }
    else if (opcode == 0x67) { // JALR
        // uint32_t target = (rs1_val + imm) & ~0x1;
        // if (target != pc + 4) { // 排除简单的寄存器操作
        //     const char* name = get_func_name(target);
        //     ftrace_call(pc, name, pc + 4, target);
        // }
        
        // 处理ret指令（JALR x0, x1, 0）
        if ((instr & 0xFFFFF07F) == 0x00008067) {//通过掩码提取指令的x1（rs1）和x0(rd)，0(imm)
            if (ftrace_size > 0) {
                ftrace_ret(pc, ftrace[ftrace_size-1].name);
            }
        }
    }
}
#endif

/*********** FTRACE END ***********/

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

static void statistic() {
    Log("total guest instructions = %lu", g_nr_guest_inst);
#ifdef CONFIG_FTRACE
  puts("");
  Log("Function call statistics:");
  for (int i = 0; i < func_call_stats_size; i++) {
    Log("  %-8s: %lu calls", func_call_stats[i].name, func_call_stats[i].call_count);
  }
#endif
}

static void execute_once() {
    PCSet.pc = top->rootp->rv32e__DOT__IF_ID_pc;
    PCSet.inst = top->rootp->rv32e__DOT__IF_ID_inst;
    // printf("pc=0x%08x | inst=0x%08x\n",PCSet.pc,PCSet.inst);

    single_cycle();
    single_cycle(); // 执行一个时钟周期

    if(run_time <= start_time) run_time++;

#ifdef CONFIG_FTRACE
  ftrace_handle();
#endif 

    PCSet.next_pc = top->rootp->rv32e__DOT__IF_ID_pc;
    PCSet.ninst = top->rootp->rv32e__DOT__IF_ID_inst;
    // printf("next_pc=0x%08x | next_inst=0x%08x\n\n",PCSet.next_pc,PCSet.ninst);

#ifdef CONFIG_ITRACE
    char *p = logbuf;
    p += snprintf(p, sizeof(logbuf), "0x%08x: 0x%08x ", PCSet.pc, PCSet.inst);
    *p = '\0';
    append_iringbuf(logbuf);
#endif

}

// 用于跟踪流水线状态的全局变量
static bool prev_ex_flush = false;
static vaddr_t prev_ex_flush_pc = 0;
static bool wb_valid_delayed = false;
static vaddr_t wb_pc_delayed = 0;
static vaddr_t wb_inst_delayed = 0;

static void trace_and_difftest(){
  #ifdef CONFIG_ITRACE
    log_write("%s\n",logbuf);
  #endif
  if(g_print_step){
    IFDEF(CONFIG_ITRACE,puts(logbuf));
  }
  
  //difftest
#ifdef CONFIG_DIFFTEST
    // 获取流水线信号
    bool wb_valid = top->rootp->rv32e__DOT__wb_valid; // WB 阶段指令有效
    bool ex_flush = top->rootp->rv32e__DOT__ex_flush; // EX 阶段冲刷
    vaddr_t wb_pc = top->rootp->rv32e__DOT__lsu_wb_pc; // WB 阶段 PC
    vaddr_t ex_flush_pc = top->rootp->rv32e__DOT__ex_flush_pc; // EX 冲刷目标 PC
    vaddr_t wb_inst = top->rootp->rv32e__DOT__lsu_wb_inst; // WB 阶段指令

    // 处理流水线冲刷
    if (ex_flush) {
        // 记录冲刷状态，在下一个周期处理
        prev_ex_flush = true;
        prev_ex_flush_pc = ex_flush_pc;
        
        // 如果当前 WB 阶段有有效指令，先处理它
        if (wb_valid && run_time >= start_time) {
            // 计算 NPC（下一个 PC 值）
            vaddr_t npc = ex_flush_pc; // 冲刷情况下，下一个 PC 是冲刷目标
            
            // 执行差分测试
            difftest_step(wb_pc, npc);
            
            // 通知参考模型跳过一条指令（因为冲刷会导致流水线中的指令被丢弃）
            difftest_skip_ref();
            
            if (g_print_step) {
                printf("difftest: pc: 0x%08x | npc: 0x%08x (flush to 0x%08x)\n", 
                       wb_pc, npc, ex_flush_pc);
            }
        }
        return;
    }
    
    // 处理前一个周期的冲刷
    if (prev_ex_flush) {
        // 同步 DUT 状态到参考模型
        CPU_state ref_r;
        update_cpu_state(&ref_r);
        ref_r.pc = prev_ex_flush_pc; // 使用冲刷目标 PC
        ref_difftest_regcpy(&ref_r, DIFFTEST_TO_REF);
        
        if (g_print_step) {
            printf("flush: sync to ref pc: 0x%08x\n", prev_ex_flush_pc);
        }
        
        prev_ex_flush = false;
        return;
    }

    // 处理延迟的 WB 指令
    if (wb_valid_delayed) {
        vaddr_t npc = wb_pc_delayed + 4; // 默认顺序执行
        uint32_t opcode = wb_inst_delayed & 0x7F;
        
        // 根据指令类型确定实际的下一个 PC
        if (opcode == 0x6F || opcode == 0x67) { // JAL 或 JALR
            // 对于跳转指令，下一个 PC 应该是跳转目标
            npc = wb_valid ? wb_pc : top->rootp->rv32e__DOT__IF_ID_pc;
        } else if (opcode == 0x63) { // 分支指令 (B-type)
            bool take_branch = top->rootp->rv32e__DOT__exu__DOT__take_branch;
            if (take_branch) {
                // 对于成功的分支，下一个 PC 是分支目标
                npc = wb_valid ? wb_pc : top->rootp->rv32e__DOT__IF_ID_pc;
            }
        }
        
        // 执行差分测试
        if (g_print_step) {
            printf("difftest (delayed): pc: 0x%08x | npc: 0x%08x\n", wb_pc_delayed, npc);
        }
        difftest_step(wb_pc_delayed, npc);
        wb_valid_delayed = false;
    }

    // 处理当前 WB 阶段的有效指令
    if (wb_valid && run_time >= start_time) {
        // 延迟处理当前指令，等到下一个周期确定 npc
        wb_valid_delayed = true;
        wb_pc_delayed = wb_pc;
        wb_inst_delayed = wb_inst;
    }
#endif
}

static void execute(uint64_t n) {
    
    for (; n > 0; n--) {
        
        execute_once();
        g_nr_guest_inst++;
        trace_and_difftest();
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