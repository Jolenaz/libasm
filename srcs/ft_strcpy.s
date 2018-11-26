section .text
    global      _ft_strcpy
    extern      _ft_strlen

_ft_strcpy:
    push    rdi
    push    rcx
    push    r12
    push    rsi

    mov     r12, rdi
    mov     rdi, rsi

    call    _ft_strlen

    mov     rcx, rax
    add     rcx, 0x1
    mov     rsi, rdi
    mov     rdi, r12

    rep     movsb

    pop     rsi
    pop     r12
    pop     rcx
    pop     rdi
    mov     rax, rdi
    ret
