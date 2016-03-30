ifeq  ($(ON_FPGA), y)
MACH_DEF := -DMACH_FPGA
else
MACH_DEF := -DMACH_QEMU
endif

ARCH_CFLAGS := -mips1 -g  -EL -G0 -fno-delayed-branch -Wall -O0 $(MACH_DEF)
ARCH_LDFLAGS := 
ARCH_OBJS := syscall.o initcode.o intr.o clone.o udivmod.o udivmodsi4.o divmod.o
ARCH_INITCODE_OBJ := initcode.o
