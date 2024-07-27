package main

import (
	"fmt"
	"strings"
)

func solution(str, ending string) bool {
	// Obtener la longitud de todas las cadenas
	lenStr := len(str)
	lenEnd := len(ending)

	// Comprobación para evitar "index out of range [-1]"
	if lenStr < lenEnd {
		return false
	}

	// Recorrer el arreglo desde donde debería empezar el la comprobación
	for i := 0; i < lenEnd; i++ {
		// Si algún caracter no es igual entonces se retorna falso
		if str[lenStr-lenEnd+i] != ending[i] {
			return false
		}
	}

	return true
}

func solution2(str, ending string) bool {
	return strings.HasSuffix(str, ending)
}

func solution3(str, ending string) bool {
	return len(str) >= len(ending) && str[len(str)-len(ending):] == ending
}

func solution4(str, ending string) bool {
	// Your code here!
	if len(ending) > len(str) {
		return false
	}

	return str[len(str)-len(ending):] == ending
}

func solution5(a, b string) bool {
	la, lb := len(a), len(b)
	if la > 1 && la > lb {
		return a[la-lb:] == b
	}
	return a == b || lb == 0
}

func main() {
	var solution6 = HasSuffix
	fmt.Println(solution6("banana", "ana"))
}
