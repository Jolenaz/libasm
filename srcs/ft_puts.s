
%define WRITE        0x02000004


section .text
    global      _ft_puts
    extern      _ft_strlen

_ft_puts:
    push        rdx
    push        rsi
    push        rdi

    call        _ft_strlen

    mov         rdx, rax
    mov         rsi, rdi
    mov         rax, WRITE
    mov         rdi, 1
    syscall

    lea         rsi, [rel message]
    mov         rdx, 1
    mov         rdi, 1
    mov         rax, WRITE
    syscall

    pop         rdi
    pop         rsi
    pop         rdx
    ret


section   .data
message:  db  10