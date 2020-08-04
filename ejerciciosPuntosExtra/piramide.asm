li $t0, 0
li $t1, 1
li $t2, 2
li $t3, 3
li $t4, 4
li $t5, 5

li $v0, 11
li $a0, 42
syscall
li $v0, 11
li $a0, 10
syscall 


loop_start1:
    beq $t0, $t2, loop_end1
    li $v0, 11
    li $a0, 42
    syscall
    addi $t0, $t0, 1
    j loop_start1
loop_end1: 
    li $v0, 11
    li $a0, 10
    syscall   
    #set $t0 = 0
    j loop_start2
    
loop_start2:
    beq $t0, $t3, loop_end2
    li $v0, 11
    li $a0, 42
    syscall
    addi $t0, $t0, 1
    j loop_start2
loop_end2: 
    li $v0, 11
    li $a0, 10
    #set $t0 = 0
    syscall 
    j loop_start3
   
loop_start3:
    beq $t0, $t4, loop_end3
    li $v0, 11
    li $a0, 42
    syscall
    addi $t0, $t0, 1
    j loop_start3
loop_end3: 
    li $v0, 11
    li $a0, 10
    #set $t0 = 0
    syscall 
    j loop_start4

loop_start4:
    beq $t0, $t5, loop_end4
    li $v0, 11
    li $a0, 42
    syscall
    addi $t0, $t0, 1
    j loop_start4
loop_end4: 
    li $v0, 11
    li $a0, 10
    syscall 
    
       



    
