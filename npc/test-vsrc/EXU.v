`timescale 1ns/1ns
module EXU(
    input               clk,
    input               rst,
    input               IDU_IFU_ready,
    input               IDU_EXU_valid,
    output reg          EXU_IDU_ready,
    input               LSU_EXU_ready,
    output reg          EXU_LSU_valid,

    input       [4:0]   IDU_WBU_rs1,
    input       [4:0]   IDU_WBU_rs2,
    input       [4:0]   LSU_EXU_forward_rd_addr,
    input               LSU_EXU_forward_rd_en,
    input               LSU_EXU_forward_load,
    input       [31:0]  LSU_WBU_value,
    input       [4:0]   LSU_WBU_rd_addr,
    input               LSU_WBU_rd_en,
    input               LSU_WBU_valid,
    output reg          EXU_LSU_forward_las,

    input      [31:0]   IDU_EXU_inst,                 // 当前指令的32位指令
    input      [31:0]   IDU_EXU_pc,                   // 当前指令的程序计数器值
    input      [31:0]   IDU_EXU_imm,                  // 从IDU到EXU的立即数的值

    input      [ 4:0]   IDU_EXU_zimm,
    input      [31:0]   WBU_EXU_src1,
    input      [31:0]   WBU_EXU_src2,

    input               IDU_EXU_rd_en,              
    input      [ 4:0]   IDU_EXU_rd_addr,            // 从IDU到EXU的rd的地址    
    input               IDU_EXU_imm_valid,          // 立即数有效信号，1--> 有效,0-->无效
    input               IDU_EXU_imm_unsigned,       // 立即数有/无符号信号，1--> 无符号,0-->有符号

    input               IDU_EXU_load,           // 取数信号 
    input               IDU_EXU_store,          // 存数信号
    input               IDU_EXU_byte,           // 存/取数对应的字节数，字节
    input               IDU_EXU_half_byte,      // 半字
    input               IDU_EXU_word,           // 字

    input               IDU_EXU_shift,          // 移位信号
    input               IDU_EXU_logic,          // 移位有效时，逻辑信号（逻辑移位）
    input               IDU_EXU_left,           // 移位有效时，算术信号（算术移位）

    input               IDU_EXU_arithmetic,     // 算术信号
    input               IDU_EXU_add,            // 高电平加法，低电平减法
    input               IDU_EXU_lui,            // lui指令信号
    input               IDU_EXU_auipc,          // auipc指令信号

    input               IDU_EXU_logical_cal,    // 逻辑信号
    input               IDU_EXU_xor,            // 异或
    input               IDU_EXU_or,             // 或
    input               IDU_EXU_and,            // 与

    input               IDU_EXU_compare_reset,  // 分支--置位

    input               IDU_EXU_branch,         // 分支跳转信号
    input               IDU_EXU_beq,            // BEQ分支信号
    input               IDU_EXU_bne,            // BNE分支信号
    input               IDU_EXU_blt,            // BLT分支信号
    input               IDU_EXU_bge,            // BGE分支信号

    input               IDU_EXU_jal,            // JAL跳转信号
    input               IDU_EXU_jalr,           // JALR跳转信号

    input      [31:0]   WBU_EXU_csr_num1,
    input      [31:0]   WBU_EXU_csr_num2,
     
    input               IDU_EXU_csr,
    input               IDU_EXU_csr_wen1,
    input               IDU_EXU_csr_wen2,
    input      [11:0]   IDU_EXU_csr_wr_addr1,
    input      [11:0]   IDU_EXU_csr_wr_addr2,

    input               IDU_EXU_csr_ecall,
    input               IDU_EXU_csr_mret,
    input               IDU_EXU_csrrw,
    input               IDU_EXU_csrrs,
    input               IDU_EXU_csrrc,
    input               IDU_EXU_csrrwi,
    input               IDU_EXU_csrrsi,
    input               IDU_EXU_csrrci,
    
    output reg          EXU_out_flush,
    output reg [31:0]   EXU_out_flush_pc,          

    output reg [31:0]   EXU_LSU_inst,
    output reg [31:0]   EXU_LSU_pc,
    output reg [31:0]   EXU_LSU_src2,
    output reg          EXU_LSU_rd_en,
    output reg [ 4:0]   EXU_LSU_rd_addr,

    output reg          EXU_LSU_load,
    output reg          EXU_LSU_store,
    output reg          EXU_LSU_byte,
    output reg          EXU_LSU_half_byte,
    output reg          EXU_LSU_word,
    output reg          EXU_LSU_extern_flag,

    output reg          EXU_LSU_csr,
    output reg          EXU_LSU_csr_wen1,
    output reg          EXU_LSU_csr_wen2,
    output reg [11:0]   EXU_LSU_csr_wr_addr1,
    output reg [11:0]   EXU_LSU_csr_wr_addr2,
    output reg [31:0]   EXU_LSU_csr_wr_data1,
    output reg [31:0]   EXU_LSU_csr_wr_data2,
    output reg [31:0]   EXU_LSU_csr_rdata,

    output reg          EXU_LSU_csr_ecall,
    output reg          EXU_LSU_csr_mret,

    output reg [31:0]   EXU_LSU_process_result   
);
wire        alu_add; 
// 中间变量寄存器
wire [31:0] ALU_out_add;
wire [31:0] ALU_out_shift;

wire [31:0] ALU_out_xor;
wire [31:0] ALU_out_or;
wire [31:0] ALU_out_and;
wire [31:0] ALU_out_slt;
wire [31:0] ALU_out_sltu;
wire        exu_num_equal;

reg  [31:0] exu_num1;
reg  [31:0] exu_num2;
reg  [31:0] exu_num3;
reg  [31:0] exu_num4;
reg  [31:0] process_result1;
reg  [31:0] process_result2;

wire [31:0] src1 = (forward_rs1[1] ? EXU_LSU_process_result : 
		   ((forward_rs1[0] | load_use_flag[1]) ? LSU_WBU_value : 
		   WBU_EXU_src1));
wire [31:0] src2 = (forward_rs2[1] ? EXU_LSU_process_result : 
		   ((forward_rs2[0] | load_use_flag[0]) ? LSU_WBU_value : 
		   WBU_EXU_src2));

always @(*) begin
    if(IDU_EXU_load | IDU_EXU_store) begin 
        exu_num1 = src1;
    end
    else if(IDU_EXU_shift) begin
        exu_num1 = src1;
    end
    else if(IDU_EXU_lui) begin  //lui
        exu_num1 = IDU_EXU_imm;
    end
    else if(IDU_EXU_auipc)begin    //auipc
        exu_num1 = IDU_EXU_pc;
    end
    else if(IDU_EXU_arithmetic & IDU_EXU_add)begin
        exu_num1 = src1;
    end
    else if(IDU_EXU_arithmetic & ~IDU_EXU_add)begin  //sub
        exu_num1 = src1;
    end
    else if (IDU_EXU_logical_cal) begin
        exu_num1 = src1;
    end
    else if (IDU_EXU_compare_reset) begin
        exu_num1 = src1;
    end
    else if (IDU_EXU_branch) begin   //比较结果在process_result1中，比较后改变pc的值，新值位于process_result2中
        exu_num1 = src1;
    end
    else if (IDU_EXU_jal | IDU_EXU_jalr) begin 
        exu_num1 = IDU_EXU_pc;
    end
    else begin
        exu_num1 = 0;
    end 
end

always @(*) begin
    if(IDU_EXU_load | IDU_EXU_store)begin 
        exu_num2 = IDU_EXU_imm;
    end
    else if(IDU_EXU_shift & IDU_EXU_imm_valid) begin
        exu_num2 = IDU_EXU_imm;
    end
    else if(IDU_EXU_shift & ~IDU_EXU_imm_valid) begin
        exu_num2 = {27'b0,src2[4:0]};
    end
    else if(IDU_EXU_lui) begin      // lui
        exu_num2 = 32'b0;
    end
    else if(IDU_EXU_auipc)begin     // auipc
        exu_num2 = IDU_EXU_imm;
    end
    else if(IDU_EXU_arithmetic & IDU_EXU_add && IDU_EXU_imm_valid)begin
        exu_num2 = IDU_EXU_imm;
    end
    else if(IDU_EXU_arithmetic & IDU_EXU_add && !IDU_EXU_imm_valid) begin
        exu_num2 = src2;
    end
    else if(IDU_EXU_arithmetic & ~IDU_EXU_add)begin  // sub
        exu_num2 = src2;
    end
    else if(IDU_EXU_logical_cal & !IDU_EXU_imm_valid) begin
        exu_num2 = src2;
    end
    else if(IDU_EXU_logical_cal & IDU_EXU_imm_valid)begin
        exu_num2 = IDU_EXU_imm;
    end
    else if(IDU_EXU_compare_reset & (!IDU_EXU_imm_valid)) begin
        exu_num2 = src2;
    end
    else if(IDU_EXU_compare_reset & IDU_EXU_imm_valid) begin
        exu_num2 = IDU_EXU_imm;
    end
    else if (IDU_EXU_branch) begin   // 比较结果在process_result1中，比较后改变pc的值，新值位于process_result2中
        exu_num2 = src2;
    end
    else if (IDU_EXU_jal | IDU_EXU_jalr) begin 
        exu_num2 = 32'd4;
    end
    else begin
        exu_num2 = 0;
    end 
end

always @(*) begin
    if(IDU_EXU_load | IDU_EXU_store)begin 
        process_result1 = ALU_out_add;
    end
    else if(IDU_EXU_arithmetic | IDU_EXU_jalr | IDU_EXU_jal | IDU_EXU_auipc | IDU_EXU_lui)begin 
        process_result1 = ALU_out_add;
    end 
    else if(IDU_EXU_shift) begin
        process_result1 = ALU_out_shift;
    end
    else if(IDU_EXU_logical_cal & IDU_EXU_xor) begin
        process_result1 = ALU_out_xor;
    end
    else if(IDU_EXU_logical_cal & IDU_EXU_or) begin
        process_result1 = ALU_out_or;
    end
    else if(IDU_EXU_logical_cal & IDU_EXU_and)begin  // IDU_EXU_and
        process_result1 = ALU_out_and;
    end
    else if(IDU_EXU_compare_reset & !IDU_EXU_imm_unsigned) begin
        process_result1 = ALU_out_slt;
    end
    else if(IDU_EXU_compare_reset & IDU_EXU_imm_unsigned) begin
        process_result1 = ALU_out_sltu;
    end
    else begin
        process_result1 = 0;
    end  
end

always @(*) begin
    if (IDU_EXU_branch | IDU_EXU_jal) begin
        exu_num3 = IDU_EXU_pc;
        exu_num4 = IDU_EXU_imm;
    end
    else if (IDU_EXU_jalr) begin
        exu_num3 = src1;
        exu_num4 = IDU_EXU_imm;
    end
    else begin
        exu_num3 = 0;
        exu_num4 = 0;
    end
end

always @(*) begin
    if ((IDU_EXU_branch & ((IDU_EXU_beq & exu_num_equal)
                        | (IDU_EXU_bne & !exu_num_equal)
                        | (IDU_EXU_blt & IDU_EXU_imm_unsigned & ALU_out_sltu[0])
                        | (IDU_EXU_blt & !IDU_EXU_imm_unsigned & ALU_out_slt[0])
                        | (IDU_EXU_bge & IDU_EXU_imm_unsigned & ~ALU_out_sltu[0])
                        | (IDU_EXU_bge & !IDU_EXU_imm_unsigned & ~ALU_out_slt[0])))
                        | IDU_EXU_jal)
    begin
        EXU_out_flush_pc = process_result2;
    end
    else if (IDU_EXU_jalr) begin
        EXU_out_flush_pc = process_result2 & 32'hfffffffe;
    end
    else if (IDU_EXU_csr_ecall) begin
        EXU_out_flush_pc = WBU_EXU_csr_num1;
    end
    else if (IDU_EXU_csr_mret) begin
        EXU_out_flush_pc = WBU_EXU_csr_num2;
    end
    else begin
        EXU_out_flush_pc = 0;
    end
end

reg flush_condition;
always @(*) begin
    if ((IDU_EXU_branch & ((IDU_EXU_beq & exu_num_equal)
                        | (IDU_EXU_bne & !exu_num_equal)
                        | (IDU_EXU_blt & IDU_EXU_imm_unsigned & ALU_out_sltu[0])
                        | (IDU_EXU_blt & !IDU_EXU_imm_unsigned & ALU_out_slt[0])
                        | (IDU_EXU_bge & IDU_EXU_imm_unsigned & ~ALU_out_sltu[0])
                        | (IDU_EXU_bge & !IDU_EXU_imm_unsigned & ~ALU_out_slt[0])))
                        | IDU_EXU_jal | IDU_EXU_jalr | IDU_EXU_csr_ecall | IDU_EXU_csr_mret) 
    begin
        EXU_out_flush = 1'b1 & flush_condition & & (~(|load_use_flag));
    end
    else begin
        EXU_out_flush = 0;
    end
end

always @(posedge clk)begin
	if(rst)begin
		flush_condition <= 1'b1;
	end
	else if(EXU_out_flush)begin
		flush_condition <= 1'b0;
	end
	else if(IDU_IFU_ready)begin
		flush_condition <= 1'b1;
	end
end

assign alu_add = (IDU_EXU_add | IDU_EXU_load | IDU_EXU_store | IDU_EXU_lui | IDU_EXU_auipc | IDU_EXU_jal | IDU_EXU_jalr); // 其实只要是为比较置数时，前面的几种情况都是0

wire [31:0] ALU_sub_b; 
wire [31:0] ALU_add_b;

wire [31:0] ALU_num2_shift;
//wire signed [31:0] ALU_num1_signed;

assign ALU_sub_b    = ~exu_num2 + 32'b1;              // 将负数取补码
assign ALU_add_b    = alu_add ? exu_num2 : ALU_sub_b; // add为1做加法，为0做减法
assign ALU_out_and  = exu_num1 & exu_num2;
assign ALU_out_or   = exu_num1 | exu_num2;
assign ALU_out_xor  = exu_num1 ^ exu_num2;
assign ALU_out_slt  = (exu_num1[31] & !exu_num2[31]) ? 32'b1 : ((!exu_num1[31] & exu_num2[31]) ? 32'b0 : {31'b0, ALU_out_add[31]});
assign ALU_out_sltu = (exu_num1[31] & !exu_num2[31]) ? 32'b0 : ((!exu_num1[31] & exu_num2[31]) ? 32'b1 : {31'b0, ALU_out_add[31]});
assign exu_num_equal      = (exu_num1 == exu_num2);

assign ALU_out_add  = exu_num1 + ALU_add_b;

assign ALU_num2_shift = {27'b0,exu_num2[4:0]};
//assign ALU_num1_signed = $signed(exu_num1);
assign ALU_out_shift = IDU_EXU_logic ? (IDU_EXU_left ? (exu_num1 << ALU_num2_shift) : (exu_num1 >> ALU_num2_shift)) : (IDU_EXU_left ? (exu_num1 << ALU_num2_shift) : (exu_num1 >>> ALU_num2_shift));

aways @(*) begin
    progress_result2 = exu_num3 + exu_num4; // 计算跳转地址
end

reg [31:0] csr_write_ecall;
always @(*) begin
    if (IDU_EXU_csr_ecall) begin
        csr_write_ecall = IDU_EXU_pc;
    end
    else begin
        csr_write_ecall = 32'b0;
    end
end

wire [31:0] mstatus_t;
wire [31:0] mpie;
assign mpie = (WBU_EXU_csr_num1 >> 7) & 32'h1;
assign mstatus_t = (((WBU_EXU_csr_num1 & ~(32'h3 << 11)) & ~(32'h1 << 3)) | (mpie << 3)) | (32'h1 << 7);

reg [31:0] csr_write_wire;
always @(*) begin
    if (IDU_EXU_csrrw) begin
        csr_write_wire = src1;
    end
    else if (IDU_EXU_csrrc) begin
        csr_write_wire = (WBU_EXU_csr_num1 & ~src1);
    end
    else if (IDU_EXU_csrrs) begin
        csr_write_wire = (WBU_EXU_csr_num1 | src1);
    end
    else if (IDU_EXU_csrrwi) begin
        csr_write_wire = {27'b0,IDU_EXU_zimm};
    end
    else if (IDU_EXU_csrrci) begin
        csr_write_wire = WBU_EXU_csr_num1 & ~({27'b0,IDU_EXU_zimm});
    end
    else if (IDU_EXU_csrrsi) begin
        csr_write_wire = WBU_EXU_csr_num1 | ({27'b0,IDU_EXU_zimm});
    end
    else if (IDU_EXU_csr_ecall) begin
        csr_write_wire = 32'd11;
    end
    else if (IDU_EXU_csr_mret) begin
        csr_write_wire = mstatus_t;
    end
    else begin
        csr_write_wire = 32'b0;
    end
end

//*************data forward*******************
wire [1:0] forward_rs1;
wire [1:0] forward_rs2;
wire forward_las;
wire [3:0] load_use_flag;

assign forward_rs1[1] = EXU_LSU_rd_en & (|EXU_LSU_rd_addr) & EXU_LSU_rd_addr == IDU_WBU_rs1 & EXU_LSU_valid;
assign forward_rs1[0] = LSU_WBU_rd_en & (|LSU_WBU_rd_addr) & LSU_WBU_rd_addr == IDU_WBU_rs1 & LSU_WBU_valid;
assign forward_rs2[1] = EXU_LSU_rd_en & (|EXU_LSU_rd_addr) & EXU_LSU_rd_addr == IDU_WBU_rs2 & EXU_LSU_valid;
assign forward_rs2[0] = LSU_WBU_rd_en & (|LSU_WBU_rd_addr) & LSU_WBU_rd_addr == IDU_WBU_rs2 & LSU_WBU_valid;

assign forward_las = IDU_EXU_store & EXU_LSU_load & EXU_LSU_rd_en & EXU_LSU_valid &
                        (|EXU_LSU_rd_addr) & (EXU_LSU_rd_addr != IDU_WBU_rs1) & (EXU_LSU_rd_addr == IDU_WBU_rs2) ;

assign load_use_flag[3] = LSU_EXU_forward_load & LSU_EXU_forward_rd_en & (|LSU_EXU_forward_rd_addr) & (LSU_EXU_forward_rd_addr == IDU_WBU_rs1);
assign load_use_flag[2] = LSU_EXU_forward_load & LSU_EXU_forward_rd_en & (|LSU_EXU_forward_rd_addr) & (LSU_EXU_forward_rd_addr == IDU_WBU_rs2);
assign load_use_flag[1] = EXU_LSU_load & EXU_LSU_rd_en & (|EXU_LSU_rd_addr) & (EXU_LSU_rd_addr == IDU_WBU_rs1) & EXU_LSU_valid;
assign load_use_flag[0] = EXU_LSU_load & EXU_LSU_rd_en & EXU_LSU_valid & (|EXU_LSU_rd_addr) & (EXU_LSU_rd_addr == IDU_WBU_rs2);
  

//*******************************************
//赋值
always @(*) begin
    EXU_IDU_ready = (LSU_EXU_ready || ~EXU_LSU_valid)  & (load_use_flag == 0);
end

always @(posedge clk) begin
    if (rst) begin
        EXU_LSU_valid <= 0;
    end
    else if((IDU_EXU_valid & EXU_IDU_ready) & (LSU_EXU_ready | ~EXU_LSU_valid)) begin
        EXU_LSU_valid <= 1;
    end
    else if ((~(IDU_EXU_valid & EXU_IDU_ready)) & LSU_EXU_ready) begin
        EXU_LSU_valid <= 0;
    end
end

always @(posedge clk) begin
    if (rst) begin
        EXU_LSU_src2          <= 0;
        EXU_LSU_rd_en         <= 0;
        EXU_LSU_rd_addr       <= 0;
        EXU_LSU_load          <= 0;
        EXU_LSU_store         <= 0;
        EXU_LSU_byte          <= 0;
        EXU_LSU_half_byte     <= 0;
        EXU_LSU_word          <= 0;
        EXU_LSU_extern_flag   <= 0;
        EXU_LSU_csr           <= 0;
        EXU_LSU_csr_ecall     <= 0;
        EXU_LSU_csr_mret      <= 0;
        EXU_LSU_csr_wen1      <= 0;
        EXU_LSU_csr_wen2      <= 0;
        EXU_LSU_csr_wr_data1  <= 0;
        EXU_LSU_csr_wr_data2  <= 0;
        EXU_LSU_csr_rdata     <= 0;
        EXU_LSU_csr_wr_addr1  <= 0;
        EXU_LSU_csr_wr_addr2  <= 0;
        EXU_LSU_process_result <= 0;
        EXU_LSU_inst <= 0;
        EXU_LSU_pc <= 0;
        EXU_LSU_forward_las <= 0;
    end 
    else if (IDU_EXU_valid & EXU_IDU_ready) begin
        EXU_LSU_src2          <= src2;
        EXU_LSU_rd_en         <= IDU_EXU_rd_en;
        EXU_LSU_rd_addr       <= IDU_EXU_rd_addr;
        EXU_LSU_load          <= IDU_EXU_load;
        EXU_LSU_store         <= IDU_EXU_store;
        EXU_LSU_byte          <= IDU_EXU_byte;
        EXU_LSU_half_byte     <= IDU_EXU_half_byte;
        EXU_LSU_word          <= IDU_EXU_word;
        EXU_LSU_extern_flag   <= IDU_EXU_imm_unsigned;
        EXU_LSU_csr           <= IDU_EXU_csr;
        EXU_LSU_csr_ecall     <= IDU_EXU_csr_ecall;
        EXU_LSU_csr_mret      <= IDU_EXU_csr_mret;
        EXU_LSU_csr_wen1      <= IDU_EXU_csr_wen1;
        EXU_LSU_csr_wen2      <= IDU_EXU_csr_wen2;
        EXU_LSU_csr_wr_data1  <= csr_write_wire;
        EXU_LSU_csr_wr_data2  <= csr_write_ecall;
        EXU_LSU_csr_rdata     <= WBU_EXU_csr_num1;
        EXU_LSU_csr_wr_addr1  <= IDU_EXU_csr_wr_addr1;
        EXU_LSU_csr_wr_addr2  <= IDU_EXU_csr_wr_addr2;
        EXU_LSU_process_result <= process_result1;
        EXU_LSU_inst <= IDU_EXU_inst;
        EXU_LSU_pc <= IDU_EXU_pc;
        EXU_LSU_forward_las <= forward_las;
    end
end

endmodule


