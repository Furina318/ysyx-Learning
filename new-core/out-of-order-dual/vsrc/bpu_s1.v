// =============================================================================
// BPU Stage 1 (S1) 模块
//
// 功能描述:
//   分支预测的第一阶段，负责从FTB中查找分支信息，
//   生成初步的预测结果。
//
// =============================================================================
module bpu_s1 #(
	parameter PC_INIT = 32'h8000_0000,
	parameter XLEN = 32
)(
	input clk,
	input rst,

	input  [      31:0] pc           ,
	output              hit		     ,
	output [       1:0] slot_valid   ,
	output [      63:0] slot_target  ,
	output [       1:0] slot_taken   ,
	output			    slot1_sharing,
	output [       1:0] slot_offset  ,
	output			    o_is_jalr    ,
	output 			    o_is_call    ,
	output 			    o_is_ret     ,

	//uftb_update 
	input  [       1:0] update_valid ,
	input  [XLEN  -1:0] update_stpc  ,
	input  [       1:0] update_offset,
	input  [2*XLEN-1:0] update_target, 
	input  [	   1:0] update_taken ,
	input  [	   1:0] update_isjalr,
	input  [	   1:0] update_isjal ,
	input  [	   1:0] update_iscall,
	input  [	   1:0] update_isret
);

ftb #(
	.ENTRY_NUMS(`ENTRY_NUMS)
) uftb(
	.clk			   (clk						 ),
	.rst			   (rst		   				 ),
	.pc				   (pc		   				 ),
	.hit			   (hit						 ),
	.slot_valid	       (slot_valid	     		 ),
	.slot_target	   (slot_target				 ),
	.slot_taken	       (slot_taken	         	 ),
	.slot1_sharing     (slot1_sharing		     ),
	.slot_offset	   (slot_offset				 ),
	.o_is_jalr		   (o_is_jalr		     	 ),
	.o_is_call		   (o_is_call		     	 ),
	.o_is_ret		   (o_is_ret			     ),
	.update_valid      (block_update_valid		 ),
	.update_brlower    (update_brlower			 ),
	.update_taillower  (update_taillower  		 ),
	.update_brtarStat  (update_brtarStat  		 ),
	.update_tailtarStat(update_tailtarStat		 ),
	.update_isjalr	   (|update_isjalr		     ),
	.update_isjal 	   (|update_isjal 		     ),
	.update_iscall	   (|update_iscall		     ),
	.update_isret 	   (|update_isret 		     ),
	.update_pc		   (update_stpc			     ),
	.update_offset	   (block_update_offset		 ),
	.update_taken      (block_update_taken		 )
);

// 更新信号处理逻辑
// 将输入的更新信号转换为FTB所需的格式
wire [ 1:0] block_update_valid ;  // 块更新有效信号
wire [ 1:0] block_update_offset;  // 块更新偏移
wire [ 1:0] block_update_taken ;  // 块更新taken标志
wire [11:0] update_brlower	   ;  // 分支目标低12位
wire [19:0] update_taillower   ;  // 尾部目标低20位
wire [ 1:0] update_brtarStat   ;  // 分支目标状态（相对起始PC的位置关系）
wire [ 1:0] update_tailtarStat ;  // 尾部目标状态
wire        update_isb0		   ;  // 是否为分支0（非JAL/JALR）
wire [31:0] update_brtarget    ;  // 分支目标地址
wire [31:0] update_tailtarget  ;  // 尾部目标地址

// 判断是否为分支指令（非JAL/JALR）
assign update_isb0        = !(update_isjalr[0] || update_isjal[0]);

// 根据指令类型分配目标地址
assign update_brtarget    = update_isb0 ? update_target[31: 0] : update_target[63:32];
assign update_tailtarget  = update_isb0 ? update_target[63:32] : update_target[31: 0];

// 重新组织更新信号的顺序
assign block_update_valid = update_isb0 ? update_valid		   : {update_valid[0], update_valid[1]};
assign block_update_offset= update_isb0 ? update_offset 	   : {update_offset[0], update_offset[1]};
assign block_update_taken = update_isb0 ? update_taken		   : {update_taken[0], update_taken[1]};

// 提取目标地址的低位部分
assign update_brlower	  = update_brtarget[11:0];
assign update_taillower   = update_tailtarget[19: 0];

// 计算目标地址相对于起始PC的高位状态
// 00: 相等, 01: 大于, 10: 小于
assign update_brtarStat   = update_brtarget[31:12] == update_stpc[31:12] ? 2'b00 : 
			 								  	      update_brtarget[31:12] >  update_stpc[31:12] ? 2'b01 : 2'b10;
assign update_tailtarStat = update_tailtarget[31:20] == update_stpc[31:20] ? 2'b00 : 
														update_tailtarget[31:20] >  update_stpc[31:20] ? 2'b01 : 2'b10;
 
endmodule

