section .text
    global      _ft_strdup
    extern      _ft_strcpy
    extern      _ft_strlen
    extern      _malloc

_ft_strdup:
    push    rsi
    push    rsp
    push    rdi

    and     rsp, -16     

    call    _ft_strlen

    mov     rdi, rax
    add     rdi, 0x1

    call    _malloc

    cmp     rax, 0x0
    je      end

    mov     rdi, rax
    pop     rsi
    push    rsi

    call    _ft_strcpy
    jmp     end

end:
    pop     rdi
    pop     rsp
    pop     rsi
    ret


