#include <bits/stdc++.h>
using namespace std;

/*
DP
TC - O(N^2)
SC - O(N)
*/
bool solve(unordered_set<string>& wordDictSet, vector<int>& dp, string& s, int start) {
  if (start == s.size()) {
    return true;
  }

  if (dp[start] != -1)
    return dp[start];

  string word;
  for (int i = start; i < s.size(); i++) {
    word.push_back(s[i]);

    if (wordDictSet.count(word) && solve(wordDictSet, dp, s, i + 1)) {
      dp[start] = true;
      return true;
    }
  }

  return dp[start] = false;
}

bool wordBreak(string s, vector<string>& wordDict) {
  unordered_set<string> wordDictSet(wordDict.begin(), wordDict.end());
  int n = s.size();

  vector<int> dp(n + 1, -1);
  return solve(wordDictSet, dp, s, 0);
}

/*
Recursion
TC - O(2^N)
SC - O(N)
*/
bool solve(unordered_set<string>& wordDictSet, string& s, int start) {
  if (start == s.size()) {
    return true;
  }

  string word;
  for (int i = start; i < s.size(); i++) {
    word.push_back(s[i]);

    if (wordDictSet.count(word) && solve(wordDictSet, s, i + 1)) {
      return true;
    }
  }

  return false;
}

bool wordBreak(string s, vector<string>& wordDict) {
  unordered_set<string> wordDictSet(wordDict.begin(), wordDict.end());

  return solve(wordDictSet, s, 0);
}

int main() {}