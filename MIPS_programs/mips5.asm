.data
get_input: .asciiz "Enter a number : \n"   #for displaying input string
.text
la $t0, get_input  #loading address of get_input into $t0

li $v0, 4      #$v0 =4 for print_string systemcall
move $a0, $t0
syscall

li $v0, 5    #v0 =5 for input systemcall
syscall
move $s1, $v0   #storing the input in $s1

beq $s1,$zero,else #if $s1==0, else
beq $s1,1,else     #if $s1==1, else
beq $s1,2,out #if $s1==2,out
li $t1,2

chk:
beq $t1,$s1,out  #if limit is reached then go to out
div $s1,$t1        #dividing $s1 by $t1
mfhi $t3           #storing remainder in $t3
beq $t3,$zero,else   #if remainder==0 then else
addi $t1,$t1,1   #incrementing $t1
j chk

out:
li $a3, 0xFF   #number is prime so $a3=0xFF
j exit

else:
li $a3, 0x00   #number is not prime

exit:
li $v0, 10     #for exit systemcall
syscall
