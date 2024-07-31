'''
https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
'''

class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        l_needle = len(needle)
        l_haystack = len(haystack)
        idx = -1

        if l_haystack == l_needle and haystack == needle:
            idx = 0
        elif needle not in haystack:
            return idx
        
        try:
            for h in range(l_haystack-l_needle+1):
                if haystack[h:h+l_needle] == needle:
                    idx = h
                    break
        except:
            pass
        
        return idx
