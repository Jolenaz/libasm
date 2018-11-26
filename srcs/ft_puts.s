
%define WRITE        0x02000004


section .text
    global      _ft_puts
    extern      _ft_strlen

_ft_puts:
    push        rdx
    push        rsi
    push        rdi

    cmp         rdi, 0x0
    jne         args_ok
    lea         rdi, [rel error]

args_ok:
    call        _ft_strlen

    mov         rdx, rax
    mov         rsi, rdi
    mov         rax, WRITE
    mov         rdi, 1
    syscall

    lea         rsi, [rel message]
    mov         rdx, 1
    mov         rdi, 1
    mov         rax, WRITE
    syscall

    jb          end_fail 

    mov         rax, 10
    jmp         end

end_fail:
    mov         rax, -1

end:
    pop         rdi
    pop         rsi
    pop         rdx
    ret


section   .data
message:  db  10
error:    db "(null)",0