.data
input: .word 14
output: .asciiz "\n    11111\n       1\n      1\n     1\n"

.text
la $t0, input
lw $s0,0($t0)

li $t1,7
div $s0,$t1
mfhi $s2
bne $s2,0,exit
li $v0, 4
la $a0,output
syscall

exit:
li $v0,10
syscall