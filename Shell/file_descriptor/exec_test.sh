#!/bin/sh   


#read
echo xxxxxxxxxxxx > xx.txt
exec number<xx.txt
cat<&number


#write  截断模式
exec number>xx.txt
echo newline >&number
cat xx.txt


#write  追加模式
exec number>>xx.txt
echo appended line >&number
cat xx.txt


#若要再次使用自定义文件描述符，则需要用exec重新分配文件描述符

