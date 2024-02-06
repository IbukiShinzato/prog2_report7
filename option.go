package main

import (
	"fmt"
	"time"
)

func main() {
	scores := [5]int{0, 60, 70, 100, 90}
	// 計測開始
	start := time.Now()

	printarray(scores[:], len(scores), "scores")
	sort(scores[:], len(scores))
	printarray(scores[:], len(scores), "results")

	end := time.Now()
	// 経過時間を計算し、秒に変換
	elapsedTime := end.Sub(start).Seconds()
	// 経過時間を出力
	fmt.Printf("処理時間 : %f 秒\n", elapsedTime)
}

func printarray(scores []int, size int, str string) {
	fmt.Printf("%s = ", str)
	for i := 0; i < size; i++ {
		fmt.Printf("%d ", scores[i])
	}
	fmt.Printf("\n")
}

func sort(scores []int, size int) {
	for i := 0; i < size; i++ {
		for j := i + 1; j < size; j++ {
			if scores[i] < scores[j] {
				cnt := scores[i]
				scores[i] = scores[j]
				scores[j] = cnt
			}
		}
	}
}
