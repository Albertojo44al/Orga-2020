  .global main 
  
main:    
    jal     clear
    li      $a0, 1
    jal     setBackgroundColor
    jal     setColor

    li      $a0, 5                      
    li      $a1, 3                   
    jal     print_vertical_frame     ;left frame   
    
    li      $a0, 50                     
    li      $a1, 3                   
    jal     print_vertical_frame     ; rigth frame

    li      $a0, 5
    li      $a1, 3
    jal     print_horitzontal_frame  ; top frame

    li      $a0, 5
    li      $a1, 40
    jal     print_horitzontal_frame  ; top frame
    jal     resetColor
   
    jal     setColor
    li      $a0, 10
    li      $a1, 6
    jal		print_level2              ; print blocks


   
    li      $v0, 10
    syscall
   infinity_cicle:
    j       infinity_cicle

print_vertical_frame: 
    addi    $sp, $sp, -4
    sw      $ra, 0($sp)
    li      $t0, 40                 ;bottom
v_cicle:
    beq     $a1, $t0, end_v_cicle
    li      $a2, 35
    jal     print_char_position
    addi    $a1, $a1, 1
    j       v_cicle
end_v_cicle:
    lw      $ra, 0($sp)
    addi    $sp, $sp, 4
    jr      $ra


print_horitzontal_frame:
    addi    $sp, $sp, -4
    sw      $ra, 0($sp)
    li      $t0, 51
h_cicle:
    beq     $a0, $t0, end_h_cicle
    li      $a2, 35
    jal     print_char_position
    addi    $a0,$a0,1
    j       h_cicle
end_h_cicle:
    lw      $ra, 0($sp)
    addi    $sp, $sp, 4
    jr      $ra


print_level1:
    addi    $sp, $sp, -12
    sw      $ra, 0($sp)
    sw      $a1, 4($sp)
    li      $t0, 43     ;x top
    li      $t1, 15     ;y top
    li      $t3, 2
level1__row_cicle:
    beq     $a0, $t0, end_level1_cicle
    addi    $a0, $a0, 1
    sw      $a0, 8($sp)                         ;save current col
    lw      $a1, 4($sp)                         ;reset row a1
level1_colum_cicle:                                 
    beq     $a1, $t1, level1__row_cicle
    div     $a0, $t3
    mfhi    $t2                          
    beq     $t2, $zero, print_level1_space
    div     $a1, $t3
    mfhi    $t2                          
    beq     $t2, $zero, print_level1_space
    li      $a0, 2                              ;set green color
    jal     setColor
    jal     setBackgroundColor
    li      $a2, 35
    lw      $a0, 8($sp)                         ;load a0
    jal     print_char_position 
    jal     resetColor        
    addi    $a1, $a1, 1
    j		level1_colum_cicle
print_level1_space:
    li      $a2, 32
    jal     print_char_position      
    addi    $a1, $a1, 1
    j		level1_colum_cicle
end_level1_cicle:
    jal     resetColor
    lw      $ra, 0($sp)
    addi    $sp, $sp, 12
    jr      $ra

    

print_level2:
    addi    $sp, $sp, -12
    sw      $ra, 0($sp)
    sw      $a1, 4($sp)
    li      $t0, 43     ;x top
    li      $t1, 15     ;y top
    li      $t3, 2
level2__row_cicle:
    beq     $a0, $t0, end_level2_cicle
    addi    $a0, $a0, 1
    sw      $a0, 8($sp)                         ;save current col
    lw      $a1, 4($sp)                         ;reset row a1
level2_colum_cicle:                                 
    beq     $a1, $t1, level2__row_cicle
    div     $a0, $t3
    mfhi    $t2                          
    beq     $t2, $zero, print_level2_color2
    div     $a1, $t3
    mfhi    $t2                          
    beq     $t2, $zero, print_level2_color6
    li      $a0, 2                              ;set green color
    jal     setColor
    jal     setBackgroundColor
    j       print_level2_block
print_level2_color6:
    li      $a2, 32
    lw      $a0, 8($sp)                         ;load a0
    jal     print_char_position 
    jal     resetColor        
    addi    $a1, $a1, 1
    j		level2_colum_cicle
print_level2_color2:
    li      $a0, 5                              ;set green color
    jal     setColor
    jal     setBackgroundColor
    j       print_level2_block
print_level2_block:
    li      $a2, 35
    lw      $a0, 8($sp)                         ;load a0
    jal     print_char_position 
    jal     resetColor        
    addi    $a1, $a1, 1
    j		level2_colum_cicle
end_level2_cicle:
    jal     resetColor
    lw      $ra, 0($sp)
    addi    $sp, $sp, 12
    jr      $ra

    
