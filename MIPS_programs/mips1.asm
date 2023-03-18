.data
matrix: .word 1, 2, 3, 4, 5, 6, 7, 8, 9   # replace with your matrix data
n:      .word 3                           # replace with your matrix order

.text
.globl main
main:
    la $t0, matrix  # load base address of matrix into $t0
    lw $t1, n       # load n into $t1
    li $t2, 0       # initialize sum to zero
    
    diagonal_loop:
        lw $t3, 0($t0) #storing the element of sddress $t0 in $t3 (matrix[i])
        add $t2, $t2, $t3  #sum=sum + matrix[i]
        addi $t0, $t0, 16
        addi $t1, $t1, -1      # decrement n
        bne $t1, 0, diagonal_loop
    
    li $v0, 1       # print the sum
    move $a0, $t2
    syscall
    
    li $v0, 10      # exit program
    syscall
