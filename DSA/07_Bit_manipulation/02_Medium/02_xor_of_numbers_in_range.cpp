#include <bits/stdc++.h>
using namespace std;

/*
F(x) = xor of values from 0 to x
The trick is that values get repeated after 4 count with a pattern
F(1) = 1
F(2) = 1^2 = 3
F(3) = 1^2^3 = 0
F(4) = 1^2^3^4 = 4
F(5) = 1^2^3^4^5 = 1
F(6) = 7
F(7) = 0
F(8) = 8
TC - O(1)
SC - O(1)
*/
int solve(int val) {
  int d = val % 4;

  if (d == 1) {
    return 1;
  } else if (d == 2) {
    return val + 1;
  } else if (d == 3) {
    return 0;
  } else {
    return val;
  }
}

int findRangeXOR(int l, int r) {
  // your code goes here
  return solve(l - 1) ^ solve(r);
}

/*
TC - O(N)
SC - O(1)
*/
int bruteForce(int l, int r) {
  // your code goes here
  int ans = 0;
  for (int i = l; i <= r; i++) {
    ans ^= i;
  }

  return ans;
}

int main() {}