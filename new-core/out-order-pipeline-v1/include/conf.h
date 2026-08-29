#ifndef __CONF_H__
#define __CONF_H__

// Include generated config from menuconfig (if available)
// To use menuconfig: run `make menuconfig` then `make run`
#include "../../include/generated/autoconf.h"

// ============================================================
// Configuration about NPC (fallback defaults)
// These values are used when autoconf.h is not generated.
// Run `make menuconfig` to configure interactively.
// ============================================================

// --- Memory Layout ---
#ifndef CONFIG_MSIZE
#define CONFIG_MSIZE 0x8000000 // 64MB
#endif
#ifndef CONFIG_MBASE
#define CONFIG_MBASE 0x80000000
#endif
#ifndef CONFIG_PC_RESET_OFFSET
#define CONFIG_PC_RESET_OFFSET 0x0
#endif

// --- SOC Memory Map ---
#ifndef CONFIG_SOC_MROM_BASE
#define CONFIG_SOC_MROM_BASE 0x20000000
#endif
#ifndef CONFIG_SOC_MROM_SIZE
#define CONFIG_SOC_MROM_SIZE (0x20000fff - 0x20000000) // 4KB
#endif
#ifndef CONFIG_SOC_FLASH_BASE
#define CONFIG_SOC_FLASH_BASE 0x30000000
#endif
#ifndef CONFIG_SOC_FLASH_SIZE
#define CONFIG_SOC_FLASH_SIZE (0x3fffffff - 0x30000000) // 16MB
#endif
#ifndef CONFIG_SOC_PSRAM_BASE
#define CONFIG_SOC_PSRAM_BASE 0x80000000
#endif
#ifndef CONFIG_SOC_PSRAM_SIZE
#define CONFIG_SOC_PSRAM_SIZE (0x9fffffff - 0x80000000)
#endif
#ifndef CONFIG_SOC_SDRAM_BASE
#define CONFIG_SOC_SDRAM_BASE 0xa0000000
#endif
#ifndef CONFIG_SOC_SDRAM_SIZE
#define CONFIG_SOC_SDRAM_SIZE (0xbfffffff - 0xa0000000)
#endif

// --- Device MMIO ---
#ifndef DEVICE_BASE
#define DEVICE_BASE 0xa0000000
#endif
#ifndef MMIO_BASE
#define MMIO_BASE   0xa0000000
#endif

#ifndef CONFIG_SOC_RTC_MMIO
#define CONFIG_SOC_RTC_MMIO 0x02000000
#endif
#ifndef CONFIG_RTC_MMIO
#define CONFIG_RTC_MMIO (DEVICE_BASE + 0x0002000)
#endif
#ifndef CONFIG_SERIAL_MMIO
#define CONFIG_SERIAL_MMIO (DEVICE_BASE + 0x0000000)
#endif
#ifndef CONFIG_I8042_DATA_MMIO
#define CONFIG_I8042_DATA_MMIO (DEVICE_BASE + 0x0001000)
#endif
#ifndef CONFIG_FB_ADDR
#define CONFIG_FB_ADDR (MMIO_BASE   + 0x1000000)
#endif
#ifndef CONFIG_VGA_CTL_MMIO
#define CONFIG_VGA_CTL_MMIO (DEVICE_BASE + 0x0003000)
#endif
#ifndef CONFIG_VGA_SHOW_SCREEN
#define CONFIG_VGA_SHOW_SCREEN 1
#endif
#ifndef CONFIG_VGA_SIZE_400x300
#define CONFIG_VGA_SIZE_400x300 1
#endif
#ifndef CONFIG_SDCARD_CTL_MMIO
#define CONFIG_SDCARD_CTL_MMIO 0xa3000000
#endif
#ifndef CONFIG_SDCARD_IMG_PATH
#define CONFIG_SDCARD_IMG_PATH "The path of sdcard image"
#endif
#ifndef CONFIG_AUDIO_CTL_MMIO
#define CONFIG_AUDIO_CTL_MMIO (DEVICE_BASE + 0x0004000)
#endif
#ifndef CONFIG_SB_ADDR
#define CONFIG_SB_ADDR (MMIO_BASE   + 0x1200000)
#endif
#ifndef CONFIG_SB_SIZE
#define CONFIG_SB_SIZE 0x10000
#endif

// --- Feature Toggles ---
#ifndef CONFIG_RT_CHECK
#define CONFIG_RT_CHECK 1
#endif
#ifndef CONFIG_TIMER_GETTIMEOFDAY
#define CONFIG_TIMER_GETTIMEOFDAY 1
#endif

// --- Device Enables ---
#ifndef CONFIG_DEVICE
#define CONFIG_DEVICE 1
#endif
#ifndef CONFIG_HAS_SERIAL
#define CONFIG_HAS_SERIAL 1
#endif
#ifndef CONFIG_HAS_TIMER
#define CONFIG_HAS_TIMER 1
#endif
#ifndef CONFIG_HAS_KEYBOARD
#define CONFIG_HAS_KEYBOARD 1
#endif

// --- Debug / Trace (disabled by default) ---
// #define CONFIG_TRACE 1
// #define CONFIG_FTRACE 1
// #define CONFIG_MTRACE 1
// #define CONFIG_ITRACE 1

// --- Differential Testing (disabled by default) ---
// #define CONFIG_DIFFTEST 1

// --- Watchpoints ---
#ifndef CONFIG_WATCHPOINTS
#define CONFIG_WATCHPOINTS 1
#endif

// --- Waveform (disabled by default, use menuconfig to enable) ---
// #define CONFIG_WAVE 1
#ifdef CONFIG_WAVE_START_TIME
#define WAVE_START_TIME CONFIG_WAVE_START_TIME
#endif
#ifdef CONFIG_WAVE_END_TIME
#define WAVE_END_TIME CONFIG_WAVE_END_TIME
#endif
#ifndef WAVE_START_TIME
#define WAVE_START_TIME 0
#endif
#ifndef WAVE_END_TIME
#define WAVE_END_TIME 100000
#endif
#ifndef CONFIG_WAVE_MAX_UPDATE_CYCLES
#define CONFIG_WAVE_MAX_UPDATE_CYCLES 10000
#endif
#ifndef CONFIG_WAVE_MODE
#define CONFIG_WAVE_MODE 1  //0:记录波形从复位开始直到结束；
                            //1:从WAVE_START_TIME开始记录波形，到WAVE_END_TIME结束；
                            //2:当记录波形周期大于CONFIG_WAVE_MAX_UPDATE_CYCLES时更新波形文件重新记录
#endif
#endif
