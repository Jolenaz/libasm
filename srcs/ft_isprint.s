
section .text
    global      _ft_isprint

_ft_isprint:
    cmp         rdi, 0x20
    jl          false_ret
    cmp         rdi, 0x7e
    jg          false_ret
    mov         rax, 0x1
    ret

false_ret:
    mov rax, 0x0
    ret
