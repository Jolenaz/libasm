
%define BUF_SIZE    0x1001
%define STR_SIZE    0x1000
%define READ        0x02000003

section .text
    global      _ft_cat
    extern      _ft_putstr
    extern      _ft_bzero

_ft_cat:
    push    rbp
    mov     rbp, rsp
    sub     rsp, BUF_SIZE 
    push    rdi
    push    rsi
    push    rdx
    push    r12

    mov     r12, rdi
    mov     rdi, rsp
    mov     rsi, BUF_SIZE

    call    _ft_bzero

    mov     rax, 0x1

test_while:
    mov     rdi, r12
    mov     rsi, rsp
    mov     rdx, STR_SIZE
    mov     rax, READ
    syscall
    cmp     rax, 0x0
    jle     end_while

while_loop:

    mov     rdi, rsp
    call    _ft_putstr

    mov     rsi, STR_SIZE
    call    _ft_bzero

    jmp     test_while

end_while:
    pop     r12
    pop     rdx
    pop     rsi
    pop     rdi
    add     rsp, BUF_SIZE
    pop     rbp
    ret

