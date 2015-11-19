package main

import (
	"fmt"
)

/*
func stack_push(arr []int, x int) {
	if len(arr) == cap(arr) {
		fmt.Printf("The stack is FULL!\nAlerady %d elements \nExpand the capcity \n", len(arr))
		arr[len(arr)] = x
		fmt.Printf("now it size has %d", cap(arr))
		for i, j := range arr {
			fmt.Printf("the new stack [%d,%s]\n", i, j)
		}
	}
}

func stack_pop(arr []int) {

}

func main() {
	arr := make([]int, 10, 10)
	fmt.Println("The stack store:", arr)
	fmt.Print("push one element 'x' in stack :\n")
	stack_push(arr, 'x')
	fmt.Print("pop stack order:\n")
	stack_pop(arr)
}
*/
type stack struct {
	i    int
	data [10]int
}

func (s *stack) push(k int) {
	s.data[s.i] = k
	s.i++
}
func (s *stack) pop() int {
	s.i--
	return s.data[s.i]
}

func main() {
	var s stack
	fmt.Printf("stack %v\n", s)
	s.push(25)
	s.push(14)
	s.push(25)
	fmt.Printf("stack %v\n", s)
	for i, j := range s.data {
		fmt.Printf("stack [%d:%d]\n", i, j)
	}
}
