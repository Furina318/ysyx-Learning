#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "svdpi.h"
#include "../include/common.h"
#include "../include/utils.h"
#include "../include/debug.h"
#include "../include/paddr.h"

#ifdef YSYXSOC
#include "VysyxSoCFull.h"
#include "../../obj_dir/VysyxSoCFull___024root.h"
#include "VysyxSoCFull__Dpi.h"
#else
#include "Vysyx_25010030_npc.h"
#include "Vysyx_25010030_npc_ysyx_25010030_npc.h"
#include "Vysyx_25010030_npc_ysyx_25010030.h"
#include "../../obj_dir/Vysyx_25010030_npc___024root.h"
#include "Vysyx_25010030_npc__Dpi.h"
#endif

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

extern double lsu_ratio, ifu_ratio, exu_ratio;
/* **************** */
#ifdef CONFIG_WAVE
#include "verilated_vcd_c.h"
VerilatedVcdC *tfp = new VerilatedVcdC(); // 导出vcd波形
#endif

#ifdef YSYXSOC
VysyxSoCFull *top = new VysyxSoCFull("top");
#else
Vysyx_25010030_npc *top = new Vysyx_25010030_npc("top");
#endif

vluint64_t main_time = 0; // 仿真时间

#ifdef NVBOARD
#include <nvboard.h>
extern void nvboard_bind_all_pins(VysyxSoCFull* top);
#endif

//=========================================== DPI-C ==========================================//
// Monitor s3 register writes for debugging
extern "C" void debug_s3_write(int val, int pc_val) {
    (void)val;
    (void)pc_val;
}
extern "C" void ebreak(int station, int inst) {
    if(main_time>=start_time){
        if (Verilated::gotFinish())
            return;
        #ifdef YSYXSOC
        npc_state.halt_ret = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbu__DOT__regs[10]; // a0
        npc_state.halt_pc = top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bpu_pc;
        #else
        npc_state.halt_pc = top->rootp->ysyx_25010030_npc->cpu->bpu_pc;
        npc_state.halt_ret = top->rootp->ysyx_25010030_npc->cpu->wbu__DOT__regs[10];
        #endif

        switch (station) {
            case HIT_TRAP:
                npc_state.state = NPC_END;
                // _Log(ANSI_FG_GREEN "HIT GOOD TRAP\n" ANSI_NONE);
                break;

            case ABORT:
            default:
                Log("maintime = %ld, pc = 0x%08x", main_time, npc_state.halt_pc);
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
    if(main_time >= 1) {
        if (!(raddr >= 0x80000000u && raddr <= 0x87ffffffu)) {
            return 0; // 调试用途: 越界访问不触发 out_of_bound, 便于完整转储波形
        }
        return pmem_r(raddr,len);
    }
    return 0; // 复位期间返回 0，避免未定义行为
}

extern "C" void pmem_write(paddr_t waddr, word_t wdata, int len) {
    if (main_time >= start_time) {
        if (!(waddr >= 0x80000000u && waddr <= 0x87ffffffu)) {
            return; // 调试用途: 越界访问不触发 out_of_bound, 便于完整转储波形
        }
        pmem_w(waddr, len, wdata); // 复位结束后才写入
    }
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
        if(CONFIG_WAVE_MODE == 0) tfp->dump(main_time); // 记录波形
        else if((CONFIG_WAVE_MODE == 1) && (main_time >= WAVE_START_TIME) && (main_time <= WAVE_END_TIME))
            tfp->dump(main_time); // 记录波形
        else if(CONFIG_WAVE_MODE == 2) {
            static int wave_file_index = 0;
            static vluint64_t current_wave_start = 0;
            
            // 检查是否在记录时间范围内
            if (main_time >= WAVE_START_TIME && main_time < WAVE_END_TIME) {
                // 检查是否需要开始新的波形文件
                if ((main_time - WAVE_START_TIME) % CONFIG_WAVE_MAX_UPDATE_CYCLES == 0) {

                    // 关闭并销毁当前波形追踪对象，避免重复注册模型到同一个trace实例
                    if (tfp) {
                        tfp->close();
                        delete tfp;
                        tfp = NULL;
                    }

                    // 创建新的波形文件名
                    char new_filename[256];
                    if (wave_file_index == 0) {
                        snprintf(new_filename, sizeof(new_filename), "wave.vcd");
                    } else {
                        snprintf(new_filename, sizeof(new_filename), "wave_%d.vcd", wave_file_index);
                    }

                    // 创建新的 trace 对象并注册模型
                    tfp = new VerilatedVcdC();
                    Verilated::traceEverOn(true);
                    top->trace(tfp, 0);

                    // 打开新的波形文件
                    tfp->open(new_filename);
                    wave_file_index++;
                    current_wave_start = main_time;

                    printf("Starting new wave file: %s at cycle %lu\n", new_filename, main_time);
                }
                
                // 记录波形数据
                tfp->dump(main_time);
            }
            // 如果超过了结束时间，关闭并销毁波形文件对象
            else if (main_time >= WAVE_END_TIME && wave_file_index > 0) {
                if (tfp) {
                    tfp->close();
                    delete tfp;
                    tfp = NULL;
                }
                wave_file_index = 0; // 重置索引
            }
        }
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

#ifdef NVBOARD
    nvboard_bind_all_pins(top);
    nvboard_init();
#endif

    Verilated::commandArgs(argc, argv); // 处理命令行参数
    /* Initialize the monitor. */
    init_monitor(argc, argv);

    /* Initialize the verilator. */
    init_verilator();

    /* Receive commands from user and run simulation. */
    sdb_mainloop();

    /* End the simulation */
    top->final();

#ifdef CONFIG_WAVE
    // tfp->close();
    if (tfp) {
        tfp->close();
        delete tfp;
        tfp = NULL;
    }
#endif

    delete top;

    return is_exit_status_bad();
}
