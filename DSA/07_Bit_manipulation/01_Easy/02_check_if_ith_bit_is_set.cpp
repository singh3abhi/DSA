#include <bits/stdc++.h>
using namespace std;

/*
TC - O(1)
SC - O(1)
*/
bool SolutionWithRightShift(int n, int i) {
  // Your code goes here
  if ((n & (1 << i)) != 0) {
    return true;
  }
  return false;
}

/*
TC - O(1)
SC - O(1)
*/
bool SolutionWithRightShift(int n, int i) {
  // Your code goes here
  if (((n >> i) & 1) == 1) {
    return true;
  }
  return false;
}

int main() {}