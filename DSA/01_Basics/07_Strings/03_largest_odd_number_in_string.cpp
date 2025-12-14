#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(1)
*/

string largeOddNum(string& s) {
  // your code goes here
  int end = -1;

  for (int i = s.length() - 1; i >= 0; i--) {
    if ((s[i] - '0') % 2 == 1) {
      end = i;
      break;
    }
  }

  int i = 0;
  while (i <= end && s[i] == '0')
    i++;

  return s.substr(i, end - i + 1);
}

int main() {}