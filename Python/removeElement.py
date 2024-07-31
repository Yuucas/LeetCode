'''
https://leetcode.com/problems/remove-element/description/
'''

class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        for num in reversed(nums):
            if num == val:
                nums.remove(num)
        return len(nums)
