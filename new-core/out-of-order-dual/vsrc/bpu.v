// =============================================================================
// BPU (Branch Prediction Unit) 顶层模块
// 
// 功能描述:
//   该模块是分支预测单元的顶层，集成了分支预测逻辑，
//   负责预测分支目标地址，并与IFU和Commit阶段交互。
// =============================================================================
module bpu #(
	parameter PC_INIT = 32'h8000_0000,
	parameter XLEN = 32
)(
	input             clk                              ,
	input             rst                              ,

	output			  bpu_ifu_data_s1_valid			   , // bpu->ifu: valid
	input  			  bpu_ifu_data_s1_ready			   , // ifu->bpu: ready
	output [XLEN-1:0] bpu_ifu_data_pc    			   ,  
	output [XLEN-1:0] bpu_ifu_data_dnpc				   , 
	output			  bpu_ifu_data_offset			   , 
	
	input  [XLEN-1:0] bpu_commit_data_redirect_pc	   ,
	input    		  bpu_commit_data_flush            ,
	input             bpu_commit_data_update_valid 	   ,
	input  [XLEN-1:0] bpu_commit_data_update_stpc  	   ,
	input             bpu_commit_data_update_offset	   ,
	input  [XLEN-1:0] bpu_commit_data_update_target    , 
	input             bpu_commit_data_update_taken 	   ,
	input             bpu_commit_data_update_isjalr	   ,
	input             bpu_commit_data_update_isjal 	   ,
	input             bpu_commit_data_update_iscall	   ,
	input             bpu_commit_data_update_isret 	   ,
    input	     	  bpu_commit_data_commit_push_valid,
    input      		  bpu_commit_data_commit_pop_valid ,
    input      		  bpu_commit_data_commit_flush	   ,
	input  [XLEN-1:0] bpu_commit_data_commit_push_pc   , 
    input      		  bpu_commit_data_update_en		   ,
	input  [XLEN-1:0] bpu_commit_data_update_pc  	   , 
	input  [XLEN-1:0] bpu_commit_data_real_target	   , 
    input 			  bpu_commit_data_br_taken   		
);

bpu_core #(
	.PC_INIT  (PC_INIT),
	.ISSUE_NUM(2      ),
	.XLEN	  (XLEN   ) 
) bpu_core (
.clk                (clk                                   ),
.rst                (rst                                   ),
.s1_valid           (bpu_ifu_data_s1_valid                 ),
.s1_ready           (bpu_ifu_data_s1_ready                 ),
.bpu_pc             (bpu_ifu_data_pc                       ),
.bpu_dnpc           (bpu_ifu_data_dnpc                     ),
.bpu_offset         (bpu_ifu_data_offset                   ),
.redirect_pc        (bpu_commit_data_redirect_pc           ),
.flush              (bpu_commit_data_flush                 ),
.update_valid       ({1'b0 , bpu_commit_data_update_valid }),
.update_stpc        (bpu_commit_data_update_stpc           ),
.update_offset      ({1'b0 , bpu_commit_data_update_offset}),
.update_target      ({32'b0, bpu_commit_data_update_target}),
.update_taken       ({1'b0 , bpu_commit_data_update_taken }),
.update_isjalr      ({1'b0 , bpu_commit_data_update_isjalr}),
.update_isjal       ({1'b0 , bpu_commit_data_update_isjal }),
.update_iscall      ({1'b0 , bpu_commit_data_update_iscall}),
.update_isret       ({1'b0 , bpu_commit_data_update_isret }),
.commit_push_valid  (bpu_commit_data_commit_push_valid     ),
.commit_pop_valid   (bpu_commit_data_commit_pop_valid      ),
.commit_flush       (bpu_commit_data_commit_flush          ),
.commit_push_pc     (bpu_commit_data_commit_push_pc        ),
.update_en_1        (bpu_commit_data_update_en             ),
.update_pc_ittage_1 (bpu_commit_data_update_pc             ),
.real_target_1      (bpu_commit_data_real_target           ),
.br_taken_1         (bpu_commit_data_br_taken              ),
.update_en_2        (0                                     ),
.update_pc_ittage_2 (0                                     ),
.real_target_2      (0                                     ),
.br_taken_2         (0									   )
);

endmodule

