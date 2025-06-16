`timescale 1ns/1ns

module LSU (
    input         clk,
    input         rst,

    input         EXU_LSU_valid,
    output reg    LSU_EXU_ready,
    input         WBU_LSU_ready,
    output reg    LSU_WBU_valid,

    input         EXU_LSU_forward_las,

    input      [31:0]   MEM_LSU_rd_data,
    output reg [31:0]   LSU_MEM_rd_addr,
    output reg          LSU_MEM_read_valid,
    input               MEM_LSU_read_ready,

    output reg [31:0]   LSU_MEM_wr_data,
    output reg [31:0]   LSU_MEM_wr_addr,
    output reg [7 :0]   LSU_MEM_wr_mask,
    output reg          LSU_MEM_write_valid,
    input               MEM_LSU_write_ready,

    //xbar
    // output reg        CPU_MEM_req,
    // output reg [31:0] CPU_MEM_araddr,
    // output reg        CPU_MEM_arvalid,
    // input             MEM_CPU_arready,

    // input      [31:0] MEM_CPU_rdata,
    // input      [1:0]  MEM_CPU_rresp,
    // input             MEM_CPU_rvalid,
    // output reg        CPU_MEM_rready,

    // output reg [31:0] CPU_MEM_awaddr,
    // output reg        CPU_MEM_awvalid,
    // input             MEM_CPU_awready,

    // output reg [31:0] CPU_MEM_wdata,
    // output reg [7:0]  CPU_MEM_wstrb,
    // output reg        CPU_MEM_wvalid,
    // input             MEM_CPU_wready,

    // input      [1:0]  MEM_CPU_bresp,
    // input             MEM_CPU_bvalid,
    // output reg        CPU_MEM_bready,
    //xbar
    input  [31:0] EXU_LSU_inst,
    input  [31:0] EXU_LSU_pc,
    input  [31:0] EXU_LSU_src2,

    input         EXU_LSU_rd_en,
    input  [ 4:0] EXU_LSU_rd_addr,
    
    input         EXU_LSU_load,
    input         EXU_LSU_store,
    input         EXU_LSU_byte,
    input         EXU_LSU_half_byte,
    input         EXU_LSU_word,
    input         EXU_LSU_extern_flag,     //高电平为无符号，低电平为有符号，跟随IDU—EXU-imm-unsigned

    input         EXU_LSU_csr,
    input         EXU_LSU_csr_wen1,
    input         EXU_LSU_csr_wen2,
    input [31:0]  EXU_LSU_csr_wr_data1,
    input [31:0]  EXU_LSU_csr_wr_data2,
    input [11:0]  EXU_LSU_csr_wr_addr1,
    input [11:0]  EXU_LSU_csr_wr_addr2,
    input [31:0]  EXU_LSU_csr_rdata,

    input         EXU_LSU_csr_ecall,
    input         EXU_LSU_csr_mret,
    
    input  [31:0] EXU_LSU_process_result,  //普通指令的结果

    output [4:0]	 LSU_EXU_forward_rd_addr,
	output			 LSU_EXU_forward_rd_en,
	output			 LSU_EXU_forward_load,

    output reg [31:0] LSU_WBU_inst,
    output reg [31:0] LSU_WBU_pc,
    output reg [31:0] LSU_WBU_csr_wr_data1,
    output reg [31:0] LSU_WBU_csr_wr_data2,
    output reg [11:0] LSU_WBU_csr_wr_addr1,
    output reg [11:0] LSU_WBU_csr_wr_addr2,
    output reg        LSU_WBU_csr_wen1,
    output reg        LSU_WBU_csr_wen2,

    output reg        LSU_WBU_rd_en,
    output reg [ 4:0] LSU_WBU_rd_addr,
    output reg [31:0] LSU_WBU_write_rd_data  //写入rd的数据
);
reg l_load;
reg l_rd_en;
reg l_byte;
reg l_half_byte;
reg l_word;
reg l_extern_flag;

reg [4:0] l_rd_addr;
reg [31:0] l_inst;
reg [31:0] l_pc;

assign LSU_EXU_forward_rd_addr = l_rd_addr;
assign LSU_EXU_forward_rd_en = l_rd_en;
assign LSU_EXU_forward_load = l_load;


always @(posedge clk) begin
    if (rst) begin
        l_load  <= 0;
        l_rd_en <= 0;
        l_rd_addr <= 0;
        l_inst  <= 0;
        l_pc    <= 0;
        l_byte  <= 0;
        l_half_byte <= 0;
        l_word  <= 0;
        l_extern_flag <= 0;
    end
    else if ((EXU_LSU_valid & LSU_EXU_ready) & (EXU_LSU_load | EXU_LSU_store)) begin
        l_load  <= EXU_LSU_load;
        l_rd_en <= EXU_LSU_rd_en;
        l_rd_addr <= EXU_LSU_rd_addr;
        l_inst  <= EXU_LSU_inst;
        l_pc    <= EXU_LSU_pc;
        l_byte  <= EXU_LSU_byte;
        l_half_byte <= EXU_LSU_half_byte;
        l_word  <= EXU_LSU_word;
        l_extern_flag <= EXU_LSU_extern_flag;
    end
    else if (LSU_WBU_valid & WBU_LSU_ready) begin
        l_load  <= 0;
        l_rd_en <= EXU_LSU_rd_en;
        l_rd_addr <= EXU_LSU_rd_addr;
        l_inst  <= EXU_LSU_inst;
        l_pc    <= EXU_LSU_pc;
        l_byte  <= EXU_LSU_byte;
        l_half_byte <= EXU_LSU_half_byte;
        l_word  <= EXU_LSU_word;
        l_extern_flag <= EXU_LSU_extern_flag;
    end
    else if (EXU_LSU_valid & LSU_EXU_ready) begin
        l_load <= l_load;
        l_rd_en <= EXU_LSU_rd_en;
        l_rd_addr <= EXU_LSU_rd_addr;
        l_inst  <= EXU_LSU_inst;
        l_pc    <= EXU_LSU_pc;
        l_byte  <= EXU_LSU_byte;
        l_half_byte <= EXU_LSU_half_byte;
        l_word  <= EXU_LSU_word;
        l_extern_flag <= EXU_LSU_extern_flag;
    end
end

always @(posedge clk) begin
    if (rst) begin
        LSU_MEM_read_valid <= 0;
        LSU_MEM_rd_addr    <= 0;
    end
    else if ((EXU_LSU_valid & LSU_EXU_ready) & (EXU_LSU_load & ~EXU_LSU_store)) begin
        LSU_MEM_read_valid <= 1;
        LSU_MEM_rd_addr    <= EXU_LSU_process_result;
    end
    else if (LSU_MEM_read_valid & MEM_LSU_read_ready) begin
        LSU_MEM_read_valid <= 0;
        LSU_MEM_rd_addr    <= 0;
    end
end
reg [31:0] read_mem_data;
always @(posedge clk) begin
    if (rst) begin
        read_mem_data <= 0;
    end
    else if (LSU_MEM_read_valid & MEM_LSU_read_ready) begin
        read_mem_data <= MEM_LSU_rd_data;
    end 
end

always @(posedge clk) begin
    if (rst) begin
        LSU_MEM_write_valid <= 0;
        LSU_MEM_wr_addr     <= 0;
        LSU_MEM_wr_data     <= 0;
        LSU_MEM_wr_mask     <= 0;
    end
    else if ((EXU_LSU_valid & LSU_EXU_ready) & (~EXU_LSU_load & EXU_LSU_store)) begin
        LSU_MEM_write_valid <= 1;
        LSU_MEM_wr_addr     <= EXU_LSU_process_result;
        LSU_MEM_wr_data     <= write_mem_data;
        LSU_MEM_wr_mask     <= wmask;
    end
    else if (LSU_MEM_write_valid & MEM_LSU_write_ready) begin
        LSU_MEM_write_valid <= 0;
        LSU_MEM_wr_addr     <= 0;
        LSU_MEM_wr_data     <= 0;
        LSU_MEM_wr_mask     <= 0;
    end
end

//中间变量
reg  [31:0] write_mem_data;    //要写入memory的数据
reg  [31:0] wr_rd_data;        //要写入rd的数据
reg  [ 7:0] wmask;             //写入memory的字节（掩码）

wire [ 7:0] temp_byte;
wire [15:0] temp_half_byte;
wire [31:0] temp_word;


assign   temp_byte      = read_mem_data[7:0];   //&32'h000000ff
assign   temp_half_byte = read_mem_data[15:0];  //&32'h0000ffff
assign   temp_word      = read_mem_data[31:0];  //&32'hffffffff

//写入memory的位选
always @(*) begin
    if (EXU_LSU_store & EXU_LSU_byte) begin
        wmask = 8'h1;
        write_mem_data = {24'b0,EXU_LSU_src2[7:0]};
    end
    else if (EXU_LSU_store & EXU_LSU_half_byte) begin
        wmask = 8'h3;
        write_mem_data = {16'b0,EXU_LSU_src2[15:0]};
    end
    else if (EXU_LSU_store & EXU_LSU_word) begin
        wmask = 8'hf;
        write_mem_data = EXU_LSU_src2;
    end
    else begin
        wmask = 8'h0;
        write_mem_data = 0;
    end
end

//写入memory的位选
always @(*) begin
    if(l_load & l_byte & l_extern_flag)begin
        wr_rd_data = {24'b0,temp_byte};
    end
    else if(l_load & l_byte & !l_extern_flag)begin
        wr_rd_data = {{24{temp_byte[7]}},temp_byte};
    end
    else if(l_load & l_half_byte & l_extern_flag)begin
        wr_rd_data = {16'b0,temp_half_byte};
    end
    else if(l_load & l_half_byte & !l_extern_flag)begin
        wr_rd_data = {{16{temp_half_byte[15]}},temp_half_byte};
    end
    else if(l_load & l_word)begin
        wr_rd_data = temp_word;
    end
    else begin
        wr_rd_data = 0;
    end
end


reg [31:0] rd_data;
always @(*) begin
    if(l_load)begin
        rd_data = wr_rd_data;
    end
    else if (EXU_LSU_forward_las) begin
        rd_data = write_mem_data;
    end
    else if(EXU_LSU_store)begin
        rd_data = 32'b0;
    end
    else if (EXU_LSU_csr & !EXU_LSU_csr_ecall & !EXU_LSU_csr_mret) begin
        rd_data = EXU_LSU_csr_rdata;
    end
    else begin
        rd_data = EXU_LSU_process_result;
    end
end


always @(posedge clk)begin
	if(rst)begin
		LSU_EXU_ready <= 1;
	end
	else if((EXU_LSU_valid && LSU_EXU_ready) && (EXU_LSU_load || EXU_LSU_store))begin
		LSU_EXU_ready <= 0;
	end
	else if(LSU_WBU_valid && WBU_LSU_ready)begin
		LSU_EXU_ready <= 1;
	end
end
reg axi_handshake;
always @(posedge clk) begin
    if (rst) begin
        axi_handshake <= 0;
    end
    else if(LSU_MEM_read_valid && MEM_LSU_read_ready) begin
        axi_handshake <= 1;
    end
    else begin
        axi_handshake <= 0;
    end
end
always @(posedge clk) begin
    if (rst) begin
        LSU_WBU_valid <= 0;
    end
    else if (EXU_LSU_valid && LSU_EXU_ready && (~(EXU_LSU_load || EXU_LSU_store))) begin
        LSU_WBU_valid <= 1;
    end
    else if (LSU_MEM_write_valid && MEM_LSU_write_ready) begin
        LSU_WBU_valid <= 1;
    end
    else if (axi_handshake) begin
        LSU_WBU_valid <= 1;
    end
    else if (EXU_LSU_valid && LSU_EXU_ready && (EXU_LSU_load || EXU_LSU_store))begin
        LSU_WBU_valid <= 0;
    end
    else if ((~(EXU_LSU_valid && LSU_EXU_ready)) && LSU_WBU_valid) begin 
        LSU_WBU_valid <= 0;
    end
end

always @(posedge clk) begin
    if (rst) begin
        LSU_WBU_rd_en <= 0;
        LSU_WBU_rd_addr <= 0;
        LSU_WBU_csr_wen1 <= 0;
        LSU_WBU_csr_wen2 <= 0;
        LSU_WBU_csr_wr_addr1 <= 0;
        LSU_WBU_csr_wr_addr2 <= 0;
        LSU_WBU_csr_wr_data1 <= 0;
        LSU_WBU_csr_wr_data2 <= 0;
        LSU_WBU_write_rd_data <= 0;
        LSU_WBU_inst <= 0;
        LSU_WBU_pc <= 0;
    end
    else if (LSU_MEM_write_valid && MEM_LSU_write_ready) begin
        LSU_WBU_rd_en <= l_rd_en;
        LSU_WBU_rd_addr <= l_rd_addr;
        LSU_WBU_csr_wen1 <= EXU_LSU_csr_wen1;
        LSU_WBU_csr_wen2 <= EXU_LSU_csr_wen2;
        LSU_WBU_csr_wr_addr1 <= EXU_LSU_csr_wr_addr1;
        LSU_WBU_csr_wr_addr2 <= EXU_LSU_csr_wr_addr2;
        LSU_WBU_csr_wr_data1 <= EXU_LSU_csr_wr_data1;
        LSU_WBU_csr_wr_data2 <= EXU_LSU_csr_wr_data2;
        LSU_WBU_write_rd_data <= rd_data;
        LSU_WBU_inst <= l_inst;
        LSU_WBU_pc <= l_pc;
    end
    else if (axi_handshake) begin
        LSU_WBU_rd_en <= l_rd_en;
        LSU_WBU_rd_addr <= l_rd_addr;
        LSU_WBU_csr_wen1 <= EXU_LSU_csr_wen1;
        LSU_WBU_csr_wen2 <= EXU_LSU_csr_wen2;
        LSU_WBU_csr_wr_addr1 <= EXU_LSU_csr_wr_addr1;
        LSU_WBU_csr_wr_addr2 <= EXU_LSU_csr_wr_addr2;
        LSU_WBU_csr_wr_data1 <= EXU_LSU_csr_wr_data1;
        LSU_WBU_csr_wr_data2 <= EXU_LSU_csr_wr_data2;
        LSU_WBU_write_rd_data <= rd_data;
        LSU_WBU_inst <= l_inst;
        LSU_WBU_pc <= l_pc;
    end
    else if (EXU_LSU_valid && LSU_EXU_ready && (~(EXU_LSU_load || EXU_LSU_store))) begin
        LSU_WBU_rd_en <= EXU_LSU_rd_en;
        LSU_WBU_rd_addr <= EXU_LSU_rd_addr;
        LSU_WBU_csr_wen1 <= EXU_LSU_csr_wen1;
        LSU_WBU_csr_wen2 <= EXU_LSU_csr_wen2;
        LSU_WBU_csr_wr_addr1 <= EXU_LSU_csr_wr_addr1;
        LSU_WBU_csr_wr_addr2 <= EXU_LSU_csr_wr_addr2;
        LSU_WBU_csr_wr_data1 <= EXU_LSU_csr_wr_data1;
        LSU_WBU_csr_wr_data2 <= EXU_LSU_csr_wr_data2;
        LSU_WBU_write_rd_data <= rd_data;
        LSU_WBU_inst <= EXU_LSU_inst;
        LSU_WBU_pc <= EXU_LSU_pc;
    end
    else begin
        LSU_WBU_rd_en <= LSU_WBU_rd_en;
        LSU_WBU_rd_addr <= LSU_WBU_rd_addr;
        LSU_WBU_csr_wen1 <= LSU_WBU_csr_wen1;
        LSU_WBU_csr_wen2 <= LSU_WBU_csr_wen2;
        LSU_WBU_csr_wr_addr1 <= LSU_WBU_csr_wr_addr1;
        LSU_WBU_csr_wr_addr2 <= LSU_WBU_csr_wr_addr2;
        LSU_WBU_csr_wr_data1 <= LSU_WBU_csr_wr_data1;
        LSU_WBU_csr_wr_data2 <= LSU_WBU_csr_wr_data2;
        LSU_WBU_write_rd_data <= LSU_WBU_write_rd_data;
        LSU_WBU_inst <= LSU_WBU_inst;
        LSU_WBU_pc <= LSU_WBU_pc;
    end
end

endmodule

