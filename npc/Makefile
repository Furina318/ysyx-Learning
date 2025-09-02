# 项目模块名称
ARCH = riscv32e-npc
ifeq ($(ARCH), riscv32e-ysyxsoc)
TOP_MODULE = ysyxSoCFull
YOSYS_TOP = ysyx_25010030
CXXFLAGS += -DYSYXSOC
NXDC_FILES = ./constr/ysyxSoCFull.nxdc
else ifeq ($(ARCH), riscv32e-npc)
TOP_MODULE = rv32e
YOSYS_TOP = rv32e
else
$(error 不支持的架构：$(ARCH).支持的架构: riscv32e-ysyxsoc, riscv32e-npc)
endif

# 源文件路径和定义
NPC_HOME = /home/furina/ysyx-workbench/npc
NVBOARD_HOME = /home/furina/ysyx-workbench/nvboard
SOC_HOME = /home/furina/ysyx-workbench/ysyxSoC
ifeq ($(ARCH), riscv32e-ysyxsoc)
CSRCS = $(shell find $(abspath ./pipeline-soc-csrc) -name "*.cpp")  
VSRCS = $(shell find $(abspath ./pipeline-soc-vsrc) -name "*.v")
VSRCS += $(shell find $(abspath ../ysyxSoC/perip) -name "*.v")
VSRCS += ../ysyxSoC/build/ysyxSoCFull.v 

else
ifeq ($(ARCH), riscv32e-npc)
CSRCS = $(shell find $(abspath ./pipeline-csrc) -name "*.cpp") 
VSRCS = $(shell find $(abspath ./pipeline-vsrc) -name "*.v")   
endif
endif

VERILATOR = verilator
VERILATOR_FLAGS += -cc --exe
VERILATOR_FLAGS += -MMD
VERILATOR_FLAGS += --trace
VERILATOR_FLAGS += -Wno-STMTDLY -Wno-MODDUP -Wno-fatal


ifeq ($(ARCH), riscv32e-ysyxsoc)
VERILATOR_FLAGS += +incdir+$(SOC_HOME)/perip/uart16550/rtl +incdir+$(SOC_HOME)/perip/spi/rtl 
VERILATOR_FLAGS += --timescale "1ns/1ns" --no-timing
endif
VERILATOR_FLAGS += --build -Mdir $(OBJ_DIR)

BUILD_DIR = $(NPC_HOME)/build
OBJ_DIR = ./obj_dir
BIN = $(OBJ_DIR)/V$(TOP_MODULE)

INC_PATH = $(NPC_HOME)/include/
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOP_MODULE)\""

# 链接的库
LIBS = -lreadline  # 链接 readline 库, 命令行交互库
LIBS += -ldl       # 链接 dlfcn 库, 动态链接库
LIBS += -lSDL2     # 添加 SDL2 库链接, 图形显示库
LIBS += -lSDL2_image
LDFLAGS += $(LIBS)


# ifdef CONFIG_DIFFTEST
DIFF_REF_PATH = /home/furina/ysyx-workbench/nemu/build
DIFF_REF_SO = $(DIFF_REF_PATH)/riscv32-nemu-interpreter-so
ARGS_DIFF = --diff=$(DIFF_REF_SO)

$(DIFF_REF_SO):
	$(MAKE) -s -C $(DIFF_REF_PATH)
# endif

# 参数设置
IMG ?=  
override ARGS ?= --log=$(OBJ_DIR)/npc-log.txt
override ARGS += $(ARGS_DIFF)
NPC_EXEC = $(BIN) $(ARGS) $(IMG)

ifdef mainargs
ASFLAGS += -DBIN_PATH=\"$(mainargs)\"
# @echo "### Get mainargs ###"
endif

default: $(BIN)
$(shell mkdir -p $(OBJ_DIR))

ifeq ($(ARCH), riscv32e-ysyxsoc)
ifeq ($(nvboard), 1)
CXXFLAGS += -DNVBOARD
SRC_AUTO_BIND = $(abspath $(OBJ_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	@echo "### 生成NVBoard引脚绑定代码 ###"
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@
include $(NVBOARD_HOME)/scripts/nvboard.mk
CSRCS += $(SRC_AUTO_BIND)
endif
endif

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

#生成波形文件
.PHONY: wave.vcd
wave.vcd: $(BIN)
	@echo
	@echo "### SIMULATING ###"
	@$(BIN) #+verilator+rand+reset+2

yosys:
	cd $(NPC_HOME)/../yosys-sta && make sta DESIGN=$(YOSYS_TOP) \
											SDC_FILE=$(NPC_HOME)/npc.sdc \
											RTL_FILES="$(shell find $(NPC_HOME)/pipeline-soc-vsrc -name "*.v")" \
											CLK_FREQ_MHZ=200 \
											INCLUDE_PATH=$(NPC_HOME)/pipeline-soc-vsrc/defines
	cd $(NPC_HOME)

# 伪目标：运行环境准备
.PHONY: run-env
run-env: $(BIN) $(DIFF_REF_SO)

# 伪目标：运行仿真
.PHONY: run
run: run-env
	$(NPC_EXEC)

# 伪目标：调试
.PHONY: gdb
gdb: run-env
	gdb -s $(BIN) --args $(NPC_EXEC)

# 伪目标：构建
.PHONY: build
build: $(BIN)

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE) $(SRC_AUTO_BIND)
# 	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOP_MODULE) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

# # 构建仿真可执行文件
# $(BINARY): .stamp.verilate
# 	@echo
# 	@echo "### BUILDING SIM ###"
# 	make -C obj_dir -f V$(TOP_MODULE).mk V$(TOP_MODULE)

# # 伪目标：Verilator 转换
# .PHONY: verilate
# verilate: .stamp.verilate

# # Verilator 转换和生成构建文件
# .stamp.verilate: $(VSRCS) $(CSRCS) 
# 	@echo
# 	@echo "### VERILATING ###"
# 	verilator -Wno-STMTDLY -Wno-MODDUP --trace --top-module $(TOP_MODULE) \
# 	$(if $(filter riscv32e-ysyxsoc,$(ARCH)),-I../ysyxSoC/perip/uart16550/rtl -I../ysyxSoC/perip/spi/rtl --timescale "1ns/1ns" --no-timing) \
# 	$(if $(filter 1,$(nvboard)),-I$(NVBOARD_HOME)/usr/include/ -I$(NVBOARD_HOME)/include/) \
# 	-cc $(VSRCS) --exe $(CSRCS) $(INCFLAGS)
# # verilator -Wno-STMTDLY -Wno-MODDUP --top-module $(MODULE) -cc $(VSRCS) --exe $(CSRCS) $(INCFLAGS) $(CFLAGS)
# 	@echo "LIBS += $(LIBS)" >> ./obj_dir/V$(TOP_MODULE).mk    # 添加链接库
# 	@echo "CXXFLAGS += $(INCFLAGS)" >> ./obj_dir/V$(TOP_MODULE).mk  # 添加包含路径
# 	@touch .stamp.verilate

# 伪目标：Lint 检查
.PHONY: lint
lint: $(TOP_MODULE).v
	verilator --lint-only $(TOP_MODULE).v

# 伪目标：清理
.PHONY: clean
clean:
	rm -rf .stamp.*
	rm -rf $(OBJ_DIR)
	rm -rf wave.vcd
	rm -rf ./log/*

.PHONY: wave
wave:
	gtkwave wave.vcd