# ysyx-npc

内含五级流水线(含RAS分支预测器），多周期(AXI4-Lite总线协议,分支预测器),单周期的版本，以及乘法器(booth_wallace_multiplier)，除法器(divider)，均可支持RISCV32I指令集。

其中单周期在软件上均支持difftest功能(多周期diffteat存在问题)，所有版本的npc在软件上均支持sdb小型调试功能以及trace运行踪迹追踪功能（默认关闭状态）

内含FPU浮点运算单元，支持IEEE基本加减乘除浮点指令

运行不同的版本需要切换通过修改makefile完成

1）运行五级流水线：
CSRCS = $(shell find $(abspath ./csrc) -name "*.cpp")
VSRCS = $(shell find $(abspath ./pipeline-vsrc) -name "*.v") 

2）运行多周期：
CSRCS = $(shell find $(abspath ./mul-csrc) -name "*.cpp") 
VSRCS = $(shell find $(abspath ./mul-vsrc) -name "*.v")     

3）运行单周期：
CSRCS = $(shell find $(abspath ./single-csrc) -name "*.cpp") 
VSRCS = $(shell find $(abspath ./single-vsrc) -name "*.v") 

运行之前先要make clean ， 然后再是make run（编译生成obj_dir,使用内置指令集测试，写在paddr.cpp中的img）.看波形图make wave(如因为访存越界等原因意外退出程序将不会生成波形图，可根据Trace踪迹来调试)

想要进行更多测试可以在am-kernels/tests/cpu-tests以及am-kernels/benchmarks/microbench目录下进行更多跑分测试。

通过运行make ARCH=riscv32e-npc run ALL=xxx（xxx代指具体测试名字，可以在tests文件夹下找到对应的测试文件名）进行测试，若想要进行一键回归性测试，运行make ARCH=riscv32e-npc run一键进行全部测试。
