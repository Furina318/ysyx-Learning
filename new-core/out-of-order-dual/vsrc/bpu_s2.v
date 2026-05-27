// =============================================================================
// BPU Stage 2 (S2) 模块
//
// 功能描述:
//   分支预测的第二阶段，整合FTB、RAS和ITTAGE的预测结果，
//   生成最终的预测PC，并处理冲刷逻辑。
//
// =============================================================================
module bpu_s2 #(
	parameter PC_INIT = 32'h8000_0000,
	parameter XLEN = 32
)(
	input               clk                 ,
	input               rst                 ,
    input	[XLEN-1:0]	pc				    ,
    input	[XLEN-1:0] 	dnpc				,
	input				offset			 	,
	input				hit					,
	input	[1	   :0]	slot_valid			,
	input   [63    :0] 	slot_target 		,
	input   [1	   :0]	slot_taken			,
	input				slot1_sharing		,
	input	[1	   :0]	slot_offset			,
	/*verilator lint_off UNUSED*/
	input				i_is_jalr			,
	input 				i_is_call		 	,
	input 				i_is_ret		 	,
	input				ras_spec_en	 		,
	output  [XLEN-1:0]  s2_predpc			,
    output  [XLEN-1:0]  bpu_pc				,
    output  [XLEN-1:0]  bpu_dnpc			,
	output				bpu_offset			,
	input				flush	            ,
    output			    uftb_flush	     	,
	// bpu <> exu
    input 			    commit_push_valid   ,
    input 			    commit_pop_valid    ,
    input 			    commit_flush	    ,
	input   [XLEN-1:0]  commit_push_pc      ,
	// ittage <> exu
	input				update_en_1	        ,
	input   [XLEN-1:0]  update_pc_1	        ,
	input   [XLEN-1:0]  real_target_1       ,
	input				br_taken_1          ,

	input				update_en_2	        ,
	input   [XLEN-1:0]  update_pc_2	        ,
	input   [XLEN-1:0]  real_target_2       ,
	input				br_taken_2   

);

// 从FTB输入中提取分支槽和尾槽的信息
wire [XLEN-1:0] tailslot_target = slot_target[63:32];  // 尾槽目标地址
wire            tailslot_taken  = slot_taken [1];      // 尾槽是否taken
wire            tailslot_valid  = slot_valid [1];      // 尾槽是否有效
wire            tailslot_offset = slot_offset[1];      // 尾槽偏移
wire [XLEN-1:0] brslot_target	= slot_target[31:0];   // 分支槽目标地址
wire            brslot_taken 	= slot_taken [0];      // 分支槽是否taken
wire            brslot_valid 	= slot_valid [0];      // 分支槽是否有效
wire            brslot_offset	= slot_offset[0];      // 分支槽偏移

// ITTAGE预测结果
wire            ittage_taken_1      ;  // ITTAGE预测taken1
wire            ittage_taken_2      ;  // ITTAGE预测taken2
wire [XLEN-1:0] ittage_predpc_1     ;  // ITTAGE预测PC1
wire [XLEN-1:0] ittage_predpc_2     ;  // ITTAGE预测PC2
wire 			tailtaken_flush_1   ;  // 尾槽taken冲刷1
wire 			tailtaken_flush_2   ;  // 尾槽taken冲刷2
wire 			brtaken_flush_1     ;  // 分支槽taken冲刷1
wire 			brtaken_flush_2     ;  // 分支槽taken冲刷2
wire 			uftb_flush_ittage_1 ;  // UFTB冲刷ITTAGE1
wire 			uftb_flush_ittage_2 ;  // UFTB冲刷ITTAGE2
wire 			uftb_flush_ittage   ;  // UFTB冲刷ITTAGE总标志
wire [XLEN-1:0] ittage_predpc	    ;  // ITTAGE预测PC

wire [XLEN-1:0] ras_predpc;  // RAS预测PC

// RAS工作状态机
parameter S_IDLE = 2'b00;  // 空闲状态
parameter S_WORK = 2'b01;  // 工作状态

reg [1:0] s_current_state, s_next_state;

// 状态机下一状态逻辑
always @(*) begin
	case(s_current_state)
		S_IDLE :
			if(ras_spec_en)	s_next_state = S_WORK;  // 使能时进入工作状态
			else		    s_next_state = S_IDLE;
		S_WORK:
			if(ras_spec_en)	s_next_state = S_WORK;  // 保持工作状态
		    else			s_next_state = S_IDLE;  // 否则回到空闲
		default : s_next_state = S_IDLE;
	endcase
