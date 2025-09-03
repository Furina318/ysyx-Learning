#include"Vdouble_sw.h"
#include"verilated.h"
#include"stdio.h"
#include"stdlib.h"
#include"assert.h"

#include"verilated_vcd_c.h" //if export vcd,and use it

int main(int argc,char** argv)
{
	VerilatedContext* contextp=new VerilatedContext;//create a new Verilated context object
	contextp->commandArgs(argc,argv);//set command line parameters to context
	Vdouble_sw* top=new Vdouble_sw{contextp};

	VerilatedVcdC* tfp=new VerilatedVcdC;//init VCD*
	contextp->traceEverOn(true);//开启跟踪功能
	top->trace(tfp,0);
	tfp->open("wave.vcd");//设定输出文件为'wave.vcd'
	while(contextp->time()<80)//使用Ctrl+C结束，contextp->time()<100/!contextp->gotFinish()
	{
		int a=rand() & 1;
		int b=rand() &1;
		top->a=a;
		top->b=b;
		top->eval();
		printf("a = %d,b = %d,f = %d\n",a,b,top->f);
		
		tfp->dump(contextp->time());//dump wave
		contextp->timeInc(1);//推进仿真时间
		assert(top->f == (a^b));
	}
	delete top;
	tfp->close();
	delete contextp;
	return 0;
}

	
