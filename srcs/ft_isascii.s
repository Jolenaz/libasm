
section .text
    global      _ft_isascii

_ft_isascii:
    cmp         rdi, 0
    jl          false_ret
    cmp         rdi, 127
    jg          false_ret
    mov         rax, 0x1
    ret

false_ret:
    mov rax, 0x0
    ret
