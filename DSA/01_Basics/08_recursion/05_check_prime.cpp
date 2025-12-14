#include <bits/stdc++.h>
using namespace std;

/*
TC - O(sqrt(n))
SC - O(sqrt(n))
*/

bool check(int num, int d) {
  if (d * d > num) {
    return true;
  }

  if (num % d == 0)
    return false;

  return check(num, d + 1);
}

bool checkPrime(int num) {
  // your code goes here
  if (num == 1)
    return false;

  return check(num, 2);
}

int main() {}