#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(1)
*/

int optimal(vector<int>& nums) {
  // your code goes here
  int first = INT_MIN;
  int second = INT_MIN;

  for (int val : nums) {
    if (val > first) {
      second = first;
      first = val;
    } else if (val > second && val != first) {
      second = val;
    }
  }

  if (second == INT_MIN)
    return -1;
  return second;
}

/*
TC - O(N + NlogN)
SC - O(1)
*/

int secondLargestElement(vector<int>& nums) {
  // your code goes here
  int n = nums.size();

  if (n < 2) {
    return -1;
  }

  sort(nums.begin(), nums.end());

  int largest = nums.back();

  int secondLargest = -1;

  for (int i = n - 1; i >= 0; i--) {
    if (nums[i] != largest) {
      secondLargest = nums[i];
      break;
    }
  }

  return secondLargest;
}

int main() {}