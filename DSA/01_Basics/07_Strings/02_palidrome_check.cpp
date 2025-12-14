#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(1)
*/

bool palindromeCheck(string& s) {
  // your code goes here
  int i = 0;
  int j = s.size() - 1;

  while (i < j) {
    if (s[i++] != s[j--]) {
      return false;
    }
  }

  return true;
}

int main() {}