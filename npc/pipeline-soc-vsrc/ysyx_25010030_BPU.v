//可控防递归的结合RAS和BTB的分支预测器
`include "ysyx_25010030_define.vh"
module ysyx_25010030_BPU #(
    parameter BTB_ENTRIES     = 256,    // BTB条目数
    parameter GHR_WIDTH       = 4,      // 全局历史寄存器宽度
    parameter PHT_SIZE        = 256,    // 模式历史表大小
    parameter RAS_DEPTH       = 8       // 返回地址栈深度
)(
    input             clk            ,
    input             reset          ,
    input      [31:0] ifu_pc         ,      // 当前取指PC
    output reg        predict_taken  ,      // 预测是否跳转
    output reg [31:0] predict_target ,      // 预测目标地址

    input             ex_bpu_update  ,       // EX阶段更新信号
    input      [31:0] ex_bpu_pc      ,       // EX阶段分支指令的PC
    input             ex_bpu_taken   ,       // EX阶段实际跳转结果
    input      [31:0] ex_bpu_target          // EX阶段实际目标地址
    // === FOR STATISTICS ONLY ===
    // input             ex_bpu_correct,      // 是否预测正确
    // output reg [31:0] correct_predictions, // 正确预测次数
    // output reg [31:0] total_predictions    // 总预测次数
);
    localparam BTB_INDEX_BITS  = $clog2(BTB_ENTRIES);
    localparam PHT_INDEX_BITS  = $clog2(PHT_SIZE); 
    
    // BTB
    reg  [31-BTB_INDEX_BITS-2:0] btb_tag    [0:BTB_ENTRIES-1];               
    reg  [                 31:0] btb_target [0:BTB_ENTRIES-1];               
    reg                          btb_valid  [0:BTB_ENTRIES-1];               
    
    // BTB索引和标签计算
    wire [   BTB_INDEX_BITS-1:0] btb_index_if = ifu_pc[BTB_INDEX_BITS+1:2];
    wire [31-BTB_INDEX_BITS-2:0] btb_tag_if   = ifu_pc[31:BTB_INDEX_BITS+2];
    
    wire [   BTB_INDEX_BITS-1:0] btb_index_ex = ex_bpu_pc[BTB_INDEX_BITS+1:2];
    wire [31-BTB_INDEX_BITS-2:0] btb_tag_ex   = ex_bpu_pc[31:BTB_INDEX_BITS+2];
    
    // BTB命中判断
    wire btb_hit_if = btb_valid[btb_index_if] && (btb_tag[btb_index_if] == btb_tag_if);
    wire btb_hit_ex = btb_valid[btb_index_ex] && (btb_tag[btb_index_ex] == btb_tag_ex);

    reg [GHR_WIDTH-1:0] ghr; //全局历史寄存器

    reg [          1:0] pht [0:PHT_SIZE-1]; //模式历史表
    
    // PHT索引计算
    wire [PHT_INDEX_BITS-1:0] pht_index_if = 
        ifu_pc[PHT_INDEX_BITS-1:0] ^ {ghr, {(PHT_INDEX_BITS-GHR_WIDTH){1'b0}}};
    
    wire [PHT_INDEX_BITS-1:0] pht_index_ex = 
        ex_bpu_pc[PHT_INDEX_BITS-1:0] ^ {ghr, {(PHT_INDEX_BITS-GHR_WIDTH){1'b0}}};
    
    // 增强型返回地址栈(RAS)存储结构
    reg [31:0] ras             [0:RAS_DEPTH-1];      // 返回地址存储
    reg [31:0] ras_call_pc     [0:RAS_DEPTH-1];      // 调用点PC记录
    reg [ 3:0] recursion_depth [0:RAS_DEPTH-1];      // 每个栈槽的递归深度
    
    // 栈指针和状态
    reg [31:0] ras_ptr;                  // 栈指针
    reg        ras_overflow;             // 栈溢出标志
    reg        ras_underflow;            // 栈下溢标志
    
    // 递归检测信号
    wire is_recursive_call;
    wire is_recursive_return;

    always @(*) begin
        predict_taken  = 1'b0;
        predict_target = ifu_pc + 4;  // 默认下一条指令地址
        
        // 检查是否是函数返回指令
        if (ifu_pc[6:0] == 7'b1100111 && ifu_pc[14:12] == 3'b000) begin // JALR指令
            // 使用RAS预测返回地址（即使栈指针为0也尝试使用BTB）
            if (ras_ptr != 0) begin
                predict_taken = 1'b1;
                predict_target = ras[ras_ptr-1];
            end
            // 如果RAS为空但BTB有记录，使用BTB预测
            else if (btb_hit_if) begin
                predict_taken = 1'b1;
                predict_target = btb_target[btb_index_if];
            end
        end
        // 检查BTB命中
        else if (btb_hit_if) begin
            case (pht[pht_index_if])
                2'b00, 2'b01: predict_taken = 1'b0;  
                2'b10, 2'b11: begin                  
                    predict_taken  = 1'b1;
                    predict_target = btb_target[btb_index_if];
                end
            endcase
        end
    end

    // 递归检测逻辑 
    assign is_recursive_call = (ex_bpu_pc == ras_call_pc[ras_ptr-1]) && 
                               (ex_bpu_target == ras[ras_ptr-1]) &&
                               (ras_ptr > 0);
    
    assign is_recursive_return = (ex_bpu_pc == ras_call_pc[ras_ptr-1]) && 
                                 (ex_bpu_target == ras[ras_ptr-1]) &&
                                 (ras_ptr > 0);

    always @(posedge clk) begin
        if (reset) begin
            for (integer i = 0; i < BTB_ENTRIES; i++) begin
                btb_valid[i]  = 1'b0;
                btb_tag[i]    = 0;
                btb_target[i] = 0;
            end
            
            for (integer i = 0; i < PHT_SIZE; i++) begin
                pht[i] = 2'b01;  
            end
            
            ghr                 <= 0;
            ras_ptr             <= 0;
            ras_overflow        <= 0;
            ras_underflow       <= 0;
            // correct_predictions <= 0;
            // total_predictions   <= 0;
            
            for (integer i = 0; i < RAS_DEPTH; i++) begin
                ras[i]             <= 0;
                ras_call_pc[i]     <= 0;
                recursion_depth[i] <= 0;
            end
        end
        else begin
            // === FOR STATISTICS ONLY ===
            // if (ex_bpu_update) begin
            //     total_predictions <= total_predictions + 1;
            //     if (ex_bpu_correct) begin
            //         correct_predictions <= correct_predictions + 1;
            //     end
            // end
            
            if (ex_bpu_update) begin
                // 更新全局历史寄存器
                ghr <= {ghr[GHR_WIDTH-2:0], ex_bpu_taken};
                
                // 更新PHT计数器
                if (ex_bpu_taken) begin
                    case (pht[pht_index_ex])
                        2'b00: pht[pht_index_ex] <= 2'b01;  
                        2'b01: pht[pht_index_ex] <= 2'b10;  
                        2'b10: pht[pht_index_ex] <= 2'b11;  
                        2'b11: pht[pht_index_ex] <= 2'b11; 
                    endcase
                end else begin
                    case (pht[pht_index_ex])
                        2'b00: pht[pht_index_ex] <= 2'b00;  
                        2'b01: pht[pht_index_ex] <= 2'b00;  
                        2'b10: pht[pht_index_ex] <= 2'b01;  
                        2'b11: pht[pht_index_ex] <= 2'b10;  
                    endcase
                end
                
                // 更新BTB
                if (!btb_hit_ex) begin
                    // 分配新的BTB条目
                    btb_valid[btb_index_ex] <= 1'b1;
                    btb_tag[btb_index_ex]   <= btb_tag_ex;
                end
                btb_target[btb_index_ex] <= ex_bpu_target; // 总是更新目标地址
                
                // 增强的RAS函数调用处理
                if (ex_bpu_pc[6:0] == 7'b1101111) begin // JAL指令 (函数调用)
                    // 检测递归调用
                    if (is_recursive_call) begin
                        // 递归调用：不压栈，增加深度计数
                        if (ras_ptr > 0 && ras_ptr <= RAS_DEPTH) begin
                            recursion_depth[ras_ptr-1] <= recursion_depth[ras_ptr-1] + 1;
                        end
                        ras_overflow <= 0; // 递归调用不会导致栈溢出
                    end
                    else if (ras_ptr < RAS_DEPTH) begin
                        // 非递归调用：正常压栈
                        ras[ras_ptr] <= ex_bpu_pc + 4;     // 返回地址
                        ras_call_pc[ras_ptr] <= ex_bpu_pc; // 记录调用点PC
                        recursion_depth[ras_ptr] <= 1;     // 初始化深度
                        ras_ptr <= ras_ptr + 1;
                        ras_overflow <= 0;
                    end
                    else begin
                        // 栈满处理
                        ras_overflow <= 1;
                    end
                end 
                // 函数返回处理
                else if (ex_bpu_pc[6:0] == 7'b1100111 && 
                         ex_bpu_pc[14:12] == 3'b000 && ex_bpu_taken) begin 
                    // JALR指令 (函数返回)
                    if (ras_ptr > 0) begin
                        // 检测递归返回
                        if (is_recursive_return) begin
                            // 递归返回：减少深度计数
                            recursion_depth[ras_ptr-1] <= recursion_depth[ras_ptr-1] - 1;
                            
                            // 深度归零时弹栈
                            if (recursion_depth[ras_ptr-1] == 1) begin
                                ras_ptr <= ras_ptr - 1;
                            end
                        end
                        else begin
                            // 非递归返回：直接弹栈
                            ras_ptr <= ras_ptr - 1;
                        end
                        ras_underflow <= 0;
                    end
                    else begin
                        // 栈空但实际返回：更新BTB
                        btb_valid[btb_index_ex]  <= 1'b1;
                        btb_tag[btb_index_ex]    <= btb_tag_ex;
                        btb_target[btb_index_ex] <= ex_bpu_target;
                        ras_underflow            <= 1;
                    end
                end
                else begin
                    // 非调用/返回操作时清除标志
                    ras_overflow  <= 0;
                    ras_underflow <= 0;
                end
            end
        end
    end

endmodule