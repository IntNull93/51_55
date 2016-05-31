#!/bin/bash 

function DEBUG()
{
    [ "$_DEBUG" == "on" ] && $@ || :
}

for i in {1..10}
do
    DEBUG echo $i
done

# _DEBUG=on ./debug_myself.sh   
# 在每一个需要打印调试信息的语句前加上DEBUG，若没有把_DEBUG=on传递给脚本，那么调试信息就不会打印出来。
# 在bash中，":"告诉shell不要进行任何操作
