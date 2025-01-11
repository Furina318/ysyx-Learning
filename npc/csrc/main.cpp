#include <nvboard.h>
#include <Vdouble_sw.h>
 

static TOP_NAME Vdut;

void nvboard_bind_all_pins(TOP_NAME* top);

//static void single_cycle() {
 // Vdut.clk = 0; Vdut.eval();
 // Vdut.clk = 1; Vdut.eval();
//}

//static void reset(int n) {
  //dut.rst = 1;
  //while (n -- > 0) single_cycle();
  //dut.rst = 0;
//}

int main() {
  nvboard_bind_all_pins(&Vdut);
  nvboard_init();

  //reset(10);

  while(1) {
    nvboard_update();
    Vdut.eval();
    //single_cycle();
  }
}
