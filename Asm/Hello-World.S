.section .text
.global _start

msg:
    .ascii "Hello World!\n"
msg_end:
    .equ len, msg_end - msg
    .equ SYS_write, 4
    .equ SYS_exit, 1

_start:

    mov $SYS_write, %eax    # system call number
    mov $1, %ebx            # file descriptor (stdout)
    mov $msg, %ecx          # message to write
    mov $len, %edx          # message length.
    int $0x80               # system call

    mov $SYS_exit, %eax     # system call number
    mov $0, %ebx            # exit (0)
    int $0x80               # system call
