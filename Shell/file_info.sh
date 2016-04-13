#!/bin/bash 

if [ $# -ne 1 ];then
    echo "Usage is $0 basepath";
    exit
fi
path=$1

declare -A statarray;
#declare link-array

while read line;
do
    ftype=`file -b "$line" | cut -d, -f1`
    let statarray["$ftype"]++;
done < <(find $path -type f -print)
# <<< "`find $path -type f -print`"

echo ========================== File type and Counts ==========================
for ftype in "${!statarray[@]}";
do
    echo $ftype : ${statarray["$ftype"]}
done


