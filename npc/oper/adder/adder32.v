module adder32 #(
    parameter RV32_Width = 32
)(
    input       [RV32_Width-1:0] a,
    input       [RV32_Width-1:0] b,
    output wire [RV32_Width-1:0] sum
);
    assign sum = a + b;
endmodule