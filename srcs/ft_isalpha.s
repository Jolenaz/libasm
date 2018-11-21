
section .text
    global      _ft_isalpha

_ft_isalpha:
    cmp         rdi, 'A'
    jl          false_ret
    cmp         rdi, 'z'
    jg          false_ret
    cmp         rdi, 'Z'
    jle         true_ret
    cmp         rdi, 'a'
    jge         true_ret
    jmp         false_ret

false_ret:
    mov rax, 0x0
    ret

true_ret:
    mov rax,0x1
    ret
