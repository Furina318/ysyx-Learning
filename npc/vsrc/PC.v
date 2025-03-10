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
    // reg [31:0] pc;
    initial begin
        pc_next = 32'h80000000;
    end
always@(posedge clk or posedge rst) begin
    if(rst) begin
        // pc <= 32'h80000000;
        pc_next <= 32'h80000000;
    end
    else begin
        // case(PCAsrc)
        //     1'b0: PCa <= 4;
        //     1'b1: PCa <= imm;
        // endcase
        // case(PCBsrc)
        //     1'b0: PCb <= pc;
        //     1'b1: PCb <= rs1;
        // endcase
        PCa <= (PCAsrc) ? imm : 4;
        PCb <= (PCBsrc) ? rs1 : pc;
        pc_next <= PCa + PCb;
    end
end
    
endmodule
