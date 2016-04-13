#!/bin/bash   

#在关联数组中，可以用任意的文本作为数组索引，前提是使用声明语句将一个变量名声明为关联数组

#declare -A array_name

#1
#array_name=([index1]=val1 [index2]=val2)


#2
#array_name[index1]=val1
#array_name[index2]=val2

declare -A fruits_value

fruits_value=([apple]='100 dollars' [orange]='150 dollars' [pear]='50 dollars' [watermelon]='80 dollars' [juice]='30 dollars')

echo "Apple costs ${fruits_value[apple]}"


#列出数组索引

echo ${!fruits_value[*]}

