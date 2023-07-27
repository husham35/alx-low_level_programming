section .data
    format db "Hello, Holberton", 10, 0 ; format string with newline character
section .text
    extern printf
    global main
main:
    sub rsp, 8 ; align stack
    mov edi, format ; load the address of the format string
    xor eax, eax ; clear eax register
    call printf ; call the printf function
    add rsp, 8 ; restore stack
    mov eax, 0 ; return 0
    ret	
