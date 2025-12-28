#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N * M * 4 * 3^(L-1))
SC - O(L) L is length of string
*/
bool solve(vector<vector<char>>& board, string& word, int i, int j, int n, int m, int k) {
  if (k == word.size()) {
    return true;
  }

  if (i < 0 || i >= n || j < 0 || j >= m || board[i][j] == '0' || k > word.size() || word[k] != board[i][j]) {
    return false;
  }

  char ch = board[i][j];

  board[i][j] = '0';

  bool ans = false;
  ans |= solve(board, word, i - 1, j, n, m, k + 1);

  ans |= solve(board, word, i + 1, j, n, m, k + 1);

  ans |= solve(board, word, i, j - 1, n, m, k + 1);

  ans |= solve(board, word, i, j + 1, n, m, k + 1);

  board[i][j] = ch;

  return ans;
}

bool exist(vector<vector<char>>& board, string word) {
  int n = board.size();
  int m = board[0].size();

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (board[i][j] == word[0] && solve(board, word, i, j, n, m, 0)) {
        return true;
      }
    }
  }

  return false;
}

int main() {}