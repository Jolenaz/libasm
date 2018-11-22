
section .text
    global      _ft_bzero

_ft_bzero:
    push    rsi
    mov     rax, rsi
while:
    cmp rax, 0x0
    je  end
    dec rax
    mov byte [rdi + rax], 0
    jmp while 
end:
    pop     rsi
    ret
