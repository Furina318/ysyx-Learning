// =============================================================================
// ITTAGE (Indirect Target TAGE) 模块
//
// 功能描述:
//   实现间接分支预测，使用TAGE算法的变体，
//   维护多个表来预测间接跳转的目标地址。
//
// =============================================================================
module ittage #(
    parameter T1_SIZE     = 32  ,                
    parameter T2_SIZE     = 64	,               
    parameter T3_SIZE     = 128 ,               
    parameter T4_SIZE     = 256 ,               
    parameter PC_WIDTH    = 32  ,                
    parameter TARGET_WIDTH= 32  ,            
    parameter TAG_WIDTH 	= 14  ,               
    parameter GHR_WIDTH 	= 128 ,             
    parameter U_WIDTH 		= 2                  
)(
    input  wire 				   clk  	   ,
    input  wire 				   reset	   ,
    
		// =============== bundle 1 ===============
    input  wire [    PC_WIDTH-1:0] fetch_pc1   ,         
    output wire [TARGET_WIDTH-1:0] pred_target1, 
    output wire 				   pred_valid1 ,                 		
    output wire [             1:0] pred_conf1  ,            		

    input  wire 				   update_en1  ,                   
    input  wire [    PC_WIDTH-1:0] update_pc1  ,   
    input  wire [TARGET_WIDTH-1:0] real_target1, 
    input  wire 				   br_taken1   ,                     

		// =============== bundle 2 ===============
    input  wire [    PC_WIDTH-1:0] fetch_pc2   ,         
    output wire [TARGET_WIDTH-1:0] pred_target2, 
    output wire 				   pred_valid2 ,                 		
    output wire [             1:0] pred_conf2  ,            		
    
    input  wire 				   update_en2  ,                   
    input  wire [    PC_WIDTH-1:0] update_pc2  ,   
    input  wire [TARGET_WIDTH-1:0] real_target2, 
    input  wire 				   br_taken2                     
);

reg [GHR_WIDTH-1:0] ghr;

