
section .text
    global      _ft_isdigit

_ft_isdigit:
    cmp         rdi, '0'
    jl          false_ret
    cmp         rdi, '9'
    jg          false_ret
    mov         rax, 0x1
    ret

false_ret:
    mov rax, 0x0
    ret
