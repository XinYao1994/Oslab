ifeq  ($(ON_FPGA), y)
MACH_DEF := -DMACH_FPGA
else
MACH_DEF := -DMACH_QEMU
endif

ARCH_INLUCDES:=debug driver init mm libs process sync syscall trap glue-ucore module 
ARCH_CFLAGS := -mips1 $(MACH_DEF) -g  -EL -G0 -fno-delayed-branch -Wall -O0
ARCH_LDFLAGS := -n -G 0 -static -EL

