module npc(
    input clk,
    input rst
);

    import "DPI-C" function void dpi_enbreak();

    import "DPI-C" function void dpi_instr();
    
    reg [31:0] pc,next_pc;

    wire [31:0] instr;
    wire [4:0] rd,rs1,rs2;
    wire [2:0] func3;

    //立即数生成
    //R型无立即数
    wire [31:0] imm_u = {instr[31:12], 12'b0};          // U型立即数
    wire [31:0] imm_i = {{20{instr[31]}}, instr[31:20]}; // I型立即数
    wire [31:0] imm_s = {{20{instr[31]}}, instr[31:25], instr[11:7]}; // S型立即数
    wire [31:0] imm_j = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0}; // J型立即数
    wire [31:0] imm_b = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0}; //B型立即数

endmodule
