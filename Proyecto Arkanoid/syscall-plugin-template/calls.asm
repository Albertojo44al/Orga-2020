.global print_str
.global print_int
.global print_char
.global read_int
.global print_char_position
.global clear
.global setBackgroundColor
.global setColor
.global resetColor

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