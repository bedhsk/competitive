package main

import (
	"fmt"
	"strings"
)

func ToCamelCase(s string) string {
	next_s := ""
	for i := 0; i < len(s); i++ {
		if i > 0 && s[i-1] == '-' || i > 0 && s[i-1] == '_' {
			continue
		}
		if s[i] != '-' && s[i] != '_' {
			next_s += string(s[i])
		} else {
			next_s += strings.ToUpper(string(s[i+1]))
		}
	}
	return next_s
}

// No imports
func ToCamelCase3(s string) string {
	res := []byte{}
	for i := 0; i < len(s); i++ {
		if s[i] != 95 && s[i] != 45 {
			res = append(res, s[i])
		} else {
			i++
			if s[i] > 96 {
				res = append(res, s[i]-32)
			} else {
				res = append(res, s[i])
			}
		}
	}

	return string(res)
}

func main() {
	fmt.Println(ToCamelCase("hola-mundo_maicra"))
}
