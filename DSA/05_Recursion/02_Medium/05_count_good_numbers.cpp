#include <bits/stdc++.h>
using namespace std;

/*
Iterative
TC - O(LogN)
SC - O(1)
*/
const int MOD = 1e9 + 7;
long long modPow(long long base, long long exp) {
  if (base == 1 || exp == 0) {
    return 1;
  }

  long long res = 1;
  base = base % MOD;

  while (exp > 0) {
    if (exp % 2 == 0) {
      base = (base * base) % MOD;
      exp = exp / 2;
    } else {
      res = (res * base) % MOD;
      exp = exp - 1;
    }
  }

  return res;
}

int countGoodNumbers(long long n) {
  long long evenCount = (n + 1) / 2;
  long long oddCount = n / 2;

  long long ans = modPow(5, evenCount);
  ans = (ans * modPow(4, oddCount)) % MOD;

  return ans;
}

/*
Recursive
TC - O(LogN + LogN)
SC - O(Log N)
*/
const int MOD = 1e9 + 7;
long long modPow(long long base, long long exp) {
  if (base == 1 || exp == 0) {
    return 1;
  }

  if (exp % 2 == 0) {
    return modPow((base * base) % MOD, exp / 2) % MOD;
  } else {
    return (base * modPow(base, exp - 1)) % MOD;
  }
}

int countGoodNumbers(long long n) {
  long long evenCount = (n + 1) / 2;
  long long oddCount = n / 2;

  long long ans = modPow(5, evenCount);
  ans = (ans * modPow(4, oddCount)) % MOD;

  return ans;
}

/*
Brute Force
TC - O(N)
SC - O(1)
*/
int bruteForce(long long n) {
  // even - 0,2,4,6,8 => 5
  // prime - 2,3,5,7 => 4;
  const int MOD = 1e9 + 7;

  long long ans = 1;
  for (long long i = 0; i < n; i++) {
    if (i % 2 == 0) {
      ans = ans * 5;
    } else {
      ans = ans * 4;
    }

    ans = (1LL * ans) % MOD;
  }

  return ans;
}

int main() {}