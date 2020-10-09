package main

import "fmt"

func main() {

	arr := [5]int{1,3,4,5,6}
	// binary search 
	target := 4
	low := 0
	high := len(arr)-1

	for low <=  high {
		mid := (low+high)/2

		if arr[mid] == target {
			fmt.Println(mid)
			break
		} 
		if arr[mid] > target {
			high = mid
				
		} else {
			low = mid
		}
	}
}