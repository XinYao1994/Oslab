NAME=$1

mips-sde-elf-objdump -EL -S $NAME > tmp
#sed '/\<\:/d' tmp > tmp


#rm tmp
