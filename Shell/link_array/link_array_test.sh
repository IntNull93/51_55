#!/bin/bash   

#�ڹ��������У�������������ı���Ϊ����������ǰ����ʹ��������佫һ������������Ϊ��������

#declare -A array_name

#1
#array_name=([index1]=val1 [index2]=val2)


#2
#array_name[index1]=val1
#array_name[index2]=val2

declare -A fruits_value

fruits_value=([apple]='100 dollars' [orange]='150 dollars' [pear]='50 dollars' [watermelon]='80 dollars' [juice]='30 dollars')

echo "Apple costs ${fruits_value[apple]}"


#�г���������

echo ${!fruits_value[*]}

