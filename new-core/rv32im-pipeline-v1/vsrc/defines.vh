// reset pc
`define RESET_PC       32'h8000_0000
`define RESET_FLASH_PC 32'h3000_0000

// ebreak
`define INST_EBREAK       32'h00100073
`define HIT_TRAP          1
`define ABORT             2

// FU
`define STB_DEPTH_LOG2 2

// bus width
`define IF_TO_ID_WD 102
`define ID_TO_EX_WD 193
`define EX_TO_LS_WD 108
`define EX_TO_WB_WD (103 + `STB_DEPTH_LOG2)


// clint (0200_0000-0200_ffff)
`define CLINT_BASE        16'h0200  
`define CLINT_BASE_START  32'h02000000
`define CLINT_BASE_END    32'h0200ffff