ON_FPGA=y make ARCH=mips menuconfig
ON_FPGA=y make ARCH=mips sfsimg > log
ON_FPGA=y make ARCH=mips kernel >> log
