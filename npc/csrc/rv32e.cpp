#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vrv32e.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/Vrv32e___024root.h"
#include "Vrv32e__Dpi.h"
#include "svdpi.h"
#include "../include/common.h"
#include "../include/utils.h"
#include "../include/debug.h"
#include "../include/paddr.h"

#define HIT_TRAP 1
#define ABORT 2
#define start_time 3

/* **************** */


extern void ebreak(int station,int inst);
extern void init_monitor(int argc,char *argv[]);
extern NPCState npc_state;
extern void   init_monitor(int, char *[]);
extern void   sdb_mainloop() ;
extern int    is_exit_status_bad();
extern word_t pmem_r(paddr_t addr, int len); 
extern void   pmem_w(paddr_t addr, int len, word_t data);
extern void   ebreak(int station, int inst);  


/* **************** */
VerilatedVcdC* tfp = new VerilatedVcdC(); //导出vcd波形需要加此语句
Vrv32e *top = new Vrv32e("top");
vluint64_t main_time = 0;  //initial 仿真时间

extern "C" void ebreak(int station,int inst){
    if(Verilated::gotFinish())
    return;
    
    if(main_time >= start_time + 1)   // at the begining (main_time < start_time and before the reset), all regs are zeros
    {
        npc_state.halt_ret = top->rootp->rv32e__DOT__register_files_inst__DOT__regs[10]; //a0
        npc_state.halt_pc = top->rootp->rv32e__DOT__pc;

        // Log("Ebreak takes place in the %s", names);
        Log("maintime = %ld, state = %d, pc = 0x%08x, inst = 0x%08x", main_time, npc_state.state, top->rootp->rv32e__DOT__pc, top->rootp->rv32e__DOT__inst);

    switch(station)
    {
      case HIT_TRAP:
        npc_state.state = NPC_END;
        break;

      case ABORT:
      default:
        npc_state.state = NPC_ABORT;
        break;
    }

    Verilated::gotFinish(true);
  }
}

extern "C" word_t pmem_read(paddr_t raddr,int len){
  if(main_time >= start_time+1) return pmem_r(raddr, len);
  return 0xdeafbeef;
}

extern "C" void pmem_write(paddr_t waddr,word_t wdata,int len){
  if(main_time >= start_time+1) pmem_w(waddr, len, wdata);
}

int is_exit_status_bad() {
  int good = (npc_state.state == NPC_END && npc_state.halt_ret == 0) ||
    (npc_state.state == NPC_QUIT);
  return !good;
}

void single_cycle(void) 
{
  if(!Verilated::gotFinish())
  { 
    top->clk = 0; top->eval(); tfp->dump(main_time);  main_time++; //推动仿真时间
    top->clk = 1; top->eval(); tfp->dump(main_time);  main_time++; //推动仿真时间
  }
}

static void reset(void)
{
  top->rst = 0; single_cycle();
  top->rst = 1; single_cycle();
  top->rst = 0; 
}

static void init_verilator(void)
{
  Verilated::traceEverOn(true); //导出vcd波形需要加此语句

  top->trace(tfp, 0);
  tfp->open("wave.vcd"); //打开vcd

  reset();  //复位
}

int main(int argc, char *argv[])
{
  /* Initialize the monitor. */
  init_monitor(argc, argv);

  /* Initialize the verilator. */
  init_verilator();

  /* Receive commands from user. */
  sdb_mainloop();

  /* End the simulation */
  top->final();
  tfp->close();
  delete top;

  return is_exit_status_bad();
}