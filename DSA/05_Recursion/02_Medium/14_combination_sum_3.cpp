#include <bits/stdc++.h>
using namespace std;

/*
TC - O(2^9 * k)
SC - O(K)
*/
void solve(vector<vector<int>>& res, vector<int>& v, int k, int n, int i) {
  if (n == 0 && k == 0) {
    res.push_back(v);
    return;
  }

  if (k < 0 || n < 0 || i > 9) {
    return;
  }

  // Not Pick
  solve(res, v, k, n, i + 1);

  // Pick
  v.push_back(i);
  solve(res, v, k - 1, n - i, i + 1);
  v.pop_back();
}

vector<vector<int>> combinationSum3(int k, int n) {
  vector<vector<int>> res;
  vector<int> v;

  solve(res, v, k, n, 1);

  return res;
}

int main() {}