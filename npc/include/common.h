#ifndef _COMMON_H
#define _COMMON_H

#include <bits/types.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#include "../include/conf.h"
// #include "../include/utils.h"
#include "macro.h"

typedef __uint64_t uint64_t;
typedef __uint32_t uint32_t;
typedef __uint16_t uint16_t;
typedef __uint8_t uint8_t;

typedef uint32_t word_t;
typedef int32_t sword_t;
typedef word_t paddr_t;
typedef word_t vaddr_t;

// #define ARRLEN(arr) (int)(sizeof(arr)/sizeof(arr[0]))
// #define PG_ALIGN    __attribute((aligned(4096)))
// #define CONFIG_MBASE 0x80000000
// #define CONFIG_MSIZE 0x80000000

#endif