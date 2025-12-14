#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
  if (n == 0)
    return 1;

  int ans = 1;
  while (n > 0) {
    ans = ans * n;
    n--;
  }

  return ans;
}

int main() {}

/*
tc - O(num)
sc - O(1)
*/
