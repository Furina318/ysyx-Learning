module inst_mem(
    input [31:0] pc;
    input clk;
    output reg [31:0] inst;
);
    reg [31:0] inst_memory[1023:0];
    always @(*) begin
        inst=inst_memory[(pc-32'h80000000)>>2];//对齐输出。相当于pc除以4=inst_inst_addr+1
    end

    initial begin
        inst_memory[0]=32'b000000000001_00001_000_00010_0010011;
                        //| imm[11:0] |rs1 |func3| rd | opcode |
        inst_memory[1]=32'b000000000001_00010_000_00011_0010011;
    end
endmodule