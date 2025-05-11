module ALU #(
    parameter WIDTH = 64,
    parameter ALU_SEL_WIDTH = 4
) (
    input  wire [ALU_SEL_WIDTH-1:0] sel,
    input  wire [WIDTH-1:0]         ina,
    input  wire [WIDTH-1:0]         inb,
    output reg  [WIDTH-1:0]         result
);
    wire             zero, carry, overflow;
    wire [WIDTH-1:0] out1, out3, out4, out5, out6, out7;
    wire             cin;
    wire             lt_s, lt_u, ge_s, geu_u, beq, neq;

    assign cin = sel[0] | sel[3];
    assign out3 = ~ina;
    assign out4 = ina & inb;
    assign out5 = ina | inb;
    assign out6 = ina ^ inb;

    // Signed and unsigned comparisons
    assign lt_s = $signed(ina) < $signed(inb);
    assign lt_u = ina < inb;
    assign ge_s = $signed(ina) >= $signed(inb);
    assign geu_u = ina >= inb;
    assign beq = (ina == inb);
    assign neq = (ina != inb);

    AddSub #(WIDTH) addsub (
        .cin(cin),
        .ina(ina),
        .inb(inb),
        .result(out1),
        .zero(zero),
        .carry(carry),
        .overflow(overflow)
    );

    SHIFT #(WIDTH) shift (
        .in(ina),
        .shamt(inb[$clog2(WIDTH)-1:0]),
        .isLeft(sel[0]),
        .izArith(sel[1]),
        .out(out7)
    );

    always @(*) begin
        case (sel)
            4'd0:  result = out1; // ADD
            4'd1:  result = out1; // SUB
            4'd2:  result = out3; // NOT
            4'd3:  result = out4; // AND
            4'd4:  result = out5; // OR
            4'd5:  result = out6; // XOR
            4'd6:  result = out7; // SRA
            4'd7:  result = out7; // SLL
            4'd8:  result = out7; // SRL
            4'd9:  result = {63'b0, lt_s};  // SLT
            4'd10: result = {63'b0, lt_u};  // SLTU
            4'd11: result = {63'b0, ge_s};  // SGE
            4'd12: result = {63'b0, geu_u}; // SGEU
            4'd13: result = {63'b0, beq};   // BEQ
            4'd14: result = {63'b0, neq};   // BNE
            default: result = {WIDTH{1'b0}};
        endcase
    end
endmodule