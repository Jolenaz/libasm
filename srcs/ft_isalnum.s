
section .text
    global      _ft_isalnum
    extern      _ft_isalpha
    extern      _ft_isdigit

_ft_isalnum:
    push        rsi;
    call        _ft_isalpha
    mov         rsi, rax
    call        _ft_isdigit
    or          rax, rsi
    cmp         rax, 0x1
    je          true_ret
    jmp         false_ret

false_ret:
    mov         rax, 0x0
    pop         rsi;
    ret

true_ret:
    mov         rax,0x1
    pop         rsi
    ret
