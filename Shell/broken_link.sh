#! /bin/bash 

#用以找出断掉的符号链接文件并且输出它们所指向的文件。以便它们可以把输出提供给xargs进行处理
#eg. broken_link.sh /somedir /someotherdir | xargs rm

#eg.
#
#find "somedir" -type l -print0 | xargs -r0 file | grep "broken symbolic" | sed -e 's/^\|: *broken symbolic.*$/"/g'
#

#谨防在/proc文件系统和任何死循环链接中使用

#若没有参数被传递到脚本中，就使用当前目录

################################################################
[ $# -eq 0 ] && directorys=`pwd` || directorys=$@

linkchk(){
    for element in $1/*;do
        [ -h "$element" -a ! -e "$element" ] && echo \"$element\"
        [ -d "$element" ] && linkchk $element
    done
# -h 用以测试符号链接 -d 用以测试目录
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



