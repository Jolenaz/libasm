
section .text
    global      _ft_tolower

_ft_tolower:
    cmp         rdi, 'A'
    jl          unchanged_ret
    cmp         rdi, 'Z'
    jg          unchanged_ret
    mov         rax, rdi
    sub         rax, 'A'
    add         rax, 'a'
    ret

unchanged_ret:
    mov rax, rdi
    ret
