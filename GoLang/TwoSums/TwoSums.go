func twoSum(nums []int, target int) []int {
    for i := 0; i < len(nums); i++ {
		for y := 0; y < len(nums); y++ {
			if nums[i]+nums[y] == target && i != y {
			return []int{i, y}
			}
		}
	}
    panic("Couldn't Find!!!")
}
