
%define WRITE        0x02000004


section .text
    global      _ft_putstr
    extern      _ft_strlen

_ft_putstr:
    push        rdx
    push        rsi
    push        rdi

    call        _ft_strlen

    mov         rdx, rax
    mov         rsi, rdi
    mov         rax, WRITE
    mov         rdi, 1
    syscall

    pop         rdi
    pop         rsi
    pop         rdx
    ret