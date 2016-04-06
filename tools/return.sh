rm ucore-kernel-initrd
cp ../ucore/ucore/obj/kernel/ucore-kernel-initrd ./
./fv.sh ucore-kernel-initrd f.txt
