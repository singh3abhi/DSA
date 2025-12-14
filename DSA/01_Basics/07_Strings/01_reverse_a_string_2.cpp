#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(1)
*/

void reverseString(vector<char>& s) {
  // your code goes here
  int i = 0;
  int j = s.size() - 1;

  while (i < j) {
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;

    i++, j--;
  }
}

int main() {}