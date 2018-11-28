section .text
    global      _ft_strcmp

_ft_strcmp:
    push    rdi
    push    rsi

test_while:
    cmp     byte[rdi], 0x0
    je      end_shorter
    cmp     byte[rsi], 0x0
    je      end_shorter

while_loop:

    cmpsb
    jne     end_diff
    jmp     test_while

end_diff:
    mov     rax, [rdi - 1]
    and     rax, 0xff
    mov     r11, [rsi - 1]
    and     r11, 0xff
    sub     rax, r11
    jmp     end

end_shorter:
    mov     rax, [rdi]
    and     rax, 0xff
    mov     r11, [rsi]
    and     r11, 0xff
    sub     rax, r11
    jmp     end
end:
    pop     rsi
    pop     rdi
    ret
