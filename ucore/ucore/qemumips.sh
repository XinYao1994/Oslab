ON_FPGA=n make ARCH=mips menuconfig
ON_FPGA=n make ARCH=mips sfsimg > log
ON_FPGA=n make ARCH=mips kernel >> log
