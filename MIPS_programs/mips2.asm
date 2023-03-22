.data
S1: .word 32, 67, 12, 53
S2: .word 45, 89, 34, 76
len: .word 4
temp: .word 12
newline: .asciiz "\n"
.text
main:
    la $s0, S1          # Loading address of S1 into $a0
    la $s1, S2          # Loading address of S2 into $a1
    lw $a2, len  #loading address of len in $a2
    addi $sp, $sp, -16
loop:
    # Load elements from S1 and S2
    lw $t0, 0($s0)       # $t0=S1[i]
    lw $t1, 0($s1)       # $t0=S2[i]
    srl $t0, $t0, 4      # Extract lower nibble of S1 element
    andi $t1, $t1, 0x0F     # Shift right to extract higher nibble of S2 element
    # Add lower nibble of S1 element and higher nibble of S2 element
    add $t2, $t0, $t1    #$t2= $t0+$t1
    li $t7,9          # $t7=9
    slt $t5,$t7,$t2    #if $t2>9 $t5=1
    beq $t5,1,push_bcd   #if $t5==1 go to push_bcd
    beq $t2,9,push       #if $t2==9  go to push
    
    push:
    sw $t2, temp($sp)  #storing $t2 in stack
    li $v0,1         
    lw $a0, temp($sp)   #loading value in stack for printing
    syscall
    
    li $v0,4
    la $a0, newline      #for printing newline
    syscall
    j normal          #jump to normal
    
    
    push_bcd:
    addi $t2,$t2,6       #adding 6 to make correct bcd term
    andi $t2,$t2,0x0F   #masking to get last four bits
    sw $t2, temp($sp)   #storing  the bcd digit in stack
    li $v0,1        
    lw $a0, temp($sp)    #loading from stack for printing
    syscall
    
    li $v0,4
    la $a0, newline     #for printing newline
    syscall
    
    normal:
    lw $t4, temp        #loading temp ino $t4
    addi $t4,$t4, -4    #$t4=$t4-4
    sw $t4, temp         #temp=$t4
    addi $s0, $s0, 4    # Move to next element in S1
    addi $s1, $s1, 4    # Move to next element in S2
    addi $a2, $a2, -1  #decrementing len value
    bne $a2,0,loop  #if len!=0 then loop 
 
 
    addi $sp,$sp,16  #popping items from stack
    li $v0, 10          # Exit program
    syscall
