// =============================================================================
// RAS (Return Address Stack) 模块
//
// 功能描述:
//   返回地址栈，用于预测函数返回的地址。
//   支持推测性推入/弹出和提交时确认。
//
// =============================================================================
module ras #( 
    parameter RASSIZE     = 16,
    parameter ADDR_WIDTH  = 32,
    parameter COUNT_WIDTH = 4
) (// coremark 只占10个stack
    input  wire                  clk               ,
    input  wire                  reset             ,
    
    input  wire                  spec_push_valid   ,
    input  wire                  spec_pop_valid    ,
    input  wire [ADDR_WIDTH-1:0] spec_push_addr    ,
    output wire [ADDR_WIDTH-1:0] spec_pop_addr     ,
    
    input  wire                  commit_push_valid ,
    input  wire                  commit_pop_valid  , 
    input  wire [ADDR_WIDTH-1:0] commit_push_addr  ,
    input  wire                  commit_flush      ,
    
    output wire                  empty             ,
    output wire                  full
);

// ===========================================================
    reg  [ADDR_WIDTH+COUNT_WIDTH-1:0]   commit_stack [RASSIZE-1];
    reg  [ADDR_WIDTH+COUNT_WIDTH-1:0]   spec_stack   [RASSIZE-1];
    reg  [$clog2(RASSIZE)-1:0] spec_ptr       ;
    reg  [$clog2(RASSIZE)-1:0] commit_ptr     ;

    assign empty = (commit_ptr == 0) ;
    assign full  = (commit_ptr == RASSIZE[$clog2(RASSIZE)-1:0]-1) ;

    assign spec_pop_addr = spec_stack[spec_ptr-1][ADDR_WIDTH+COUNT_WIDTH-1:COUNT_WIDTH];

    always @(posedge clk ) begin
        if (reset) begin
            spec_ptr   <= 0;
            commit_ptr <= 0;
			for (integer i = 0; i < RASSIZE; i = i + 1) begin
              commit_stack[i] <= 0;
              spec_stack[i]   <= 0;
		    end
        end else begin
            if (commit_flush) begin
                if (commit_push_valid && !full) begin
                    if((commit_ptr > 0) && (commit_stack[commit_ptr-1][ADDR_WIDTH+COUNT_WIDTH-1:COUNT_WIDTH] == commit_push_addr)) begin
						if(commit_stack[commit_ptr-1][COUNT_WIDTH-1:0] == {COUNT_WIDTH{1'b1}}) begin
               				commit_stack[commit_ptr][ADDR_WIDTH+COUNT_WIDTH-1:COUNT_WIDTH] <= commit_push_addr;
               			    commit_stack[commit_ptr][COUNT_WIDTH-1:0]                      <= 1;
						 	commit_ptr                                                     <= commit_ptr + 1;
						end else commit_stack[commit_ptr-1][COUNT_WIDTH-1:0] <= commit_stack[commit_ptr-1][COUNT_WIDTH-1:0] + 1;
                    end else begin
                      commit_stack[commit_ptr][ADDR_WIDTH+COUNT_WIDTH-1:COUNT_WIDTH] <= commit_push_addr;
                      commit_stack[commit_ptr][COUNT_WIDTH-1:0]                      <= 1;
                      commit_ptr                                                     <= commit_ptr + 1;
                    end
                end else if (commit_pop_valid && !empty) begin
                    if(commit_stack[commit_ptr-1][COUNT_WIDTH-1:0] > 1) begin
                        commit_stack[commit_ptr-1][COUNT_WIDTH-1:0] <= commit_stack[commit_ptr-1][COUNT_WIDTH-1:0] - 1;
                    end else if(commit_stack[commit_ptr-1][COUNT_WIDTH-1:0] == 1) begin
                        commit_stack[commit_ptr-1][COUNT_WIDTH-1:0] <= commit_stack[commit_ptr-1][COUNT_WIDTH-1:0] - 1;
                        commit_ptr                                  <= commit_ptr - 1;
                    end else begin
                        commit_ptr <= commit_ptr - 1;
                    end
                end
                for(integer k = 0;k < RASSIZE;k = k + 1) begin
                    spec_stack[k] <= commit_stack[k]; // 错误时全局更新spec_stack,需花费一个周期
                end
                spec_ptr <= commit_ptr;
            end else if (!commit_flush && (commit_pop_valid || commit_push_valid)) begin
                if (commit_push_valid && !full) begin
                    if((commit_ptr > 0) && (commit_stack[commit_ptr-1][ADDR_WIDTH+COUNT_WIDTH-1:COUNT_WIDTH] == commit_push_addr)) begin
						if(commit_stack[commit_ptr-1][COUNT_WIDTH-1:0] == {COUNT_WIDTH{1'b1}}) begin
               				commit_stack[commit_ptr][ADDR_WIDTH+COUNT_WIDTH-1:COUNT_WIDTH] <= commit_push_addr;
               				commit_stack[commit_ptr][COUNT_WIDTH-1:0]                      <= 1;
							commit_ptr                                                     <= commit_ptr + 1;
						end else commit_stack[commit_ptr-1][COUNT_WIDTH-1:0] <= commit_stack[commit_ptr-1][COUNT_WIDTH-1:0] + 1;
                    end else begin
                      commit_stack[commit_ptr][ADDR_WIDTH+COUNT_WIDTH-1:COUNT_WIDTH] <= commit_push_addr;
                      commit_stack[commit_ptr][COUNT_WIDTH-1:0]                      <= 1;
                      commit_ptr                                                     <= commit_ptr + 1;
                    end
                end else if (commit_pop_valid && !empty) begin
                    if(commit_stack[commit_ptr-1][COUNT_WIDTH-1:0] > 1) begin
                        commit_stack[commit_ptr-1][COUNT_WIDTH-1:0] <= commit_stack[commit_ptr-1][COUNT_WIDTH-1:0] - 1;
                    end else if(commit_stack[commit_ptr-1][COUNT_WIDTH-1:0] == 1) begin
                        commit_stack[commit_ptr-1][COUNT_WIDTH-1:0] <= commit_stack[commit_ptr-1][COUNT_WIDTH-1:0] - 1;
                        commit_ptr                                                     <= commit_ptr - 1;
                    end else begin
                        commit_ptr                                                     <= commit_ptr - 1;
                    end
                end
                if(commit_ptr > 0) begin
                    spec_stack[commit_ptr-1] <= commit_stack[commit_ptr-1]; // 正确时局部更新 spec_stack,需花费一个周期
                end
            end

            if (spec_push_valid && !full) begin
                if ((spec_ptr > 0)  && (spec_stack[spec_ptr-1][ADDR_WIDTH+COUNT_WIDTH-1:COUNT_WIDTH] == spec_push_addr)) begin
                    if(spec_stack[spec_ptr-1][COUNT_WIDTH-1:0] == {COUNT_WIDTH{1'b1}}) begin
                        spec_stack[spec_ptr][ADDR_WIDTH+COUNT_WIDTH-1:COUNT_WIDTH] <= spec_push_addr;
                        spec_stack[spec_ptr][COUNT_WIDTH-1:0]                      <= 1;
                        spec_ptr                                                   <= spec_ptr + 1;
                    end else spec_stack[spec_ptr-1][COUNT_WIDTH-1:0] <= spec_stack[spec_ptr-1][COUNT_WIDTH-1:0] + 1;
                end else begin
                    spec_stack[spec_ptr][ADDR_WIDTH+COUNT_WIDTH-1:COUNT_WIDTH] <= spec_push_addr;
                    spec_stack[spec_ptr][COUNT_WIDTH-1:0]                      <= 1;
                    spec_ptr                                                   <= spec_ptr + 1;
                end
            end else if (spec_pop_valid && !empty) begin
                if ( spec_stack[spec_ptr-1][COUNT_WIDTH-1:0] > 1) begin
                    spec_stack[spec_ptr-1][COUNT_WIDTH-1:0] <= spec_stack[spec_ptr-1][COUNT_WIDTH-1:0] - 1;
                end else if ( spec_stack[spec_ptr-1][COUNT_WIDTH-1:0] == 1) begin
                    spec_stack[spec_ptr-1][COUNT_WIDTH-1:0] <= spec_stack[spec_ptr-1][COUNT_WIDTH-1:0] - 1;
                    spec_ptr                                                   <= spec_ptr - 1 ;
                end else begin
                    spec_ptr                                                   <= spec_ptr - 1 ;
                end
            end
        end
    end

endmodule

