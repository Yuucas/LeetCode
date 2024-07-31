'''
https://leetcode.com/problems/length-of-last-word/description/
'''

class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        spaces = s.split(" ")
        for string in reversed(spaces):
            if string:
                return len(string)
