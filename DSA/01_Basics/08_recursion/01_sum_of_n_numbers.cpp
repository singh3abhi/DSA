#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(N)
*/

int NnumbersSum(int N) {
  // your code goes here

  if (N == 1)
    return 1;

  int sum = N + NnumbersSum(N - 1);

  return sum;
}

int main() {}