`define RNE 3'b000
`define RTZ 3'b001
`define RDN 3'b010
`define RUP 3'b011
`define RMM 3'b100

`define FRM_POS    7:5     // fcsr 中 frm 字段的位置
`define FFLAGS_POS 4:0 

`define FFLAGS 12'h001
`define FRM    12'h002
`define FCSR   12'h003

`define NV 4
`define DZ 3
`define OF 2
`define UF 1
`define NX 0

`define FADD_S    7'b001_0000
`define FSUB_S    7'b001_0001
`define FMUL_S    7'b001_0010
`define FMADD_S   7'b001_0011
`define FMSUB_S   7'b001_0100
`define FNMADD_S  7'b001_0101
`define FNMSUB_S  7'b001_0110

`define FCLASS_S  7'b010_0000
`define FMIN_S    7'b010_0001
`define FMAX_S    7'b010_0010
`define FLT_S     7'b010_0011
`define FEQ_S     7'b010_0100
`define FLE_S     7'b010_0101

`define FSGNJ_S   7'b010_1001
`define FSGNJN_S  7'b010_1010
`define FSGNJX_S  7'b010_1100

`define FCVT_W_S  7'b011_0000
`define FCVT_WU_S 7'b011_0001
`define FCVT_S_W  7'b011_0010
`define FCVT_S_WU 7'b011_0011

`define FDIV_S    7'b100_0000

`define FMV_W_X   7'b101_0000
`define FMV_X_W   7'b101_0001

`define FSQRT_S   7'b110_0000