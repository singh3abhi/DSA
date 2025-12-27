#include <bits/stdc++.h>
using namespace std;

/*
TC - O(4^N)
SC - O(4^N)
*/
void helper(vector<string>& ans, int n, int open, int close, string s) {
  if (open == close && open == n) {
    ans.push_back(s);
    return;
  }

  if (open < n) {
    helper(ans, n, open + 1, close, s + '(');
  }

  if (close < open) {
    helper(ans, n, open, close + 1, s + ')');
  }
}

vector<string> recursive(int n) {
  vector<string> ans;
  helper(ans, n, 0, 0, "");

  return ans;
}

int main() {}