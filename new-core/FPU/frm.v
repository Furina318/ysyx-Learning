// 单精度舍入
module frm (
    input  wire [2:0] rm,
    input  wire       sign,
    input  wire       lsb,
    input  wire       guard,
    input  wire       round,
    input  wire       sticky,

    output wire       round_up,
    output wire       inexact
);

    wire any_gt   = guard | round | sticky;

    reg  round_up_r;
    always @(*) begin
        case (rm)
            3'b000: round_up_r = guard & (round | sticky | lsb);  // RNE 就近舍入
            3'b001: round_up_r = 1'b0;                            // RTZ 向零舍入
            3'b010: round_up_r = sign & any_gt;                   // RDN 向下舍入
            3'b011: round_up_r = ~sign & any_gt;                  // RUP 向上舍入
            3'b100: round_up_r = guard;                           // RMM 向远离零舍入
            default: round_up_r = guard & (round | sticky | lsb); 
        endcase
    end

    assign round_up = round_up_r;
    assign inexact  = any_gt;

endmodule
