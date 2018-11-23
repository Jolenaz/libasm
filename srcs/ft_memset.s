section .text
    global      _ft_memset

_ft_memset:
    push    rdi
    push    rsi
    push    rcx

    mov     rax, rsi
    and     rax, 0xff
    mov     rcx, rdx

    rep     stosb

    pop     rcx
    pop     rsi
    pop     rdi
    mov     rax, rdi
    ret
