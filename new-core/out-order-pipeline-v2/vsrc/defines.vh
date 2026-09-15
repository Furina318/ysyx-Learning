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
`define ID_TO_EX_WD 197
`define EX_TO_LS_WD 108
`define EX_TO_WB_WD 149
`define EX_TO_RO_WD 186  // +32 mem_addr(最高位) +1 is_write +4 lsu_stb_id
`define RO_TO_WB_WD 186
`define ID_TO_IS_WD 197
`define IS_TO_EX_WD 197


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
