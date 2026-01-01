#include <bits/stdc++.h>
using namespace std;

/*
16 - > 10000
15 - > 01111

16 & 15 = 0

TC - O(1)
SC - O(1)
*/
bool isPowerOfTwo(int n) {
  // Your code goes here
  return n > 0 && (n & (n - 1)) == 0;
}

/*
TC - O(logN)
SC - O(1)
*/
bool bruteForce(int n) {
  int val = 1;

  while (val < n) {
    val *= 2;
  }

  return val == n;
}

int main() {}