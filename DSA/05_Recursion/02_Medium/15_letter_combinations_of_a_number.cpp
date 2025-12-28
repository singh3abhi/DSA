#include <bits/stdc++.h>
using namespace std;

/*
TC - O(4^N * N)
SC - O(N)
*/
void solve(vector<string>& res, vector<vector<char>>& mp, string digits, int index, string s) {
  if (index == digits.size()) {
    res.push_back(s);
    return;
  }

  int d = digits[index] - '0';
  vector<char> t = mp[d];

  for (char ch : t) {
    solve(res, mp, digits, index + 1, s + ch);
  }
}

vector<string> letterCombinations(string digits) {
  vector<vector<char>> mp = {
      {},
      {},
      {'a', 'b', 'c'},
      {'d', 'e', 'f'},
      {'g', 'h', 'i'},
      {'j', 'k', 'l'},
      {'m', 'n', 'o'},
      {'p', 'q', 'r', 's'},
      {'t', 'u', 'v'},
      {'w', 'x', 'y', 'z'},
  };

  vector<string> res;
  solve(res, mp, digits, 0, "");

  return res;
}

int main() {}