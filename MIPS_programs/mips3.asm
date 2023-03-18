.data

arr1: .word 1,3,5,7,9  #array1
arr2: .word 2,4,6,8,10  #array2
n: .word 5    #length
out_str: .asciiz "The vector dot product of two arrays is \n"  #output string
.text

lw $s0, n      #loading n in $s0
la $s1, arr1   #loading base address of arr1 in $s1
la $s2, arr2   #loading base address of arr2 in $s2 
move $s3,$zero  #sum=0
vector_sum:
      beq $s0,0,out  #if i==6 then go to branch out
      lw $t1, 0($s1)  # $t1= arr1[i]
      lw $t2, 0($s2)  # $t2= arr2[i]
      mul $t3,$t1,$t2  # $t3=$t1*$t2
      add $s3,$s3,$t3  #sum=sum+$t3
      addi $s0,$s0,-1   #n--
      addi $s1,$s1,4   #moving to next s\address of arr1
      addi $s2,$s2,4   #moving to next s\address of arr2
      j vector_sum     #jump to branch vector_sum
out:
li $v0,4           #for print_string syscall
la $a0,out_str
syscall

li $v0,1          #for printing the voutput value
move $a0, $s3
syscall

li $v0,10        #for exit system call 
syscall
       