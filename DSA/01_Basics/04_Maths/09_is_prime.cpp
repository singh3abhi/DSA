#include <bits/stdc++.h>
using namespace std;

/*
tc - O(sqrt(n))
sc - O(1)
*/
bool isPrime(int n) {
  // your code goes here

  if (n == 1)
    return false;

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

/*
tc - O(n)
sc - O(1)
*/
bool bruteForce(int n) {
  if (n == 1)
    return false;

  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {}