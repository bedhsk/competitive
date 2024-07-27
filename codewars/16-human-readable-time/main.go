package main

import "fmt"

func HumanReadableTime(n int) string {
	return fmt.Sprintf("%02d:%02d:%02d", n/3600, n%3600/60, n%60)
}

func main() {
	fmt.Println(HumanReadableTime(3600))
	fmt.Println(HumanReadableTime(359999))
}
