// =============================================================================
// BPU Core 核心模块
//
// 功能描述:
//   BPU的核心逻辑，管理分支预测的两个阶段（S1和S2），
//   处理PC更新、分支预测和与外部模块的交互。
//
// =============================================================================
module bpu_core #(
	parameter PC_INIT = 32'h8000_0000,
	parameter ISSUE_NUM = 2          ,// 指令发射数量
	parameter XLEN    = 32
)(
	input               clk               ,
	input               rst               ,

	output              s1_valid		  ,
	input               s1_ready		  ,
	output [XLEN  -1:0] bpu_pc            ,
	output [XLEN  -1:0] bpu_dnpc	      ,
	output		    	bpu_offset        ,
	
	input  [XLEN  -1:0] redirect_pc       ,
	input               flush             ,

	//uftb_update 
	input  [	   1:0] update_valid      ,
	input  [XLEN  -1:0] update_stpc       ,
	input  [	   1:0] update_offset     ,
	input  [2*XLEN-1:0] update_target     , 
	input  [	   1:0] update_taken      ,
	input  [	   1:0] update_isjalr     ,
	input  [	   1:0] update_isjal      ,
	input  [	   1:0] update_iscall     ,
	input  [	   1:0] update_isret      ,

	//ras_commit
    input               commit_push_valid ,
    input               commit_pop_valid  ,
    input               commit_flush	  ,
	input  [XLEN  -1:0] commit_push_pc    ,

	// ittage train
	input  			    update_en_1		  ,
	input  [XLEN  -1:0] update_pc_ittage_1,
	input  [XLEN  -1:0] real_target_1	  ,
	input  			    br_taken_1		  ,
	input  			    update_en_2		  ,
	input  [XLEN  -1:0] update_pc_ittage_2,
	input  [XLEN  -1:0] real_target_2	  ,
	input  			    br_taken_2				 
);

reg	 [XLEN-1:0] pc			 ;
wire			hit			 ;
wire [1		:0] slot_valid	 ;
wire [63    :0] slot_target	 ;
wire [1     :0] slot_taken	 ;
wire			slot1_sharing;
wire [1     :0] slot_offset	 ;
wire o_is_jalr		;
wire o_is_call		;
wire o_is_ret		;

wire uftb_flush;

wire [31:0] s2_predpc;

wire            exec_redirect   ;
wire [XLEN-1:0] uftb_hit_target ;
wire			uftb_hit_offset ;
wire [XLEN-1:0] update_pc       ; 
wire			offset          ; 

// ------------- stage s1 ------------- 

bpu_s1 #(
	.PC_INIT(PC_INIT),
	.XLEN   (XLEN   )
) s1 (
	.clk		   (clk			  ),
	.rst	       (rst			  ),
	.pc            (pc            ),
	.hit		   (hit		      ),
	.slot_valid	   (slot_valid	  ),
	.slot_target   (slot_target	  ),
	.slot_taken	   (slot_taken	  ),
	.slot1_sharing (slot1_sharing ),
	.slot_offset   (slot_offset	  ),
	.o_is_jalr	   (o_is_jalr	  ),
	.o_is_call	   (o_is_call	  ),
	.o_is_ret	   (o_is_ret	  ),

	//uftb_update 
	.update_valid  (update_valid  ),
	.update_stpc   (update_stpc   ),
	.update_offset (update_offset ),
	.update_target (update_target ), 
	.update_taken  (update_taken  ),
	.update_isjalr (update_isjalr ),
	.update_isjal  (update_isjal  ),
	.update_iscall (update_iscall ),
	.update_isret  (update_isret  )
);

localparam S1_IDLE			= 1'b0;
localparam S1_WAIT_READY    = 1'b1;

reg s1_current_state, s1_next_state;

always@(*) begin
	case(s1_current_state)
		S1_IDLE : s1_next_state = S1_WAIT_READY;
		S1_WAIT_READY :
			if(flush	)       s1_next_state = S1_WAIT_READY;
			else if(uftb_flush) s1_next_state = S1_IDLE;
			else				s1_next_state = S1_WAIT_READY;
		default :               s1_next_state = S1_IDLE;
	endcase
end

always @(posedge clk ) begin
	if(rst) s1_current_state <= S1_WAIT_READY;
	else    s1_current_state <= s1_next_state;
end

assign s1_valid      = ((s1_current_state == S1_WAIT_READY) && !flush && !uftb_flush);
assign exec_redirect = (((s1_current_state == S1_IDLE) || (s1_current_state == S1_WAIT_READY)) && flush);

