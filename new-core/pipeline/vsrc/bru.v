module bru(
  input  wire        clk        ,
  input  wire        rst        ,

  input  wire [ 5:0] bru_op     ,
  input  wire [31:0] bru_src1   ,
  input  wire [31:0] bru_src2   ,

  input  wire [31:0] pc         ,
  input  wire [ 1:0] jal_or_jalr,
  input  wire        is_fencei  ,
  input  wire [31:0] alu_result ,
  input  wire        lsu_ready  ,
  input  wire        mdu_ready  ,
  input  wire        idu_valid  ,

  input  wire        pc_update  ,
  input  wire [31:0] bpu_dnpc   ,
  output reg         flush_en   ,
  output reg  [31:0] flush_dnpc
);

  wire         op_bne  ;
  wire         op_beq  ;
  wire         op_bge  ;
  wire         op_bgeu ;
  wire         op_blt  ;
  wire         op_bltu ;

  wire         beq_result  ;
  wire         blt_result  ;
  wire         bltu_result ;
  wire         bge_result  ;
  wire         bgeu_result ;
  wire         bne_result  ;

  assign op_bne  = bru_op[0];
  assign op_beq  = bru_op[1];
  assign op_bge  = bru_op[2];
  assign op_bgeu = bru_op[3];
  assign op_blt  = bru_op[4];
  assign op_bltu = bru_op[5];

  assign beq_result    = (bru_src1 == bru_src2);
  assign bne_result    = ~beq_result;
  assign blt_result    = ($signed(bru_src1) < $signed(bru_src2));
  assign bge_result    = ~blt_result;
  assign bltu_result   = ($unsigned(bru_src1) < $unsigned(bru_src2));
  assign bgeu_result   = ~bltu_result;

  wire bru_result  = (op_beq  & beq_result ) 
                   | (op_blt  & blt_result )
                   | (op_bltu & bltu_result)
                   | (op_bge  & bge_result )
                   | (op_bgeu & bgeu_result)
                   | (op_bne  & bne_result ); 

  wire [31:0] snpc = pc + 4;
  wire        pc_will_jump = (|bru_op) | (|jal_or_jalr) | is_fencei;
  wire [31:0] target_dnpc = (bru_result | jal_or_jalr[1]) ? alu_result                   :
                            (jal_or_jalr[0]             ) ? (alu_result & 32'hffff_fffe) : snpc;

  always @(posedge clk) begin
      if (rst) begin
          flush_en   <= 1'b0;
          flush_dnpc <= 32'h0;
      end
      else begin
          if (lsu_ready) begin
              if ((target_dnpc != bpu_dnpc) & !flush_en & mdu_ready) begin
                  flush_en   <= idu_valid;
                  flush_dnpc <= target_dnpc;
              end
              else if (pc_update) begin
                  flush_en <= 1'b0;
              end
          end
      end
  end

endmodule
