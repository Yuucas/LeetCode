func mergeTwoLists(l1 *ListNode, l2 *ListNode) *ListNode {
	// Create a new list to store the merged list
	var mergedList *ListNode

	// Initialize pointers for each list
	p1 := l1
	p2 := l2

	// Iterate through both lists and add the smaller element to the merged list
	for p1 != nil && p2 != nil {
		if p1.Val < p2.Val {
			mergedList = &ListNode{p1.Val, mergedList}
			p1 = p1.Next
		} else {
			mergedList = &ListNode{p2.Val, mergedList}
			p2 = p2.Next
		}
	}

	// Add the remaining elements from the other list to the merged list
	if p1 != nil {
		mergedList = &ListNode{p1.Val, mergedList}
		p1 = p1.Next
	} else if p2 != nil {
		mergedList = &ListNode{p2.Val, mergedList}
		p2 = p2.Next
	}

	// Reverse the merged list
	var reversedList *ListNode
	for mergedList != nil {
		reversedList = &ListNode{mergedList.Val, reversedList}
		mergedList = mergedList.Next
	}

	return reversedList
}
