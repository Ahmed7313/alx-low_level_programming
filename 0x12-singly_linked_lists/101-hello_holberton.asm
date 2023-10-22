section .data
    hello db 'Hello, Holberton',0xa,0  ; null-terminated string with newline

section .text
    extern printf
    global _start

_start:
    ; Prepare the arguments for printf
    mov rdi, hello      ; format string
    xor rax, rax        ; no floating-point arguments
    ; Call printf
    call printf
    
    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; status 0
    syscall
