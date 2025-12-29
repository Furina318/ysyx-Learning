#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <assert.h>

#define ENABLE_DEBUG 1 //是否启用调式输出

#if ENABLE_DEBUG
#define DEBUG(fmt, ...) do { printf(fmt, ##__VA_ARGS__); } while (0)
#else
#define DEBUG(fmt, ...) do { } while (0)
#endif

uint8_t PC = 1;          
uint8_t R[4] = {0};      
uint8_t M[16] = {0}; 
bool ebreak = false;

//  7  6 5  4 3   2 1   0
// +----+----+-----+-----+
// | 00 | rd | rs1 | rs2 | R[rd]=R[rs1]+R[rs2]       add指令, 寄存器相加
// +----+----+-----+-----+
// | 10 | rd |    imm    | R[rd]=imm                 li指令, 装入立即数, 高位补0
// +----+----+-----+-----+
// | 11 |   addr   | rs2 | if (R[0]!=R[rs2]) PC=addr bner0指令, 若不等于R[0]则跳转
// +----+----------+-----+

#define OPCODE(inst) (((inst) >> 6) & 0x03)
#define RD(inst)     (((inst) >> 4) & 0x03)
#define RS1(inst)    (((inst) >> 2) & 0x03)
#define RS2(inst)    ((inst) & 0x03)
#define IMM4(inst)   ((inst) & 0x0F)
#define ADDR6(inst)  (((inst) >> 2) & 0x0F)

#define ADD(inst) { \
    uint8_t rd = RD(inst); \
    uint8_t rs1 = RS1(inst); \
    uint8_t rs2 = RS2(inst); \
    DEBUG("   ADD: R[%d] = R[%d](%d) + R[%d](%d) = %d\n", \
           rd, rs1, R[rs1], rs2, R[rs2], R[rs1] + R[rs2]); \
    R[rd] = R[rs1] + R[rs2]; \
}

#define LI(inst) { \
    uint8_t rd = RD(inst); \
    uint8_t imm = IMM4(inst); \
    R[rd] = imm; \
    DEBUG("    LI:  R[%d] = %d\n", rd, imm); \
}

#define BNER0(inst) { \
    uint8_t addr = ADDR6(inst); \
    uint8_t rs2 = RS2(inst); \
    uint8_t is_jump = (R[0] != R[rs2]); \
    if (is_jump) { \
        DEBUG(" BNER0: R[0](%d) != R[%d](%d), 跳转到地址 %d\n", \
               R[0], rs2, R[rs2], addr); \
        PC = addr; \
        return; \
    } else { \
        DEBUG(" BNER0: R[0](%d) == R[%d](%d), 不跳转\n", \
               R[0], rs2, R[rs2]); \
        PC = (PC + 1) & 0x0F; \
    } \
}

#define OUT(inst) { \
    uint8_t rd = RD(inst); \
    ebreak = true; \
    DEBUG("    OUT: 输出 R[%d] = %d\n", rd, R[rd]); \
    printf("===== 1+...+%d 的结果是 %d =====\n", R[0], R[rd]); \
}

void inst_cycle(void) {
    uint8_t instr = M[PC];
    DEBUG("PC = %2d: 指令 = %02X", PC, instr);
    
    uint8_t op = OPCODE(instr);
    switch (op) {
        case 0:  ADD(instr);   break;
        case 1:  OUT(instr);   break;
        case 2:  LI(instr);    break;
        case 3:  BNER0(instr); return;  
        default: assert("无效的操作码");
    }
    
    PC = (PC + 1) & 0x0F;  // 4位PC回绕
}

int main(int argc, char *argv[]) {
     if (argc != 2) {
        printf("用法: %s <n>\n", argv[0]);
        printf("示例: %s 10  (计算1+2+...+10)\n", argv[0]);
        return 1;
    }
    
    int n = atoi(argv[1]);
    if (n < 1 || n > 15) {
        printf("错误: n必须在1到15之间 (4位寄存器限制)\n");
        return 1;
    }
    
    R[0] = (uint8_t)n;

    // M[0] = 0x8A; //10 00 1010; li R[0] = 10
    M[1] = 0x90; //10 01 0000; li R[1] = 0
    M[2] = 0xA0; //10 10 0000; li R[2] = 0
    M[3] = 0xB1; //10 11 0001; li R[3] = 1
    M[4] = 0x17; //00 01 01 11; add R[1] = R[2] + R[3]
    M[5] = 0x29; //00 10 10 01; add R[2] = R[2] + R[1]
    M[6] = 0xD1; //11 0100 01; bner0 addr=4 if R[0]!=R[1] PC=4
    M[7] = 0x60; //01 10 0000; out R[2]
    M[8] = 0xE3; //11 1000 11; bner0 addr=8 if R[0]!=R[3] PC=8

    while(!ebreak) {
        inst_cycle();
    }
    return 0;
}
