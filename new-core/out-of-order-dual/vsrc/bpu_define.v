`ifdef __BPU_DEFINE_V_
`else
`define __BPU_DEFINE_V_

`define YOSYS_STA
`ifdef YOSYS_STA

//uftb
`define ENTRY_NUMS 4      // 4
//ras
`define RASSIZE 4         // 4 
`define COUNT_WIDTH 2     // 2 
//ITTAGE
`define T1_SIZE 4         // 4 
`define T2_SIZE 8	        // 8      
`define T3_SIZE 16        // 16      
`define T4_SIZE 32        // 32     
`define TAG_WIDTH 8       // 8       
`define GHR_WIDTH 16      // 16      

`else

//uftb
`define ENTRY_NUMS 64     // 4
//ras
`define RASSIZE 5'd16     // 8 
`define COUNT_WIDTH 4     // 3 
//ITTAGE
`define T1_SIZE 32        // 4 
`define T2_SIZE 64	      // 8      
`define T3_SIZE 128       // 16      
`define T4_SIZE 256       // 32     
`define TAG_WIDTH 14      // 8       
`define GHR_WIDTH 128     // 16      

`endif

// dont change
//ras
`define ADDR_WIDTH 32     // 32 
//ITTAGE
`define PC_WIDTH 32       // 32       
`define TARGET_WIDTH 32   // 32       
`define U_WIDTH 2         // 2       

`endif
