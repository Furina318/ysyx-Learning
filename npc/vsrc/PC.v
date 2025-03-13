`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"

module PC(
    input clk,
    input rst,
    input [31:0] imm,
    input [31:0] rs1,
    input PCAsrc,
    input PCBsrc,
    input [31:0] pc,
    output reg [31:0] pc_next
);

    reg [31:0] PCa;
    reg [31:0] PCb;

    always @(posedge clk or posedge rst) begin
        if(rst) begin
            pc_next <= 32'h80000000;
        end
        else begin
            PCa <= (PCAsrc) ? imm : 4;
            PCb <= (PCBsrc) ? rs1 : pc;
            pc_next <= PCa + PCb;
        end
    end
endmodule
