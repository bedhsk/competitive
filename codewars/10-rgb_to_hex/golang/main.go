package main

import (
	"fmt"
	"strings"
)

func RGB(r, g, b int) string {
	ans := ""
	rgb := [...]int{r, g, b}
	hex := strings.Split("0 1 2 3 4 5 6 7 8 9 A B C D E F", " ")

	for _, v := range rgb {
		if v < 0 {
			v = 0
		} else if v > 255 {
			v = 255
		}
		ans += hex[v/16] + hex[v%16]
	}

	return ans
}

// Another solution
func getValid(x int) int {
	switch {
	case x < 0:
		return 0
	case x > 255:
		return 255
	default:
		return x
	}
}

// Another solution
func RGB3(r, g, b int) string {
	return Limit(r) + Limit(g) + Limit(b)
}
func Limit(rgb int) string {
	if rgb < 0 {
		rgb = 0
	}
	if rgb > 255 {
		rgb = 255
	}
	return fmt.Sprintf("%02X", rgb)
}

func RGB2(r, g, b int) string {
	res := fmt.Sprintf("%02X%02X%02X", getValid(r), getValid(g), getValid(b))
	fmt.Println(res)
	return res
}

func main() {
	fmt.Println(RGB(255, 255, 255))
	fmt.Println(RGB(0, 0, 0))
	fmt.Println(RGB(300, -50, 124))
}
