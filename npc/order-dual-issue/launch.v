module LAUNCH(#
    parameter DECODE_WIDTH = 64   
)(
    input             clk,
    input             rst,

    input      [31:0] pc1,
    input      [31:0] npc1,
    input             receive_flag1,
    input      [31:0] inst1,
    input      [DECODE_WIDTH-1:0] decode1,

    input      [31:0] pc2,
    input      [31:0] npc2,
    input             receive_flag2,
    input      [31:0] inst2,
    input      [DECODE_WIDTH-1:0] decode2,

    output reg [31:0] out_pc1,
    output reg [31:0] out_npc1,
    output reg [31:0] out_inst1,
    output reg [DECODE_WIDTH-1:0] out_decode1,

    output reg [31:0] out_pc2,
    output reg [31:0] out_npc2,
    output reg [31:0] out_inst2,
    output reg [DECODE_WIDTH-1:0] out_decode2,

    output reg [3:0]  launch_flag // 0000:无指令 01:发射第一条指令 10:发射第二条指令 11:发射两条指令
);
    always @(posedge clk or posedge rst) begin
        if(rst) begin
            out_pc1 <= 32'h8000_0000;
            out_npc1 <= 32'h8000_0004;
            out_inst1 <= 32'h0;
            out_decode1 <= {DECODE_WIDTH{1'b0}};

            out_pc2 <= 32'h8000_0004;
            out_npc2 <= 32'h8000_0008;
            out_inst2 <= 32'h0;
            out_decode2 <= {DECODE_WIDTH{1'b0}};

            launch_flag <= 4'b0000;
        end
    end

    reg socre_board [0:31];//记录每一个寄存器的执行情况
    //socre_board是指令结果是否写回寄存器中的标志位
endmodule
