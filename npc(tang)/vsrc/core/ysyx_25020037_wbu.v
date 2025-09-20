`include "ysyx_25020037_config.vh"

module ysyx_25020037_wbu (
    input  wire         lsu_valid,
    input  wire         exu_ready,
    input  wire         clk,
    input  wire         rst,
    input  wire [`RS_DATA-1: 0] rs_data,
    output wire [`WU_TO_EU_BUS_WD -1:0] wu_to_eu_bus,
    input  wire [`LU_TO_WU_BUS_WD -1:0] lu_to_wu_bus
);
    wire [ 3: 0] rd;
    wire         ecall_en;
    wire         mret_en;
    wire [`EU_TO_GU_BUS_WD -1:0] eu_to_gu_bus;
    wire         gpr_we;
    wire         rlsu_we;
    wire [31: 0] csr_wcsr_data;
    wire [31: 0] rdata_processed;
    assign {rd,
            ecall_en,
            mret_en,
            eu_to_gu_bus,
            gpr_we,
            rlsu_we,
            csr_wcsr_data,
            rdata_processed
           } = lu_to_wu_bus;
    reg  [31: 0] regs [14:0];
    reg  [31: 0] mtvec;
    reg  [31: 0] mepc;
    reg  [31: 0] mstatus;
    wire [31: 0] mcause    = 32'hb;
    wire [31: 0] mvendorid = 32'h79737978;
    wire [31: 0] marchid   = 32'h017DC685;  
    wire         gpr_wen   = lsu_valid & (gpr_we | rlsu_we);
    wire [31: 0] gpr_wdata = rdata_processed;

    wire         inst_ecall;
    wire         inst_mret;
    wire [11: 0] imm;
    wire [ 3: 0] rs1;
    wire [ 3: 0] rs2;
    assign {inst_ecall,
            inst_mret,
            imm,
            rs1,
            rs2
           } = rs_data;
    wire         csrs_mtvec_wen;
    wire         csrs_mepc_wen;
    wire         csrs_mstatus_wen;
    assign {csrs_mtvec_wen,
            csrs_mepc_wen,
            csrs_mstatus_wen
           } = eu_to_gu_bus;
    wire [31: 0] src1;
    wire [31: 0] src2;
    wire [31: 0] csr_data; 
    assign csr_data        = ({32{imm == `MTVEC || inst_ecall}} & mtvec)
                           | ({32{imm == `MEPC  || inst_mret }} & mepc)
                           | ({32{imm == `MSTATUS  }} & mstatus)
                           | ({32{imm == `MCAUSE   }} & mcause)
                           | ({32{imm == `MVENDORID}} & mvendorid)
                           | ({32{imm == `MARCHID  }} & marchid);
    wire         mepc_wen;
    wire         mstatus_wen;
    wire         mtvec_wen;
    wire [31: 0] mstatus_data;
    assign mtvec_wen    = lsu_valid & csrs_mepc_wen;
    assign mepc_wen     = lsu_valid & (ecall_en | csrs_mepc_wen);
    assign mstatus_wen  = lsu_valid & (ecall_en | mret_en  | csrs_mstatus_wen);
    
    assign mstatus_data = ecall_en ? 32'h1800  :
                          mret_en  ? ((mstatus & ~(32'h1 << 3))
                        | (((mstatus & (32'h1 << 7)) >> 4))
                        | (32'h1 << 7))
                        & ~((32'h1 << 11) | (32'h1 << 12)) :
                        csr_wcsr_data;

    always @(posedge clk) begin
      if (rst) begin
        mstatus <= 32'h1800;
      end else begin
        if ((rd != 4'b0) && gpr_wen) begin
          regs[rd-1] <= gpr_wdata;
        end
        if (csrs_mtvec_wen) begin
          mtvec <= csr_wcsr_data;
        end
        if (mepc_wen) begin
          mepc <= csr_wcsr_data;
        end
        if (mstatus_wen) begin
          mstatus <= mstatus_data;
        end
      end
    end
    
    assign src1 = (rs1 == 4'b0) ? 32'b0 : regs[rs1-1];
    assign src2 = (rs2 == 4'b0) ? 32'b0 : regs[rs2-1];
    assign wu_to_eu_bus = {           
             src1,
             src2,
             csr_data
           };

endmodule
