.global print_str
.global print_int
.global print_char
.global read_char
.global read_int
.global print_char_position
.global clear
.global setBackgroundColor
.global setColor
.global resetColor
.global delay
.global printBall
.global cursorHider
.global getch
.global locate
.global paddle
.global random
.global blocks
.global EraseBlock

start:
    jal main

print_str:
    li $v0, 4
    syscall
    jr $ra

print_int:
    li $v0, 1
    syscall
    jr $ra

print_char:
    li $v0, 11
    syscall
    jr $ra

read_char:
    li $v0, 12
    syscall
    jr $ra
    
read_int:
    li $v0, 5
    syscall
    jr $ra

print_char_position:
    li $v0, 20
    syscall
    jr $ra

clear:
    li $v0, 21
    syscall
    jr $ra

setBackgroundColor:
    li $v0, 22
    syscall
    jr $ra

setColor:
    li $v0, 23
    syscall
    jr $ra

resetColor:
    li $v0, 24
    syscall
    jr $ra

delay:
    li $v0, 25
    syscall
    jr $ra

printBall:
    li $v0, 26
    syscall
    jr $ra

cursorHider:
    li $v0, 27
    syscall
    jr $ra

getch:
    li $v0, 28
    syscall
    jr $ra

locate:
    li $v0, 29
    syscall
    jr $ra

paddle:
    li $v0, 30
    syscall
    jr $ra

random:
    li $v0, 31
    syscall
    jr $ra

blocks:
    li $v0, 32
    syscall
    jr $ra

EraseBlock:
    li $v0, 33
    syscall
    jr $ra