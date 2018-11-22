
section .text
    global      _ft_strlen

_ft_strlen:
    push    rcx
    push    rdi
    xor     rcx, rcx
    not     rcx
    xor     rax, rax
    repnz   scasb
    xor     rax, rax
    not     rax
    sub     rax, rcx
    sub     rax, 1
    pop     rdi
    pop     rcx
    ret