function automatic [31:0] hash_pc_ghr(
    input [PC_WIDTH-1:0] pc,
    input [GHR_WIDTH-1:0] history,
    input integer history_length
);
    reg [31:0] hash;
    integer i;
    begin
        hash = pc[31:0];
        for (i = 0; i < history_length; i = i + 1) begin
            if (i < GHR_WIDTH) begin
                hash = hash ^ {31'b0, history[i]};
            end
            hash = {hash[30:0], hash[31]}; 
        end
        hash_pc_ghr = hash;
    end
endfunction
// ========================= table(only one) =====================
// t1
reg [TAG_WIDTH-1:0] 	 		tag_t1 [T1_SIZE-1 :0 ];
reg [TARGET_WIDTH-1:0] target_t1 [T1_SIZE-1 :0 ];
reg [U_WIDTH-1:0] 		 useful_t1 [T1_SIZE-1 :0 ];
reg 									  valid_t1 [T1_SIZE-1 :0 ];
// t2
reg [TAG_WIDTH-1:0] 	 		tag_t2 [T2_SIZE-1 :0 ];
reg [TARGET_WIDTH-1:0] target_t2 [T2_SIZE-1 :0 ];
reg [U_WIDTH-1:0] 		 useful_t2 [T2_SIZE-1 :0 ];
reg 									  valid_t2 [T2_SIZE-1 :0 ];
// t3
reg [TAG_WIDTH-1:0] 	 		tag_t3 [T3_SIZE-1 :0 ];
reg [TARGET_WIDTH-1:0] target_t3 [T3_SIZE-1 :0 ];
reg [U_WIDTH-1:0] 		 useful_t3 [T3_SIZE-1 :0 ];
reg 									  valid_t3 [T3_SIZE-1 :0 ];
// t4
reg [TAG_WIDTH-1:0] 	 		tag_t4 [T4_SIZE-1 :0 ];
reg [TARGET_WIDTH-1:0] target_t4 [T4_SIZE-1 :0 ];
reg [U_WIDTH-1:0] 		 useful_t4 [T4_SIZE-1 :0 ];
reg 									  valid_t4 [T4_SIZE-1 :0 ];

// init table
generate
    for (genvar i = 0; i < T1_SIZE; i = i + 1) begin : init_t1
        always_ff @(posedge clk ) begin
            if (reset) begin
                useful_t1[i] <= 0;
                valid_t1[i]  <= 0;
                tag_t1[i]    <= 0;
                target_t1[i] <= 0;
            end
        end
    end
    for (genvar i = 0; i < T2_SIZE; i = i + 1) begin : init_t2
        always_ff @(posedge clk ) begin
            if (reset) begin
                useful_t2[i] <= 0;
                valid_t2[i]  <= 0;
                tag_t2[i]    <= 0;
                target_t2[i] <= 0;
            end
        end
    end
    for (genvar i = 0; i < T3_SIZE; i = i + 1) begin : init_t3
        always_ff @(posedge clk ) begin
            if (reset) begin
                useful_t3[i] <= 0;
                valid_t3[i]  <= 0;
                tag_t3[i]    <= 0;
                target_t3[i] <= 0;
            end
        end
    end
    for (genvar i = 0; i < T4_SIZE; i = i + 1) begin : init_t4
        always_ff @(posedge clk ) begin
            if (reset) begin
                useful_t4[i] <= 0;
                valid_t4[i]  <= 0;
                tag_t4[i]    <= 0;
                target_t4[i] <= 0;
            end
        end
    end
endgenerate

// ======================= bundle 1 ==============================
wire [3:0] provider_table_1;
wire 			 provider_valid_1;

wire [TAG_WIDTH-1:0] t1_tag_1;
wire [TAG_WIDTH-1:0] t2_tag_1;
wire [TAG_WIDTH-1:0] t3_tag_1;
wire [TAG_WIDTH-1:0] t4_tag_1;

wire [$clog2(T1_SIZE)-1:0] t1_idx_1;
wire [$clog2(T2_SIZE)-1:0] t2_idx_1;
wire [$clog2(T3_SIZE)-1:0] t3_idx_1;
wire [$clog2(T4_SIZE)-1:0] t4_idx_1;

wire [31:0] _t1_idx_1;
wire [31:0] _t2_idx_1;
wire [31:0] _t3_idx_1;
wire [31:0] _t4_idx_1;

wire [31:0] _t1_tag_1;
wire [31:0] _t2_tag_1;
wire [31:0] _t3_tag_1;
wire [31:0] _t4_tag_1;

assign _t1_idx_1 = hash_pc_ghr(fetch_pc1, ghr, 16 ) ;
assign _t2_idx_1 = hash_pc_ghr(fetch_pc1, ghr, 32 ) ;
assign _t3_idx_1 = hash_pc_ghr(fetch_pc1, ghr, 64 ) ;
assign _t4_idx_1 = hash_pc_ghr(fetch_pc1, ghr, 128) ;

assign _t1_tag_1 = hash_pc_ghr(fetch_pc1, ghr, 32 ) ;
assign _t2_tag_1 = hash_pc_ghr(fetch_pc1, ghr, 64 ) ;
assign _t3_tag_1 = hash_pc_ghr(fetch_pc1, ghr, 128) ;
assign _t4_tag_1 = hash_pc_ghr(fetch_pc1, ghr, 256) ;

assign t1_idx_1 = _t1_idx_1[$clog2(T1_SIZE)-1:0] ;
assign t2_idx_1 = _t2_idx_1[$clog2(T2_SIZE)-1:0] ;
assign t3_idx_1 = _t3_idx_1[$clog2(T3_SIZE)-1:0] ;
assign t4_idx_1 = _t4_idx_1[$clog2(T4_SIZE)-1:0] ;

assign t1_tag_1 = _t1_tag_1[TAG_WIDTH-1:0]       ;
assign t2_tag_1 = _t2_tag_1[TAG_WIDTH-1:0]       ;
assign t3_tag_1 = _t3_tag_1[TAG_WIDTH-1:0]       ;
assign t4_tag_1 = _t4_tag_1[TAG_WIDTH-1:0]       ;

assign pred_target1 = (valid_t4[t4_idx_1] && tag_t4[t4_idx_1] == t4_tag_1) ? target_t4[t4_idx_1] :
										   (valid_t3[t3_idx_1] && tag_t3[t3_idx_1] == t3_tag_1) ? target_t3[t3_idx_1] :
										   (valid_t2[t2_idx_1] && tag_t2[t2_idx_1] == t2_tag_1) ? target_t2[t2_idx_1] :
										   (valid_t1[t1_idx_1] && tag_t1[t1_idx_1] == t1_tag_1) ? target_t1[t1_idx_1] :
										  	0;

assign pred_valid1   = (valid_t4[t4_idx_1] && tag_t4[t4_idx_1] == t4_tag_1) ? 1:
										   (valid_t3[t3_idx_1] && tag_t3[t3_idx_1] == t3_tag_1) ? 1:
										   (valid_t2[t2_idx_1] && tag_t2[t2_idx_1] == t2_tag_1) ? 1:
										   (valid_t1[t1_idx_1] && tag_t1[t1_idx_1] == t1_tag_1) ? 1:
										  	0;

assign pred_conf1    = (valid_t4[t4_idx_1] && tag_t4[t4_idx_1] == t4_tag_1) ? useful_t4[t4_idx_1]:
											 (valid_t3[t3_idx_1] && tag_t3[t3_idx_1] == t3_tag_1) ? useful_t3[t3_idx_1]:
											 (valid_t2[t2_idx_1] && tag_t2[t2_idx_1] == t2_tag_1) ? useful_t2[t2_idx_1]:
											 (valid_t1[t1_idx_1] && tag_t1[t1_idx_1] == t1_tag_1) ? useful_t1[t1_idx_1]:
												2'b00;

assign provider_valid_1 = (valid_t4[t4_idx_1] && tag_t4[t4_idx_1] == t4_tag_1) ? 1:
  							 		 			(valid_t3[t3_idx_1] && tag_t3[t3_idx_1] == t3_tag_1) ? 1:
  							 		 			(valid_t2[t2_idx_1] && tag_t2[t2_idx_1] == t2_tag_1) ? 1:
  							 		 			(valid_t1[t1_idx_1] && tag_t1[t1_idx_1] == t1_tag_1) ? 1:
  								   			0;

assign provider_table_1 = (valid_t4[t4_idx_1] && tag_t4[t4_idx_1] == t4_tag_1) ? 4:
								 		 			(valid_t3[t3_idx_1] && tag_t3[t3_idx_1] == t3_tag_1) ? 3:
								 		 			(valid_t2[t2_idx_1] && tag_t2[t2_idx_1] == t2_tag_1) ? 2:
								 		 			(valid_t1[t1_idx_1] && tag_t1[t1_idx_1] == t1_tag_1) ? 1:
										 			0;

wire [$clog2(T1_SIZE)-1:0] update_t1_idx_1;
wire [$clog2(T2_SIZE)-1:0] update_t2_idx_1;
wire [$clog2(T3_SIZE)-1:0] update_t3_idx_1;
wire [$clog2(T4_SIZE)-1:0] update_t4_idx_1;

wire [TAG_WIDTH-1:0] update_t1_tag_1;
wire [TAG_WIDTH-1:0] update_t2_tag_1;
wire [TAG_WIDTH-1:0] update_t3_tag_1;
wire [TAG_WIDTH-1:0] update_t4_tag_1;

wire [31:0] _update_t1_idx_1;
wire [31:0] _update_t2_idx_1;
wire [31:0] _update_t3_idx_1;
wire [31:0] _update_t4_idx_1;

wire [31:0] _update_t1_tag_1;
wire [31:0] _update_t2_tag_1;
wire [31:0] _update_t3_tag_1;
wire [31:0] _update_t4_tag_1;

wire [31:0] debug_t2_idx_1 = _t2_idx_1;

assign _update_t1_idx_1 = update_en1 ? hash_pc_ghr(update_pc1, ghr, 4)  : 0 ;
assign _update_t2_idx_1 = update_en1 ? hash_pc_ghr(update_pc1, ghr, 8 ) : 0 ;
assign _update_t3_idx_1 = update_en1 ? hash_pc_ghr(update_pc1, ghr, 16) : 0 ;
assign _update_t4_idx_1 = update_en1 ? hash_pc_ghr(update_pc1, ghr, 32) : 0 ;

assign _update_t1_tag_1 = update_en1 ? hash_pc_ghr(update_pc1, ghr, 8 ) : 0 ;
assign _update_t2_tag_1 = update_en1 ? hash_pc_ghr(update_pc1, ghr, 16) : 0 ;
assign _update_t3_tag_1 = update_en1 ? hash_pc_ghr(update_pc1, ghr, 32) : 0 ;
assign _update_t4_tag_1 = update_en1 ? hash_pc_ghr(update_pc1, ghr, 64) : 0 ;

assign update_t1_idx_1 = _update_t1_idx_1[$clog2(T1_SIZE)-1:0] ;
assign update_t2_idx_1 = _update_t2_idx_1[$clog2(T2_SIZE)-1:0] ;
assign update_t3_idx_1 = _update_t3_idx_1[$clog2(T3_SIZE)-1:0] ;
assign update_t4_idx_1 = _update_t4_idx_1[$clog2(T4_SIZE)-1:0] ;

assign update_t1_tag_1 = _update_t1_tag_1[TAG_WIDTH-1:0]       ;
assign update_t2_tag_1 = _update_t2_tag_1[TAG_WIDTH-1:0]       ;
assign update_t3_tag_1 = _update_t3_tag_1[TAG_WIDTH-1:0]       ;
assign update_t4_tag_1 = _update_t4_tag_1[TAG_WIDTH-1:0]       ;


// ======================= bundle 2 ==============================
wire [3:0] provider_table_2;
wire 			 provider_valid_2;

wire [TAG_WIDTH-1:0] t1_tag_2;
wire [TAG_WIDTH-1:0] t2_tag_2;
wire [TAG_WIDTH-1:0] t3_tag_2;
wire [TAG_WIDTH-1:0] t4_tag_2;

wire [$clog2(T1_SIZE)-1:0] t1_idx_2;
wire [$clog2(T2_SIZE)-1:0] t2_idx_2;
wire [$clog2(T3_SIZE)-1:0] t3_idx_2;
wire [$clog2(T4_SIZE)-1:0] t4_idx_2;

wire [31:0] _t1_idx_2;
wire [31:0] _t2_idx_2;
wire [31:0] _t3_idx_2;
wire [31:0] _t4_idx_2;

wire [31:0] _t1_tag_2;
wire [31:0] _t2_tag_2;
wire [31:0] _t3_tag_2;
wire [31:0] _t4_tag_2;

assign _t1_idx_2 = hash_pc_ghr(fetch_pc2, ghr, 16 ) ;
assign _t2_idx_2 = hash_pc_ghr(fetch_pc2, ghr, 32 ) ;
assign _t3_idx_2 = hash_pc_ghr(fetch_pc2, ghr, 64 ) ;
assign _t4_idx_2 = hash_pc_ghr(fetch_pc2, ghr, 128) ;
                                                   
assign _t1_tag_2 = hash_pc_ghr(fetch_pc2, ghr, 32 ) ;
assign _t2_tag_2 = hash_pc_ghr(fetch_pc2, ghr, 64 ) ;
assign _t3_tag_2 = hash_pc_ghr(fetch_pc2, ghr, 128) ;
assign _t4_tag_2 = hash_pc_ghr(fetch_pc2, ghr, 256) ;

assign t1_idx_2 = _t1_idx_2[$clog2(T1_SIZE)-1:0] ;
assign t2_idx_2 = _t2_idx_2[$clog2(T2_SIZE)-1:0] ;
assign t3_idx_2 = _t3_idx_2[$clog2(T3_SIZE)-1:0] ;
assign t4_idx_2 = _t4_idx_2[$clog2(T4_SIZE)-1:0] ;

assign t1_tag_2 = _t1_tag_2[TAG_WIDTH-1:0]       ;
assign t2_tag_2 = _t2_tag_2[TAG_WIDTH-1:0]       ;
assign t3_tag_2 = _t3_tag_2[TAG_WIDTH-1:0]       ;
assign t4_tag_2 = _t4_tag_2[TAG_WIDTH-1:0]       ;

assign pred_target2 = (valid_t4[t4_idx_2] && tag_t4[t4_idx_2] == t4_tag_2) ? target_t4[t4_idx_2] :
										  (valid_t3[t3_idx_2] && tag_t3[t3_idx_2] == t3_tag_2) ? target_t3[t3_idx_2] :
										  (valid_t2[t2_idx_2] && tag_t2[t2_idx_2] == t2_tag_2) ? target_t2[t2_idx_2] :
										  (valid_t1[t1_idx_2] && tag_t1[t1_idx_2] == t1_tag_2) ? target_t1[t1_idx_2] :
										  0;

assign pred_valid2  = (valid_t4[t4_idx_2] && tag_t4[t4_idx_2] == t4_tag_2) ? 1:
										  (valid_t3[t3_idx_2] && tag_t3[t3_idx_2] == t3_tag_2) ? 1:
										  (valid_t2[t2_idx_2] && tag_t2[t2_idx_2] == t2_tag_2) ? 1:
										  (valid_t1[t1_idx_2] && tag_t1[t1_idx_2] == t1_tag_2) ? 1:
										  0;

assign pred_conf2   = (valid_t4[t4_idx_2] && tag_t4[t4_idx_2] == t4_tag_2) ? useful_t4[t4_idx_2]:
											(valid_t3[t3_idx_2] && tag_t3[t3_idx_2] == t3_tag_2) ? useful_t3[t3_idx_2]:
											(valid_t2[t2_idx_2] && tag_t2[t2_idx_2] == t2_tag_2) ? useful_t2[t2_idx_2]:
											(valid_t1[t1_idx_2] && tag_t1[t1_idx_2] == t1_tag_2) ? useful_t1[t1_idx_2]:
											2'b00;

assign provider_valid_2 = (valid_t4[t4_idx_2] && tag_t4[t4_idx_2] == t4_tag_2) ? 1:
  							 		 			(valid_t3[t3_idx_2] && tag_t3[t3_idx_2] == t3_tag_2) ? 1:
  							 		 			(valid_t2[t2_idx_2] && tag_t2[t2_idx_2] == t2_tag_2) ? 1:
  							 		 			(valid_t1[t1_idx_2] && tag_t1[t1_idx_2] == t1_tag_2) ? 1:
  								   			0;

assign provider_table_2 = (valid_t4[t4_idx_2] && tag_t4[t4_idx_2] == t4_tag_2) ? 4:
								 		 			(valid_t3[t3_idx_2] && tag_t3[t3_idx_2] == t3_tag_2) ? 3:
								 		 			(valid_t2[t2_idx_2] && tag_t2[t2_idx_2] == t2_tag_2) ? 2:
								 		 			(valid_t1[t1_idx_2] && tag_t1[t1_idx_2] == t1_tag_2) ? 1:
										 			0;

wire [$clog2(T1_SIZE)-1:0] update_t1_idx_2;
wire [$clog2(T2_SIZE)-1:0] update_t2_idx_2;
wire [$clog2(T3_SIZE)-1:0] update_t3_idx_2;
wire [$clog2(T4_SIZE)-1:0] update_t4_idx_2;

wire [TAG_WIDTH-1:0] update_t1_tag_2;
wire [TAG_WIDTH-1:0] update_t2_tag_2;
wire [TAG_WIDTH-1:0] update_t3_tag_2;
wire [TAG_WIDTH-1:0] update_t4_tag_2;

wire [31:0] _update_t1_idx_2;
wire [31:0] _update_t2_idx_2;
wire [31:0] _update_t3_idx_2;
wire [31:0] _update_t4_idx_2;

wire [31:0] _update_t1_tag_2;
wire [31:0] _update_t2_tag_2;
wire [31:0] _update_t3_tag_2;
wire [31:0] _update_t4_tag_2;

assign _update_t1_idx_2 = update_en2 ? hash_pc_ghr(update_pc2, ghr, 4 ) : 0 ;
assign _update_t2_idx_2 = update_en2 ? hash_pc_ghr(update_pc2, ghr, 8 ) : 0 ;
assign _update_t3_idx_2 = update_en2 ? hash_pc_ghr(update_pc2, ghr, 16) : 0 ;
assign _update_t4_idx_2 = update_en2 ? hash_pc_ghr(update_pc2, ghr, 32) : 0 ;

assign _update_t1_tag_2 = update_en2 ? hash_pc_ghr(update_pc2, ghr, 8 ) : 0 ;
assign _update_t2_tag_2 = update_en2 ? hash_pc_ghr(update_pc2, ghr, 16) : 0 ;
assign _update_t3_tag_2 = update_en2 ? hash_pc_ghr(update_pc2, ghr, 32) : 0 ;
assign _update_t4_tag_2 = update_en2 ? hash_pc_ghr(update_pc2, ghr, 64) : 0 ;

assign update_t1_idx_2 = _update_t1_idx_2[$clog2(T1_SIZE)-1:0] ;
assign update_t2_idx_2 = _update_t2_idx_2[$clog2(T2_SIZE)-1:0] ;
assign update_t3_idx_2 = _update_t3_idx_2[$clog2(T3_SIZE)-1:0] ;
assign update_t4_idx_2 = _update_t4_idx_2[$clog2(T4_SIZE)-1:0] ;

assign update_t1_tag_2 = _update_t1_tag_2[TAG_WIDTH-1:0]       ;
assign update_t2_tag_2 = _update_t2_tag_2[TAG_WIDTH-1:0]       ;
assign update_t3_tag_2 = _update_t3_tag_2[TAG_WIDTH-1:0]       ;
assign update_t4_tag_2 = _update_t4_tag_2[TAG_WIDTH-1:0]       ;


// ====================== train process ===================

always @(posedge clk ) begin
    if (reset) begin
        ghr <= 0;
    end
    else begin
			  // update ghr 
        if 			(update_en1 && br_taken1 && !update_en2 ) begin
            ghr <= {ghr[GHR_WIDTH-2:0], 1'b1};
        end
        else if (update_en1 && !br_taken1 && !update_en2) begin
            ghr <= {ghr[GHR_WIDTH-2:0], 1'b0};
        end
//        else if (!update_en1 && update_en2 && br_taken2) begin
//            ghr <= {ghr[GHR_WIDTH-2:0], 1'b1};
//        end
//        else if (!update_en1 && update_en2 && !br_taken2) begin
//            ghr <= {ghr[GHR_WIDTH-2:0], 1'b0};
//        end 
//				else if (update_en1 && br_taken1 && update_en2 && br_taken2) begin
//					  ghr <= {ghr[GHR_WIDTH-3:0], 2'b11};
//				end
//				else if (update_en1 && br_taken1 && update_en2 && !br_taken2) begin
//					  ghr <= {ghr[GHR_WIDTH-3:0], 2'b10};
//				end 
//				else if (update_en1 && !br_taken1 && update_en2 && !br_taken2) begin
//						ghr <= {ghr[GHR_WIDTH-3:0], 2'b00};
//				end
//				else if (update_en1 && !br_taken1 && update_en2 && br_taken2) begin
//						ghr <= {ghr[GHR_WIDTH-3:0], 2'b01};
//				end
        
        if (update_en1) begin
            if (provider_valid_1) begin // 如果已经训练过
                case (provider_table_1)
                    1: begin                                                              
                        target_t1[update_t1_idx_1] <= real_target1;                          
                        useful_t1[update_t1_idx_1] <= br_taken1 ? 
                                                      (useful_t1[update_t1_idx_1] == 2'b11) ? useful_t1[update_t1_idx_1] : useful_t1[update_t1_idx_1] + 1 :
																											(useful_t1[update_t1_idx_1] == 2'b00) ? useful_t1[update_t1_idx_1] : useful_t1[update_t1_idx_1] - 1 ;
                    end                                                                     
                    2: begin                                                                
                        target_t2[update_t2_idx_1] <= real_target1;                          
                        useful_t2[update_t2_idx_1] <= br_taken1 ? 
                                                      (useful_t2[update_t2_idx_1] == 2'b11) ? useful_t2[update_t2_idx_1] : useful_t2[update_t2_idx_1] + 1 :
																											(useful_t2[update_t2_idx_1] == 2'b00) ? useful_t2[update_t2_idx_1] : useful_t2[update_t2_idx_1] - 1 ;
                    end                                                                     
                    3: begin                                                                
                        target_t3[update_t3_idx_1] <= real_target1;                          
                        useful_t3[update_t3_idx_1] <= br_taken1 ? 
                                                      (useful_t3[update_t3_idx_1] == 2'b11) ? useful_t3[update_t3_idx_1] : useful_t3[update_t3_idx_1] + 1 :
																											(useful_t3[update_t3_idx_1] == 2'b00) ? useful_t3[update_t3_idx_1] : useful_t3[update_t3_idx_1] - 1 ;
                    end                                                                     
                    4: begin                                                                
                        target_t4[update_t4_idx_1] <= real_target1;                          
                        useful_t4[update_t4_idx_1] <= br_taken1 ? 
                                                      (useful_t4[update_t4_idx_1] == 2'b11) ? useful_t4[update_t4_idx_1] : useful_t4[update_t4_idx_1] + 1 :
																											(useful_t4[update_t4_idx_1] == 2'b00) ? useful_t4[update_t4_idx_1] : useful_t4[update_t4_idx_1] - 1 ;
                    end
                endcase
            end
            else begin
                if  (!valid_t4[update_t4_idx_1] || useful_t4[update_t4_idx_1] == 0) begin // 优先最大的t4
                    tag_t4[update_t4_idx_1] 	 <= update_t4_tag_1;
                    target_t4[update_t4_idx_1] <= real_target1;
                    useful_t4[update_t4_idx_1] <= br_taken1 ? 2'b11 : 2'b10; 
                    valid_t4[update_t4_idx_1]  <= 1;
                end
                else if (!valid_t3[update_t3_idx_1] || useful_t3[update_t3_idx_1] == 0) begin // 然后是较长历史长度的t3
                    tag_t3[update_t3_idx_1]    <= update_t3_tag_1;
                    target_t3[update_t3_idx_1] <= real_target1;
                    useful_t3[update_t3_idx_1] <= br_taken1 ? 2'b10 : 2'b01;
                    valid_t3[update_t3_idx_1]  <= 1;
                end
                else if (!valid_t2[update_t2_idx_1] || useful_t2[update_t2_idx_1] == 0) begin // 然后是t2
                    tag_t2[update_t2_idx_1]    <= update_t2_tag_1;
                    target_t2[update_t2_idx_1] <= real_target1;
                    useful_t2[update_t2_idx_1] <= br_taken1 ? 2'b01 : 2'b00;
                    valid_t2[update_t2_idx_1]  <= 1;
                end
                else if (!valid_t1[update_t1_idx_1] || useful_t1[update_t1_idx_1] == 0) begin // 最后t1
                    tag_t1[update_t1_idx_1] 	 <= update_t1_tag_1;
                    target_t1[update_t1_idx_1] <= real_target1;
                    useful_t1[update_t1_idx_1] <= 2'b00; 
                    valid_t1[update_t1_idx_1]  <= 1;
                end
            end
        end
        if (update_en2) begin
            if (provider_valid_2) begin // 如果已经训练过
                case (provider_table_2)
                    1: begin                                                              
                        target_t1[update_t1_idx_2] <= real_target2;                          
                        useful_t1[update_t1_idx_2] <= br_taken2 ? 
                                                      (useful_t1[update_t1_idx_2] == 2'b11) ? useful_t1[update_t1_idx_2] : useful_t1[update_t1_idx_2] + 1 :
																											(useful_t1[update_t1_idx_2] == 2'b00) ? useful_t1[update_t1_idx_2] : useful_t1[update_t1_idx_2] - 1 ;
                    end                                                                     
                    2: begin                                                                
                        target_t2[update_t2_idx_2] <= real_target2;                          
                        useful_t2[update_t2_idx_2] <= br_taken2 ? 
                                                      (useful_t2[update_t2_idx_2] == 2'b11) ? useful_t2[update_t2_idx_2] : useful_t2[update_t2_idx_2] + 1 :
																											(useful_t2[update_t2_idx_2] == 2'b00) ? useful_t2[update_t2_idx_2] : useful_t2[update_t2_idx_2] - 1 ;
                    end                                                                     
                    3: begin                                                                
                        target_t3[update_t3_idx_2] <= real_target2;                          
                        useful_t3[update_t3_idx_2] <= br_taken2 ? 
                                                      (useful_t3[update_t3_idx_2] == 2'b11) ? useful_t3[update_t3_idx_2] : useful_t3[update_t3_idx_2] + 1 :
																											(useful_t3[update_t3_idx_2] == 2'b00) ? useful_t3[update_t3_idx_2] : useful_t3[update_t3_idx_2] - 1 ;
                    end                                                                     
                    4: begin                                                                
                        target_t4[update_t4_idx_2] <= real_target2;                          
                        useful_t4[update_t4_idx_2] <= br_taken2 ? 
                                                      (useful_t4[update_t4_idx_2] == 2'b11) ? useful_t4[update_t4_idx_2] : useful_t4[update_t4_idx_2] + 1 :
																											(useful_t4[update_t4_idx_2] == 2'b00) ? useful_t4[update_t4_idx_2] : useful_t4[update_t4_idx_2] - 1 ;
                    end
                endcase
            end
            else begin
                if  (!valid_t4[update_t4_idx_2] || useful_t4[update_t4_idx_2] == 0) begin // 优先最大的t4
                    tag_t4[update_t4_idx_2] 	 <= update_t4_tag_2;
                    target_t4[update_t4_idx_2] <= real_target2;
                    useful_t4[update_t4_idx_2] <= br_taken1 ? 2'b11 : 2'b10; 
                    valid_t4[update_t4_idx_2]  <= 1;
                end
                else if (!valid_t3[update_t3_idx_2] || useful_t3[update_t3_idx_2] == 0) begin // 然后是较长历史长度的t3
                    tag_t3[update_t3_idx_2]    <= update_t3_tag_2;
                    target_t3[update_t3_idx_2] <= real_target2;
                    useful_t3[update_t3_idx_2] <= br_taken1 ? 2'b10 : 2'b01;
                    valid_t3[update_t3_idx_2]  <= 1;
                end
                else if (!valid_t2[update_t2_idx_2] || useful_t2[update_t2_idx_2] == 0) begin // 然后是t2
                    tag_t2[update_t2_idx_2]    <= update_t2_tag_2;
                    target_t2[update_t2_idx_2] <= real_target2;
                    useful_t2[update_t2_idx_2] <= br_taken1 ? 2'b01 : 2'b00;
                    valid_t2[update_t2_idx_2]  <= 1;
                end
                else if (!valid_t1[update_t1_idx_2] || useful_t1[update_t1_idx_2] == 0) begin // 最后t1
                    tag_t1[update_t1_idx_2] 	 <= update_t1_tag_2;
                    target_t1[update_t1_idx_2] <= real_target2;
                    useful_t1[update_t1_idx_2] <= 2'b00; 
                    valid_t1[update_t1_idx_2]  <= 1;
                end
            end
        end
    end
end

endmodule

