global main

main:
    mov eax, 0x5
    cmp eax, 0x3 
    je eqaul
    jmp neq
eqaul:
    mov eax, 0x1
    jmp exit
neq:
    mov eax, 0x0
exit: