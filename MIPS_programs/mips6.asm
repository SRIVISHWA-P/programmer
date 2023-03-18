.data
str1: .asciiz "\nEnter the number1 : "
str2: .asciiz "\nEnter the number2 : "
a: .asciiz "\nThe addition of two numbers is :\n"
s: .asciiz "\nThe subraction of two numbers is :\n"
m: .asciiz "\nThe multiplication of two numbers is :\n"
id: .asciiz "\nThe quotient of division of two numbers is :\n"
rd: .asciiz "\nThe remainder of division of two numbers is :\n"
.text
li $v0, 4   #display str1 
la $a0, str1
syscall

li $v0, 5    #get first input number
syscall
move $s1, $v0

li $v0, 4     #display str2
la $a0, str2
syscall

li $v0, 5     #get second number input
syscall
move $s2, $v0

add $t0,$s1,$s2   #$t0=$s1+$s2
li $v0, 4
la $a0, a    #display meassage for addition
syscall
li $v0, 1
move $a0, $t0    #displaying the value of addition
syscall


sub $t1,$s1,$s2
li $v0, 4
la $a0, s       #display meassage for subraction
syscall
li $v0, 1
move $a0, $t1   #displaying the value of subraction
syscall


mul $t2,$s1,$s2
li $v0, 4
la $a0, m      #display meassage for multiplication
syscall
li $v0, 1
move $a0, $t2    #displaying the value of subraction
syscall


div $s1,$s2
mfhi $t3    #storing remainder in $t3
mflo $t4    #storing quotiend in $t4
li $v0, 4
la $a0, id      #display meassage for quotient
syscall
li $v0, 1
move $a0,$t4  #displaying the value of quotient
syscall

li $v0, 4
la $a0, rd    #display meassage for remainder
syscall
li $v0, 1
move $a0,$t3   #displaying the value of remainder
syscall

li $v0,10
syscall
