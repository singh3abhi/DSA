#include <bits/stdc++.h>
using namespace std;

/*
TC - O(2^N)
SC - O(N)
*/
bool solve(vector<int>& nums, int i, int k) {
  if (i > nums.size() || k < 0) {
    return false;
  }

  if (k == 0)
    return true;

  return solve(nums, i + 1, k - nums[i]) || solve(nums, i + 1, k);
}
bool checkSubsequenceSum(vector<int>& nums, int k) {
  // your code goes here
  return solve(nums, 0, k);
}

int main() {}