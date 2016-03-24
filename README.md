# Oslab

# you will be given a x86 kernel which can be launched in qemu-i386

1. QEMU configuration

> cd qemu
> ./configure --help : find info you want
> ./configure --target-list=i386-softmmu,mipsel-softmmu
> sudo apt-get install zlib1g-dev
> libglib2.0-dev
> libtool
> libpixman-1-deva
> apt-get install libsdl1.2-dev or you will have graphics
> make

Add PATH

2. x86 kernel 
> cd ucore/ucore
> make ARCH=i386 defconfig
> install libncurses5-dev
> make ARCH=i386 
> make ARCH=i386 sfsimg
> make ARCH=i386 swapimg
> ./uCore_run

3. mips kernel
> make clean
> make ARCH=mips menuconfig : set you cross-compiler PATH
> make ARCH=mips sfsimg : it will have been modified in future
> make ARCH=mips kernel
