section .data
    message db 'Hello, Holberton', 10 ; note the newline at the end
section .text
    global _start
_start:
    ; write the message to stdout
    mov eax, 4 ; system call for write
    mov ebx, 1 ; file handle 1 is stdout
    mov ecx, message ; address of string to output
    mov edx, 16 ; number of bytes to output
    int 0x80 ; invoke operating system to do the write

    ; exit the program
    mov eax, 1 ; system call for exit
    xor ebx, ebx ; exit code 0
    int 0x80 ; invoke operating system to exit	
