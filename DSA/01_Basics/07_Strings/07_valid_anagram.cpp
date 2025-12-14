#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(26)
*/

bool optimal(string s, string t) {
  if (s.size() != t.size())
    return false;

  int mp[26] = {0};

  for (char c : s)
    mp[c - 'a']++;

  for (char c : t)
    mp[c - 'a']--;

  for (int i : mp) {
    if (i != 0)
      return false;
  }

  return true;
}

/*
TC - O(NlogN)
SC - O(1)
*/

bool bruteForce(string s, string t) {
  if (s.size() != t.size()) {
    return false;
  }

  sort(s.begin(), s.end());
  sort(t.begin(), t.end());

  if (s == t)
    return true;
  return false;
}

int main() {}