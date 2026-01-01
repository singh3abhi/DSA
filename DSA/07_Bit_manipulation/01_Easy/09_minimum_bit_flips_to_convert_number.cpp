#include <bits/stdc++.h>
using namespace std;

/*
TC - O(log(start ^ goal)) Can be O(1) as max it will run 32 or 64 times
SC - O(1)
*/
int minBitFlips(int start, int goal) {
  int val = start ^ goal;

  int len = 0;
  while (val > 0) {
    if (val & 1) {
      len++;
    }
    val = val >> 1;
  }

  return len;
}

int main() {}