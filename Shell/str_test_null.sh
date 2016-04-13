#! /bin/bash 

if [ -n $string1 ];then
    echo "String \"string1\" is not null."
else
    echo "String \"string1\" is null."
fi

echo

if [ -n "$string1" ];then
    echo "String \"string1\" is not null."
else
    echo "String \"string1\" is null."
fi

echo

if [ $string1 ];then
    echo "String \"string1\" is not null."
else
    echo "String \"string1\" is null."
fi

echo

string1=initialized
if [ $string1 ];then
    echo "String \"string1\" is not null."
else
    echo "String \"string1\" is null."
fi

string1="a = b"


if [ $string1 ];then
    echo "String \"string1\" is not null."
else
    echo "String \"string1\" is null."
fi


#在一个混合测试中，即使 使用 引用的字符串变量 也可能还不够
#若$string为空的话，[ -n "$String" -o "$a" = "$b" ]可能会在某些版本的bash中产生错误
#安全的做法是，附加一个额外的字符给可能的空变量，[ "x$string" != x -o "x$a" = "x$b" ] (x字符可以相互抵消)


