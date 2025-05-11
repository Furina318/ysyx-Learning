module REG (
    input         clock,
    input         reset,
    
    // REG-IDU接口
    input  [4:0]  reg_idu_rs1,
    input  [4:0]  reg_idu_rs2,
    output [31:0] reg_idu_src1,
    output [31:0] reg_idu_src2,
    
    // REG-WBU接口
    input         reg_wbu_wen,
    input  [4:0]  reg_wbu_waddr,
    input  [31:0] reg_wbu_wdata
);

// 寄存器定义（32个32位寄存器）
reg [31:0] reg_file [0:31];  // 索引0-31

// 组合逻辑读取
assign reg_idu_src1 = reg_file[reg_idu_rs1];
assign reg_idu_src2 = reg_file[reg_idu_rs2];

// 同步写操作
always @(posedge clock) begin
    if (reset) begin
        // 复位时清零所有寄存器（可选）
        // foreach (reg_file[i]) reg_file[i] <= 32'h0;
    end else begin
        // 写使能且目标地址非零时写入
        if (reg_wbu_wen && (reg_wbu_waddr != 5'h0)) begin
            reg_file[reg_wbu_waddr] <= reg_wbu_wdata;
        end
    end
end

// 强制x0寄存器始终为0（异步清零）
always @(*) begin
    reg_file[0] = 32'h0;  // 组合逻辑保证x0永远为0
end

endmodule