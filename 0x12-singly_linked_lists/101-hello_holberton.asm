section .data
    hello db 'Hello, Holberton',0x0A,0 ; null-terminated string with a newline at the end

section .text
    extern printf  ; declare the external printf function

    global _start  ; the entry point for the program

_start:
    ; Prepare the arguments for printf
    mov rdi, hello ; the format string
    xor rax, rax   ; clear rax register to indicate no floating-point arguments
    ; Call printf
    call printf

    ; Exit the program
    mov rax, 60 ; syscall number for exit
    xor rdi, rdi ; status 0
    syscall
