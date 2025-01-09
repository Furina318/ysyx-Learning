#include <nvboard.h>
#include <Vdouble_sw.h>
 
static TOP_NAME dut;
 
void nvboard_bind_all_pins(TOP_NAME* double_sw);
 
int main() {
  nvboard_bind_all_pins(&dut);
  nvboard_init();
 
  while(1) {
    nvboard_update();
    dut.eval(); 
  }
}