end

// 状态机时序逻辑
always @(posedge clk ) begin
	if(rst) begin
		s_current_state <= S_IDLE;
	end else begin
		s_current_state <= s_next_state;
	end
end

// RAS相关信号
wire        ras_work        ;  // RAS是否工作
wire		spec_pop_valid  ;  // 推测弹出有效
wire 		spec_push_valid ;  // 推测推入有效
wire [31:0] spec_push_addr  ;  // 推测推入地址
wire [31:0] spec_pop_addr   ;  // 推测弹出地址
wire        uftb_flush_ras  ;  // RAS引起的UFTB冲刷

// RAS冲刷条件：推测弹出且预测地址与RAS不一致，且为调用/返回指令
assign uftb_flush_ras	= spec_pop_valid && (tailslot_target != ras_predpc) && (i_is_call || i_is_ret) && !empty ;

// RAS工作条件：ITTAGE冲刷且尾槽有效，或尾槽taken且不共享且命中
assign ras_work = ((uftb_flush_ittage_1 && !pred_conf_1[1] && tailslot_valid) || (!uftb_flush_ittage_1 && (tailslot_taken && !slot1_sharing && hit))) && (s_current_state == S_WORK);

// RAS推测操作
assign spec_pop_valid  = ras_work  && i_is_ret  && !empty;  // 返回指令且栈非空则弹出
assign spec_push_valid = ras_work  && i_is_call && !full ;  // 调用指令且栈未满则推入
assign spec_push_addr  = tailslot_offset ? pc + 8 : pc + 4;  // 根据偏移计算推入地址
assign ras_predpc = spec_pop_addr;  // RAS预测地址

