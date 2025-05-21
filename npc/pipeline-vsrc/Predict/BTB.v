module BTB (
    input clk,
    input reset,
    input [31:0] pc,              // 查询PC
    output reg predict_taken,     // 预测是否跳转
    output reg [31:0] predict_target, // 预测目标地址
    input [31:0] update_pc,       // 更新时的PC
    input [31:0] update_target,   // 更新时的目标地址
    input update_taken,           // 更新时的实际跳转结果
    input update_valid            // 更新有效信号
);
    reg [31:0] btb_pc [0:255];
    reg [31:0] btb_target [0:255];
    reg btb_valid [0:255];

    // 查询逻辑
    always @(*) begin
        integer i;
        predict_taken = 0;
        predict_target = 32'h0;
        for (i = 0; i < 256; i = i + 1) begin
            if (btb_valid[i] && btb_pc[i] == pc) begin
                predict_taken = 1;
                predict_target = btb_target[i];
                break;
            end
        end
    end

    // 更新逻辑
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            integer i;
            for (i = 0; i < 256; i = i + 1) begin
                btb_valid[i] = 0;
                btb_pc[i] = 32'h0;
                btb_target[i] = 32'h0;
            end
        end
        else if (update_valid && update_taken) begin
            integer i;
            reg found;
            found = 0;
            for (i = 0; i < 256; i = i + 1) begin
                if (btb_valid[i] && btb_pc[i] == update_pc) begin
                    btb_pc[i] = update_pc;
                    btb_target[i] = update_target;
                    btb_valid[i] = 1;
                    found = 1;
                    break;
                end
            end
            if (!found) begin
                for (i = 0; i < 256; i = i + 1) begin
                    if (!btb_valid[i]) begin
                        btb_pc[i] = update_pc;
                        btb_target[i] = update_target;
                        btb_valid[i] = 1;
                        break;
                    end
                end
            end
        end
    end
endmodule