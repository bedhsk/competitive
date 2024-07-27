package main

import (
	"fmt"
	"strings"
)

func TowerBuilder(nFloors int) []string {
	tower := []string{}
	for i := 1; i <= nFloors; i++ {
		stars := strings.Repeat("*", 2*i-1)
		spaces := strings.Repeat(" ", nFloors-i)
		row := spaces + stars + spaces
		tower = append(tower, row)
		fmt.Println(spaces, stars)
		spaces = ""
	}
	return tower
}

func TowerBuilder2(nFloors int) []string {
	tow := make([]string, nFloors)
	for i := 0; i < nFloors; i++ {
		spaces := strings.Repeat(" ", nFloors-(i+1))
		blocks := strings.Repeat("*", i*2+1)
		tow[i] = spaces + blocks + spaces
	}
	return tow
}

func TowerBuilder3(n int) []string {
	r := make([]string, n)
	for i := 0; i < n; i++ {
		s := strings.Repeat(" ", (2*n-1)/2-i)
		r[i] = s + strings.Repeat("*", 2*i+1) + s
	}
	return r
}

func main() {
	TowerBuilder(6)
	fmt.Println(TowerBuilder(3))
}
