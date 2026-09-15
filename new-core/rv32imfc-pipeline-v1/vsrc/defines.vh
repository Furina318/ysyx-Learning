// reset pc
`define RESET_PC       32'h8000_0000
`define RESET_FLASH_PC 32'h3000_0000

// ebreak
`define INST_EBREAK       32'h00100073
`define HIT_TRAP          1
`define ABORT             2

// FU
`define STB_DEPTH_LOG2 4

// bus width
`define IF_TO_ID_WD 102
// ID_TO_EX 新增 FPU 字段(MSB 前插): op_fpu[211] fp_we[210] fpu_op[209:203]
//                                       frm[202:200] rs3[199:195] inst_fsw[194]
`define ID_TO_EX_WD 212
`define EX_TO_LS_WD 108
// EX_TO_WB 新增 FPU 提交字段(MSB 前插): op_fpu[155] fp_we[154] fpu_fflags[153:149]
`define EX_TO_WB_WD 156


// clint (0200_0000-0200_ffff)
`define CLINT_BASE        16'h0200  
`define CLINT_BASE_START  32'h02000000
`define CLINT_BASE_END    32'h0200ffff

// csr
`define XLEN 32
`define M_MODE 2'b11
`define S_MODE 2'b01
`define U_MODE 2'b00

// mstatus csr
`define SD   (`XLEN - 1)
`define TSR  22
`define TW   21
`define TVM  20
`define MXR  19
`define SUM  18
`define MPRV 17
`define XS   16:15
`define FS   14:13
`define MPP  12:11
`define SPP  8
`define MPIE 7
`define SPIE 5
`define MIE  3
`define SIE  1 
