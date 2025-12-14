#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(2 * 256)
*/

bool isIsomorphic(string s, string t) {
  int sMap[256] = {0};
  int tMap[256] = {0};

  int len = s.size();

  for (int i = 0; i < len; i++) {
    if (sMap[s[i]] != tMap[t[i]]) {
      return false;
    }

    sMap[s[i]] = i + 1;
    tMap[t[i]] = i + 1;
  }

  return true;
}

int main() {}