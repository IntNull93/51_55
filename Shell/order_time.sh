#!/bin/bash 

start=$(date +%s)
#commands;
#statements;
counter=0
while [ "$counter" -lt "1000" ]
do
    counter=`expr $counter + 1`
#    echo $counter
done

end=$(date +%s)
echo $start
echo $end
difference=`expr $end - $start` 

echo Time taken to execute commands is $difference seconds

