#include "../include/common.h"
#include "../include/conf.h"
#include "../include/difftest.h"
#include "../include/utils.h"
#include <dlfcn.h>

#ifdef YSYXSOC
#include "VysyxSoCFull.h"
#include "../../obj_dir/VysyxSoCFull___024root.h"
extern VysyxSoCFull *top;
#define top_pc top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bpu_pc
#define top_regs top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs
#else
#include "Vysyx_25010030_npc.h"
#include "Vysyx_25010030_npc_ysyx_25010030_npc.h"
#include "Vysyx_25010030_npc_ysyx_25010030.h"
#include "Vysyx_25010030_npc_store_buffer__I6.h"
#include "../../obj_dir/Vysyx_25010030_npc___024root.h"
extern Vysyx_25010030_npc *top;
#define top_pc top->rootp->ysyx_25010030_npc->cpu->bpu_pc
#define top_regs top->rootp->ysyx_25010030_npc->cpu->wbu__DOT__regs
// #define top_mepc top->rootp->ysyx_25010030_npc->cpu->wbu__DOT__mepc
// #define top_mtvec top->rootp->ysyx_25010030_npc->cpu->wbu__DOT__mtvec

#endif

extern NPCState npc_state;
extern uint8_t* guest_to_host(paddr_t paddr);
extern "C" word_t pmem_read(paddr_t raddr, int len);

static int skip_ref_count = 0;   // counter for pending skip requests (handles multiple in-flight peripheral accesses)
static int skip_dut_nr_inst = 0;

// extern "C" void difftest_skip_ref() {
//   skip_ref_count++;
//   skip_dut_nr_inst = 0;
// }

#ifdef CONFIG_DIFFTEST

CPU_state cpu;
static int skip_cnt_ref = 0;   // the amount to skip the ref
static bool skip_flag = false; // the flag   to skip the ref
static bool rst_flag = true;
vaddr_t last_ref_pc;

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;

void difftest_skip_ref() {
    skip_ref_count++;
}


const char *ref_regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

#define REG_NUM sizeof(ref_regs) / sizeof(ref_regs[0])

void update_cpu_state(CPU_state *cpu)
{
    cpu->pc = top_pc;
    for(int i = 0; i < REG_NUM; i++)
        cpu->gpr[i] = top_regs[i];
}


void init_difftest(char *ref_so_file, long img_size, int port) 
{
    // update_cpu_state(&cpu);
    // printf("%s\n",ref_so_file);
    assert(ref_so_file != NULL);
    // printf("%s\n",ref_so_file);
    void *handle;
    handle = dlopen(ref_so_file, RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "dlopen error: %s\n", dlerror());
        exit(1);
    }
    printf("%s\n",ref_so_file);
    assert(handle);

    ref_difftest_memcpy = (void (*)(uint32_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
    assert(ref_difftest_memcpy);

    ref_difftest_regcpy = (void (*)(void*, bool))dlsym(handle, "difftest_regcpy");
    assert(ref_difftest_regcpy);

    ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
    assert(ref_difftest_exec);

    // ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
    // assert(ref_difftest_raise_intr);

    void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
    assert(ref_difftest_init);

    Log("The result of every instruction will be compared with %s. "
        "This will help you a lot for debugging, but also significantly reduce the performance. ", ref_so_file);

    ref_difftest_init(port);
    ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);

    CPU_state ref_r;
    ref_r.pc = CONFIG_MBASE;//复位的时候默认为npc架构
    last_ref_pc = CONFIG_MBASE;
    for(int i = 0; i < REG_NUM; i++)
        ref_r.gpr[i] = 0;
    // ref_r.csr.mstatus = 0x1800;
    // ref_r.csr.mcause = 0xb;
}


bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) 
{
    bool success = true;

    //check pc
    if(last_ref_pc != pc)
    {
        _Log(ANSI_FG_YELLOW "[difftest]" ANSI_NONE   ANSI_FG_RED "pc" 
             ANSI_NONE "  dut:0x%08x   ref:0x%08x\n", pc, last_ref_pc);
        success = false;
    }
    last_ref_pc = ref_r->pc;

    //check general purpose registers
    for(int i = 0; i < REG_NUM; i++)
        if(top_regs[i] != ref_r->gpr[i])
        {
            _Log(ANSI_FG_YELLOW "[difftest]" ANSI_NONE   ANSI_FG_RED "%s" 
                 ANSI_NONE "  dut:0x%08x   ref:0x%08x\n", ref_regs[i], top_regs[i], ref_r->gpr[i]);
            success = false;
        }
    
    return success;
}

static void checkregs(CPU_state *ref, vaddr_t pc)
{
    if (!isa_difftest_checkregs(ref, pc))
    {
        // difftest failed
        npc_state.state = NPC_ABORT;
        npc_state.halt_pc = pc;
        Log("Differential test %s at pc = 0x%08x." , (ANSI_FMT("fails", ANSI_FG_RED)), npc_state.halt_pc);
        printf("\033[33m[DUT->GPR]\t\t[REF->GPR]\033[0m\n");
        for(int i = 0; i < REG_NUM; i++)
        {
            printf("%s:\t0x%08x\t0x%08x\n", ref_regs[i], top_regs[i], ref->gpr[i]);
        }
        // printf("mepc   :\t0x%08x\t0x%08x\n", top_mepc, ref->csr.mepc);
        // printf("mtvec  :\t0x%08x\t0x%08x\n", top_mtvec, ref->csr.mtvec);
        // printf("mcause :\t0x%08x\t0x%08x\n", 0xb, ref->csr.mcause);
        // printf("mstatus:\t0x%08x\t0x%08x\n", 0x1800, ref->csr.mstatus);
        printf("\npc:\t0x%08x\t0x%08x\n", pc, ref->pc);
    }
}


