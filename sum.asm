section .text

global _start

_start:

    mov     eax, [x]
    sub     eax, '0'
    mov     ebx, [y]
    sub     ebx, '0'
    add     eax, ebx
    add     eax, '0'

    mov     [sum], eax

    mov     ecx, msg
    mov     edx, len
    mov     ebx, 1
    mov     eax, 4
    int     0x80

    mov     ecx, sum
    mov     edx, 1
    mov     ebx, 1
    mov     eax, 4
    int     0x80

    mov     eax, 1
    int     0x80

section .data
    x db '9'
    y db '60'
    msg db  "the sum of x and y is "
    len equ $ - msg

segment .bss

    sum resb 1