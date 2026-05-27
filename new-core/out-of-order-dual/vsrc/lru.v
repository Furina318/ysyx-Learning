// =============================================================================
// LRU (Least Recently Used) 替换逻辑模块
//
// 功能描述:
//   实现LRU替换策略，用于缓存或缓冲区的条目替换。
//   使用二叉树结构维护访问顺序。
//
// =============================================================================
module lru #(
    parameter N = 64 
)(
    input                  clk ,
    input                  rst ,
	input				   en  ,
    input      [N-1:0]     in  ,   // one-hot 访问掩码
    output reg [N-1:0]     out     // one-hot 替换输出
);
    localparam WIDTH = $clog2(N);
    // 存储方向位（每个非叶节点一个方向位）
    reg [N-2:0] dir;

    // 把 one-hot 转成 index
    function [WIDTH-1:0] onehot_to_index(input [N-1:0] mask);
        integer i;
        begin
            onehot_to_index = 0;
            for (i = 0; i < N; i = i + 1)
                if (mask[i])
                    onehot_to_index = i[WIDTH-1:0];
        end
    endfunction

    // index to one-hot 输出
    function [N-1:0] index_to_onehot(input [WIDTH-1:0] idx);
        begin
            index_to_onehot = {{(N){1'b0}}};
            index_to_onehot[idx] = 1'b1;
        end
    endfunction

    wire [WIDTH-1:0] access_index = onehot_to_index(in);

    // 更新方向位
	  reg [WIDTH-1:0] node_seq[0:WIDTH];
		integer j;
		always @(*) begin
		    node_seq[0] = 0;
		    for (j = 0; j < WIDTH; j = j + 1) begin
					node_seq[j+1] = {node_seq[j][WIDTH-2:0], access_index[WIDTH - 1 - j]} + {{(WIDTH-1){1'b0}}, 1'b1};
		    end
		end
		
		integer i;
		always@(posedge clk ) begin
			if(rst) begin
				dir <= 0;
			end else begin
				if(en) begin 
					for (i = 0; i < WIDTH; i = i + 1) begin
					    dir[node_seq[i]] <= access_index[WIDTH - 1 - i];
					end
				end
			end
		end

    // 替换逻辑：从根沿着“未使用”方向走
    integer node;
    integer level;
    always @(*) begin
        reg [WIDTH-1:0] replace_index;
		node = 0;
        replace_index = 0;
        for (level = WIDTH-1; level >= 0; level = level - 1) begin
            if (dir[node] == 1) begin
                replace_index[level] = 0;
                node = (node << 1) + 1;
            end else begin
                replace_index[level] = 1;
                node = (node << 1) + 2;
            end
        end
        out = index_to_onehot(replace_index);
    end

endmodule

