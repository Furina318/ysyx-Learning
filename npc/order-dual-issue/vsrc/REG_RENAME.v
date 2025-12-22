/* ******************
    * 寄存器重命名模块

****************** */
module reg_rename #(
    parameter ARCH_REG_NUM  = 16,    // 架构寄存器数量（
    parameter PHY_REG_NUM   = 32,    // 物理寄存器数量（需大于架构寄存器）
    parameter ROB_DEPTH     = 32,    // ROB深度（适配双发射）
    parameter INST_WIDTH    = 32     
)(
    input                     clk,         
    input                     rst,         

    input                     flush,      
    // input                     commit_en,    // 提交使能（ROB按序提交）
    input                     stall,        // 流水线暂停

    input      [INST_WIDTH-1:0] inst1,      
    input      [           4:0] rs1_1,       
    input      [           4:0] rs2_1,       
    input      [           4:0] rd_1,        
    input                       wen_1,       

    input      [INST_WIDTH-1:0] inst2,       
    input      [           4:0] rs1_2,      
    input      [           4:0] rs2_2,      
    input      [           4:0] rd_2,       
    input                       wen_2,      

    output reg [           5:0] phy_rs1_1,   
    output reg [           5:0] phy_rs2_1,   
    output reg [           5:0] phy_rd_1,    

    output reg [           5:0] phy_rs1_2,   
    output reg [           5:0] phy_rs2_2,   
    output reg [           5:0] phy_rd_2,    

    output reg                  rename_done, // 重命名成功

    // ROB交互接口（提交阶段更新映射）
    input      [          4:0] rob_arch_rd, // ROB提交的架构寄存器
    input      [          5:0] rob_phy_rd,  // ROB提交的物理寄存器
    input                      rob_commit,  // ROB提交确认
    output reg                 frp_empty    // 空闲物理寄存器池空
);

// ---------------------- 内部参数定义 ----------------------
localparam PHY_REG_WIDTH  = $clog2(PHY_REG_NUM);  // 物理寄存器地址宽度
localparam ARCH_REG_WIDTH = $clog2(ARCH_REG_NUM); // 架构寄存器地址宽度
localparam FRP_PTR_WIDTH  = $clog2(PHY_REG_NUM);  // 空闲池指针宽度
localparam ROB_PTR_WIDTH  = $clog2(ROB_DEPTH);    // ROB指针宽度

// ---------------------- 核心存储结构 ----------------------
// 1. 架构映射表（AMT）：架构寄存器 → 物理寄存器
reg [PHY_REG_WIDTH-1:0] arch_map [0:ARCH_REG_NUM-1];

// 2. 空闲物理寄存器池（FRP）：环形缓冲区管理空闲物理寄存器
reg [PHY_REG_WIDTH-1:0] frp [0:PHY_REG_NUM-1];
reg [FRP_PTR_WIDTH-1:0] frp_wr_ptr, frp_rd_ptr;

// 3. 物理寄存器占用标记：1=占用，0=空闲
reg [PHY_REG_NUM-1:0] phy_reg_occupy;

