.data
input: .word 14 #storing number in memory
output: .asciiz "\n    11111\n       1\n      1\n     1\n"   #special pattern

.text
la $t0, input       #loading addres of input data in $t0
lw $s0,0($t0)       #storing value in $s0

li $t1,7         #$t1=7
div $s0,$t1      #$s0/7
mfhi $s2         #getting remainder in $s2
bne $s2,0,exit   #if remainder!=0 then it should exit 
li $v0, 4     #for printing 1's pattern
la $a0,output #displaying output string
syscall

exit:
li $v0,10    #exit system call
syscall
