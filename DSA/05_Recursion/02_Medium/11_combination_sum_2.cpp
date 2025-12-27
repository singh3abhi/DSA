#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N * 2^N)
SC - O(N)
*/

void solve(vector<vector<int>>& res, vector<int>& candidates, vector<int>& v, int index, int target) {
  if (target == 0) {
    res.push_back(v);
    return;
  }

  if (target < 0 || index < 0) {
    return;
  }

  // Pick
  int val = candidates[index];
  v.push_back(val);
  solve(res, candidates, v, index - 1, target - val);
  v.pop_back();

  // Not Pick : Skipping duplicates
  for (int j = index - 1; j >= 0; j--) {
    if (candidates[j] != candidates[index]) {
      solve(res, candidates, v, j, target);
      break;
    }
  }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
  vector<vector<int>> res;
  vector<int> v;

  sort(candidates.begin(), candidates.end());
  int i = candidates.size() - 1;
  solve(res, candidates, v, i, target);

  return res;
}

int main() {}