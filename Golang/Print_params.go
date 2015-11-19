package main

import (
	"fmt"
)

func printarg(arg ...int) {
	for _, a := range arg {
		fmt.Printf("%d", a)
	}
	fmt.Print("\n")
}

func main() {
	printarg(1, 3, 5, 7, 9)
	printarg(1, 2, 3)
}
