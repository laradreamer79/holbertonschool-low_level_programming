        global  main

        section .data
msg:    db      "Hello, World", 10
len:    equ     $ - msg

        section .text
main:
        mov     rax, 1
        mov     rdi, 1
        mov     rsi, msg
        mov     rdx, len
        syscall

        mov     eax, 0
        ret

