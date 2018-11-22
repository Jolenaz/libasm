
section .text
    global      _ft_strncat
    extern      _ft_strlen

_ft_strncat:
    push        rdi
    push        rsi
    push        rdx
    push        rcx

    call        _ft_strlen

    add         rdi, rax
    mov         rcx, rdx
    
    repnz       movsb

    pop         rcx
    pop         rdx
    pop         rsi
    pop         rdi
    mov         rax, rdi
    ret
