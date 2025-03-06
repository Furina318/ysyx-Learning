#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vrv32e.h"
#include "../include/common.h"
#include "../include/utils.h"
#include "../include/debug.h"

VerilatedVcdC* tfp = new VerilatedVcdC(); //导出vcd波形需要加此语句
Vrv32 *top = new Vrv32e("top");
vluint64_t main_time = 0;  //initial 仿真时间

entern "C" void ebreak(int station,int inst){
    if(Verilated::gotFinish())
    return;
    // Log("maintime = %ld, state = %d, pc = 0x%08x, inst = 0x%08x", main_time, npc_state.state, top->rv32__DOT__pc, top->rv32__DOT__inst);

    //虽然波形图上inst随pc同时变化，但通过打印二者会发现inst会在pc变化之后才改变（这是因为二者都发生变化了之后才输出至波形图的）
    //然而，这个延时会导致decode错误，然后调用了 “ebreak(`ABORT, inst);”
    if(main_time >= start_time + 1)   // at the begining (main_time < start_time and before the reset), all regs are zeros
    {
        npc_state.halt_ret = top->rv32__DOT__register_file_inst__DOT__regs[10]; //a0
        npc_state.halt_pc = top->rv32__DOT__pc;

        Log("Ebreak takes place in the %s", alu_names[unit]);
        Log("maintime = %ld, state = %d, pc = 0x%08x, inst = 0x%08x", main_time, npc_state.state, top->rv32__DOT__pc, top->rv32__DOT__inst);

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
  tfp->open("waveform.vcd"); //打开vcd

  reset();  //复位
}