#Define variables
VERILATOR=$(shell which verilator)
BUILD_DIR=obj_dir
TOP_MODULE=Vdouble_sw
EXE_NAME=sim_main
VERILOG_SOURCES=double_sw.v
CPP_SOURCES=sim_main.cpp
VCD_FILE=wave.vcd

all:
	@echo "Write this Makefile by your self."

sim: $(BUILD_DIR)/$(TOP_MODULE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	./$(BUILD_DIR)/$(TOP_MODULE)
$(BUILD_DIR)/$(TOP_MODULE): $(VERILOG_SOURCES) $(CPP_SOURCES) | $(BUILD_DIR)
	$(VERILATOR) --cc --exe --build -Wall --trace \
		--Mdir $(BUILD_DIR) $(CPP_SOURCES) $(VERILOG_SOURCES)	
$(BUILD_DIR):
	mkdir -p $@
clean:
	rm -rf $(BUILD_DIR) $(VCD_FILE)
.PHONY: all sim clean

include ../Makefile
