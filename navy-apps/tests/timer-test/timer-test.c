// #include <stdio.h>
// #include <stdint.h>
// #include <sys/time.h>

// int main() {
//     printf("Timer test start!\n");
//     struct timeval tv;
// 	time_t navy_boot_time = 0;
// 	gettimeofday(&tv, NULL);
// 	navy_boot_time = tv.tv_sec;
// 	struct timeval last_tv = {0};
//     // volatile int count = 500000; // 0.5 second
//     while (1) {
//         if(!gettimeofday(&tv, NULL)){
// 			tv.tv_sec -= navy_boot_time;
// 			if(((tv.tv_sec * 10 + tv.tv_usec / 100000) - (last_tv.tv_sec * 10 + last_tv.tv_usec / 100000) > 5)){
// 				printf("now sec: %ld, now usec: %ld\n", tv.tv_sec, tv.tv_usec);
// 				last_tv = tv;
// 			}
// 		}
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdint.h>
#include <NDL.h>
// #include "../../libs/libndl/include/NDL.h"

int main() {
  NDL_Init(0);
  int count = 1;
  while (1) {
    uint32_t cost_time_us = NDL_GetTicks();
    if (cost_time_us >= count * 500000) {
      printf("cnt->%d, time->%u us\n", count++, cost_time_us);
    }
  }
  return 0;
}