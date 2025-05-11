module SHIFT #(
    parameter WIDTH = 64
) (
    input  wire [WIDTH-1:0] in,
    input  wire [$clog2(WIDTH)-1:0] shamt,
    input  wire             isLeft,
    input  wire             izArith,
    output reg  [WIDTH-1:0] out
);
    wire [WIDTH-1:0] din;
    wire             leftIn;
    reg  [WIDTH-1:0] shift_reg;
    integer i, stage;

    assign leftIn = izArith ? in[WIDTH-1] : 1'b0;
    assign din = in;

    always @(*) begin
        shift_reg = din;
        for (stage = 0; stage < $clog2(WIDTH); stage = stage + 1) begin
            if (shamt[stage]) begin
                for (i = 0; i < WIDTH; i = i + 1) begin
                    if (isLeft) begin
                        shift_reg[i] = (i < (1 << stage)) ? 1'b0 : shift_reg[i - (1 << stage)];
                    end else begin
                        shift_reg[i] = (i + (1 << stage) >= WIDTH) ? leftIn : shift_reg[i + (1 << stage)];
                    end
                end
            end
        end
        out = shift_reg;
    end
endmodule