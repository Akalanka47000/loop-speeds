package main

import (
	"fmt"
	"time"
)

func main() {
	var totalTime float64 = 0

	var testCases int64 = 100

	var i int64 = 0

	for ;i < testCases; i++ {
		start := time.Now()
		for j := 0; j < 1000000; j++ {
			_ = j
		}
		totalTime += time.Since(start).Seconds()
	}

	fmt.Println(totalTime/float64(testCases))
}
