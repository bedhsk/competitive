package main

import (
	"fmt"
	"strings"
)

func reverse(str string) (result string) {
	for _, v := range str {
		result = string(v) + result
	}
	return
}

func ReverseWords(str string) string {
	ans := ""
	arr := strings.Split(str, " ")
	for _, v := range arr {
		ans += reverse(v)
		ans += " "
	}
	ans = strings.TrimSuffix(ans, " ")
	return ans
}

// Another solution without imports
// AWESOME!!!
func ReverseWords2(str string) string {
	var rev string
	var word string

	for _, i := range str {
		if i == ' ' {
			rev = rev + word + " " // Adds word and space to result
			word = ""              // Empties word variable
		} else {
			word = string(i) + word // Adds letter to temporary word variable
		}
	}

	return rev + word // reverse those words
}

func main() {
	fmt.Println(ReverseWords("Hello  World ") + "|")
}
