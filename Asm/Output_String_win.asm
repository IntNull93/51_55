assume CS:code,DS:data;

data segment
    string db 'Hello World','$';
data ends

code segment
start:
    mov ax,date;
    mov ds,ax;
    mov dx,offset string;
    mov ah,09h;
    int 21h;
    mov ah,4ch;
    int 21h
code ends;
end start;


