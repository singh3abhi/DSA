#include <bits/stdc++.h>
using namespace std;

/*
With Memoization
TC - O(N)
SC - O(N) + O(15)
*/

int res[15] = {0};
long long int optimal(int n) {
  // your code goes here
  if (n == 1 || n == 0)
    return 1;
  if (res[n] != 0)
    return res[n];

  long long fact = n * optimal(n - 1);
  res[n] = fact;

  return fact;
}

/*
TC - O(N)
SC - O(N)
*/
long long int factorial(int n) {
  // your code goes here
  if (n == 1 || n == 0)
    return 1;

  long long fact = n * factorial(n - 1);

  return fact;
}

int main() {}