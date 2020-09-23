#set byte [0x10000000] = ["Array representation of Heap is:", 10, 0]
call main

; Exit program
mov eax, 10
int 0x80

swap:
    push ebx
    mov	edx, DWORD [esp + 8]
    mov	eax, DWORD [esp + 12]
    mov	ecx, DWORD [edx]
    mov	ebx, DWORD [eax]
    mov	DWORD [edx], ebx
    mov	DWORD [eax], ecx
    pop	ebx
    ret

heapify:
    push    ebp
    mov     ebp, esp
    mov     eax, dword [ebp + 16]       ;largest = i
    push    eax                         ;[esp + 8]
    mov     ecx, eax
    mov     eax, 2
    mul		ecx
    add     eax, 1
    push    eax                         ;l = 2 * i + 1  [esp + 4]
    add     eax, 1
    push    eax                         ;r = 2 * i + 2  [esp + 0]
    
    mov     ecx, dword [esp + 4]        ;l
    mov     edx, dword [esp + 0]        ;r
    mov     edi, dword [ebp + 12]       ;n

    cmp     ecx, edi
    jl      condition1
    cmp     edx, edi
    jl      condition2

    mov     ecx, dword [esp + 8]        ;largest
    mov     edx, dword [ebp + 16]       ;i
    cmp     ecx, edx 
    jne     call_of_functions
call_of_functions:
    jmp end
condition1: 
    jmp end
condition2:
    jmp end
end:  
    add     esp, 12
    mov     esp, ebp
    pop     ebp
    ret


buildHeap:
    mov     eax, [esp + 8]          ;n
    mov     ecx, 2
    div     ecx
    sub     eax, 1                  ;startIdx
    mov     ebx, eax                ;i = startIdx
bh_loop:
    cmp     ebx, 0
    jl      bh_end_loop
    push    ebx                     ;i
    mov     eax, [esp + 12]         ;n
    push    eax
    mov     eax, [esp + 8]          ;$arr
    push    eax
    call    heapify
    add     esp, 12 
    dec     ebx     
    jmp     bh_loop
bh_end_loop:
    ret

printHeap:
    push	ebp
    push	edi
    push	esi
    push	ebx
    sub	esp, 24
    mov	ebp, DWORD [esp+44]
    mov	edi, DWORD [esp+48]
    push 0x10000000
    call	print_str
    add	esp, 16
    test	edi, edi
    jle	$L14
    mov	esi, ebp
    lea	edi, [ebp+edi*4]
$L15:
    sub	esp, 12
    push	DWORD [esi]
    call	print_int
    mov	DWORD [esp], 32
    call	print_char
    add	esi, 4
    add	esp, 16
    cmp	esi, edi
    jne	$L15
$L14:
    sub	esp, 12
    push	10
    call	print_char
    add	esp, 28
    pop	ebx
    pop	esi
    pop	edi
    pop	ebp
    ret

main:
    push	ebp
    mov	ebp, esp
    push	esi
    push	ebx
    push	ecx
    sub	esp, 68
    mov	ebx, 20
    mov	DWORD [ebp-72], 1
    mov	DWORD [ebp-68], 3
    mov	DWORD [ebp-64], 5
    mov	DWORD [ebp-60], 4
    mov	DWORD [ebp-56], 6
    mov	DWORD [ebp-52], 13
    mov	DWORD [ebp-48], 10
    mov	DWORD [ebp-44], 9
    mov	DWORD [ebp-40], 8
    mov	DWORD [ebp-36], 15
    mov	DWORD [ebp-32], 17
    push	11
    lea	esi, [ebp-72]
    push	esi
    call	buildHeap
    add	esp, 8
    push	11
    push	esi
    call	printHeap
    add	esp, 16
    mov	eax, 0
    lea	esp, [ebp-12]
    pop	ecx
    pop	ebx
    pop	esi
    leave
    ret

print_str:
    mov eax, 4
    mov ebx, dword [esp + 4]
    int 0x80
    ret

print_int:
    mov eax, 1
    mov ebx, dword [esp + 4]
    int 0x80
    ret

print_char:
    mov eax, 11
    mov ebx, dword [esp + 4]
    int 0x80
    ret
