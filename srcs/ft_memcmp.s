section .text
    global      _ft_memcmp

_ft_memcmp:
    push    rdi
    push    rsi
    push    rdx
    push    rcx

    mov    rcx, rdx
    repe   cmpsb
    
    mov     rax, [rdi - 1]
    and     rax, 0xff
    mov     r11, [rsi - 1]
    and     r11, 0xff
    sub     rax, r11

    pop     rcx
    pop     rdx
    pop     rsi
    pop     rdi
    ret
