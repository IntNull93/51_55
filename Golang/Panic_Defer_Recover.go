package main

import (
	"fmt"
)

func f() {
	defer func() {
		fmt.Println("inner func defer")
	}()
	fmt.Println("a")

	panic(3)

	//panic方法后的方法、defer定义的方法都无法执行，也包括函数f()后面的任何方法以及defer定义的方法
	defer func() {
		fmt.Println("inner func defer 1")
	}()
	//以下2个不能执行
	fmt.Println("b")
	fmt.Println("c")
}
func main() {

	fmt.Println("Hello World!")

	defer func() {
		fmt.Println("Main_func_defer_1")
	}()

	defer func() {
		fmt.Println("d")
		if err := recover(); err != nil {
			fmt.Println(err)
		}
		fmt.Println("e")
	}()

	defer func() {
		fmt.Println("Main_func_defer_2")
	}()

	f()
	//在f()函数以后的defer函数也不能执行

	defer func() {
		fmt.Println("Main_func_defer_3")
	}()
}


root@ubuntu:/home/luokj/Go/panic_recover# go build Panic_Defer_Recover.go 
root@ubuntu:/home/luokj/Go/panic_recover# ./Panic_Defer_Recover 
Hello World!
a
inner func defer
Main_func_defer_2
d
3
e
Main_func_defer_1
