a.asm: a.s
  gcc -c a.s && objdump -d a.s >> a.asm

string.bin: key.txt
  cat $^ | ./hex2raw > string.bin

run: string.bin
    cat $^ | ./ctarget -q 

dubug: string.bin
    gdb --args ./ctarget -q
