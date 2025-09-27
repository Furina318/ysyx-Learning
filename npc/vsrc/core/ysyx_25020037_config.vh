`define MSTATUS    12'h300
`define MTVEC      12'h305
`define MEPC       12'h341
`define MCAUSE     12'h342
`define MVENDORID  12'hF11
`define MARCHID    12'hF12

`define FU_TO_DU_BUS_WD 62
`define DU_TO_EU_BUS_WD 110
`define EU_TO_LU_BUS_WD 82
`define LU_TO_WU_BUS_WD 75
`define WU_TO_EU_BUS_WD 32*3

`define DU_TO_LU_BUS_WD 2
`define EU_TO_GU_BUS_WD 3
`define EU_TO_IC_BUS_WD 1

`define RS_DATA 22
`ifdef RESET_VAL
`define PC_RESET_VAL 32'h80000000
`else
`define PC_RESET_VAL 32'h30000000
`endif