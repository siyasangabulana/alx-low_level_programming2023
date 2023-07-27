section .data
    hello db "Hello, Holberton", 10, 0  ; The string followed by a newline (10) and null terminator (0)

section .text
    global _start

_start:
    ; Call the printf function to print the string
    mov rdi, hello    ; Load the address of the string into rdi (1st argument)
    call printf       ; Call the printf function

    ; Exit the program
    mov rax, 60       ; syscall number for exit
    xor rdi, rdi      ; exit status 0
    syscall
