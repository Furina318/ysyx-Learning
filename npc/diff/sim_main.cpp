#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<nvboard.h>

#include"Vtop.h"
#include"verilated.h"
#include"verilated_vcd_c.h"

//static Vtop* top;

void nvboard_bind_all_pins(Vtop* top);

void single_cycle(){
    top->clk = 0; top->eval(); m_trace->dump(contextp->time());  // update output
    top->clk = 1; top->eval(); m_trace->dump(contextp->time()); 
}

// void reset(int n) {
//   top->rst = 1;
//   while (n-- > 0) single_cycle();
//   top->rst = 0;
// }

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);

    Vtop* top = new Vtop{contextp};

    nvboard_bind_all_pins(top);
    nvboard_init();
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    top->trace(m_trace, 99);
    m_trace->open("wave.vcd");
    
    //reset(10);
    while (!contextp->gotFinish()) {
    	//single_cycle();
	nvboard_update();

        contextp->timeInc(1);
        top->clk = 0; top->eval(); // update output
        m_trace->dump(contextp->time());
        contextp->timeInc(1);
        top->clk = 1; top->eval();
        m_trace->dump(contextp->time());
    }
    m_trace->close();
    delete top;
    delete contextp;
    return 0;
}
