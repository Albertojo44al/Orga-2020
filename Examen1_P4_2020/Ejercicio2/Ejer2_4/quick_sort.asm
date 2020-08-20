
.global quickSort

;s0 -> a
;s1 -> b
;$t0 -> t
swap:
    addi    $sp, $sp , -4
    move 	$t0, $s0
    move    $s0, $s1
    move    $s1, $t0
    addi    $sp, $sp, 4
    jr      $ra

;a0 -> arr
;a1 -> low
;a2 -> high
;t0 -> pivot
;$t1 -> i
;$t2 -> j
partition:
    addi    $sp, $sp , -12
    sw      $ra, 0($sp)
    sw      $s0, 4($sp)
    sw      $s1, 8($sp)
    sll     $t3, $a2, 2
    add     $t3, $t3, $a0 
    lw      $t0, 0($t3)          ;pivot = arr[high]
    addi    $t1, $a1, -1       ; i= low-1
    move    $t2, $a1           ; j=low
    addi    $t4, $a2, -1       ; high -1
par_loop:
    slt     $t6, $t2, $t4
    beq     $t6, $zero, end_par_loop    
    sll     $t3, $t2, 2 
    add     $t3, $t3, $a0 
    lw      $t5, 0($t3)         ; arr[j]
    slt     $t6, $t5, $t0       
    beq     $t5, $t0, par_if    ;arr[j] == pivot
    beq     $t6, $zero, par_if  ;arr[j] < pivot
    addi    $t2, $t2, 1
    j       par_loop
    
par_if:
    addi $t1, $t1, 1
    sll     $t7, $t1, 2
    add     $t7, $t7, $a0
    lw      $t8, 0($t7)         ; arr[i]
    move    $s0, $t8
    move    $s1, $t5 
    addi    $t2, $t2, 1 
    j       par_loop
end_par_loop:
    sll     $t6, $t1, 2
    add     $t6, $t6, $a0
    lw      $t7, 0($t6)         ; arr[i]
    addi    $s0, $t7, 4         ; arr[i+1]
    sll     $t8, $a2, 2
    add     $t8, $t8, $a0
    lw      $s1, 0($t8)         ;arr[j]
    jal     swap

    addi    $v0, $t1, 1
    lw      $ra, 0($sp)
    lw      $s0, 4($sp)
    lw      $s0, 8($sp)
    addi    $sp, $sp, 12
    jr      $ra     


;arr -> a0
;low -> a1
;high -> a2
; pi -> $t0
quickSort:
    addi    $sp, $sp , -8
    sw      $ra, 0($sp)
    sw      $a0, 4($sp)
    sw      $a1, 8($sp)
    sw      $a2, 12($sp)
    slt     $t1, $a1, $a2
    beq     $t1, $zero, end_if
    jal     partition
    move    $t2, $v0
    move    $s3, $a2
    addi    $a2, $a2, -1
    jal     quickSort
    move    $a2, $s3
    addi    $a1, $a1, 1
    jal     quickSort
end_if:
    lw      $ra, 0($sp)
    lw      $a0, 4($sp)
    lw      $a1, 8($sp)
    lw      $a2, 12($sp)
    addi    $sp, $sp , 16
    jr      $ra