
section .text
    global      _ft_puts
    extern      _ft_strlen

_ft_puts:
    push        rdx
    push        rsi
    push        rdi
    push        rax
    call        _ft_strlen
    mov         rdx, rax
    mov         rsi, rdi
    mov         rax, 0x02000004
    mov         rdi, 1
    syscall
    pop         rax
    pop         rdi
    pop         rsi
    pop         rdx
    ret
