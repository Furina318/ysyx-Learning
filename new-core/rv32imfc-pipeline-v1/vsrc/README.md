这是一个支持RV32IMC的流水线，接有icache，dcache，BPU分支预测器

其中LSU被处理为EXU的一个功能单元FU。

包含IBU（指令缓存队列）和STB（store-buffer写内存指令缓存），以求尽可能利用所有空闲的周期