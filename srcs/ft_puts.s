
section .text
    global      _func

_func:
    mov         rax, 0x02000004         ; system call for write
    mov         rdi, 1                  ; file handle 1 is stdout
    lea         rsi, [rel message]            ; address of string to output
    mov         rdx, 13                 ; number of bytes
    syscall                           ; invoke operating system to do the write
    ret

section   .data
message:    db        "Hello, World", 10      ; note the newline at the end