#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N * 2^N)
SC - O(N)
*/

void solve(vector<vector<int>>& res, vector<int>& nums, vector<int>& v, int index) {
  if (index == nums.size()) {
    res.push_back(v);
    return;
  }

  // Pick
  int val = nums[index];
  v.push_back(val);
  solve(res, nums, v, index + 1);
  v.pop_back();

  for (int j = index + 1; j < nums.size(); j++) {
    if (nums[j] != nums[index]) {
      solve(res, nums, v, j);
      return;
    }
  }

  solve(res, nums, v, nums.size());
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
  // your code goes here
  vector<vector<int>> res;
  vector<int> v;
  sort(nums.begin(), nums.end());

  solve(res, nums, v, 0);

  return res;
}

int main() {}