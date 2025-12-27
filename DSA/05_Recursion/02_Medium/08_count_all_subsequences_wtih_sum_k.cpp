#include <bits/stdc++.h>
using namespace std;

/*
TC - O(2^N)
SC - O(N)
*/
int solve(vector<int>& nums, int i, int k, int sum) {
  if (i == nums.size()) {
    return k == sum ? 1 : 0;
  }

  // Not pick
  int notPick = solve(nums, i + 1, k, sum);

  // Pick
  int pick = 0;
  if (nums[i] + sum <= k) {
    pick = solve(nums, i + 1, k, sum + nums[i]);
  }

  return notPick + pick;
}
int countSubsequenceWithTargetSum(vector<int>& nums, int k) {
  // your code goes here
  return solve(nums, 0, k, 0);
}

int main() {}