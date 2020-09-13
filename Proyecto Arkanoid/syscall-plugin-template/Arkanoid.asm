  .global main 
  .data

  lives: .byte "Lives:", 0
  over: .byte "GAME OVER!", 0
  points: .byte "Points:", 0

  .text
main:    
    jal		clear

    addi    $sp, $sp, -80
    li      $t0, 1
    sw      $t0, 0($sp)	
    sw      $t0, 4($sp)
    sw      $t0, 8($sp)
    sw      $t0, 12($sp)
    sw      $t0, 16($sp)
    sw      $t0, 20($sp)
    sw      $t0, 24($sp)
    sw      $t0, 28($sp)
    sw      $t0, 32($sp)
    sw      $t0, 36($sp)
    sw      $t0, 40($sp)
    sw      $t0, 44($sp)
    sw      $t0, 48($sp)
    sw      $t0, 52($sp)
    sw      $t0, 56($sp)
    sw      $t0, 60($sp)
    sw      $t0, 64($sp)
    sw      $t0, 68($sp)
    sw      $t0, 72($sp)
    sw      $t0, 76($sp)

    move    $a0, $sp
    
    
    li      $s0, 20                    ;paddle position
    li      $s1, 35
    jal     general_cicle
    li      $a0, 23
    li      $a1, 25
    jal     locate
    li      $a0, over
    jal     print_str
    li      $a0, 0
    li      $a1, 45
    jal     locate
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


draw_level1:
    addi    $sp, $sp, -12
    sw      $ra, 0($sp)
    sw      $s6, 4($sp)
    sw      $a0, 8($sp)
    li      $t0, 0                              ;iterator
    li      $t1, 0                              ;init
    li      $t3, 20                             ;fin
verify_level1:
    beq     $t1, $t3, end_draw_level1
    sll     $t7, $t0, 2
    add     $t7, $a0, $t7
    lw      $t4, 0($t7)
    beq     $t4, $zero, next_block
    srl     $s5, $t1, 2 
    addi    $s5, $s5, 2
    jal     blocks
    jal     resetColor
    jal     block_crash
next_block:
    addi    $s6, $s6, 6
    li		$t6, 4
    beq     $t1, $t6, next_row
    li		$t6, 9
    beq     $t1, $t6, next_row
    li		$t6, 14
    beq     $t1, $t6, next_row
    addi    $t1, $t1, 1
    addi    $t0, $t0, 1
    j		verify_level1	
next_row:
    addi    $s7, $s7, 3
    lw      $s6, 4($sp)
    addi    $t1, $t1, 1
    addi    $t0, $t0, 1
    j		verify_level1	
end_draw_level1:
    lw      $ra, 0($sp)
    lw      $a0, 8($sp)
    addi    $sp, $sp, 12
    jr      $ra

level1_done:
    addi    $sp, $sp, -8
    sw      $ra, 0($sp)
    sw      $a0, 4($sp)
    li      $t0, 20
    li      $t1, 0
    li      $t3, 0              ;iterator
cicle:
    beq     $t1, $t0, level1_complete
    sll     $t4, $t3, 2
    add     $t4, $t4, $a0
    lw      $t4, 0($t4)
    bne     $t4, $zero, leve1_incomplete
    addi    $t1, $t1, 1
    addi    $t3, $t3, 1
    j		cicle
level1_complete:
    li		$t1, 100		
    mult    $s4, $t1
    li      $s4, 0
    mflo    $t1
    add     $s3, $s3, $t1  
    addi    $s3, $s3, 200
leve1_incomplete:
    lw      $ra, 0($sp)
    lw		$a0, 4($sp)
    addi    $sp, $sp, 8
    jr      $ra


block_crash:
    addi    $sp, $sp, -16
    sw      $ra, 0($sp)
    sw      $a0, 4($sp)
    sw      $t0, 8($sp)
    sw      $t1, 12($sp)
    move 	$t0, $s6
    addi	$t1, $s6, 4
verify_x:
    beq     $t0, $t1, end_block_crash
    beq     $t0, $a2, verify_y 
    addi	$t0, $t0, 1	
    j		verify_x
verify_y:
    beq     $s7, $a3, change_ball_direction
    j		end_block_crash				
change_ball_direction:
    addi    $s3, $s3, 50
    li      $t0, -1
    mult    $t5, $t0
    mflo    $t5
    sw      $zero, 0($t7)
    jal     EraseBlock
end_block_crash:
    lw      $ra, 0($sp)
    lw      $a0, 4($sp)
    lw		$t0, 8($sp)
    lw      $t1, 12($sp)
    addi    $sp, $sp, 16
    jr		$ra				

    
draw_paddle:
    addi    $sp, $sp, -12
    sw      $ra, 0($sp)
    sw      $a0, 4($sp)
    sw      $s3, 8($sp)
    li      $a0, 2
    li      $t0, 6                  ;left x
    li      $t1, 49                 ;right x
    li      $t3, 1                  ;right
    li      $t4, -1                 ;left
    jal     setColor
    jal     getch
    li      $s3, 35
    jal     paddle 
end_paddle:
    jal     resetColor
    lw      $ra, 0($sp)	
    lw      $a0, 4($sp)
    lw		$s3, 8($sp)		 
    addi    $sp, $sp, 12
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
    beq     $a3, $t3, change_direction_y
    beq     $a3, $t4, lose
    beq     $a2, $t0, change_direction_x
    beq     $a2, $t1, change_direction_x
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
    beq     $a2, $t0, change_direction_x
    beq     $a2, $t1, change_direction_x
    j		go  
lose: 
    addi    $s4, $s4, -1
    jal     random
    li      $a3, 32
    j		change_direction_y	   
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
    li      $a2, 28
    li      $a3, 32
    li      $t2, 1              ;x++ or x--
    li      $t5, -1             ;y++ or y--	
    li      $s4, 5	
    li		$s3, 0			 
    jal     draw_frames
cicle_:  
    beq     $s4,$zero, end_cicle_
    li      $s6, 14
    li      $s7, 6
    jal     level1_done
    jal     draw_level1
    jal     show_ball_position
    jal     draw_paddle			
    jal     draw_ball
    jal     delay
    j		cicle_
end_cicle_:
    lw      $ra, 0($sp)
    addi    $sp, $sp, 4
    jr      $ra

draw_frames:
    addi    $sp, $sp, -8
    sw      $ra, 0($sp)
    sw      $a0, 4($sp)
    li      $a0, 1
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
    lw      $a0, 4($sp)
    addi    $sp, $sp, 8
    jr      $ra


show_ball_position:
    addi    $sp, $sp, -12
    sw      $ra, 0($sp) 
    sw      $a0, 4($sp)
    sw      $a1, 8($sp)
    
    li      $a0, 55             ;show lives
    li      $a1, 20
    jal     locate
    li      $a0, lives
    jal     print_str
    move    $a0, $s4
    jal     print_int

    li      $a0, 55             ;show points
    li      $a1, 23
    jal     locate
    li      $a0, points
    jal     print_str
    move    $a0, $s3
    jal     print_int

    li      $a0, 55
    li      $a1, 40
    li      $v1, 88
    jal     print_char_position
    #show $a2
    li      $a0, 65
    li      $a1, 40
    li      $v1, 89
    jal     print_char_position
    #show $a3
    lw      $ra, 0($sp)
    lw      $a0, 4($sp)
    lw      $a1, 8($sp)
    addi    $sp, $sp, 12
    jr      $ra
