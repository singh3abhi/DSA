#include <bits/stdc++.h>
using namespace std;

/*
Euclidean algorithm
gcd(n1,n2) = gcd(n2-n1,n2)

*/

/*
tc - O(log(min(N1,N2)))
sc - O(1)
*/
int optimal(int n1, int n2) {
  while (n1 > 0 && n2 > 0) {
    if (n1 > n2) {
      n1 = n1 % n2;
    } else {
      n2 = n2 % n1;
    }
  }

  if (n1 == 0)
    return n2;
  return n1;
}

// But worst case this will take very long time when n1 = 100 and n2 = 1
int GCD(int n1, int n2) {
  while (n1 > 0 && n2 > 0) {
    if (n1 > n2) {
      n1 = n1 - n2;
    } else {
      n2 = n2 - n1;
    }
  }

  if (n1 == 0)
    return n2;
  return n1;
}

/*
tc - O(min(N1,N2))
sc - O(1)
*/
int better(int n1, int n2) {
  int gcd = 1;

  for (int i = min(n1, n2); i > 1; i--) {
    if (n1 % i == 0 && n2 % i == 0) {
      gcd = i;
      break;
    }
  }

  return gcd;
}

/*
tc - O(min(N1,N2))
sc - O(1)
*/
int bruteForce(int n1, int n2) {
  int gcd = 1;

  for (int i = 2; i < min(n1, n2); i++) {
    if (n1 % i == 0 && n2 % i == 0) {
      gcd = i;
    }
  }

  return gcd;
}
int main() {}