wire [XLEN-1:0] snpc = pc + ISSUE_NUM * 4; 
assign uftb_hit_target = slot_taken[0] ? slot_target[XLEN-1:0] : slot_target[2*XLEN-1:XLEN];
assign uftb_hit_offset = slot_taken[0] ? slot_offset[0]		   : slot_offset[1];

assign update_pc =  exec_redirect                ? redirect_pc	   : 
		            uftb_flush                   ? s2_predpc 	   :
		            hit && slot_taken == 2'b00   ? snpc	           :
		            hit && slot_taken != 2'b00   ? uftb_hit_target : snpc;

assign offset = hit && (slot_taken == 2'b00)   ? 1				 :
				hit && (slot_taken != 2'b00)   ? uftb_hit_offset : 1;

always @(posedge clk ) begin
	if(rst) begin
		pc <= PC_INIT;
	end else begin
		if(uftb_flush || (s1_valid && s1_ready) || exec_redirect) pc <= update_pc;
	end
end

// ------------- stage s2 ------------- 

reg [XLEN-1:0] reg_pc		;
reg [XLEN-1:0] reg_dnpc		;
reg            reg_offset	;

reg            reg_hit		     ;	
reg [ 1	   :0] reg_slot_valid	 ;
reg [63    :0] reg_slot_target   ;
reg [ 1	   :0] reg_slot_taken	 ;
reg			   reg_slot1_sharing ;
reg [ 1    :0] reg_slot_offset   ;
reg			   reg_is_jalr		 ;	
reg      	   reg_is_call		 ;	
reg 		   reg_is_ret		 ;	

always @(posedge clk ) begin
	if(rst) begin
		reg_pc	   <= PC_INIT;
		reg_dnpc   <= PC_INIT;
		reg_hit	   <= 0		 ;	

        reg_slot_valid		<= 0;
        reg_slot_target		<= 0;
        reg_slot_taken		<= 0;
        reg_slot1_sharing	<= 0;
        reg_slot_offset		<= 0;
        reg_is_jalr		    <= 0;	
        reg_is_call		    <= 0;	
        reg_is_ret			<= 0;	
	end else begin
		if((s1_valid && s1_ready)) begin
			reg_pc			  <= pc;
			reg_dnpc  		  <= update_pc;
			reg_offset		  <= offset;

			reg_hit		      <= hit;	
            reg_slot_valid	  <= slot_valid;
            reg_slot_target   <= slot_target;
            reg_slot_taken    <= slot_taken;
            reg_slot1_sharing <= slot1_sharing;
            reg_slot_offset	  <= slot_offset;
            reg_is_jalr		  <= o_is_jalr;	
            reg_is_call		  <= o_is_call;	
            reg_is_ret		  <= o_is_ret;	
		end else if(uftb_flush) begin
			reg_dnpc <= s2_predpc;
		end
	end
end

bpu_s2 #(
	.PC_INIT(PC_INIT),
	.XLEN   (XLEN   )
) s2 (
	.clk			 (clk								 ),
	.rst			 (rst								 ),
    .pc				 (reg_pc							 ),
    .dnpc			 (reg_dnpc							 ),
    .offset			 (reg_offset						 ),
	.hit			 (reg_hit							 ),
	.slot_valid		 (reg_slot_valid					 ),
	.slot_target  	 (reg_slot_target       		     ),
	.slot_taken		 (reg_slot_taken   		 		     ),
	.slot1_sharing   (reg_slot1_sharing    		         ),
	.slot_offset	 (reg_slot_offset					 ),
	.i_is_jalr		 (reg_is_jalr						 ),
	.i_is_call		 (reg_is_call		 				 ),
	.i_is_ret		 (reg_is_ret		 		  		 ),
	.ras_spec_en	 (s1_ready && s1_valid			     ),
	.s2_predpc		 (s2_predpc							 ),
    .bpu_pc			 (bpu_pc							 ),
    .bpu_dnpc		 (bpu_dnpc						     ),
    .bpu_offset		 (bpu_offset					     ),
	.flush	         (flush						         ),
	.uftb_flush		 (uftb_flush						 ),

	//ras_commit
    .commit_push_valid(commit_push_valid				 ),
    .commit_pop_valid (commit_pop_valid 				 ),
    .commit_flush	  (commit_flush		  				 ),
	.commit_push_pc   (commit_push_pc   				 ),

	// ittage train
	.update_en_1      (update_en_1						 ),
	.update_pc_1      (update_pc_ittage_1				 ),
	.real_target_1    (real_target_1					 ),
	.br_taken_1	      (br_taken_1						 ),
	.update_en_2      (update_en_2						 ), // 0
	.update_pc_2      (update_pc_ittage_2				 ), // 0
	.real_target_2    (real_target_2					 ), // 0
	.br_taken_2	      (br_taken_2						 )  // 0
);


endmodule

