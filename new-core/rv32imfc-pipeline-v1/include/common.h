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
typedef uint16_t ioaddr_t;

#define PAGE_SHIFT        12
#define PAGE_SIZE         (1ul << PAGE_SHIFT)
#define PAGE_MASK         (PAGE_SIZE - 1)

#define FMT_WORD MUXDEF(CONFIG_ISA64, "0x%016lx", "0x%08x")
#define FMT_PADDR MUXDEF(PMEM64, "0x%016lx", "0x%08x")

#endif