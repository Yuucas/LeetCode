// LongestCommonPrefix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
#include <vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& s) {
        int ans = s[0].length(), n = s.size();
        for (int i = 1; i < n; i++) {
            int j = 0;
            while (j < s[i].length() && s[i][j] == s[0][j])j++;
            ans = std::min(ans, j);
        }
        return s[0].substr(0, ans);
    }
};



int main()
{
    Solution Sol;
    std::vector<std::string> vec = { "flower","flow","flight" };
    std::cout << Sol.longestCommonPrefix(vec) << std::endl;

}
