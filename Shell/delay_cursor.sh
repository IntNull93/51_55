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

#tput sc �洢���λ��
#tput ed ����ӵ�ǰ���λ�õ���β֮�������
#tput rc �ָ����λ��


