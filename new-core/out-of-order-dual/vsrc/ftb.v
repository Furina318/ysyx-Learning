// =============================================================================
// FTB (Fetch Target Buffer) 模块
//
// 功能描述:
//   存储分支目标信息的缓冲区，用于快速查找分支预测信息。
//   支持分支槽和尾槽的存储和管理。
//
// =============================================================================
module ftb #(
	parameter ENTRY_NUMS = 64
)(
	input         clk                ,
	input         rst                ,
	/*verilator lint_off UNUSED*/
	input  [31:0] pc                 ,
	output        hit                ,
	output [1 :0] slot_valid         ,
	output [63:0] slot_target        ,
	output [1 :0] slot_taken         ,
	output		  slot1_sharing      ,
	output [1 :0] slot_offset        ,
	output		  o_is_jalr          ,
	output 		  o_is_call          ,
	output 		  o_is_ret           ,
	input  [ 1:0] update_valid		 ,
	input  [11:0] update_brlower	 ,
	input  [19:0] update_taillower	 ,
	input  [ 1:0] update_brtarStat	 ,
	input  [ 1:0] update_tailtarStat ,
	input		  update_isjalr		 ,
	input		  update_isjal 		 ,
	input		  update_iscall		 ,
	input		  update_isret 		 ,
	input  [31:0] update_pc			 ,
	input  [ 1:0] update_offset		 ,
	input  [ 1:0] update_taken
);

