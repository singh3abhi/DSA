#include <bits/stdc++.h>
using namespace std;

/*
TC - O(4^(N * M))
SC - O(P * N * M) where P is the valid paths
*/

void solve(vector<vector<int>>& grid, vector<string>& res, int i, int j, int n, int m, string s) {
  if (i < 0 || i == n || j < 0 || j == m || grid[i][j] == 0) {
    return;
  }

  if (i == n - 1 && j == m - 1) {
    res.push_back(s);
    return;
  }

  grid[i][j] = 0;
  solve(grid, res, i + 1, j, n, m, s + 'D');
  solve(grid, res, i - 1, j, n, m, s + 'U');
  solve(grid, res, i, j + 1, n, m, s + 'R');
  solve(grid, res, i, j - 1, n, m, s + 'L');

  grid[i][j] = 1;
}

vector<string> findPath(vector<vector<int>>& grid) {
  // your code goes here
  int n = grid.size();
  int m = grid[0].size();

  vector<string> res = {};

  if (grid[0][0] == 0 || grid[n - 1][m - 1] == 0) {
    return res;
  }

  solve(grid, res, 0, 0, n, m, "");

  return res;
}

int main() {}