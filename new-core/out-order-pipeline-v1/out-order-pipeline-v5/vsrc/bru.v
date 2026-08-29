module bru#(
  parameter ID_WIDTH = 5
)(
  input  wire                clk             ,
  input  wire                rst             ,

  input  wire [         5:0] bru_op          ,
  input  wire [        31:0] bru_src1        ,
  input  wire [        31:0] bru_src2        ,
  input  wire [        31:0] bru_src3        ,
  input  wire [        31:0] bru_src4        ,

  input  wire [        31:0] pc              ,
  input  wire [         1:0] jal_or_jalr     ,
  input  wire                is_fencei       ,

  input  wire                issue_valid     ,

  input  wire                pc_update       ,
  input  wire [        31:0] bpu_dnpc        ,
  input  wire [ID_WIDTH-1:0] inst_id         ,
  output reg                 flush_en        ,
  output reg  [        31:0] flush_dnpc      ,
  output reg  [ID_WIDTH-1:0] flush_id        ,

  input  wire                mret_en         ,
  input  wire                ecall_en        ,
  input  wire [        31:0] csr_rdata       ,

  input  wire                is_call         ,
  input  wire                is_ret          ,
  input  wire                is_jal          ,
  input  wire                is_jalr         ,
  input  wire                is_indirect     ,
  input  wire                is_c_inst       ,
  output reg                 bru_is_c_inst   ,
  output reg  [        31:0] bru_pc          ,
  output reg  [        31:0] bru_dnpc        ,
  output reg                 bru_dnpc_valid  ,
  output reg                 bru_taken       ,
  output reg                 bru_is_call     ,
  output reg                 bru_is_ret      ,
  output reg                 bru_is_jal      ,
  output reg                 bru_is_jalr     ,
  output reg                 bru_is_indirect,

  output wire                bru_dnpc_valid_c,
  output wire [        31:0] bru_pc_c        ,
  output wire [        31:0] bru_dnpc_c      ,
  output wire                bru_taken_c     ,
  output wire                bru_is_call_c   ,
  output wire                bru_is_ret_c    ,
  output wire                bru_is_jal_c    ,
  output wire                bru_is_jalr_c   ,
  output wire                bru_is_indirect_c,
  output wire                bru_is_c_inst_c
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

  wire        branch_cin = 1'b1;
  wire [31:0] branch_result;
  wire        branch_cout;
  assign {branch_cout, branch_result} = {1'b0, bru_src1} + (~{1'b0, bru_src2}) + {{32{1'b0}}, branch_cin};

  assign beq_result    = (bru_src1 == bru_src2);
  assign bne_result    = ~beq_result;
  assign blt_result    = ($signed(bru_src1) < $signed(bru_src2));
//   assign blt_result    = (bru_src1[31] & ~bru_src2[31]) | ((bru_src1[31] ~^ bru_src2[31]) & branch_result[31]);
  assign bge_result    = ~blt_result;
//   assign bltu_result   = ~branch_cout;
  assign bltu_result   = ($unsigned(bru_src1) < $unsigned(bru_src2));
  assign bgeu_result   = ~bltu_result;

  wire bru_result  = (op_beq  & beq_result ) 
                   | (op_blt  & blt_result )
                   | (op_bltu & bltu_result)
                   | (op_bge  & bge_result )
                   | (op_bgeu & bgeu_result)
                   | (op_bne  & bne_result ); 
  wire [31:0] jump_result  = bru_src3 + bru_src4;

  wire [31:0] snpc = is_c_inst ? (pc + 2) : (pc + 4);
  wire        pc_will_jump = (|bru_op) | (|jal_or_jalr) | is_fencei;
  wire [31:0] target_dnpc = (bru_result | jal_or_jalr[1]) ? jump_result                   :
                            (ecall_en   | mret_en       ) ? csr_rdata                     :
                            (jal_or_jalr[0]             ) ? (jump_result & 32'hffff_fffe) : snpc;

  wire bru_flush_req = (target_dnpc != bpu_dnpc) & issue_valid & pc_will_jump;
  wire incoming_is_order =  (inst_id[ID_WIDTH-1  ] ^ flush_id[ID_WIDTH-1  ]) ?
                            (inst_id[ID_WIDTH-2:0] > flush_id[ID_WIDTH-2:0]) :
                            (inst_id[ID_WIDTH-2:0] < flush_id[ID_WIDTH-2:0]);

  // 组合训练输出: 当前拍 (blt 等控制指令) 的真实结果, 无寄存器延迟。
  // 寄存器输出 (bru_dnpc_valid 等) 在 posedge 才更新, exu_slot1 同拍读到的
  // 是更新前的值, 导致控制指令的训练数据永远晚一拍丢失。
  assign bru_dnpc_valid_c  = pc_will_jump;
  assign bru_pc_c          = pc;
  assign bru_dnpc_c        = target_dnpc;
  assign bru_taken_c       = (target_dnpc != snpc);
  assign bru_is_call_c     = is_call;
  assign bru_is_ret_c      = is_ret;
  assign bru_is_jal_c      = is_jal;
  assign bru_is_jalr_c     = is_jalr;
  assign bru_is_indirect_c = is_indirect;
  assign bru_is_c_inst_c   = is_c_inst;

  always @(posedge clk) begin
      if (rst) begin
          flush_en        <= 1'b0;
          flush_dnpc      <= 32'h0;
          bru_pc          <= 32'h0;
          bru_dnpc        <= 32'h0;
          bru_dnpc_valid  <= 1'b0;
          bru_taken       <= 1'b0;
          bru_is_call     <= 1'b0;
          bru_is_ret      <= 1'b0;
          bru_is_jal      <= 1'b0;
          bru_is_jalr     <= 1'b0;
          bru_is_indirect <= 1'b0;
          bru_is_c_inst   <= 1'b0;
          flush_id        <= {ID_WIDTH{1'b0}};
      end
      else begin
          if (bru_flush_req) begin
              if (!flush_en || incoming_is_order) begin
                flush_en   <= 1'b1;
                flush_dnpc <= target_dnpc;
                flush_id   <= inst_id;
              end
          end
          else if (pc_update) begin
              flush_en <= 1'b0;
          end

          if (pc_will_jump & (!flush_en || incoming_is_order)) begin
              bru_pc          <= pc;
              bru_dnpc        <= target_dnpc;
              bru_dnpc_valid  <= 1'b1;
              bru_taken       <= (target_dnpc != snpc);
              bru_is_call     <= is_call;
              bru_is_ret      <= is_ret;
              bru_is_jal      <= is_jal;
              bru_is_jalr     <= is_jalr;
              bru_is_indirect <= is_indirect;
              bru_is_c_inst   <= is_c_inst;
          end
          else begin
                bru_dnpc_valid  <= 1'b0;
                bru_taken       <= 1'b0;
                bru_is_call     <= 1'b0;
                bru_is_ret      <= 1'b0;
                bru_is_jal      <= 1'b0;
                bru_is_jalr     <= 1'b0;
                bru_is_indirect <= 1'b0;
                bru_is_c_inst   <= 1'b0;
          end
      end
  end

endmodule
