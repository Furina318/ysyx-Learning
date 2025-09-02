# ysyx-npc

内含五级流水线(含RAS分支预测器), 接SoC的五级流水线(支持突发传输), 多周期(AXI4-Lite总线协议), 单周期, minirv(仅支持8条指令，且需要搭配新版am使用)的版本，以及乘法器(booth_wallace_multiplier)，除法器(divider)，均可支持RISCV32e指令集。

其中单周期在软件上均支持difftest功能(多周期diffteat存在问题)，所有版本的npc在软件上均支持sdb小型调试功能以及trace运行踪迹追踪功能（默认关闭状态）

内含FPU浮点运算单元，支持IEEE基本加减乘除浮点指令

运行不同的版本需要切换通过修改makefile完成
