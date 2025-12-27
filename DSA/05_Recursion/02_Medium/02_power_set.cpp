#include <bits/stdc++.h>
using namespace std;

/*
TC - O(2^N)
SC - O(N * 2^N)
*/
void helper(vector<vector<int>>& res, int h, int index, vector<int> curr, vector<int> nums) {
  if (h == nums.size()) {
    res.push_back(curr);
    return;
  }

  // Not Pick
  helper(res, h + 1, index + 1, curr, nums);

  // Pick
  curr.push_back(nums[index]);
  helper(res, h + 1, index + 1, curr, nums);

  curr.pop_back();
}
vector<vector<int>> powerSet(vector<int>& nums) {
  // your code goes here
  vector<vector<int>> res;

  helper(res, 0, 0, {}, nums);
  return res;
}

int main() {}