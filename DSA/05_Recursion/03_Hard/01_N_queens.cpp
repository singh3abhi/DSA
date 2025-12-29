#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N^N) OR O(N!)
SC - O(N) We go n rows deep in stack
*/

bool isSafe(vector<string>& board, int row, int col, int n) {
  int i = row;
  int j = col;

  // Moving top
  while (row >= 0) {
    if (board[row][col] == 'Q') {
      return false;
    }
    row--;
  }

  // Moving top - right
  row = i;
  while (row >= 0 && col < n) {
    if (board[row][col] == 'Q') {
      return false;
    }
    row--;
    col++;
  }

  // Moving top - left
  row = i;
  col = j;
  while (row >= 0 && col >= 0) {
    if (board[row][col] == 'Q') {
      return false;
    }
    row--;
    col--;
  }

  return true;
}

void solve(vector<vector<string>>& res, vector<string>& board, int row, int n) {
  if (row == n) {
    // We placed all n queens
    res.push_back(board);
    return;
  }

  for (int col = 0; col < n; col++) {
    if (isSafe(board, row, col, n)) {
      board[row][col] = 'Q';
      solve(res, board, row + 1, n);
      board[row][col] = '.';
    }
  }
}

vector<vector<string>> solveNQueens(int n) {
  vector<vector<string>> res;
  vector<string> board;

  string str;
  for (int i = 0; i < n; i++) {
    str += '.';
  }

  for (int i = 0; i < n; i++) {
    board.push_back(str);
  }

  solve(res, board, 0, n);

  return res;
}

int main() {}