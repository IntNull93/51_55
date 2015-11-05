#!/bin/sh

select ch in "xx" "yy" "zz"
do 
case $ch in
"xx")
	echo "start something"
	;;
"yy")
	echo "stop something"
	;;
"zz")
	echo "exit"
	break;
	;;
*)
	echo "Ignore"
	;;
esac	
done;

