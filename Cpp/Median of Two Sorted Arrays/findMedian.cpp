#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;


double findMedian(vector<int>& nums) {
  int n = nums.size();
  if (n % 2 == 0) {
    // If the size of the array is even, return the average of the two middle elements
    nth_element(nums.begin(), nums.begin() + n / 2 - 1, nums.end());
    int a = nums[n / 2 - 1];
    nth_element(nums.begin(), nums.begin() + n / 2, nums.end());
    int b = nums[n / 2];
    return (a + b) / 2.0;
  } else {
    // If the size of the array is odd, return the middle element
    nth_element(nums.begin(), nums.begin() + n / 2, nums.end());
    return nums[n / 2];
  }
}



int main() {
    
  vector<int> a = {1, 3, 5};
  vector<int> b = {2, 4, 6};
  vector<int> c(a.size() + b.size());  // Create an empty vector to hold the merged array

  merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());  // Merge and sort the arrays
    
  cout << findMedian(c) << endl;  // Outputs: 2.5

}