void difftest_step(vaddr_t pc, vaddr_t npc, bool dual_cmt)
{
    #ifdef YSYXSOC
    uint32_t inst = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_inst;
    #else
    uint32_t inst = top->rootp->ysyx_25010030_npc->cpu->wbu_inst;
    #endif
    uint32_t opcode = inst & 0x7f;
    bool is_load  = (opcode == 0x03);  // LOAD opcode
    bool is_store = (opcode == 0x23);  // STORE opcode

    #ifdef YSYXSOC
    vaddr_t cmt_addr_1 = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__stb_cmt_addr_1;
    vaddr_t cmt_addr_2 = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__stb_cmt_addr_2;
    vaddr_t ld_addr_1  = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_addr;
    vaddr_t ld_addr_2  = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_addr_2;
    #else
    vaddr_t cmt_addr_1 = top->rootp->ysyx_25010030_npc->cpu->stb_cmt_addr_1;
    vaddr_t cmt_addr_2 = top->rootp->ysyx_25010030_npc->cpu->stb_cmt_addr_2;
    vaddr_t ld_addr_1  = top->rootp->ysyx_25010030_npc->cpu->wbu_addr;
    vaddr_t ld_addr_2  = top->rootp->ysyx_25010030_npc->cpu->wbu_addr_2;
    #endif

    // slot2 (双提交第二条) 的指令: 用于判断第二条是否也是设备访问
    #ifdef YSYXSOC
    uint32_t inst2 = dual_cmt ? top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu_inst_2 : 0;
    #else
    uint32_t inst2 = dual_cmt ? top->rootp->ysyx_25010030_npc->cpu->wbu_inst_2 : 0;
    #endif
    uint32_t opcode2 = inst2 & 0x7f;
    bool is_load2  = (opcode2 == 0x03);  // LOAD opcode
    bool is_store2 = (opcode2 == 0x23);  // STORE opcode

    // 提交的访存地址在 mmio 范围 → 设备访问, 跳过 ref 执行
    // (NEMU 的 pmem 不覆盖这些设备地址, ref 执行会越界; 且时钟外设读值
    //  由 DUT 周期计数产生, 与 NEMU 宿主机时间不同, 必须跳过并同步)。
    auto addr_is_mmio = [](vaddr_t a) {
        return (a >= 0xa0000000 && a < 0xc0000000)
            || (a >= 0x02000000 && a < 0x02010000);
    };

    bool mmio_st1 = is_store  && addr_is_mmio(cmt_addr_1);  // 第1条是设备访问 store
    bool mmio_st2 = is_store2 && addr_is_mmio(cmt_addr_2);  // 第2条是设备访问 store
    bool mmio_ld1 = is_load   && addr_is_mmio(ld_addr_1);   // 第1条是设备访问 load
    bool mmio_ld2 = is_load2  && addr_is_mmio(ld_addr_2);   // 第2条是设备访问 load

    // 同步 REF: 让 ref.pc 跳到指定位置, 并把 DUT 寄存器状态拷给 ref
    // (跳过被 mmio 吞掉的访存; load 的读值随 DUT 状态一起同步)
    auto sync_ref_pc = [&](vaddr_t new_pc) {
        CPU_state ref_r;
        for(int i = 0; i < REG_NUM; i++)
            ref_r.gpr[i] = top_regs[i];
        ref_r.pc = new_pc;
        ref_difftest_regcpy(&ref_r, DIFFTEST_TO_REF);
        last_ref_pc = new_pc;
    };

    if (dual_cmt) {
        // bundle 内含设备访问 load: 读值非确定, ref 无法重现,
        // 整包跳过并把 DUT 状态(含 load 读回值)同步给 ref。
        if (mmio_ld1 || mmio_ld2) {
            sync_ref_pc(pc + 8);
            return;
        }
        if (mmio_st1 && mmio_st2) {
            // 两条都是设备访问 store: 一并跳过, ref 直接从 pc+8 继续
            sync_ref_pc(pc + 8);
            return;
        }
        if (mmio_st1) {
            // 第一条是设备访问 store 被跳过, 第二条 (pc+4) 必须由 ref 执行,
            // 否则 ref 永远少执行一条 (如 putch 的 store 后紧跟 ret)。
            sync_ref_pc(pc + 4);
            ref_difftest_exec(1);
            ref_difftest_regcpy(&cpu, DIFFTEST_TO_DUT);
            checkregs(&cpu, pc + 4);
            return;
        }
        if (mmio_st2) {
            // 第一条正常指令由 ref 执行, 第二条设备访问 store 跳过
            ref_difftest_exec(1);
            ref_difftest_regcpy(&cpu, DIFFTEST_TO_DUT);
            checkregs(&cpu, pc);
            sync_ref_pc(pc + 8);
            return;
        }
        ref_difftest_exec(2);
    } else {
        if (mmio_ld1 || mmio_st1) {
            // 单提交的设备访问 load/store: 跳过并同步
            sync_ref_pc(pc + 4);
            return;
        }
        ref_difftest_exec(1);
    }

    ref_difftest_regcpy(&cpu, DIFFTEST_TO_DUT);
    checkregs(&cpu, pc);
}

#else
void init_difftest(char *ref_so_file, long img_size, int port) { }
void difftest_skip_ref() { }
#endif