module ysyx_25010030_mdu (
    input  wire        clk,
    input  wire        reset,
    input  wire [31:0] src1,
    input  wire [31:0] src2,
    input  wire [ 7:0] mdu_op,
    input  wire        is_div,
    input  wire        is_mul,
    output wire [31:0] mdu_result,
    output wire        mdu_valid
);

    wire inst_mul    = mdu_op[0];
    wire inst_mulh   = mdu_op[1];
    wire inst_mulhsu = mdu_op[2];
    wire inst_mulhu  = mdu_op[3];

    wire inst_div  = mdu_op[4];
    wire inst_divu = mdu_op[5];
    wire inst_rem  = mdu_op[6];
    wire inst_remu = mdu_op[7];

    wire [31:0] div_quotient;
    wire [31:0] div_remainder;
    wire        div_valid;
    wire [63:0] mul_product;
    wire        mul_valid;

    ysyx_25010030_divider u_divider (
        .clk      (clk & is_div        ),  
        .reset    (reset               ),
        .dividend (src1                ),   // 被除数
        .divisor  (src2                ),   // 除数
        .is_signed(inst_div | inst_rem ),
        .quotient (div_quotient        ),   // 商
        .remainder(div_remainder       ),   // 余数
        .valid    (div_valid           )
    );
    
    ysyx_25010030_multiplier u_mul(
        .clk          	(clk & is_mul                ),
        .rst_n        	(~reset                      ),
        .multiplicand 	(src1                        ), // x
        .multiplier   	(src2                        ), // y
        .x_is_signed    (~inst_mulhu                 ),
        .y_is_signed    (~(inst_mulhsu | inst_mulhu) ),
        .product      	(mul_product                 ),
        .valid        	(mul_valid                   )
    );

    // assign mdu_valid  = (is_div & div_valid) | (is_mul & mul_valid);
    assign mdu_valid  = reset ? 1'b0 : ((is_div & div_valid) | (is_mul & mul_valid));
    assign mdu_result = ({32{is_div & div_valid & (inst_div | inst_divu)}} & div_quotient ) |
                        ({32{is_div & div_valid & (inst_rem | inst_remu)}} & div_remainder) |
                        ({32{is_mul & mul_valid & inst_mul}} & mul_product[31:0]) |
                        ({32{is_mul & mul_valid & ~inst_mul}} & mul_product[63:32]);

endmodule