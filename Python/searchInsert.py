'''
https://leetcode.com/problems/search-insert-position/description/
'''

class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        if target in nums:
            low = 0
            high = len(nums)

            while low <= high:
                mid = (high + low) // 2
                if nums[mid] == target:
                    return mid
                elif nums[mid] < target:
                    low = mid + 1
                else:
                    high = mid - 1
            return -1
        else:

            if target > nums[-1]:
                return len(nums)

            low = 0
            high = len(nums)

            while low <= high:
                mid = (high + low) // 2
                if nums[mid] < target:
                    low = mid + 1
                else:
                    high = mid - 1
            
            return low
