global main

main:
    push 0x000a6948
    mov eax, 0x4
    mov ebx, 0x1
    mov ecx, esp
    mov edx, 0x4
    int 0x80