`define MSTATUS    12'h300
`define MTVEC      12'h305
`define MEPC       12'h341
`define MCAUSE     12'h342
`define MVENDORID  12'hF11
`define MARCHID    12'hF12

`define DU_TO_EU_BUS_WD 155
`define EU_TO_LU_BUS_WD 84
`define LU_TO_WU_BUS_WD 76
`define WU_TO_EU_BUS_WD 32*3

`define DU_TO_LU_BUS_WD 2
`define EU_TO_WU_BUS_WD 6

`define RS_DATA           16
`define NPC_RESET_VAL     32'h80000000
`define YSYXSOC_RESET_VAL 32'h30000000