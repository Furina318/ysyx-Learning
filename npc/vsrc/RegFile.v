`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"
// 寄存器文件
module RegFile (
    input         clk,
    // input         reset,
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

    always @(posedge clk) begin
        if(we && rd != 0) begin
            regs[rd] <= wd;
            $display("\033[35m[REG][WRITE]: regs[%d] = 0x%h\033[0m", rd, wd);
        end
    end

    always @(posedge clk) begin
        // rs1_val = (rs1 != 0) ? regs[rs1] : 32'h0;
        // rs2_val = (rs2 != 0) ? regs[rs2] : 32'h0;
        $display("\033[35m[REG][READ]: rs1=%d rs1_val=0x%h | rs2=%d rs2_val=0x%h\033[0m", rs1, rs1_val, rs2, rs2_val);
    end
endmodule