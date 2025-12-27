#include <bits/stdc++.h>
using namespace std;

/*
TC - O(2^N)
SC - O(N)
*/
void solve(vector<int>& res, vector<int>& nums, int i, int sum) {
  if (i == nums.size()) {
    res.push_back(sum);
    return;
  }

  // Not pick
  solve(res, nums, i + 1, sum);

  // Pick
  solve(res, nums, i + 1, sum + nums[i]);
}
vector<int> subsetSums(vector<int>& nums) {
  // your code goes here
  vector<int> res;
  solve(res, nums, 0, 0);

  return res;
}

int main() {}