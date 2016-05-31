#!/bin/bash 

echo -n Count:
tput sc

count=0;
while true;
do
    if [ $count -lt 20 ];
    then
        let count++;
        sleep 0.5;
        tput rc
        tput ed
        echo -n $count;
    else exit 0
    fi
done

#tput sc 存储光标位置
#tput ed 清除从当前光标位置到行尾之间的内容
#tput rc 恢复光标位置


