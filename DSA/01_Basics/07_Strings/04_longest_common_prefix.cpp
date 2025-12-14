#include <bits/stdc++.h>
using namespace std;

/*
TC - O(NlogN + K) where k is the min string length and N is length of list
SC - O(1)
*/

string longestCommonPrefix(vector<string>& str) {
  // your code goes here
  if (str.empty()) {
    return "";
  }

  sort(str.begin(), str.end());

  int left = 0;
  int right = str.size() - 1;

  string first = str[left];
  string last = str[right];

  int minLen = min(first.size(), last.size());

  string ans = "";

  for (int i = 0; i < minLen; i++) {
    if (first[i] != last[i]) {
      return ans;
    }

    ans += first[i];
  }

  return ans;
}
int main() {}