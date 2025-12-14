#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N / 2)
SC - O(N / 2)
*/

void reverse(vector<char>& s, int l, int r) {
  if (l >= r) {
    return;
  }

  char t = s[l];
  s[l] = s[r];
  s[r] = t;

  reverse(s, l + 1, r - 1);
}

vector<char> reverseString(vector<char>& s) {
  // your code goes here
  reverse(s, 0, s.size() - 1);

  return s;
}

int main() {}