ras #(
	.RASSIZE	(`RASSIZE    ),
	.ADDR_WIDTH (`ADDR_WIDTH ),
	.COUNT_WIDTH(`COUNT_WIDTH)
)ras(
    .clk		      (clk				     ),
    .reset			  (rst				     ),
    .spec_pop_valid	  (spec_pop_valid		 ),
    .spec_push_valid  (spec_push_valid	     ),
    .spec_push_addr   (spec_push_addr		 ),
    .spec_pop_addr    (spec_pop_addr		 ),
    .commit_push_valid(_commit_push_valid    ),
    .commit_pop_valid (_commit_pop_valid     ),
	.commit_push_addr (commit_push_pc        ),
    .commit_flush	  (commit_flush			 ),
    .empty			  (empty	     		 ),
    .full			  (full		     		 )
);

// ITTAGE预测结果
wire [1	    :0] pred_conf_1   ;  // 预测置信度1
wire [XLEN-1:0] pred_target_1 ;  // 预测目标1
wire            pred_valid_1  ;  // 预测有效1

wire [1		:0] pred_conf_2	  ;  // 预测置信度2
wire [XLEN-1:0] pred_target_2 ;  // 预测目标2
wire            pred_valid_2  ;  // 预测有效2

// ITTAGE taken和预测PC计算
assign ittage_taken_1  = pred_conf_1[1] && pred_valid_1;  // 高置信度且有效则认为taken
assign ittage_taken_2  = pred_conf_2[1] && pred_valid_2;
assign ittage_predpc_1 = pred_conf_1[1] ? pred_target_1 : pc + 4;  // 高置信度使用预测目标，否则PC+4
assign ittage_predpc_2 = pred_conf_2[1] ? pred_target_2 : pc + 8;

// 冲刷条件判断
// 尾槽taken冲刷：目标地址不匹配且共享且有效
assign tailtaken_flush_1 = ((tailslot_target != pred_target_1) && (slot1_sharing) && slot_valid[1]);
assign tailtaken_flush_2 = ((tailslot_target != pred_target_2) && (slot1_sharing) && slot_valid[1]);

// 分支槽taken冲刷：目标地址不匹配且有效
assign brtaken_flush_1     = ((brslot_target != pred_target_1) && slot_valid[0]);
assign brtaken_flush_2     = ((brslot_target != pred_target_2) && slot_valid[0]);

// UFTB冲刷ITTAGE条件：复杂的逻辑判断预测结果是否需要冲刷
assign uftb_flush_ittage_1 = pred_valid_1 &&  hit ? (!slot_offset[1] && slot_valid[1] ? (slot_taken[1] && ittage_taken_1 ? tailtaken_flush_1 : (!slot_taken[1] && !ittage_taken_1 ? 0 : 1)) :
																										 !slot_offset[0] && slot_valid[0] ? (slot_taken[0] && ittage_taken_1 ? brtaken_flush_1	 : (!slot_taken[0] && !ittage_taken_1 ? 0 : 1)) : 0) :
														 pred_valid_1 && !hit ?  ittage_taken_1 									                                                                      : 0;
assign uftb_flush_ittage_2 = pred_valid_2 &&  hit ? ( slot_offset[1] && slot_valid[1] ? (slot_taken[1] && ittage_taken_2 ? tailtaken_flush_2 : (!slot_taken[1] && !ittage_taken_1 ? 0 : 1)) :
																										  slot_offset[0] && slot_valid[0] ? (slot_taken[0] && ittage_taken_2 ? brtaken_flush_2	 : (!slot_taken[0] && !ittage_taken_1 ? 0 : 1)) : 0) :
														 pred_valid_2 && !hit ?  ittage_taken_2 									                                                                 : 0;

// 总的ITTAGE冲刷标志
assign uftb_flush_ittage = (uftb_flush_ittage_1 || (uftb_flush_ittage_2 && !uftb_flush_ittage_1)) && (s_current_state == S_WORK);

// ITTAGE预测PC选择
assign ittage_predpc = pred_conf_1[1] && pred_valid_1 ? ittage_predpc_1 : ittage_predpc_2;			

ittage #(
    .T1_SIZE     (`T1_SIZE     ),                
    .T2_SIZE     (`T2_SIZE     ),               
    .T3_SIZE     (`T3_SIZE     ),               
    .T4_SIZE     (`T4_SIZE     ),               
    .PC_WIDTH    (`PC_WIDTH    ),                
    .TARGET_WIDTH(`TARGET_WIDTH),            
    .TAG_WIDTH 	 (`TAG_WIDTH   ),               
    .GHR_WIDTH 	 (`GHR_WIDTH   ),             
    .U_WIDTH 	 (`U_WIDTH 	   )             
) ittage (
     .clk          (clk         ),  
     .reset        (rst         ),  

     .fetch_pc1   (pc		    ),  
     .pred_target1(pred_target_1),
     .pred_valid1 (pred_valid_1 ),
     .pred_conf1  (pred_conf_1  ),  
     .update_en1  (update_en_1  ),  
     .update_pc1  (update_pc_1  ),  
     .real_target1(real_target_1),
     .br_taken1   (br_taken_1   ),  

     .fetch_pc2   (pc + 4	    ),  
     .pred_target2(pred_target_2),
     .pred_valid2 (pred_valid_2 ),
     .pred_conf2  (pred_conf_2  ),  
     .update_en2  (update_en_2  ),  
     .update_pc2  (update_pc_2  ),  
     .real_target2(real_target_2),
     .br_taken2   (br_taken_2   )   
);            

// 最终预测结果计算
assign bpu_pc = pc;  // 当前PC直接输出

// 预测下一个PC的选择逻辑（优先级顺序）
// 1. ITTAGE冲刷且低置信度且尾槽有效且不共享：使用RAS预测
// 2. RAS冲刷：使用RAS预测
// 3. ITTAGE冲刷：使用ITTAGE预测
// 4. 否则：使用FTB的下一个PC
assign bpu_dnpc   = (uftb_flush_ittage_1 && !pred_conf_1[1] && tailslot_valid && !slot1_sharing) ? ras_predpc :
										 uftb_flush_ras	   ? ras_predpc	   : 
										 uftb_flush_ittage ? ittage_predpc : dnpc;

// 偏移标志：ITTAGE冲刷时根据置信度决定，否则使用FTB偏移
assign bpu_offset = uftb_flush_ittage ? (pred_conf_1[1] && pred_valid_1 ? 0 : 1) : offset;

// S2预测PC输出
assign s2_predpc  = bpu_dnpc; 

// 总的UFTB冲刷信号：RAS或ITTAGE冲刷
assign uftb_flush = uftb_flush_ras || uftb_flush_ittage;

// Commit信号处理：检查栈状态避免溢出
wire _commit_push_valid ;  // 实际推入有效（检查未满）
wire _commit_pop_valid  ;  // 实际弹出有效（检查非空）
wire empty              ;  // RAS栈空
wire full	            ;  // RAS栈满
assign _commit_pop_valid  = commit_pop_valid  && !empty;  // 只有非空时才弹出
assign _commit_push_valid = commit_push_valid && !full ;  // 只有未满时才推入
endmodule