// ---------------------- 组合逻辑：空闲池状态 ----------------------
wire frp_full       = ((frp_wr_ptr + 1'b1) == frp_rd_ptr) && phy_reg_occupy[frp[frp_wr_ptr]];
wire frp_empty_wire = (frp_wr_ptr == frp_rd_ptr) && !phy_reg_occupy[frp[frp_rd_ptr]];

always @(*) begin
    frp_empty   = frp_empty_wire;
    rename_done = !stall && !frp_empty && !flush;
end

integer i;
always @(posedge clk) begin
    if (rst) begin
        for (i = 0; i < ARCH_REG_NUM; i = i + 1) begin
            arch_map[i] <= i[PHY_REG_WIDTH-1:0];
        end

        for (i = 0; i < PHY_REG_NUM; i = i + 1) begin
            frp[i] <= i[PHY_REG_WIDTH-1:0];
        end
        frp_wr_ptr <= ARCH_REG_NUM[FRP_PTR_WIDTH-1:0]; // 写指针从架构寄存器数目开始
        frp_rd_ptr <= ARCH_REG_NUM[FRP_PTR_WIDTH-1:0]; 

        // 初始化物理寄存器占用标记：0~15占用，16~31空闲
        phy_reg_occupy <= { {PHY_REG_NUM-ARCH_REG_NUM{1'b0}}, {ARCH_REG_NUM{1'b1}} };

        phy_rs1_1 <= '0;  phy_rs2_1 <= '0;  phy_rd_1 <= '0;
        phy_rs1_2 <= '0;  phy_rs2_2 <= '0;  phy_rd_2 <= '0;
    end else begin
        if (flush) begin
            for (i = 0; i < ARCH_REG_NUM; i = i + 1) begin
                arch_map[i] <= i[PHY_REG_WIDTH-1:0];
            end

            frp_wr_ptr <= ARCH_REG_NUM[FRP_PTR_WIDTH-1:0];
            frp_rd_ptr <= ARCH_REG_NUM[FRP_PTR_WIDTH-1:0];

            phy_reg_occupy <= { {PHY_REG_NUM-ARCH_REG_NUM{1'b0}}, {ARCH_REG_NUM{1'b1}} };

            phy_rs1_1 <= '0;  phy_rs2_1 <= '0;  phy_rd_1 <= '0;
            phy_rs1_2 <= '0;  phy_rs2_2 <= '0;  phy_rd_2 <= '0;
        end else if (!stall && !frp_empty) begin
            // ---------------------- 双指令并行重命名 ----------------------
            // ========== 指令1重命名 ==========
            // 源寄存器重命名：直接映射架构寄存器对应的物理寄存器
            phy_rs1_1 <= (rs1_1 == 5'b0) ? 6'b0 : arch_map[rs1_1]; // x0恒为0
            phy_rs2_1 <= (rs2_1 == 5'b0) ? 6'b0 : arch_map[rs2_1];

            // 目的寄存器重命名：分配空闲物理寄存器
            if (wen_1 && (rd_1 != 5'b0)) begin
                phy_rd_1 <= frp[frp_rd_ptr];                  // 分配空闲物理寄存器
                phy_reg_occupy[frp[frp_rd_ptr]] <= 1'b1;      // 标记为占用
                frp_rd_ptr <= frp_rd_ptr + 1'b1;              // 空闲池读指针自增
            end else begin
                phy_rd_1 <= 6'b0; // 无写操作时置0
            end

            // ========== 指令2重命名 ==========
            // 源寄存器重命名：处理指令1和指令2的写后读冲突(RAW)
            if (wen_1 && (rd_1 == rs1_2) && (rd_1 != 5'b0)) begin
                phy_rs1_2 <= frp[frp_rd_ptr - 1'b1]; // 指令2读指令1刚分配的物理寄存器
            end else begin
                phy_rs1_2 <= (rs1_2 == 5'b0) ? 6'b0 : arch_map[rs1_2];
            end

            if (wen_1 && (rd_1 == rs2_2) && (rd_1 != 5'b0)) begin
                phy_rs2_2 <= frp[frp_rd_ptr - 1'b1];
            end else begin
                phy_rs2_2 <= (rs2_2 == 5'b0) ? 6'b0 : arch_map[rs2_2];
            end

            // 目的寄存器重命名：分配空闲物理寄存器（需检查空闲池是否有足够空间）
            if (wen_2 && (rd_2 != 5'b0) && !frp_empty_wire) begin
                phy_rd_2 <= frp[frp_rd_ptr];
                phy_reg_occupy[frp[frp_rd_ptr]] <= 1'b1;
                frp_rd_ptr <= frp_rd_ptr + 1'b1;
            end else begin
                phy_rd_2 <= 6'b0;
            end

            // ---------------------- ROB提交：更新架构映射表 ----------------------
            if (rob_commit && (rob_arch_rd != 5'b0)) begin
                // 释放旧的物理寄存器到空闲池
                frp[frp_wr_ptr] <= arch_map[rob_arch_rd];
                phy_reg_occupy[arch_map[rob_arch_rd]] <= 1'b0;
                frp_wr_ptr <= frp_wr_ptr + 1'b1;

                // 更新架构映射表为新的物理寄存器
                arch_map[rob_arch_rd] <= rob_phy_rd;
            end
        end
    end
end

endmodule