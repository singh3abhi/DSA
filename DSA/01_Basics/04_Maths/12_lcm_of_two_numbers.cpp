#include <bits/stdc++.h>
using namespace std;

/*
tc - O(log(min(N1,N2)))
sc - O(1)
*/

int gcd(int n1, int n2) {
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

int optimal(int n1, int n2) {
  int lcm = (n1 * n2) / gcd(n1, n2);

  return lcm;
}

/*
tc - O(N1*N2)
sc - O(1)
*/
int bruteForce2(int n1, int n2) {
  int n = max(n1, n2);
  int i = 1;

  while (1) {
    int lcm = n * i;

    if (lcm % n1 == 0 && lcm % n2 == 0) {
      return lcm;
    }

    i++;
  }
}

/*
tc - O(N1*N2)
sc - O(1)
*/

int bruteForce1(int n1, int n2) {
  int ans = n1 * n2;

  for (int i = 2; i <= ans; i++) {
    if (i % n1 == 0 && i % n2 == 0) {
      ans = i;
      break;
    }
  }

  return ans;
}
int main() {}