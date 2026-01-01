#include <bits/stdc++.h>
using namespace std;

/*
TC - O(k) // Where k is the number of set bits
SC - O(1)
*/
int optimal(int n) {
  // Your code goes here
  int ans = 0;

  while (n > 0) {
    ans++;
    n = n & (n - 1);
  }

  return ans;
}

/*
& is faster then %
TC - O(logN)
SC - O(1)
*/
int better(int n) {
  // Your code goes here
  int ans = 0;

  while (n > 0) {
    if (n & 1) {
      ans++;
    }
    n = n >> 1;
  }

  return ans + n;
}

/*
TC - O(logN)
SC - O(1)
*/
int bruteForce(int n) {
  // Your code goes here
  int ans = 0;

  while (n > 0) {
    if (n % 2 == 1) {
      ans++;
    }
    n = n / 2;
  }

  return ans + n;
}

int main() {}