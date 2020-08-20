; Implement the function draw_rect
; void draw_rect(int width, int height)

.global draw_rect

draw_rect:
    addi    $sp, $sp, -4
    sw      $ra, 0($sp) 
    move    $t5, $a0
    li      $t0, 0
    li      $t1, 0
loop1:
    beq     $t0, $a1, end_loop1
loop2:
    beq     $t1, $t5, end_loop2
    bne     $t0, $zero, condicion
    li      $a0, 42   
    jal     print_char
    addi    $t1, $t1, 1
    j       loop2
condicion: 
    addi    $t6, $a1, -1
    bne     $t0,  $t6, segunda_condicion
    li      $a0, 42   
    jal     print_char
    addi    $t1, $t1, 1
    j       loop2
segunda_condicion:
    beq     $t1, $zero, dibujar
    addi    $t7, $t5, -1
    beq     $t1, $t7, dibujar
    li      $a0, 32   
    jal     print_char
    addi    $t1, $t1, 1
    j       loop2
dibujar:
    li      $a0, 42   
    jal     print_char
    addi    $t1, $t1, 1
    j       loop2
end_loop2:
    li      $a0, 10
    jal     print_char
    addi    $t0, $t0,1
    li      $t1, 0
    j       loop1
end_loop1:
    lw      $ra, 0($sp)
    addi    $sp, $sp, 4 
    jr      $ra

