VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --trace --exe -Wno-EOFNEWLINE
SOURCES = fpu.v fregs.v fpu_tb.v booth_wallace_multiplier.v
TOP_MODULE = fpu_tb
SIM_MAIN = sim_main.cpp
OBJ_DIR = obj_dir
EXEC = fpu_sim

all: $(EXEC)

$(EXEC): $(SOURCES) $(SIM_MAIN)
	$(VERILATOR) $(VERILATOR_FLAGS) $(SOURCES) $(SIM_MAIN) -o $(EXEC)
	make -j -C $(OBJ_DIR) -f Vfpu.mk $(EXEC)
	mv $(OBJ_DIR)/$(EXEC) .

clean:
	rm -rf $(OBJ_DIR) $(EXEC) fpu_tb.vcd

run: $(EXEC)
	./$(EXEC)

.PHONY: all clean run
