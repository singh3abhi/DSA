#include <bits/stdc++.h>
using namespace std;

/*
Recursive
TC - O(N * f(n)) where f(n) will be number of generated strings
SC - O(N + f(n)*n) Stack Size + List Size
*/
void solve(vector<string>& res, int i, int n, string s) {
  if (i == n) {
    res.push_back(s);
    return;
  }

  bool isLastOne = i != 0 && s[i - 1] == '1';

  if (isLastOne) {
    solve(res, i + 1, n, s + '0');
  } else {
    solve(res, i + 1, n, s + '0');
    solve(res, i + 1, n, s + '1');
  }
}
vector<string> generateBinaryStrings(int n) {
  // Your code goes here
  vector<string> res;

  solve(res, 0, n, "");

  return res;
}

int main() {}