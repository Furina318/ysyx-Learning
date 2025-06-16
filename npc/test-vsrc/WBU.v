`timescale 1ns/1ps

module WBU #(
  parameter ADDR_WIDTH = 5,
  parameter DATA_WIDTH = 32)(
  input 		  clk,
  input 		  rst,
  input			  wen,
  input [31:0]    LSU_WBU_inst,
  input [31:0]    LSU_WBU_pc,
  input           LSU_WBU_valid,
  output          WBU_LSU_ready,
  output [31:0]    WBU_inst,
  output [31:0]    WBU_pc,

  input  [DATA_WIDTH-1:0] wdata,
  input  [ADDR_WIDTH-1:0] waddr,
  input  [ADDR_WIDTH-1:0] rs1,      //IDU来
  input  [ADDR_WIDTH-1:0] rs2,      //IDU来
  output [DATA_WIDTH-1:0] src1,     //去EXU
  output [DATA_WIDTH-1:0] src2,     //去EXU
  output [DATA_WIDTH-1:0] trapcode1,  //去TOP

  input  [11:0]           raddr_csr1,   //IDU来,读取csr指令的值
  input  [11:0]           raddr_csr2,   //IDU来，指定读pc的值
  input                   wen_csr1,     //通道一用于csrrs之类的指令
  input                   wen_csr2,     //通道二额外用于ecall指令（写两次的情况）
  input  [31:0]           wdata_csr1,
  input  [31:0]           wdata_csr2,
  input  [11:0]           waddr_csr1,
  input  [11:0]           waddr_csr2,
  output [31:0]           rdata_csr1,
  output [31:0]           rdata_csr2     
);
reg [31:0] CSR[2**12-1:0];

reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];

assign WBU_inst = LSU_WBU_inst;
assign WBU_pc = LSU_WBU_pc;
assign WBU_LSU_ready = 1;

integer i;
always @(posedge clk) begin
    if(rst)begin
        for(i = 0; i < 32;i = i + 1)begin
            rf[i] <= 32'b0;
        end
    end
    else if (LSU_WBU_valid && wen && (waddr != 5'b0)) begin
        rf[waddr] <= wdata;
    end
end

assign src1 = (rs1 == 5'b0) ? 32'b0 : rf[rs1];
assign src2 = (rs2 == 5'b0) ? 32'b0 : rf[rs2];
assign trapcode1 = rf[10];


integer k;
initial begin
    for (k = 0; k < 4096; k = k + 1) begin
        if(k == 768) begin
            CSR[k] = 32'h1800;
        end
        else begin
            CSR[k] = 32'b0; // 在初始块中使用阻塞赋值来初始化寄存器
        end
    end
end
always @(posedge clk) begin
    if (rst) begin
        CSR[32'h300] <= 32'h1800;
    end
    else if (LSU_WBU_valid && (wen_csr1 | wen_csr2)) begin
        if (wen_csr2) begin
            CSR[waddr_csr1] <= wdata_csr1;
            CSR[waddr_csr2] <= wdata_csr2;
        end
        else begin
            CSR[waddr_csr1] <= wdata_csr1;
        end
    end
end
assign rdata_csr1 = CSR[raddr_csr1];
assign rdata_csr2 = CSR[raddr_csr2];
endmodule


