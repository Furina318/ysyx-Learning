all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	Verilator --cc --exe --build -j0 -Wall --trace \
		--Mdir obj_dir sim_main.cpp double_sw.v	
include ../Makefile
