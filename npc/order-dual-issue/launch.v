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

    input      [31:0] reg_src1,
    input      [31:0] reg_src2,
    input      [31:0] reg_src3,
    input      [31:0] reg_src4,
    //用于数据冒险
    input      [31:0] regw1,  //最新指令的写回信息
    input      [31:0] regw2,  //次新指令的写回信息
    input      [31:0] regw3,  //较旧指令的写回信息
    input      [31:0] regw4,  //最旧指令的写回信息

    output reg [31:0] out_pc1,
    output reg [31:0] out_npc1,
    output reg [31:0] out_inst1,
    output reg [DECODE_WIDTH-1:0] out_decode1,

    output reg [31:0] out_pc2,
    output reg [31:0] out_npc2,
    output reg [31:0] out_inst2,
    output reg [DECODE_WIDTH-1:0] out_decode2,

    output reg [3:0]  launch_flag // [0]inst1-->ex1 [1]inst1-->ex2 [2]inst2-->ex1 [3]inst2-->ex2
);
    wire inst1_ready, inst2_ready;
    reg  inst1_rs1_ready, inst1_rs2_ready;
    reg  inst2_rs1_ready, inst2_rs2_ready;

    //指令reg关键部分取出
    wire inst1_rd  = decode1[36:32];
    wire inst1_rs1 = decode1[41:37];
    wire inst1_rs2 = decode1[46:42];
    wire inst1_regw = decode1[50];

    wire inst2_rd  = decode2[36:32];
    wire inst2_rs1 = decode2[41:37];
    wire inst2_rs2 = decode2[46:42];
    wire inst2_regw = decode2[50];

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

    always @(posedge clk) begin
        if(inst1_regw && (inst1_rd != 5'b0)) begin
            
        end
    end

endmodule
