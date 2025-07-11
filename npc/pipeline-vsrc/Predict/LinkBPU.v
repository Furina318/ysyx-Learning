`timescale 1ns/1ns

module Link_BPU #(
    parameter BTB_ENTRIES    = 256,    // BTB条目数 (256-1024)
    parameter BTB_INDEX_BITS  = 8,      // log2(BTB_ENTRIES)
    parameter GHR_WIDTH       = 4,      // 全局历史寄存器宽度 (2-8)
    parameter PHT_SIZE        = 1024,   // 模式历史表大小
    parameter PHT_INDEX_BITS  = 10      // log2(PHT_SIZE)
)(
    input             clk,
    input             reset,
    input      [31:0] if_pc,              // 当前取指PC
    output reg        predict_taken,      // 预测是否跳转
    output reg [31:0] predict_target,     // 预测目标地址

    input             ex_bpu_update,      // EX阶段更新信号
    input      [31:0] ex_bpu_pc,          // EX阶段分支指令的PC
    input             ex_bpu_taken,       // EX阶段实际跳转结果
    input      [31:0] ex_bpu_target,      // EX阶段实际目标地址
    input             ex_bpu_correct,     // 是否预测正确
    output reg [31:0] correct_predictions, // 正确预测次数
    output reg [31:0] total_predictions   // 总预测次数
);

    // ====================== BTB (Branch Target Buffer) ======================
    // BTB存储结构
    reg  [31:0] btb_target [0:BTB_ENTRIES-1];  // 目标地址
    reg  [31-BTB_INDEX_BITS-2:0] btb_tag [0:BTB_ENTRIES-1]; // 地址标签
    reg         btb_valid [0:BTB_ENTRIES-1];   // 有效位
    
    // BTB索引和标签计算
    wire [BTB_INDEX_BITS-1:0] btb_index_if = if_pc[BTB_INDEX_BITS+1:2];
    wire [31-BTB_INDEX_BITS-2:0] btb_tag_if = if_pc[31:BTB_INDEX_BITS+2];
    
    wire [BTB_INDEX_BITS-1:0] btb_index_ex = ex_bpu_pc[BTB_INDEX_BITS+1:2];
    wire [31-BTB_INDEX_BITS-2:0] btb_tag_ex = ex_bpu_pc[31:BTB_INDEX_BITS+2];
    
    // BTB命中判断
    wire btb_hit_if = btb_valid[btb_index_if] && (btb_tag[btb_index_if] == btb_tag_if);
    wire btb_hit_ex = btb_valid[btb_index_ex] && (btb_tag[btb_index_ex] == btb_tag_ex);

    // ====================== GHR (Global History Register) ======================
    reg [GHR_WIDTH-1:0] ghr;  // 全局历史寄存器
    
    // ====================== PHT (Pattern History Table) ======================
    // 2位饱和计数器
    reg [1:0] pht [0:PHT_SIZE-1];
    
    // PHT索引计算 (PC与GHR的哈希)
    wire [PHT_INDEX_BITS-1:0] pht_index_if = 
        {if_pc[PHT_INDEX_BITS-1:0] ^ {ghr, {(PHT_INDEX_BITS-GHR_WIDTH){1'b0}}}};
    
    wire [PHT_INDEX_BITS-1:0] pht_index_ex = 
        {ex_bpu_pc[PHT_INDEX_BITS-1:0] ^ {ghr, {(PHT_INDEX_BITS-GHR_WIDTH){1'b0}}}};
    
    // ====================== RAS (Return Address Stack) ======================
    parameter RAS_DEPTH = 8;  // 返回地址栈深度
    reg [31:0] ras [0:RAS_DEPTH-1];
    reg [31:0]  ras_ptr;  // 栈指针
    
    // ====================== 预测逻辑 ======================
    always @(*) begin
        predict_taken = 1'b0;
        predict_target = if_pc + 4;  // 默认下一条指令地址
        
        // 1. 检查是否是函数返回指令 (简化版)
        if (if_pc[6:0] == 7'b1100111 && if_pc[14:12] == 3'b000) begin // JALR指令
            // 使用RAS预测返回地址
            if (ras_ptr != 0) begin
                predict_taken = 1'b1;
                predict_target = ras[ras_ptr-1];
            end
        end
        // 2. 检查BTB命中
        else if (btb_hit_if) begin
            // 使用马尔可夫链预测
            case (pht[pht_index_if])
                2'b00, 2'b01: predict_taken = 1'b0;  // 强不跳转/弱不跳转
                2'b10, 2'b11: begin                  // 弱跳转/强跳转
                    predict_taken = 1'b1;
                    predict_target = btb_target[btb_index_if];
                end
            endcase
        end
    end

    // ====================== 更新逻辑 ======================
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            // 复位所有状态
            for (integer i = 0; i < BTB_ENTRIES; i++) begin
                btb_valid[i] = 1'b0;
                btb_tag[i] = 0;
                btb_target[i] = 0;
            end
            
            for (integer i = 0; i < PHT_SIZE; i++) begin
                pht[i] = 2'b01;  // 初始化为弱不跳转
            end
            
            ghr <= 0;
            ras_ptr <= 0;
            correct_predictions <= 0;
            total_predictions <= 0;
        end
        else begin
            // 更新统计
            if (ex_bpu_update) begin
                total_predictions <= total_predictions + 1;
                if (ex_bpu_correct) begin
                    correct_predictions <= correct_predictions + 1;
                end
            end
            
            // 分支解决时更新预测器
            if (ex_bpu_update) begin
                // 更新GHR (移入实际跳转结果)
                ghr <= {ghr[GHR_WIDTH-2:0], ex_bpu_taken};
                
                // 更新PHT计数器
                if (ex_bpu_taken) begin
                    // 实际跳转：增加计数器
                    case (pht[pht_index_ex])
                        2'b00: pht[pht_index_ex] <= 2'b01;  // 强不跳转 -> 弱不跳转
                        2'b01: pht[pht_index_ex] <= 2'b10;  // 弱不跳转 -> 弱跳转
                        2'b10: pht[pht_index_ex] <= 2'b11;  // 弱跳转 -> 强跳转
                        2'b11: pht[pht_index_ex] <= 2'b11;  // 强跳转 -> 强跳转 (饱和)
                    endcase
                end else begin
                    // 实际不跳转：减少计数器
                    case (pht[pht_index_ex])
                        2'b00: pht[pht_index_ex] <= 2'b00;  // 强不跳转 -> 强不跳转 (饱和)
                        2'b01: pht[pht_index_ex] <= 2'b00;  // 弱不跳转 -> 强不跳转
                        2'b10: pht[pht_index_ex] <= 2'b01;  // 弱跳转 -> 弱不跳转
                        2'b11: pht[pht_index_ex] <= 2'b10;  // 强跳转 -> 弱跳转
                    endcase
                end
                
                // 更新BTB
                if (!btb_hit_ex) begin
                    // 分配新的BTB条目
                    btb_valid[btb_index_ex] <= 1'b1;
                    btb_tag[btb_index_ex] <= btb_tag_ex;
                end
                // 总是更新目标地址（可能改变）
                btb_target[btb_index_ex] <= ex_bpu_target;
                
                // 更新RAS (函数调用和返回)
                if (ex_bpu_pc[6:0] == 7'b1101111) begin // JAL指令 (函数调用)
                    if (ras_ptr < RAS_DEPTH) begin
                        ras[ras_ptr] <= ex_bpu_pc + 4; // 返回地址
                        ras_ptr <= ras_ptr + 1;
                    end
                end 
                else if (ex_bpu_pc[6:0] == 7'b1100111 && 
                         ex_bpu_pc[14:12] == 3'b000 && ex_bpu_taken) begin // JALR指令 (函数返回)
                    if (ras_ptr > 0) begin
                        ras_ptr <= ras_ptr - 1;
                    end
                end
            end
        end
    end

endmodule