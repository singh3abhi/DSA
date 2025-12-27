#include <bits/stdc++.h>
using namespace std;

/*
TC - O(T * M^N)
SC - O(T)
*/
void solve(vector<vector<int>>& res, vector<int>& candidates, vector<int>& v, int i, int target) {
  if (target == 0) {
    res.push_back(v);
    return;
  }

  if (i < 0 || target < 0)
    return;

  // Not pick
  solve(res, candidates, v, i - 1, target);

  // Pick
  int val = candidates[i];
  v.push_back(val);
  solve(res, candidates, v, i, target - val);

  v.pop_back();
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
  vector<vector<int>> res;
  vector<int> v;
  int n = candidates.size();
  int i = n - 1;
  solve(res, candidates, v, i, target);

  return res;
}

int main() {}