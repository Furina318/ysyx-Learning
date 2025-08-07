#include <am.h>
#include "../ysyxsoc/include/ysyxsoc.h"
#include "../riscv.h"

void __am_timer_init() {
  // outl(RTC_ADDR,0);//将计时器的低 32 位和高 32 位清零
  // outl(RTC_ADDR + 4,0);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  // uptime->us = 0;
  uptime->us = (uint64_t)inl(RTC_ADDR+4);//高32
  uptime->us <<= 32;
  uptime->us += (uint64_t)inl(RTC_ADDR);//低32
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
