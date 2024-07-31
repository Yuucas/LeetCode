func isPalindrome(x int) bool {
	rev := 0
	var num = x
	var stat bool = true
	for x > 0 {
		remainder := x % 10
		rev *= 10
		rev += remainder
		x /= 10
	}
	if rev == num {
		return stat
	} else {
		stat = false
		return stat
	}
}
