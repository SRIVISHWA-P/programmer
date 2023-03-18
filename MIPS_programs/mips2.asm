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
    li $t4, 12
loop:
    # Load elements from S1 and S2
    lw $t0, 0($s0)       # $t0=S1[i]
    lw $t1, 0($s1)       # $t0=S2[i]
    srl $t0, $t0, 4# Extract lower nibble of S1 element
    andi $t1, $t1, 0x0F     # Shift right to extract higher nibble of S2 element

    # Add lower nibble of S1 element and higher nibble of S2 element
    add $t2, $t0, $t1
    li $v0,1
    move $a0, $t2
    syscall
    
    li $v0,4
    la $a0, newline
    syscall
        
    addi $s0, $s0, 4    # Move to next element in S1
    addi $s1, $s1, 4    # Move to next element in S2
    addi $a2, $a2, -1
    bne $a2,0,loop
    
    li $v0, 10          # Exit program
    syscall
