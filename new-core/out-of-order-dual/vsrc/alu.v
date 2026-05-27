module alu #(
  parameter ID_WIDTH      = 4
) (
  input  wire                clk        ,
  input  wire                rst        ,
  input  wire                issue_valid,
  input  wire [        31:0] pc         ,
  input  wire [ID_WIDTH-1:0] inst_id    ,
  input  wire [         5:0] phy_rd     ,
  input  wire                gpr_we     ,
  input  wire [        10:0] alu_op     ,
  input  wire [        31:0] alu_src1   ,
  input  wire [        31:0] alu_src2   ,
  output reg                 alu_done   ,
  output wire [        31:0] alu_result ,
  output wire [         5:0] alu_phy_rd ,
  output wire [ID_WIDTH-1:0] alu_inst_id,
  output wire [        31:0] alu_pc     ,
  output wire                alu_gpr_we 
);

reg [        10:0] alu_op_r     ;
reg [        31:0] alu_src1_r   ;
reg [        31:0] alu_src2_r   ;
reg [         5:0] alu_phy_rd_r ;
reg [ID_WIDTH-1:0] alu_inst_id_r;
reg [        31:0] alu_pc_r     ;
reg                alu_gpr_we_r ;

always @(posedge clk) begin
  if (rst) begin
    alu_done       <= 'b0;
    alu_op_r       <= 'b0;
    alu_src1_r     <= 'b0;
    alu_src2_r     <= 'b0;
    alu_phy_rd_r   <= 'b0;
    alu_inst_id_r  <= 'b0;
    alu_pc_r       <= 'b0;
    alu_gpr_we_r   <= 'b0;
  end else begin
    if (issue_valid) begin
      alu_done       <= |alu_op      ;
      alu_op_r       <= alu_op       ;
      alu_src1_r     <= alu_src1     ;
      alu_src2_r     <= alu_src2     ;
      alu_phy_rd_r   <= phy_rd       ;
      alu_inst_id_r  <= inst_id      ;
      alu_pc_r       <= pc           ;
      alu_gpr_we_r   <= gpr_we       ;
    end else begin
      alu_done       <= 'b0;
    end
  end
end

assign alu_phy_rd  = alu_phy_rd_r ;
assign alu_inst_id = alu_inst_id_r;
assign alu_pc      = alu_pc_r     ;
assign alu_gpr_we  = alu_gpr_we_r ;

wire         op_add;
wire         op_sub;
wire         op_slt;
wire         op_sltu;
wire         op_and;
wire         op_nor;
wire         op_or;
wire         op_xor;
wire         op_sll;
wire         op_srl;
wire         op_sra;
wire         op_lui;

wire [31: 0] add_sub_result;
wire [31: 0] slt_result;
wire [31: 0] sltu_result;
wire [31: 0] and_result;
wire [31: 0] or_result;
wire [31: 0] xor_result;
wire [31: 0] lui_result;
wire [31: 0] sll_result;
wire [63: 0] sr64_result;
wire [31: 0] sr_result;
wire [31: 0] aupic_result;

wire [31: 0] adder_a;
wire [31: 0] adder_b;
wire         adder_cin;
wire [31: 0] adder_result;
wire         adder_cout;

assign op_add  = alu_op_r[ 0];
assign op_sub  = alu_op_r[ 1];
assign op_slt  = alu_op_r[ 2];
assign op_sltu = alu_op_r[ 3];
assign op_and  = alu_op_r[ 4];
assign op_or   = alu_op_r[ 5];
assign op_xor  = alu_op_r[ 6];
assign op_sll  = alu_op_r[ 7];
assign op_srl  = alu_op_r[ 8];
assign op_sra  = alu_op_r[ 9];
assign op_lui  = alu_op_r[10];

assign adder_a   = alu_src1_r;
assign adder_b   = (op_sub | op_slt | op_sltu) ? ~alu_src2_r : alu_src2_r;
assign adder_cin = (op_sub | op_slt | op_sltu);
assign {adder_cout, adder_result} = adder_a + adder_b + {{32{1'b0}}, adder_cin};

assign add_sub_result = adder_result;

assign slt_result[31:1] = 31'b0;
assign slt_result[0]    = (alu_src1_r[31] & ~alu_src2_r[31])
                        | ((alu_src1_r[31] ~^ alu_src2_r[31]) & adder_result[31]);

assign sltu_result[31:1] = 31'b0;
assign sltu_result[0]    = ~adder_cout;
assign and_result  = alu_src1_r &  alu_src2_r;
assign or_result   = alu_src1_r |  alu_src2_r;
assign xor_result  = alu_src1_r ^  alu_src2_r;
assign lui_result  = alu_src2_r;
assign sll_result  = alu_src1_r << alu_src2_r[4:0];
assign sr64_result = {{32{op_sra & alu_src1_r[31]}}, alu_src1_r[31:0]} >> alu_src2_r[4:0];
assign sr_result   = sr64_result[31:0];

assign alu_result = ({32{op_add|op_sub}} & add_sub_result)
                  | ({32{op_slt       }} & slt_result    )
                  | ({32{op_sltu      }} & sltu_result   )
                  | ({32{op_and       }} & and_result    )
                  | ({32{op_or        }} & or_result     )
                  | ({32{op_xor       }} & xor_result    )
                  | ({32{op_lui       }} & lui_result    )
                  | ({32{op_sll       }} & sll_result    )
                  | ({32{op_srl|op_sra}} & sr_result     );

endmodule
