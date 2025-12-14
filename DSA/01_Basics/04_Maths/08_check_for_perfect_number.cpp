#include <bits/stdc++.h>
using namespace std;

/*
tc - O(sqrt(n))
sc - O(1)
*/
bool isPerfect(int n) {
  if (n == 1)
    return false;

  int sum = 0;

  for (int i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      sum += i;

      if (n / i != i && n / i != n) {
        sum += n / i;
      }
    }
  }

  return sum == n;
}

/*
tc - O(n)
sc - O(1)
*/
bool bruteForce(int n) {
  int sum = 0;

  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      sum += i;
    }
  }

  return sum == n;
}

int main() {}
