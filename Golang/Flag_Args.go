package main

import (
	"fmt"
	"flag"
)

func main() {
	flag.Parse()
	fmt.Printf("%s,%d\n", flag.Args(),flag.NArg())
	for i,_:=range flag.Args(){
		fmt.Printf("arg[%d]=%s\n", i, flag.Arg(i))
	}
}
root@ubuntu:/home/luokj/Go/flag# ./flag_parse 1 2 3 4
[1 2 3 4],4
arg[0]=1
arg[1]=2
arg[2]=3
arg[3]=4
