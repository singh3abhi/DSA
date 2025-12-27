#include <bits/stdc++.h>
using namespace std;

/*
Iterative Code
TC - O(LogN)
SC - O(1)
*/
double optimal(double x, int n) {
  // your code goes here
  if (n == 0 || x == 1) {
    return 1;
  }

  if (n == 1) {
    return x;
  }

  long long num = n;  // Because if n is INT_MIN then -1 * INT_MIN will overflow in int
  if (n < 1) {
    num = -1 * 1LL * n;
    x = 1 / x;
  }

  double ans = 1;
  while (num > 0) {
    if (num % 2) {
      ans = ans * x;
      num = num - 1;
    } else {
      x = x * x;
      num = num / 2;
    }
  }

  return ans;
}

/*
Recursive Code
TC - O(LogN)
SC - O(LogN)
*/
double helper(double x, long long n) {
  if (n == 0) {
    return 1;
  }

  if (n % 2 == 0) {
    return helper(x * x, n / 2);
  } else {
    return x * helper(x, n - 1);
  }
}

double myPow(double x, int n) {
  // your code goes here
  long long num = n;
  if (n < 0) {
    num = -1 * 1LL * n;
    x = 1 / x;
  }

  return helper(x, num);
}

/*
TC - O(N)
SC - O(1)
*/
double bruteForce(double x, int n) {
  // your code goes here
  if (n == 0 || x == 1) {
    return 1;
  }

  long long temp = n;

  if (n < 0) {
    x = 1 / x;
    temp = -1 * 1LL * n;
  }

  double ans = 1;

  for (long long i = 0; i < temp; i++) {
    ans *= x;
  }

  return ans;
}

int main() {}