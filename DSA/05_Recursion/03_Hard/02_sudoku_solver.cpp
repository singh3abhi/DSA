#include <bits/stdc++.h>
using namespace std;

// Clean Code
/*
TC - O(9^E) where E is no of empty cells
SC - O(E)
*/
class Solution {
 public:
  bool isSafe(vector<vector<char>>& board, int row, int col, char digit) {
    for (int i = 0; i < 9; i++) {
      int bRow = (row / 3) * 3 + (i / 3);
      int bCol = (col / 3) * 3 + (i % 3);
      if (board[row][i] == digit || board[i][col] == digit || board[bRow][bCol] == digit) {
        return false;
      }
    }

    return true;
  }
  bool solve(vector<vector<char>>& board, int row, int col) {
    if (row == 9) {
      return true;
    }

    if (col == 9) {
      return solve(board, row + 1, 0);
    }

    if (board[row][col] != '.') {
      return solve(board, row, col + 1);
    }

    for (char digit = '1'; digit <= '9'; digit++) {
      if (isSafe(board, row, col, digit)) {
        board[row][col] = digit;
        bool ans = solve(board, row, col + 1);
        if (ans) {
          return true;
        }
      }
    }
    board[row][col] = '.';
    return false;
  }
  void solveSudoku(vector<vector<char>>& board) { solve(board, 0, 0); }
};

/*
TC - O(9^E) where E is no of empty cells
SC - O(E + 81 + 81 + 81)
*/
bool solve(vector<vector<char>>& board,
           vector<vector<bool>>& colGrid,
           vector<vector<bool>>& rowGrid,
           vector<vector<bool>>& boxGrid,
           int row,
           int col) {
  if (row == 9)
    return true;

  if (col == 9)
    return solve(board, colGrid, rowGrid, boxGrid, row + 1, 0);

  if (board[row][col] != '.')
    return solve(board, colGrid, rowGrid, boxGrid, row, col + 1);

  int box = (row / 3) * 3 + (col / 3);

  for (int val = 0; val < 9; val++) {
    if (!colGrid[col][val] && !rowGrid[row][val] && !boxGrid[box][val]) {
      board[row][col] = val + '1';
      colGrid[col][val] = true;
      rowGrid[row][val] = true;
      boxGrid[box][val] = true;

      if (solve(board, colGrid, rowGrid, boxGrid, row, col + 1)) {
        return true;
      }

      colGrid[col][val] = false;
      rowGrid[row][val] = false;
      boxGrid[box][val] = false;
      board[row][col] = '.';
    }
  }

  return false;
}

void solveSudoku(vector<vector<char>>& board) {
  vector<vector<bool>> colGrid(9, vector<bool>(9, false));
  vector<vector<bool>> rowGrid(9, vector<bool>(9, false));
  vector<vector<bool>> boxGrid(9, vector<bool>(9, false));

  int n = board.size();
  int m = board[0].size();

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char ch = board[i][j];
      if (ch == '.') {
        continue;
      }
      int box = (i / 3) * 3 + (j / 3);
      colGrid[j][ch - '1'] = true;
      rowGrid[i][ch - '1'] = true;
      boxGrid[box][ch - '1'] = true;
    }
  }

  solve(board, colGrid, rowGrid, boxGrid, 0, 0);
}

int main() {}