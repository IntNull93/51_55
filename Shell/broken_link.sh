#! /bin/bash 

#�����ҳ��ϵ��ķ��������ļ��������������ָ����ļ����Ա����ǿ��԰�����ṩ��xargs���д���
#eg. broken_link.sh /somedir /someotherdir | xargs rm

#eg.
#
#find "somedir" -type l -print0 | xargs -r0 file | grep "broken symbolic" | sed -e 's/^\|: *broken symbolic.*$/"/g'
#

#������/proc�ļ�ϵͳ���κ���ѭ��������ʹ��

#��û�в��������ݵ��ű��У���ʹ�õ�ǰĿ¼

################################################################
[ $# -eq 0 ] && directorys=`pwd` || directorys=$@

linkchk(){
    for element in $1/*;do
        [ -h "$element" -a ! -e "$element" ] && echo \"$element\"
        [ -d "$element" ] && linkchk $element
    done
# -h ���Բ��Է������� -d ���Բ���Ŀ¼
}

for directory in $directorys;do
    if [ -d $directory ];then
        linkchk $directory
    else
        echo "$directory in not a directory"
        echo "Usage: $0 dir1 dir2"
    fi 
done

exit 0



