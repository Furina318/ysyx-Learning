`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"

module imm_gen(
    input rst,
    input [31:0] instr,
    input [`TYPE_BUS] i_type,
    output reg [31:0] imm
);
    import "DPI-C" function void ebreak(input int station, input int inst);

    reg [31:0] immI;
    reg [31:0] immU;
    reg [31:0] immS;
    reg [31:0] immB;
    reg [31:0] immJ;
    reg [31:0] immR;
    
    assign immI = {{20{instr[31]}}, instr[31:20]};
    assign immU = {instr[31:12], 12'b0};
    assign immS = {{20{instr[31]}}, instr[31:25], instr[11:7]};
    assign immB = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0};
    assign immJ = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0};
    assign immR = 32'b0;
    always @(*) begin
        if(rst) begin
            imm = 32'h0;
        end
        else begin
            case(i_type)
                `INST_I: imm = immI;
                `INST_U: imm = immU;
                `INST_S: imm = immS;
                `INST_B: imm = immB;
                `INST_J: imm = immJ;
                `INST_R: imm = immR;
                default: begin
                    imm = 32'b0; 
                    ebreak(`ABORT, 32'hdeadbeaf); 
                    $display("imm_gen: unknown i_type %d", i_type);
                end
            endcase
        end
    end
endmodule
