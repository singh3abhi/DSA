#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(N)
*/

bool helper(vector<int>& nums, int index) {
  if (index >= nums.size() - 1) {
    return true;
  }

  if (nums[index + 1] < nums[index]) {
    return false;
  }

  return helper(nums, index + 1);
}
bool isSorted(vector<int>& nums) {
  // your code goes here

  return helper(nums, 0);
}

int main() {}