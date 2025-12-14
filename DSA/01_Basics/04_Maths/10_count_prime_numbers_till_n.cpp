#include <bits/stdc++.h>
using namespace std;

// Optimized
/*
tc - O(N * sqrt(N))
sc - O(1)
*/

// Brute Force
/*
tc - O(N^2)
sc - O(1)
*/
int isPrime(int n) {
  if (n == 1)
    return false;

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}
int primeUptoN(int n) {
  int ans = 0;

  for (int i = 2; i <= n; i++) {
    if (isPrime(i)) {
      ans++;
    }
  }

  return ans;
}

int main() {}