.globl main

#ifndef GNUGCC
    .globl _start
    _start:
#endif

main:
    .ascii "Hello World"
    movl $2,%eax
    int $0x80

