'''
https://leetcode.com/problems/valid-parentheses/description/
'''

class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        dictionary = {'(':')', '{':'}', '[':']'}
        stack = []

        for brackets in s:
            if brackets in dictionary:
                stack.append(brackets)
                print(stack)
            elif len(stack) == 0 or dictionary[stack.pop()] != brackets:
                return False
        return len(stack) == 0
