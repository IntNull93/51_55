#! /bin/bash

E_NOARGS=0
E_ARGERROR=66
E_WRONG_FILE_TYPE=67

if [ $# -eq "$E_NOARGS" ];then
    echo "Usage: `basename $0` C-program-file" >&2
    exit $E_ARGERROR
fi

#type=`file $1 | awk 'BEGIN{FS="."}{print $2}' | awk 'BEGIN{FS=":"}{print $1}'`
type=`file $1 | awk '{print $2}'`

correct_type="C"

if [ "$type" != "$correct_type" ];then
    echo
    echo "This script works on C program files only."
    echo
    exit $E_WRONG_FILE_TYPE
fi

sed '/^\/\//d' $1 
#sed '/^\/\*.*\*\/$/d' $1
#sed '/^\/\*/d' 1.txt 
#sed '/\*\/$/d' 1.txt

exit 0

usage(){
    echo "Usage: `basename $0` C-program-file" >&2
    exit 1
}

WERID=`echo -n -e '\377'`
[[ $# -eq 1 ]] || usage
case `file "$1"` in
    *"C program text"*) sed -e "s%/\*%${WERID}%g;s%\*/%${WERID}%g" "$1" \
        | tr '\377\n' '\n\377' \
        | sed -ne 'p;n' \
        | tr -d '\n' | tr '\377' '\n';;
    *)usage;;
esac

#���������printf("/*");���ǻ�������
#
#��/* /*  xxxxx  */
#
#Ϊ�˴��������������(�ַ����е�ע�ͣ����� \",  \\" ..)Ψһ�ķ�������д��C������
#����ʹ��lex��yacc

exit 0


