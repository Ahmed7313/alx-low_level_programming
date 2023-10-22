section .data
    hello db 'Hello, Holberton', 0xa, 0 ; Null-terminated string with newline

section .text
    extern printf, exit
    global _start

_start:
    ; Prepare the arguments for printf
    mov rdi, hello  ; format string
    xor rax, rax    ; no floating-point arguments
    
    ; Call printf
    call printf
    
    ; Prepare the arguments for exit
    xor rdi, rdi  ; status 0
    
    ; Call exit
    call exit
