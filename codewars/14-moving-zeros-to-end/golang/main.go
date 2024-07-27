package main

import "fmt"

func MoveZeros(arr []int) []int {
	ans := []int{}
	z := []int{}
	for _, v := range arr {
		if v == 0 {
			z = append(z, 0)
		} else {
			ans = append(ans, v)
		}
	}
	return append(ans, z...)
}

// Other solution
func MoveZeros2(arr []int) []int {
	res := make([]int, len(arr))
	ind := 0
	for i := 0; i < len(arr); i++ {
		if arr[i] != 0 {
			res[ind] = arr[i]
			ind++
		}
	}
	return res
}

func main() {
	fmt.Println(MoveZeros([]int{1, 2, 3, 4, 5}))
	fmt.Println(MoveZeros([]int{0, 1, 2, 3, 4, 5}))
}
