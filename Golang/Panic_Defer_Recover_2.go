package main

import (
	"fmt"
)

func f() {
	defer func() {
		fmt.Println("inner func defer")
		if err := recover(); err != nil {
			fmt.Println(err, " hehe")
		}
	}()

	fmt.Println("a")

	panic(3)

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
	
	defer func() {
		fmt.Println("Main_func_defer_3")
	}()
}


[ `run` | done: 242.1968ms ]
	Hello World!
	a
	inner func defer
	3  hehe
	Main_func_defer_3
	Main_func_defer_2
	d
	e
	Main_func_defer_1
