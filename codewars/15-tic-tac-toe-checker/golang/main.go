package main

import (
	"fmt"
)

func IsSolved(board [3][3]int) int {
	// check lines and diagonales
	for i := 0; i < 2; i++ {
		y := 0
		x := 0
		for n := 0; n < 3; n++ {
			// check horizontal
			if i == 0 {
				if board[y][x] != 0 && board[y][x] == board[y][x+1] && board[y][x] == board[y][x+2] {
					return board[y][x]
				}
				y++
			}
			// check vertical
			if i == 1 {
				if board[y][x] != 0 && board[y][x] == board[y+1][x] && board[y][x] == board[y+2][x] {
					return board[y][x]
				}
				x++
			}
		}
		// check diagonal
		first_diag := board[0][0] != 0 && board[0][0] == board[1][1] && board[0][0] == board[2][2]
		sec_diag := board[0][2] != 0 && board[0][2] == board[1][1] && board[0][2] == board[2][0]
		if first_diag || sec_diag {
			return board[1][1]
		}
	}
	// check if the game not finish
	for _, v := range board {
		for _, c := range v {
			if c == 0 {
				return -1
			}
		}
	}
	return 0
}

func IsSolved3(board [3][3]int) int {
	b := append(board[0][:], append(board[1][:], board[2][:]...)...)
	for _, x := range [][3]int{
		{0, 1, 2},
		{3, 4, 5},
		{6, 7, 8},
		{0, 3, 6},
		{1, 4, 7},
		{2, 5, 8},
		{0, 4, 8},
		{2, 4, 6}} {
		p, q, r := x[0], x[1], x[2]
		if b[p] != 0 && b[p] == b[q] && b[q] == b[r] {
			return b[p]
		}
	}
	var n int
	for _, x := range b {
		n += x
	}
	if n == 13 {
		return 0
	} else {
		return -1
	}
}

func IsSolved2(a [3][3]int) int {
	if a[0][0] != 0 && a[0][0] == a[0][1] && a[0][1] == a[0][2] {
		return a[0][0]
	}
	if a[1][0] != 0 && a[1][0] == a[1][1] && a[1][1] == a[1][2] {
		return a[1][0]
	}
	if a[2][0] != 0 && a[2][0] == a[2][1] && a[2][1] == a[2][2] {
		return a[2][0]
	}
	if a[0][0] != 0 && a[0][0] == a[1][0] && a[1][0] == a[2][0] {
		return a[0][0]
	}
	if a[0][1] != 0 && a[0][1] == a[1][1] && a[1][1] == a[2][1] {
		return a[0][1]
	}
	if a[0][2] != 0 && a[0][2] == a[1][2] && a[1][2] == a[2][2] {
		return a[0][2]
	}
	if a[0][0] != 0 && a[0][0] == a[1][1] && a[1][1] == a[2][2] {
		return a[0][0]
	}
	if a[0][2] != 0 && a[0][2] == a[1][1] && a[1][1] == a[2][0] {
		return a[0][2]
	}
	for _, d := range a {
		if d[0] == 0 || d[1] == 0 || d[2] == 0 {
			return -1
		}
	}
	return 0
}

func main() {
	fmt.Println(IsSolved([3][3]int{
		{0, 0, 1},
		{2, 2, 2},
		{2, 1, 0}}))
}
