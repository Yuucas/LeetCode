'''
https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
'''

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        nums[:] = sorted(set(nums))
        return len(nums)
