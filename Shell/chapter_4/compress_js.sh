#!/bin/bash 

compress()
{
    cat $1 | \
        tr -d '\n\t' | tr -s ' ' \
        | sed 's:/\*.*\*/::g' \
        | sed 's/ \?\([{}();,:]\) \?/\1/g' 
}


uncompress()
{
    cat $1 | \
        sed 's/;/;\n/g; s/{/{\n\n/g; s/}/\n\n}/g'
}

if [ $# != 1 ];then
    echo "Usage : $0 filename"
    exit 0
fi

echo "Make your chioces:"

select func in compress uncompress
do
    case $func in
        "compress")
            compress;;
        "uncompress")
            uncompress;;
    esac
    break
done



