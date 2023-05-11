# String compare program in MIPS

.data
str1: .asciiz "hellol"
str2: .asciiz "world"
result: .asciiz "Strings are equal"

.text
main:
    # Load addresses of strings into registers
    la $s0, str1
    la $s1, str2
    
    loop:
        # Load bytes from each string
        lb $t0, ($s0)
        lb $t1, ($s1)
        
        # If end of either string is reached, exit loop
        beq $t0, $zero, done
        beq $t1, $zero, done
        
        # Compare bytes and branch to not_equal if not equal
        bne $t0, $t1, not_equal
        
        # Increment string pointers and loop
        addi $s0, $s0, 1
        addi $s1, $s1, 1
        j loop
        
    not_equal:
        # Load address of result string into $a0
        la $a0, result
        
        # Exit program
        li $v0, 4
        syscall
        
    done:
        # Strings are equal, load address of result string into $a0
        la $a0, result
        
        # Exit program
        li $v0, 4
        syscall
