#! /bin/bash

#wstrings.sh: "word-strings"

ARGS=1
E_BADARGS=65
E_NOFILE=66

if [ $# -ne $ARGS ];then
    echo "Usage: `basename $0` filename"
    exit $E_BADARGS
fi

if [ ! -f "$1" ];then
    echo "File \"$1\" does not exist."
    exit $E_NOFILE
fi

MINSTRLEN=3
WORDFILE=/usr/share/dict/words

wlist=`strings "$1" | tr A-Z a-z | tr '[:space:]' Z | \
    tr -cs '[:alpha:]' Z | tr -s '\173-\377' Z | tr Z ' '`  

for word in $wlist
do
    strlen=${#word}
    if [ "$strlen" -lt "$MINSTRLEN" ];then
        continue
    fi

    grep -Fw $word "$WORDFILE"
done

exit $?
