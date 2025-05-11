module AddSub #(
    parameter WIDTH = 64
) (
    input  wire             cin,
    input  wire [WIDTH-1:0] ina,
    input  wire [WIDTH-1:0] inb,
    output wire [WIDTH-1:0] result,
    output wire             zero,
    output wire             carry,
    output wire             overflow
);
    wire [WIDTH-1:0] t_no_cin;
    wire [WIDTH:0]   sum;

    assign t_no_cin = inb ^ {WIDTH{cin}};
    assign sum = ina + t_no_cin + cin;
    assign result = sum[WIDTH-1:0];
    assign carry = sum[WIDTH];
    assign overflow = (ina[WIDTH-1] == t_no_cin[WIDTH-1]) && (result[WIDTH-1] != ina[WIDTH-1]);
    assign zero = (result == {WIDTH{1'b0}});
endmodule