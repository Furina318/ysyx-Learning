`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"

module PC(
    input clk,
    input rst,
    input [31:0] imm,
    input [31:0] rs1,
    input PCAsrc,
    input PCBsrc,
    input [31:0] pc,
    output wire [31:0] pc_next
);

    wire [31:0] PCa;
    wire [31:0] PCb;

    assign PCa = (PCAsrc) ? imm : 4;
    assign PCb = (PCBsrc) ? rs1 : pc;
    assign pc_next = (rst) ? 32'h80000000 : PCa + PCb;

    // always @(posedge clk or posedge rst) begin
    //     if(rst) begin
    //         pc_next <= 32'h80000000;
    //         PCa <= (PCAsrc) ? imm : 4;
    //         PCb <= (PCBsrc) ? rs1 : pc;
    //     end
    //     else begin
    //         PCa <= (PCAsrc) ? imm : 4;
    //         PCb <= (PCBsrc) ? rs1 : pc;
    //         pc_next <= PCa + PCb;
    //     end
    // end
endmodule
