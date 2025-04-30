`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"
// 寄存器文件
module RegFile (
    input         clk,
    input         reset,
    input  [4:0]  rs1,
    input  [4:0]  rs2,
    input  [4:0]  rd,
    input         we,
    input  [31:0] wd,

    output wire [31:0] rs1_val,
    output wire [31:0] rs2_val
    // output reg [31:0] rs1_val,
    // output reg [31:0] rs2_val
);  
    reg [31:0] regs [0:31]; // 32个寄存器

    assign rs1_val = (rs1 != 0) ? regs[rs1] : 0;
    assign rs2_val = (rs2 != 0) ? regs[rs2] : 0;

    always @(posedge clk or posedge reset) begin
        if(reset) begin
            for(integer i = 0; i < 32; i = i + 1) begin
                regs[i] <= 32'h0;//初始化寄存器
            end
        end
        else begin
            if(we && rd != 0) begin
                regs[rd] <= wd;
            end
        end
    end
    // always @(*) begin
    //     rs1_val = (rs1 != 0) ? regs[rs1] : 32'h0;
    //     rs2_val = (rs2 != 0) ? regs[rs2] : 32'h0;
    //     $display("\033[35m[REG]: rd=%h | rs1_val=%h | rs2_val=%h\033[0m",rd, rs1_val, rs2_val);
    // end
endmodule