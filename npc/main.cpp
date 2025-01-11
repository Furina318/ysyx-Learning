#include <nvboard.h>
#include <Vdouble_sw.h>
 

static TOP_NAME Vdut;

void nvboard_bind_all_pins(TOP_NAME* top);



int main() {
  nvboard_bind_all_pins(&Vdut);
  nvboard_init();


  while(1) {
    nvboard_update();
    Vdut.eval();
  }
}
