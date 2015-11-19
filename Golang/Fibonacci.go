package main

import (
	"fmt"
)

func Fibonacci(x int) {
	//.\chapter3_Q&A5.go:8: invalid array bound x
	//list := [x]int{}
	list := make([]int, x)
	list[0], list[1] = 1, 1
	fmt.Printf("[0,1]\n[1,1]\n")
	time := 2
	for time < x {
		list[time] = list[time-2] + list[time-1]
		fmt.Printf("[%d,%d]\n", time, list[time])
		time++
	}
	fmt.Printf("%d", list)
}

func main() {
	Fibonacci(20)
}
