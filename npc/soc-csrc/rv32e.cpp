#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "VysyxSoCFull.h"
#include "../obj_dir/VysyxSoCFull___024root.h"
#include "VysyxSoCFull__Dpi.h"
#include "svdpi.h"
#include "../include/common.h"
#include "../include/utils.h"
#include "../include/debug.h"
#include "../include/paddr.h"

#define HIT_TRAP 1
#define ABORT 2
#define start_time 20

/* **************** */

extern void ebreak(int station, int inst);
extern void init_monitor(int argc, char *argv[]);
extern void init_monitor(int, char *[]);
extern void sdb_mainloop();
extern int is_exit_status_bad();

extern word_t pmem_r(paddr_t addr, int len);
extern void pmem_w(paddr_t addr, int len, word_t data);

extern word_t host_read(void *addr, int len);
extern void host_write(void *addr, int len, word_t data);

extern uint8_t* soc_mrom_guest_to_host(paddr_t paddr);
extern uint8_t* soc_flash_guest_to_host(paddr_t paddr);
extern uint8_t* soc_psram_guest_to_host(paddr_t paddr);
extern uint8_t* soc_sdram_guest_to_host(paddr_t paddr);

/* **************** */
#ifdef CONFIG_WAVE
#include "verilated_vcd_c.h"
VerilatedVcdC *tfp = new VerilatedVcdC(); // 导出vcd波形
#endif

#ifdef CONFIG_NVBOARD
#include <nvboard.h>
#endif

VysyxSoCFull *top = new VysyxSoCFull("top");
vluint64_t main_time = 0; // 仿真时间

//=========================================== DPI-C ==========================================//
extern "C" void ebreak(int station, int inst) {
    if(main_time>=start_time){
        if (Verilated::gotFinish())
            return;

        npc_state.halt_ret = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_stage__DOT__regs[10]; // a0
        npc_state.halt_pc = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc;

        switch (station) {
            case HIT_TRAP:
                npc_state.state = NPC_END;
                // _Log(ANSI_FG_GREEN "HIT GOOD TRAP\n" ANSI_NONE);
                break;

            case ABORT:
            default:
                Log("maintime = %ld, pc = 0x%08x, inst = 0x%08x", main_time, top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc, top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__instr);
                npc_state.state = NPC_ABORT;
                // _Log(ANSI_FG_RED "HIT BAD TRAP\n" ANSI_NONE);
                break;
        }
    }      
}

extern "C" void flash_read(int32_t addr, int32_t *data) { 
    addr += CONFIG_SOC_FLASH_BASE; 
    // *data = host_read(soc_flash_guest_to_host(addr), 4); 
    uint32_t temp = host_read(soc_flash_guest_to_host(addr), 4);
    *data = ((temp & 0x000000ff) << 24) + ((temp & 0x0000ff00) << 8) + ((temp & 0x00ff0000) >> 8) + ((temp & 0xff000000) >> 24);
}

extern "C" void psram_read(int32_t addr, int32_t *data) {
    addr += CONFIG_SOC_PSRAM_BASE;
    *data = host_read(soc_psram_guest_to_host(addr), 4);
}

extern "C" void psram_write(int32_t addr, int32_t data, int32_t mask) {
    addr += CONFIG_SOC_PSRAM_BASE;
    if((addr >= CONFIG_SOC_PSRAM_BASE) && (addr <= CONFIG_SOC_PSRAM_BASE + CONFIG_SOC_PSRAM_SIZE)) {
        uint32_t wdata = data >> ((8 - mask) * 4);
        host_write(soc_psram_guest_to_host(addr), mask/2, wdata);
        // printf("[psram_write]addr: 0x%08x   data: 0x%08x\n", addr, data);
    }
}

extern "C" void mrom_read(int32_t addr, int32_t *data) { *data = host_read(soc_mrom_guest_to_host(addr), 4); }

extern "C" word_t pmem_read(paddr_t raddr, int len) {
    if(main_time >= 1) return pmem_r(raddr,len);
    return 0; // 复位期间返回 0，避免未定义行为
}

extern "C" void pmem_write(paddr_t waddr, word_t wdata, int len) {
    if (main_time >= start_time) pmem_w(waddr, len, wdata); // 复位结束后才写入
}
//============================================================================================//

NPCState npc_state = { .state = NPC_STOP };

int is_exit_status_bad() {
    int good = (npc_state.state == NPC_END && npc_state.halt_ret == 0) ||
               (npc_state.state == NPC_QUIT);
    return !good;
}

void single_cycle(void) {
    if (!Verilated::gotFinish()) {
        top->clock = !top->clock; // 翻转时钟信号

        if (main_time == start_time) {
            top->reset = 0; // 在指定时间释放复位
        }

        top->eval(); // 执行仿真
#ifdef CONFIG_WAVE
        tfp->dump(main_time); // 记录波形
#endif
        main_time++; // 推进仿真时间
    }
}

void reset(void) {
    top->reset = 1; // 复位信号置高
    for (int i = 0; i < start_time; i++) {
        single_cycle(); // 执行复位周期
    }
}

void init_verilator(void) {
#ifdef CONFIG_WAVE
    Verilated::traceEverOn(true); // 启用波形跟踪

    top->trace(tfp, 0);
    tfp->open("wave.vcd"); // 打开波形文件
#endif

    reset(); // 执行复位
}

void die(){
    top->final();
#ifdef CONFIG_WAVE
    tfp->close();
#endif
    delete top;
    Verilated::gotFinish(true);
}

int main(int argc, char *argv[]) {
    Verilated::commandArgs(argc, argv); // 处理命令行参数
    /* Initialize the monitor. */
    init_monitor(argc, argv);

    /* Initialize the verilator. */
    init_verilator();

    /* Receive commands from user and run simulation. */
    sdb_mainloop();

    /* End the simulation */
    top->final();
    // tfp->close();
    delete top;

    return is_exit_status_bad();
}