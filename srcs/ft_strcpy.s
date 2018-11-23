section .text
    global      _ft_strcpy
    extern      _ft_strlen

_ft_strcpy:
    push    rdi
    push    rcx
    push    r11

    mov     r11, rdi
    mov     rdi, rsi

    call    _ft_strlen

    mov     rcx, rax
    add     rcx, 0x1
    mov     rsi, rdi
    mov     rdi, r11

    rep     movsb

    pop     r11
    pop     rcx
    pop     rdi
    mov     rax, rdi
    ret
