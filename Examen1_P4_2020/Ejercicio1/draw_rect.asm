; Implement the function draw_rect
; void draw_rect(int width, int height)

.global draw_rect


draw_rect:
    move $t5, $a0
    li $t0, 0
    li $t1, 0
loop1:
    slt $t3, $t0, $t5
    beq $t3, $zero, end_loop1
loop2:
    slt $t4, $t1, $a1
    beq $t4, $t1, end_loop2
    li $a0, 42
    jal print_char
    addi $t1, $t1, 1
    j loop2
end_loop2:
    li $a0, 10
    addi $t0, $t0,1
    j loop1
end_loop1:
jr $ra



