  .global main 
  
main:    
    jal		clear	
    li      $a0, 10
    li      $a1, 6
    jal		print_level1              ; print blocks    

    jal     delay 

    li      $a0, 9
    li      $a1, 5
    jal	    print_level2              ; print blocks

    li      $s0, 20                    ;paddle position
    li      $s1, 35
    jal     general_cicle
   
    li      $v0, 10
    syscall
    
print_vertical_frame: 
    addi    $sp, $sp, -4
    sw      $ra, 0($sp)
    li      $t0, 40                 ;bottom
v_cicle:
    beq     $a1, $t0, end_v_cicle
    li      $v1, 35
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
    li      $v1, 35
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
    sw      $a0, 8($sp)                         ;save current col
    li      $a0, 6                             ;set green color
    jal     setColor
    jal     setBackgroundColor
    lw      $a0, 8($sp)                         ;load a0
    li      $t0, 42     ;x top
    li      $t1, 14     ;y top
    li      $t3, 2
level1__row_cicle:
    beq     $a0, $t0, end_level1_cicle
    addi    $a0, $a0, 2
    lw      $a1, 4($sp)                         ;reset row a1
level1_colum_cicle:                                 
    beq     $a1, $t1, level1__row_cicle
    div     $a0, $t3
    li      $v1, 35
    jal     print_char_position     
    addi    $a1, $a1, 2
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
    sw      $a0, 8($sp)
    li      $a0, 5                             ;set green purple
    jal     setColor
    jal     setBackgroundColor
    lw      $a0, 8($sp)  
    li      $t0, 43     ;x top
    li      $t1, 15     ;y top
level2__row_cicle:
    beq     $a0, $t0, end_level2_cicle
    addi    $a0, $a0, 2
    lw      $a1, 4($sp)                         ;reset row a1
level2_colum_cicle:                                 
    beq     $a1, $t1, level2__row_cicle
    li      $v1, 35
    jal     print_char_position        
    addi    $a1, $a1, 2
    j		level2_colum_cicle
end_level2_cicle:
    jal     resetColor
    lw      $ra, 0($sp)
    addi    $sp, $sp, 12
    jr      $ra

    
draw_paddle:
    addi    $sp, $sp, -4
    sw      $ra, 0($sp)
    li      $a0, 2
    li      $t0, 6                  ;left x
    li      $t1, 49                 ;right x
    jal     setColor
    jal     getch
    jal     paddle 
end_paddle:
    jal     resetColor
    lw      $ra, 0($sp)	 
    addi    $sp, $sp, 4
    jr      $ra

draw_ball:   
    li      $t0, 6      ;x
    li      $t1, 49     ;x 
    li      $t3, 4      ;y
    li      $t4, 39     ;y 
    li      $t6, -1     ;sign changer
    addi    $sp, $sp, -4
    sw      $ra, 0($sp)
    li      $v1, 32
    jal     printBall
    beq     $a2, $t0, change_direction_x
    beq     $a2, $t1, change_direction_x
    beq     $a3, $t3, change_direction_y
    beq     $a3, $t4, change_direction_y
    li      $t0, 34                         ;paddle poisition in y
    move    $t3, $s0                        ;paddel position in x 
    addi    $t1, $t3, 10                    ;large paddle  
    bne     $t0, $a3, go    
verify_paddle:
    beq     $a2, $t3, change_direction_y
    beq     $t3, $t1, go
    addi    $t3, $t3, 1
    j		verify_paddle			
change_direction_x:
    mult    $t2, $t6
    mflo    $t2
    j		go    
change_direction_y:
    mult	$t5, $t6			
    mflo	$t5					
go:
    add     $a2, $a2, $t2       ;move on x
    add     $a3, $a3,$t5        ;move on y 
    li      $v1, 79 
    jal     printBall
    lw      $ra, 0($sp)
    addi    $sp, $sp, 4
    jr      $ra

general_cicle:
    addi    $sp, $sp, -4
    sw      $ra, 0($sp)
    li      $t7, 1000
    li      $a2, 28
    li      $a3, 34
    li      $t2, 1              ;x++ or x--
    li      $t5, -1             ;y++ or y--			 
cicle_:
    jal     draw_frames
    jal     show_ball_position
    beq     $t7,$zero, end_cicle_
    addi    $t7, $t7, -1
    jal     draw_paddle			
    jal     draw_ball
    jal     delay
    j		cicle_
end_cicle_:
    lw      $ra, 0($sp)
    addi    $sp, $sp, 4
    jr      $ra

draw_frames:
    addi    $sp, $sp, -4
    sw      $ra, 0($sp)
    li      $a0, 3
    jal     setBackgroundColor
    jal     setColor
    jal     cursorHider
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
    lw      $ra, 0($sp)
    addi    $sp, $sp, 4
    jr      $ra


show_ball_position:
    addi    $sp, $sp, -12
    sw      $ra, 0($sp) 
    sw      $a0, 4($sp)
    sw      $a1, 8($sp)
    li      $a0, 55
    li      $a1, 40
    jal     locate
    #show $a2
    li      $a0, 65
    li      $a1, 40
    jal     locate
    #show $a3
    lw      $ra, 0($sp)
    lw      $a0, 4($sp)
    lw      $a1, 8($sp)
    addi    $sp, $sp, 12
    jr      $ra
