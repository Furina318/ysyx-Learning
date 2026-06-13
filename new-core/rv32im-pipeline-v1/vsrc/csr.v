`include "defines.vh"

module csr (
    input  wire         clk     ,
    input  wire         rst     ,

    input  wire [11:0]  csr_raddr ,
    output wire [31:0]  csr_rdata ,

    input  wire         ecall_en  ,
    input  wire [31:0]  ecall_pc  ,
    input  wire         mret_en   ,
    input  wire         ecall_op  ,
    input  wire         mret_op   ,

    input  wire         csr_wr_en ,
    input  wire [11:0]  csr_waddr ,
    input  wire [31:0]  csr_wdata       
);
    localparam MSTATUS = 12'h300;
    localparam MTVEC   = 12'h305;
    localparam MEPC    = 12'h341;
    localparam MCAUSE  = 12'h342;

    reg [31:0] mstatus;
    reg [31:0] mtvec;
    reg [31:0] mepc;
    reg [31:0] mcause;

    assign csr_rdata = ({32{(csr_raddr == MSTATUS)             }} & mstatus) |
                       ({32{(csr_raddr == MTVEC  ) | (ecall_en)}} & mtvec  ) |
                       ({32{(csr_raddr == MEPC   ) | (mret_en )}} & mepc   ) |
                       ({32{(csr_raddr == MCAUSE )             }} & mcause );

    wire mstatus_wen = csr_wr_en & (csr_waddr == MSTATUS);
    wire mtvec_wen   = csr_wr_en & (csr_waddr == MTVEC  );
    wire mepc_wen    = csr_wr_en & (csr_waddr == MEPC   );
    wire mcause_wen  = csr_wr_en & (csr_waddr == MCAUSE );

    // mstatus
    always @(posedge clk) begin
        if (rst) begin
            mstatus <= 32'h1800;
        end
        else if (mret_op) begin
            // 恢复中断
            mstatus[`MIE]  <= mstatus[`MPIE];
            mstatus[`MPIE] <= 1'b1;
        end
        else if (ecall_op) begin
            // 关闭中断，保存旧状态
            mstatus[`MIE]  <= 1'b0;
            mstatus[`MPIE] <= mstatus[`MIE];
            mstatus[`MPP]  <= `M_MODE;
        end
        else if (mstatus_wen) begin
            mstatus <= csr_wdata;
        end
    end

    // mtvec
    always @(posedge clk) begin
        if(rst) begin
            mtvec <= 32'h0;
        end
        else if (mtvec_wen) begin
            mtvec <= csr_wdata;
        end
    end

    // mepc
    always @(posedge clk) begin
        if(rst) begin
            mepc <= 32'h0;
        end
        else if (ecall_op) begin
            mepc <= ecall_pc;
        end
        else if (mepc_wen) begin
            mepc <= csr_wdata;
        end
    end

    // mcause
    always @(posedge clk) begin
        if (rst) begin
            mcause <= 32'h0;
        end
        else if (ecall_op) begin
            mcause <= 32'hb;
        end
        else if (mcause_wen) begin
            mcause <= csr_wdata;
        end
    end

endmodule
