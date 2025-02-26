module pc_reg(
    input clk,
    input [31:0] imm,
    input [31:0] rs1,
    input PCAsrc,
    input PCBsrc,
    output reg [31:0] pc_next
);

    reg [31:0] cnt;
    reg [31:0] PCa;
    reg [31:0] PCb;

    always@(posedge clk) begin
        if(cnt == 0) begin
            case(PCAsrc)
                1'b0: PCa <= 4;
                1'b1: PCa <= imm;
            endcase
            case(PCBsrc)
                1'b0: PCb <= pc_next;
                1'b1: PCb <= rs1;
            endcase
            pc_next <= PCa + PCb;
        end
        cnt <= (cnt >= 10000 ? 0 : cnt + 1);
    end

    initial begin
        pc_next = 32'h80000000;
        cnt = 1;
    end
    
endmodule