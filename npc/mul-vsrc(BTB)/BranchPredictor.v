// 分支预测模块 (bp.v)
module BranchPredictor (
    input         clk,
    input         reset,
    input  [31:0] pc,
    output        pred_taken,
    output [31:0] pred_target,
    input         update,
    input  [31:0] update_pc,
    input         actual_taken,
    input  [31:0] actual_target
);
    parameter PHT_SIZE = 1024;
    reg [1:0] pht [0:PHT_SIZE-1];  // Pattern History Table
    reg [31:0] btb [0:PHT_SIZE-1]; // Branch Target Buffer
    
    // 初始化
    integer i;
    initial begin
        for(i=0; i<PHT_SIZE; i=i+1) begin
            pht[i] = 2'b10;  // 初始状态：弱跳转
            btb[i] = 32'h0;
        end
    end

    // 预测逻辑
    assign pred_taken = pht[pc[11:2]][1];
    assign pred_target = btb[pc[11:2]];

    // 更新逻辑
    always @(posedge clk) begin
        if (reset) begin
            for(i=0; i<PHT_SIZE; i=i+1) begin
                pht[i] <= 2'b10;
                btb[i] <= 32'h0;
            end
        end else if (update) begin
            // 更新PHT状态
            case(pht[update_pc[11:2]])
                2'b00: pht[update_pc[11:2]] <= actual_taken ? 2'b01 : 2'b00;
                2'b01: pht[update_pc[11:2]] <= actual_taken ? 2'b10 : 2'b00;
                2'b10: pht[update_pc[11:2]] <= actual_taken ? 2'b11 : 2'b01;
                2'b11: pht[update_pc[11:2]] <= actual_taken ? 2'b11 : 2'b10;
            endcase
            
            // 更新BTB
            if(actual_taken) 
                btb[update_pc[11:2]] <= actual_target;
        end
    end
endmodule