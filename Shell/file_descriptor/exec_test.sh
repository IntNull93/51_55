#!/bin/sh   


#read
echo xxxxxxxxxxxx > xx.txt
exec number<xx.txt
cat<&number


#write  �ض�ģʽ
exec number>xx.txt
echo newline >&number
cat xx.txt


#write  ׷��ģʽ
exec number>>xx.txt
echo appended line >&number
cat xx.txt


#��Ҫ�ٴ�ʹ���Զ����ļ�������������Ҫ��exec���·����ļ�������

