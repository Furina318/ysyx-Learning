#include "Vonly_addi.h"
#include "verilated.h"
#include "stdio.h"
#include "stdlib.h"
#include "assert.h"
#include "verilated_vcd_c.h"

// DPI-C函数实现
extern "C" void dpi_ebreak() {
    Verilated::gotFinish(true);  // 设置仿真结束标志
    printf("\nEBREAK detected, ending simulation.\n\n");
}

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;//创建VerilatedContext对象contextp用于管理上下文
    contextp->commandArgs(argc, argv);//通过commandArgs函数将命令行参数传递给contextp
    Vonly_addi* top = new Vonly_addi{contextp};//创建Vonly_addi对象top

    VerilatedVcdC* tfp = new VerilatedVcdC;//创建VerilatedVcdC对象tfp用于生成波形文件
    contextp->traceEverOn(true);//开启波形跟踪
    top->trace(tfp, 0);//将top的波形信息输出到tfp
    tfp->open("wave.vcd");//打开波形文件

    top->reset = 1;
    top->clk = 0;

    while (contextp->time() < 60 && !contextp->gotFinish()) {
        top->clk = !top->clk;//翻转时钟信号
        if (contextp->time() == 10) {
            top->reset = 0;  // 10个时间单位后释放复位
        }
        top->eval();//执行仿真
        if (top->clk) {
            printf("Time: %ld | PC: %08x | Reset: %d\n", 
                   contextp->time(), top->pc, top->reset);
        }
        tfp->dump(contextp->time());//将当前时间信息输出到波形文件
        contextp->timeInc(1);//推进仿真时间
    }
    delete top;
    tfp->close();
    delete contextp;
    return 0;
}
