#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N*2^N)
SC - O(1)
*/
vector<vector<int>> subsets(vector<int>& nums) {
  int n = nums.size();
  int subsetsCount = 1 << n;

  vector<vector<int>> res;
  for (int mask = 0; mask < subsetsCount; mask++) {
    vector<int> subset;
    for (int i = 0; i < n; i++) {
      if (mask & (1 << i))
        subset.push_back(nums[i]);
    }

    res.push_back(subset);
  }

  return res;
}

int main() {}