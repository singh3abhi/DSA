#include <bits/stdc++.h>
using namespace std;

/*
TC - O(2^N)
SC - O(N)
*/

int fib(int n) {
  // your code goes here
  if (n <= 1)
    return n;

  return fib(n - 1) + fib(n - 2);
}

int main() {}