initial begin
  $display("uFTB: ENTRY_NUMS = %0d, `ENTRY_NUMS = %0d", ENTRY_NUMS, `ENTRY_NUMS);
end

// ========================== uFTB_mem ===============================
reg [65:0] uFTB_mem [0:ENTRY_NUMS-1];
localparam WAY_VALID        = 65 ; // 1  bit
localparam WAY_COUNTER0     = 64 ; // 2  bit
localparam WAY_COUNTER1     = 62 ; // 2  bit
localparam ENTRY_VALID      = 60 ; // 1  bit
localparam BRSLOT_OFFSET    = 59 ; // 1  bit
localparam BRSLOT_VALID     = 58 ; // 1  bit
localparam BRSLOT_LOWER     = 57 ; // 12 bit
localparam BRSLOT_TARSTAT   = 45 ; // 2  bit
localparam TAILSLOT_OFFSET  = 43 ; // 1  bit
localparam TAILSLOT_VALID   = 42 ; // 1  bit
localparam TAILSLOT_LOWER   = 41 ; // 20 bit
localparam TAILSLOT_TARSTAT = 21 ; // 2  bit
localparam TAILSLOT_SHARING = 19 ; // 1  bit
localparam ISCALL           = 18 ; // 1  bit
localparam ISRET            = 17 ; // 1  bit
localparam ISJALR           = 16 ; // 1  bit
localparam WAY_TAG          = 15 ; // 16 bit
// =========================== hit ===================================
// 从PC提取标签用于查找
wire [15:0] pc_tag;  // PC的标签位（用于索引FTB）
assign pc_tag = pc[16:1];  // 取PC的[16:1]位作为标签

// 命中信息寄存器，存储查找到的条目信息
reg [48:0] hit_mem ;  // 命中内存，包含所有命中条目的信息

// 命中内存各字段的位定义
localparam HIT_MISS				= 48 ; // 1  bit - 是否命中
localparam HIT_WAY_COUNTER0		= 47 ; // 2  bit - 路0计数器
localparam HIT_WAY_COUNTER1		= 45 ; // 2  bit - 路1计数器
localparam HIT_BRSLOT_OFFSET    = 43 ; // 1  bit - 分支槽偏移
localparam HIT_BRSLOT_VALID     = 42 ; // 1  bit - 分支槽有效
localparam HIT_BRSLOT_LOWER     = 41 ; // 12 bit - 分支槽目标低位
localparam HIT_BRSLOT_TARSTAT   = 29 ; // 2  bit - 分支槽目标状态
localparam HIT_TAILSLOT_OFFSET  = 27 ; // 1  bit - 尾槽偏移
localparam HIT_TAILSLOT_VALID   = 26 ; // 1  bit - 尾槽有效
localparam HIT_TAILSLOT_LOWER   = 25 ; // 20 bit - 尾槽目标低位
localparam HIT_TAILSLOT_TARSTAT =  5 ; // 2  bit - 尾槽目标状态
localparam HIT_TAILSLOT_SHARING =  3 ; // 1  bit - 尾槽共享标志
localparam HIT_ISCALL           =  2 ; // 1  bit - 是否调用
localparam HIT_ISRET            =  1 ; // 1  bit - 是否返回
localparam HIT_ISJALR           =  0 ; // 1  bit - 是否JALR
// =========================== update ====================================
wire [44:0] update_mem;
localparam UPDATE_ENTRY_VALID      = 44 ; // 1  bit
localparam UPDATE_BRSLOT_OFFSET    = 43 ; // 1  bit
localparam UPDATE_BRSLOT_VALID     = 42 ; // 1  bit
localparam UPDATE_BRSLOT_LOWER     = 41 ; // 12 bit
localparam UPDATE_BRSLOT_TARSTAT   = 29 ; // 2  bit
localparam UPDATE_TAILSLOT_OFFSET  = 27 ; // 1  bit
localparam UPDATE_TAILSLOT_VALID   = 26 ; // 1  bit
localparam UPDATE_TAILSLOT_LOWER   = 25 ; // 20 bit
localparam UPDATE_TAILSLOT_TARSTAT =  5 ; // 2  bit
localparam UPDATE_TAILSLOT_SHARING =  3 ; // 1  bit
localparam UPDATE_ISCALL           =  2 ; // 1  bit
localparam UPDATE_ISRET            =  1 ; // 1  bit
localparam UPDATE_ISJALR           =  0 ; // 1  bit

// 初始化命中内存为0
integer j;
always @(*) begin 
			hit_mem[HIT_MISS]  								     = 0; 
			hit_mem[HIT_WAY_COUNTER0:HIT_WAY_COUNTER1+1] 	     = 0; 
			hit_mem[HIT_WAY_COUNTER1:HIT_BRSLOT_OFFSET+1] 	     = 0; 
			hit_mem[HIT_BRSLOT_OFFSET] 						     = 0; 
			hit_mem[HIT_BRSLOT_VALID]  						     = 0; 
			hit_mem[HIT_BRSLOT_LOWER:HIT_BRSLOT_TARSTAT+1] 	     = 0; 
			hit_mem[HIT_BRSLOT_TARSTAT:HIT_TAILSLOT_OFFSET+1]    = 0; 
			hit_mem[HIT_TAILSLOT_OFFSET] 					     = 0; 
			hit_mem[HIT_TAILSLOT_VALID]  					     = 0; 
			hit_mem[HIT_TAILSLOT_LOWER:HIT_TAILSLOT_TARSTAT+1]   = 0; 
			hit_mem[HIT_TAILSLOT_TARSTAT:HIT_TAILSLOT_SHARING+1] = 0; 
			hit_mem[HIT_TAILSLOT_SHARING] 						 = 0; 
			hit_mem[HIT_ISCALL] 								 = 0; 
			hit_mem[HIT_ISRET]  								 = 0; 
			hit_mem[HIT_ISJALR] 								 = 0; 

	// 遍历所有FTB条目，查找匹配的条目
	for(j = 0; j < ENTRY_NUMS; j = j + 1) begin
		// 如果PC标签匹配且条目有效，则记录命中信息
		if((pc_tag == uFTB_mem[j][WAY_TAG:0]) && uFTB_mem[j][WAY_VALID] && uFTB_mem[j][ENTRY_VALID])begin
			hit_mem[HIT_MISS]  								  = 1;	 // 标记命中
			hit_mem[HIT_WAY_COUNTER0:HIT_WAY_COUNTER1+1] 	  = uFTB_mem[j][WAY_COUNTER0:WAY_COUNTER1+1] ;  // 路计数器
			hit_mem[HIT_WAY_COUNTER1:HIT_BRSLOT_OFFSET+1] 	  = uFTB_mem[j][WAY_COUNTER1:ENTRY_VALID+1];   // 另一路计数器
			hit_mem[HIT_BRSLOT_OFFSET] 						  = uFTB_mem[j][BRSLOT_OFFSET];   // 分支槽偏移
			hit_mem[HIT_BRSLOT_VALID]  						  = uFTB_mem[j][BRSLOT_VALID];   // 分支槽有效
			hit_mem[HIT_BRSLOT_LOWER:HIT_BRSLOT_TARSTAT+1] 	  = uFTB_mem[j][BRSLOT_LOWER:BRSLOT_TARSTAT+1];  // 分支槽低位
			hit_mem[HIT_BRSLOT_TARSTAT:HIT_TAILSLOT_OFFSET+1] = uFTB_mem[j][BRSLOT_TARSTAT:TAILSLOT_OFFSET+1];  // 分支槽状态
			hit_mem[HIT_TAILSLOT_OFFSET] 					  = uFTB_mem[j][TAILSLOT_OFFSET];  // 尾槽偏移
			hit_mem[HIT_TAILSLOT_VALID]  					  = uFTB_mem[j][TAILSLOT_VALID];  // 尾槽有效
			hit_mem[HIT_TAILSLOT_LOWER:HIT_TAILSLOT_TARSTAT+1]   = uFTB_mem[j][TAILSLOT_LOWER:TAILSLOT_TARSTAT+1];  // 尾槽低位
			hit_mem[HIT_TAILSLOT_TARSTAT:HIT_TAILSLOT_SHARING+1] = uFTB_mem[j][TAILSLOT_TARSTAT:TAILSLOT_SHARING+1];  // 尾槽状态
			hit_mem[HIT_TAILSLOT_SHARING] 						 = uFTB_mem[j][TAILSLOT_SHARING];  // 尾槽共享
			hit_mem[HIT_ISCALL] 								 = uFTB_mem[j][ISCALL];  // 调用标志
			hit_mem[HIT_ISRET]  								 = uFTB_mem[j][ISRET];   // 返回标志
			hit_mem[HIT_ISJALR] 								 = uFTB_mem[j][ISJALR];  // JALR标志
		end 
	end
end

// =========================== target/nextpc logic ================================
// 重建完整的32位目标地址
wire [19:0] hit_pc_hi_brtar  ;  // 分支目标高位
wire [11:0] hit_pc_hi_tailtar;  // 尾部目标高位
wire [31:0] hit_brtar  ;       // 完整分支目标地址
wire [31:0] hit_tailtar;       // 完整尾部目标地址

// 根据状态位重建分支目标地址的高位
// 状态位表示目标地址相对当前PC高位的关系
assign hit_pc_hi_brtar   = hit_mem[HIT_BRSLOT_TARSTAT:HIT_TAILSLOT_OFFSET+1] == 2'b00 ? pc[31:12]     :  // 相等
						   hit_mem[HIT_BRSLOT_TARSTAT:HIT_TAILSLOT_OFFSET+1] == 2'b01 ? pc[31:12] + 1 :  // 大于
						   hit_mem[HIT_BRSLOT_TARSTAT:HIT_TAILSLOT_OFFSET+1] == 2'b10 ? pc[31:12] - 1 : pc[31:12]; // 小于

// 类似地重建尾部目标地址的高位
assign hit_pc_hi_tailtar = hit_mem[HIT_TAILSLOT_TARSTAT:HIT_TAILSLOT_SHARING+1] == 2'b00 ? pc[31:20]     :
						   hit_mem[HIT_TAILSLOT_TARSTAT:HIT_TAILSLOT_SHARING+1] == 2'b01 ? pc[31:20] + 1 :
						   hit_mem[HIT_TAILSLOT_TARSTAT:HIT_TAILSLOT_SHARING+1] == 2'b10 ? pc[31:20] - 1 : pc[31:20];

// 组合高位和低位得到完整目标地址
assign hit_brtar   = {hit_pc_hi_brtar  , hit_mem[HIT_BRSLOT_LOWER:HIT_BRSLOT_TARSTAT+1]};
assign hit_tailtar = {hit_pc_hi_tailtar, hit_mem[HIT_TAILSLOT_LOWER:HIT_TAILSLOT_TARSTAT+1]};

// taken决策逻辑：根据计数器值决定哪个分支被预测为taken
reg [1:0] entry_taken;  // 最终的taken结果 [尾槽taken, 分支槽taken]
always @(*) begin
	if(hit_mem[HIT_MISS]) begin  // 只有在命中的情况下才进行taken决策
		if(hit_mem[HIT_BRSLOT_VALID] && hit_mem[HIT_TAILSLOT_VALID]) begin  // 两个槽都有效
			if(!hit_mem[HIT_TAILSLOT_SHARING]) begin  // 尾槽不共享
				if(hit_mem[HIT_BRSLOT_OFFSET] > hit_mem[HIT_TAILSLOT_OFFSET]) begin  // 分支在尾部之后
					entry_taken = 2'b10;  // 选择尾槽
				end else begin
					// 根据计数器比较选择
					if(hit_mem[HIT_WAY_COUNTER0:HIT_WAY_COUNTER1+1] > 0) begin
						entry_taken = 2'b01;  // 选择分支槽
					end else if(hit_mem[HIT_WAY_COUNTER1:HIT_BRSLOT_OFFSET+1] > 0)begin
						entry_taken = 2'b10;  // 选择尾槽
					end else begin
						entry_taken = 2'b00;  // 都不选择
					end
				end
			end else begin  // 尾槽共享
				if(hit_mem[HIT_BRSLOT_OFFSET] > hit_mem[HIT_TAILSLOT_OFFSET]) begin
					if(hit_mem[HIT_WAY_COUNTER1:HIT_BRSLOT_OFFSET+1] > 0) begin
						entry_taken = 2'b10;  // 选择尾槽
					end else if(hit_mem[HIT_WAY_COUNTER0:HIT_WAY_COUNTER1+1] > 0)begin
						entry_taken = 2'b01;  // 选择分支槽
					end else begin
						entry_taken = 2'b00;  // 都不选择
					end
				end else begin
					if(hit_mem[HIT_WAY_COUNTER0:HIT_WAY_COUNTER1+1] > 0) begin
						entry_taken = 2'b01;  // 选择分支槽
					end else if(hit_mem[HIT_WAY_COUNTER1:HIT_BRSLOT_OFFSET+1] > 0)begin
						entry_taken = 2'b10;  // 选择尾槽
					end else begin
						entry_taken = 2'b00;  // 都不选择
					end
				end
			end
		end else if(!hit_mem[HIT_TAILSLOT_VALID] && hit_mem[HIT_WAY_COUNTER0:HIT_WAY_COUNTER1+1]  > 0) begin  // 只有分支槽有效且计数器>0
			entry_taken = 2'b01;  // 选择分支槽
		end else if(!hit_mem[HIT_BRSLOT_VALID] && hit_mem[HIT_WAY_COUNTER1:HIT_BRSLOT_OFFSET+1] > 0) begin  // 只有尾槽有效且计数器>0
			entry_taken = 2'b10;  // 选择尾槽
		end else				
			entry_taken = 2'b00;  // 默认都不选择
	end else																									
			entry_taken = 2'b00;  // 未命中，不选择
end

// 预测输出赋值
assign hit 			 = hit_mem[HIT_MISS];  // 命中标志
assign slot_offset 	 = {hit_mem[HIT_TAILSLOT_OFFSET], hit_mem[HIT_BRSLOT_OFFSET]};  // 槽偏移 [尾槽, 分支槽]
assign slot_target 	 = {hit_tailtar, hit_brtar};  // 槽目标地址 [尾槽目标, 分支槽目标]
assign slot1_sharing = hit_mem[HIT_TAILSLOT_SHARING];  // 尾槽共享标志
assign slot_taken 	 = entry_taken;  // 槽taken标志
assign slot_valid 	 = {hit_mem[HIT_TAILSLOT_VALID], hit_mem[HIT_BRSLOT_VALID]};  // 槽有效标志 [尾槽, 分支槽]
assign o_is_jalr 	 = hit_mem[HIT_ISJALR];  // JALR标志
assign o_is_call 	 = hit_mem[HIT_ISCALL];  // 调用标志
assign o_is_ret      = hit_mem[HIT_ISRET];   // 返回标志 


//update pc -> tag
wire [15:0] update_pc_tag;
assign update_pc_tag = update_pc[16:1];

//update state machine
parameter U0 = 0;
parameter U1 = 1;
reg update_current_state, update_next_state;

always @(posedge clk ) begin
	if(rst) update_next_state <= U0;
	else begin
		case(update_current_state)
			U0 : 
				if(|update_valid) update_next_state <= U1;
				else				     update_next_state <= U0;
			U1 : update_next_state <= U0;
			default : update_next_state <= U0;
		endcase
	end
end

always @(posedge clk ) begin
	if(rst) update_current_state <= U0;
	else    update_current_state <= update_next_state;
end

//way_match - tag
//way_replace
reg [ENTRY_NUMS-1:0] way_match;
reg [ENTRY_NUMS-1:0] way_replace;
reg [ENTRY_NUMS-1:0] way_empty;

always @(*) begin 
	way_match = {ENTRY_NUMS{1'b0}};
	for(j = 0; j < ENTRY_NUMS; j = j + 1) begin
		if(update_pc_tag == uFTB_mem[j][WAY_TAG:0] && uFTB_mem[j][WAY_VALID] ) way_match[j] = 1;
	end
end

lru #(
	.N(ENTRY_NUMS)
) lru(
	.clk(clk          ),
	.rst(rst          ),
	.en	(|update_valid),
	.in (way_wen	  ),
	.out(way_replace  )
);

wire update_isbxx = !(update_iscall || update_isret || update_isjalr);
wire [ENTRY_NUMS-1:0] way_wen;
assign way_wen = |way_match ? {ENTRY_NUMS{update_current_state == U0 && |update_valid}} & way_match  :
								 |way_empty ? {ENTRY_NUMS{update_current_state == U0 && |update_valid}} & way_empty  : 
								              {ENTRY_NUMS{update_current_state == U0 && |update_valid}} & way_replace ;

assign update_mem[UPDATE_ENTRY_VALID     													 ] = |way_wen  			  ;
assign update_mem[UPDATE_BRSLOT_OFFSET   													 ] = update_offset[0]	;
assign update_mem[UPDATE_BRSLOT_VALID    													 ] = update_valid[0]	;
assign update_mem[UPDATE_BRSLOT_LOWER    :UPDATE_BRSLOT_TARSTAT  +1] = update_brlower		;
assign update_mem[UPDATE_BRSLOT_TARSTAT  :UPDATE_TAILSLOT_OFFSET +1] = update_brtarStat ;
assign update_mem[UPDATE_TAILSLOT_OFFSET 													 ] = update_offset[1]	;
assign update_mem[UPDATE_TAILSLOT_VALID  													 ] = update_valid[1]	;
assign update_mem[UPDATE_TAILSLOT_LOWER  :UPDATE_TAILSLOT_TARSTAT+1] = update_taillower ;
assign update_mem[UPDATE_TAILSLOT_TARSTAT:UPDATE_TAILSLOT_SHARING+1] = update_tailtarStat;
assign update_mem[UPDATE_TAILSLOT_SHARING													 ] = update_isbxx			;
assign update_mem[UPDATE_ISCALL          													 ] = update_iscall		;
assign update_mem[UPDATE_ISRET           													 ] = update_isret			;
assign update_mem[UPDATE_ISJALR          													 ] = update_isjalr		;
		

//update : write enable - entry update / node update 
generate
	for(genvar j = 0; j < ENTRY_NUMS; j = j + 1) begin
		always @(posedge clk ) begin
			if(rst) begin
				uFTB_mem[j] <= 0;
				way_empty   <= 1;
			end else begin
				if(way_wen[j]) begin
					uFTB_mem[j][WAY_VALID] 	 <= 1;
					uFTB_mem[j][ENTRY_VALID] <= 1;              
					uFTB_mem[j][ISCALL] 	 <= update_mem[UPDATE_ISCALL];
					uFTB_mem[j][ISRET]  	 <= update_mem[UPDATE_ISRET ];
					uFTB_mem[j][ISJALR] 	 <= update_mem[UPDATE_ISJALR];
		
					//tag
					if(!way_match[j]) uFTB_mem[j][WAY_TAG:0] <= update_pc_tag;
		
					//update entry
					if(way_match[j] || way_empty[j]) begin
						if(!way_match[j]) way_empty <= way_empty << 1;
						if(update_valid[0]) begin
							uFTB_mem[j][BRSLOT_OFFSET:TAILSLOT_OFFSET+1]  <= update_mem[UPDATE_BRSLOT_OFFSET  :UPDATE_TAILSLOT_OFFSET+1];	
						end 
						if(update_valid[1]) begin
							uFTB_mem[j][TAILSLOT_OFFSET:TAILSLOT_SHARING] <= update_mem[UPDATE_TAILSLOT_OFFSET:UPDATE_TAILSLOT_SHARING ];	
						end
					end else begin //way_replace[j] == 1
						if(update_valid[0]) begin
							uFTB_mem[j][BRSLOT_OFFSET:TAILSLOT_OFFSET+1]  <= update_mem[UPDATE_BRSLOT_OFFSET  :UPDATE_TAILSLOT_OFFSET+1];	
							uFTB_mem[j][TAILSLOT_VALID]				      <= 0;
						end 
						if(update_valid[1]) begin
							uFTB_mem[j][TAILSLOT_OFFSET:TAILSLOT_SHARING] <= update_mem[UPDATE_TAILSLOT_OFFSET:UPDATE_TAILSLOT_SHARING ];	
							uFTB_mem[j][BRSLOT_VALID]					  <= 0;
						end
					end
					//counter
					if(update_valid[1]) begin
						if(!uFTB_mem[j][TAILSLOT_VALID] && update_taken[1])  														 uFTB_mem[j][WAY_COUNTER1:ENTRY_VALID+1] <= 1;
						else if(!uFTB_mem[j][TAILSLOT_VALID] && !update_taken[1])  											 uFTB_mem[j][WAY_COUNTER1:ENTRY_VALID+1] <= 0;
						else  begin
							if      (  update_taken[1] && uFTB_mem[j][WAY_COUNTER1:ENTRY_VALID+1] != 2'b11) uFTB_mem[j][WAY_COUNTER1:ENTRY_VALID+1] <= uFTB_mem[j][WAY_COUNTER1:ENTRY_VALID+1] + 1;
							else if ( !update_taken[1] && uFTB_mem[j][WAY_COUNTER1:ENTRY_VALID+1] != 2'b00) uFTB_mem[j][WAY_COUNTER1:ENTRY_VALID+1] <= uFTB_mem[j][WAY_COUNTER1:ENTRY_VALID+1] - 1;
							else    																																		    uFTB_mem[j][WAY_COUNTER1:ENTRY_VALID+1] <= uFTB_mem[j][WAY_COUNTER1:ENTRY_VALID+1] ;
						end
					end 
					if(update_valid[0]) begin
						if((!uFTB_mem[j][BRSLOT_VALID] || (!way_match[j] && !way_empty[j])) &&  update_taken[0]) uFTB_mem[j][WAY_COUNTER0:WAY_COUNTER1+1] <= 1;
						if((!uFTB_mem[j][BRSLOT_VALID] || (!way_match[j] && !way_empty[j])) && !update_taken[0]) uFTB_mem[j][WAY_COUNTER0:WAY_COUNTER1+1] <= 0;
						else begin
							if      ( update_taken[0] && uFTB_mem[j][WAY_COUNTER0:WAY_COUNTER1+1] != 2'b11 ) uFTB_mem[j][WAY_COUNTER0:WAY_COUNTER1+1] <= uFTB_mem[j][WAY_COUNTER0:WAY_COUNTER1+1] + 1;
							else if (!update_taken[0] && uFTB_mem[j][WAY_COUNTER0:WAY_COUNTER1+1] != 2'b00 ) uFTB_mem[j][WAY_COUNTER0:WAY_COUNTER1+1] <= uFTB_mem[j][WAY_COUNTER0:WAY_COUNTER1+1] - 1;
							else 																																				     uFTB_mem[j][WAY_COUNTER0:WAY_COUNTER1+1] <= uFTB_mem[j][WAY_COUNTER0:WAY_COUNTER1+1] ;
						end
					end 
				end
			end
		end
	end
endgenerate

endmodule

