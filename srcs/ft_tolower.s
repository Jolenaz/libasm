
section .text
    global      _ft_toupper

_ft_toupper:
    cmp         rdi, 'a'
    jl          unchanged_ret
    cmp         rdi, 'z'
    jg          unchanged_ret
    mov         rax, rdi
    sub         rax, 'a'
    add         rax, 'A'
    ret

unchanged_ret:
    mov rax, rdi
    ret
