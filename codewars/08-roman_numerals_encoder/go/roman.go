package main

import (
	"fmt"
	"sort"
	"strings"
)

func Solution(number int) string {
	result := ""
	roman := map[int]string{
		1000: "M",
		900:  "CM",
		500:  "D",
		400:  "CD",
		100:  "C",
		90:   "XC",
		50:   "L",
		40:   "XL",
		10:   "X",
		9:    "IX",
		5:    "V",
		4:    "IV",
		1:    "I",
	}

	keys := make([]int, 0, len(roman))
	for k := range roman {
		keys = append(keys, k)
	}
	sort.Sort(sort.Reverse(sort.IntSlice(keys)))

	aux := number
	for _, k := range keys {
		for aux-k >= 0 {
			result += roman[k]
			aux -= k
		}
	}

	return result
}

func Solution2(n int) (res string) {
	m := map[int][]string{
		1000: {"", "M", "MM", "MMM", "MM"},
		100:  {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
		10:   {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
		1:    {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
	}
	res += m[1000][n/1000]
	n %= 1000
	res += m[100][n/100]
	n %= 100
	res += m[10][n/10]
	n %= 10
	res += m[1][n/1]
	return res
}

func Solution3(n int) string {
	if n <= 0 {
		return ""
	}
	var sb strings.Builder
	for i, v := range []int{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1} {
		for n >= v {
			n -= v
			sb.WriteString([]string{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"}[i])
		}
	}
	return sb.String()
}

func main() {
	fmt.Println(Solution(4))
	fmt.Println(Solution(1888))
	fmt.Println(Solution(182))
}
