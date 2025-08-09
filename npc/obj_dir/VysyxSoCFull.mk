# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VysyxSoCFull.mk

default: /home/furina/ysyx-workbench/npc/obj_dir/VysyxSoCFull

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VysyxSoCFull
# Module prefix (from --prefix)
VM_MODPREFIX = VysyxSoCFull
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-DYSYXSOC \
	-I/home/furina/ysyx-workbench/npc/include/ \
	-I/home/furina/ysyx-workbench/nvboard/usr/include \
	-DTOP_NAME="VysyxSoCFull" \
	-DNVBOARD \
	-MMD \
	-O3 \
	-I/usr/include/SDL2 \
	-D_REENTRANT \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	/home/furina/ysyx-workbench/nvboard/build/nvboard.a \
	-lreadline \
	-ldl \
	-lSDL2 \
	-lSDL2 \
	-lSDL2_image \
	-lSDL2_ttf \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	auto_bind \
	cpu \
	alarm \
	device \
	map \
	mmio \
	port-io \
	keyboard \
	rtc \
	serial \
	timer \
	vga \
	difftest \
	expr \
	monitor \
	paddr \
	reg \
	rv32e \
	sdb \
	trace \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/furina/ysyx-workbench/npc/obj_dir \
	/home/furina/ysyx-workbench/npc/soc-csrc \
	/home/furina/ysyx-workbench/npc/soc-csrc/device \
	/home/furina/ysyx-workbench/npc/soc-csrc/device/io \


### Default rules...
# Include list of all generated classes
include VysyxSoCFull_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

auto_bind.o: /home/furina/ysyx-workbench/npc/obj_dir/auto_bind.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
cpu.o: /home/furina/ysyx-workbench/npc/soc-csrc/cpu.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
alarm.o: /home/furina/ysyx-workbench/npc/soc-csrc/device/alarm.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
device.o: /home/furina/ysyx-workbench/npc/soc-csrc/device/device.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
map.o: /home/furina/ysyx-workbench/npc/soc-csrc/device/io/map.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mmio.o: /home/furina/ysyx-workbench/npc/soc-csrc/device/io/mmio.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
port-io.o: /home/furina/ysyx-workbench/npc/soc-csrc/device/io/port-io.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
keyboard.o: /home/furina/ysyx-workbench/npc/soc-csrc/device/keyboard.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
rtc.o: /home/furina/ysyx-workbench/npc/soc-csrc/device/rtc.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
serial.o: /home/furina/ysyx-workbench/npc/soc-csrc/device/serial.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
timer.o: /home/furina/ysyx-workbench/npc/soc-csrc/device/timer.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vga.o: /home/furina/ysyx-workbench/npc/soc-csrc/device/vga.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
difftest.o: /home/furina/ysyx-workbench/npc/soc-csrc/difftest.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/furina/ysyx-workbench/npc/soc-csrc/expr.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
monitor.o: /home/furina/ysyx-workbench/npc/soc-csrc/monitor.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
paddr.o: /home/furina/ysyx-workbench/npc/soc-csrc/paddr.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
reg.o: /home/furina/ysyx-workbench/npc/soc-csrc/reg.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
rv32e.o: /home/furina/ysyx-workbench/npc/soc-csrc/rv32e.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/furina/ysyx-workbench/npc/soc-csrc/sdb.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
trace.o: /home/furina/ysyx-workbench/npc/soc-csrc/trace.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/furina/ysyx-workbench/npc/obj_dir/VysyxSoCFull: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
