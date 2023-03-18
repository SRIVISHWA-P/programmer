.data
get_input: .asciiz "Enter a number : \n" #for displaying input string

.text
la $t0, get_input  #loading address of get_input into $t0

li $v0, 4      #$v0 =4 for print_string systemcall
move $a0, $t0
syscall

li $v0, 5    #v0 =5 for input systemcall
syscall
move $s1, $v0 #storing the input in $s1

li $t0, 2     #$t0=2
div $s1, $t0   # dividing $s1 by $t0
mfhi $t3        # moving the remainder value in hi to $t3

beq $t0,$zero, if  # $t0==0, then if else next line
li $a3, 0x00    # R7($a3)=00
j exit

if:
li $a3, 0xFF   #$a3=ff  

exit:
li $v0, 10     #for exit systemcall
syscall
