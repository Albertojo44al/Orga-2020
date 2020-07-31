li $t0, 1
li $t1, 6  
li $t4, 5
li $t5, 1
li $t6, 5

loop_space_set:
    move $t2, $t4

loop_space_start:
    beq $t2, $zero, loop_space_end
    li $v0, 11
    li $a0, 32
    syscall
    addi $t2, $t2, -1
    j loop_space_start
loop_space_end:
    addi $t4, $t4, -1
    move $t3, $zero
    
inner_loop_start:
    beq $t3, $t0, inner_loop_end
    li $v0, 11
    li $a0, 42
    syscall
    li $v0, 11
    li $a0, 42
    syscall
    addi $t3, $t3, 1
    j inner_loop_start
inner_loop_end:
    li $v0, 11
    li $a0, 10
    syscall
    addi $t0, $t0, 1
    bne $t0, $t1, loop_space_set
    

    
r_loop_space_set:
    move $t2, $zero
r_loop_space_start:
    beq $t2, $t5, r_loop_space_end
    li $v0, 11
    li $a0, 32
    syscall
    addi $t2, $t2, 1
    j r_loop_space_start
r_loop_space_end:
    addi $t5, $t5, 1
    move $t3, $t6
   
r_inner_loop_start:
    beq $t3, $zero, r_inner_loop_end
    li $v0, 11
    li $a0, 42
    syscall
    li $v0, 11
    li $a0, 42
    syscall
    addi $t3, $t3, -1
    j r_inner_loop_start
r_inner_loop_end:
    li $v0, 11
    li $a0, 10
    syscall
    addi $t6, $t6, -1
    bne $t6, $t4, r_loop_space_set   

   
    

    

    
    
   
