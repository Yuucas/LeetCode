#include <iostream>
#include <string>
#include <unordered_set>

int longestSubstring(std::string s) {
  int n = s.length();
  int ans = 0;
  std::unordered_set<char> set;
  int i = 0;
  int j = 0;
  while (i < n && j < n) {
    if (set.find(s[j]) == set.end()) {
      set.insert(s[j++]);
      ans = std::max(ans, j - i);
    } else {
      set.erase(s[i++]);
    }
  }
  return ans;
}

int main() {
  std::string s = "abcabcbb";
  std::cout << longestSubstring(s) << std::endl;  // Outputs 3
  return 0;
}
