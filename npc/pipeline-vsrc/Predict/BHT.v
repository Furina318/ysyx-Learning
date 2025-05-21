module BHT (
    input clk,
    input reset,
    input [31:0] pc,              // 查询PC
    output reg predict_taken,     // 预测是否跳转
    input [31:0] update_pc,       // 更新时的PC
    input update_taken,           // 更新时的实际跳转结果
    input update_valid            // 更新有效信号
);
    reg [1:0] bht [0:255];
    wire [7:0] index = pc[9:2];
    wire [7:0] update_index = update_pc[9:2];

    // 查询逻辑
    always @(*) begin
        predict_taken = (bht[index] >= 2'd2);
    end

    // 更新逻辑
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            integer i;
            for (i = 0; i < 256; i = i + 1) begin
                bht[i] = 2'b01; // 初始化为弱不跳转
            end
        end
        else if (update_valid) begin
            if (update_taken) begin
                if (bht[update_index] < 2'd3) begin
                    bht[update_index] = bht[update_index] + 1;
                end
            end
            else begin
                if (bht[update_index] > 2'd0) begin
                    bht[update_index] = bht[update_index] - 1;
                end
            end
        end
    end
endmodule