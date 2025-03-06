#ifndef __DIFFTEST_H__
#define __DIFFTEST_H__


#include "common.h"
#include "debug.h"
#include "macro.h"
#include "utils.h"
#include "paddr.h"


enum{ DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

typedef struct {
    word_t gpr[32];
    vaddr_t pc;
}CPU_state;

#endif