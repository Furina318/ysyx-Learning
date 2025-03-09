# 项目模块名称
MODULE = rv32e

# 源文件路径和定义
NPC_HOME = /home/furina/ysyx-workbench/npc
CSRCS = $(shell find $(abspath ./csrc) -name "*.cpp")  # 查找 csrc 目录下所有 .cpp 文件
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")     # 查找 vsrc 目录下所有 .v 文件

INC_PATH = $(NPC_HOME)/include/
CFLAGS += -I$(INC_PATH)  # 包含路径，确保头文件被找到

# 链接的库
LIBS = -lreadline  # 链接 readline 库
LIBS += -ldl       # 链接 dlfcn 库

# 可执行文件目标
BINARY = ./obj_dir/V$(MODULE)

# DIFFTEST 配置（如果启用）
ifdef CONFIG_DIFFTEST
DIFF_REF_PATH = ./difftest
DIFF_REF_SO = $(DIFF_REF_PATH)/riscv32-nemu-interpreter-so
ARGS_DIFF = --diff=$(DIFF_REF_SO)

$(DIFF_REF_SO):
	$(MAKE) -s -C $(DIFF_REF_PATH)
endif

# 参数设置
IMG ?=  # 可由 AM Makefile (npc.mk) 设置
override ARGS ?= --log=./obj_dir/npc-log.txt
override ARGS += $(ARGS_DIFF)
NPC_EXEC = $(BINARY) $(ARGS) $(IMG)

# 伪目标：运行 GTKWave 查看波形
.PHONY: gtkw
gtkw: uae.gtkw
	@echo
	@echo "### WAVES ###"
	gtkwave uae.gtkw

# 伪目标：仿真
.PHONY: sim
sim: wave.vcd

# 伪目标：查看波形
.PHONY: waves
waves: wave.vcd
	@echo
	@echo "### WAVES ###"
	gtkwave wave.vcd

# 生成波形文件
.PHONY: wave.vcd
wave.vcd: $(BINARY)
	@echo
	@echo "### SIMULATING ###"
	@$(BINARY) #+verilator+rand+reset+2

# 伪目标：运行环境准备
.PHONY: run-env
run-env: $(BINARY) $(DIFF_REF_SO)

# 伪目标：运行仿真
.PHONY: run
run: run-env
	$(NPC_EXEC)

# 伪目标：调试
.PHONY: gdb
gdb: run-env
	gdb -s $(BINARY) --args $(NPC_EXEC)

# 伪目标：构建
.PHONY: build
build: $(BINARY)

# 构建仿真可执行文件
$(BINARY): .stamp.verilate
	@echo
	@echo "### BUILDING SIM ###"
	make -C obj_dir -f V$(MODULE).mk V$(MODULE)

# 伪目标：Verilator 转换
.PHONY: verilate
verilate: .stamp.verilate

# Verilator 转换和生成构建文件
.stamp.verilate: $(VSRCS) $(CSRCS)
	@echo
	@echo "### VERILATING ###"
	verilator -Wno-STMTDLY -Wno-MODDUP --trace --top-module $(MODULE) -cc $(VSRCS) --exe $(CSRCS) -I$(INC_PATH) $(CFLAGS)
	@echo "LIBS += $(LIBS)" >> ./obj_dir/V$(MODULE).mk    # 添加链接库
	@echo "CXXFLAGS += -I$(INC_PATH)" >> ./obj_dir/V$(MODULE).mk  # 添加包含路径
	@touch .stamp.verilate

# 伪目标：Lint 检查
.PHONY: lint
lint: $(MODULE).v
	verilator --lint-only $(MODULE).v

# 伪目标：清理
.PHONY: clean
clean:
	rm -rf .stamp.*
	rm -rf ./obj_dir
	rm -rf wave.vcd
	rm -rf ./log/*