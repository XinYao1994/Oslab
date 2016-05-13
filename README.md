#TinyComputer
=============
> This is a project about a tiny computer(I have not decided its name) based on MIPS and Nexys4 board.<br>
> The kernel is ported from ucore<br>
> The MIPS cpu comes from HUST's work with Prof.Diqing Hu<br>
> The transform tool is used to copy the kernel to the Nexys4 board.<br>

## Oslab
-------------

PS. you will be given a x86 kernel which can be launched in qemu-i386<br>

###1. QEMU configuration

> cd qemu<br>
> ./configure --help : find info you want<br>
> ./configure --target-list=i386-softmmu,mipsel-softmmu<br>
> sudo apt-get install zlib1g-dev<br>
> libglib2.0-dev<br>
> libtool<br>
> libpixman-1-deva<br>
> apt-get install libsdl1.2-dev or you will have graphics<br>
> make<br>

PS. Add PATH<br>

###2. x86 kernel 

> cd ucore/ucore<br>
> make ARCH=i386 defconfig<br>
> install libncurses5-dev<br>
> make ARCH=i386 <br>
> make ARCH=i386 sfsimg<br>
> make ARCH=i386 swapimg<br>
> ./uCore-run<br>

###3. mips kernel

> make clean<br>
> make ARCH=mips menuconfig : set you cross-compiler PATH<br>
> make ARCH=mips sfsimg : it will have been modified in future<br>
> make ARCH=mips kernel<br>


