section .text
    global      _ft_strchr
    extern       _ft_strlen

_ft_strchr:
    push    rdi
    push    rsi
    push    r8
    push    rcx

    call    _ft_strlen
    mov     rcx, rax
    add     rcx, 1
    mov     r8, rax
    mov     rax, rsi
    and     rax, 0xff

    repne     scasb
    jne        not_found

    mov     rax, rdi
    sub     rax, 1
    jmp     end

not_found:
    mov     rax, 0x0

end:
    pop     rcx
    pop     r8
    pop     rsi
    pop     rdi
    ret