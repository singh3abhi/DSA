#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(N)
*/

void reverse(vector<int>& nums, int left, int right) {
  if (left >= right) {
    return;
  }

  int t = nums[left];
  nums[left] = nums[right];
  nums[right] = t;

  reverse(nums, left + 1, right - 1);
}

vector<int> reverseArray(vector<int>& nums) {
  // your code goes here
  int left = 0;
  int right = nums.size() - 1;

  reverse(nums, left, right);
  return nums;
}

int main() {}