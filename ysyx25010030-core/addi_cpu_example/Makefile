# Define variables
VERILATOR=$(shell which verilator)
BUILD_DIR=obj_dir
TOP_MODULE=Vriscv_single_cycle
EXE_NAME=riscv_single_cycle_sim
VERILOG_SOURCES=riscv_single_cycle.v
CPP_SOURCES=tb_riscv_single_cycle.cpp
VCD_FILE=wave.vcd

all:
	@echo "Write this Makefile by yourself."

sim: $(BUILD_DIR)/$(TOP_MODULE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by yourself."
	./$(BUILD_DIR)/$(TOP_MODULE)
	gtkwave $(VCD_FILE)

$(BUILD_DIR)/$(TOP_MODULE): $(VERILOG_SOURCES) $(CPP_SOURCES) | $(BUILD_DIR)
	$(VERILATOR) --cc --exe --build -Wall --trace \
		--Mdir $(BUILD_DIR) $(CPP_SOURCES) $(VERILOG_SOURCES)	

$(BUILD_DIR):
	mkdir -p $@

clean:
	rm -rf $(BUILD_DIR) $(VCD_FILE)

.PHONY: all sim clean

# include ../Makefile