#include <bits/stdc++.h>
using namespace std;

/*
Buckets Concept
TC - O(N)
SC - O(1)
*/
vector<int> singleNumber(vector<int>& nums) {
  // your code goes here
  int x = 0;

  for (int val : nums) {
    x ^= val;
  }

  int xor1 = 0;
  int xor2 = 0;

  int rightMost = (x) & (x - 1) ^ x;

  for (int val : nums) {
    if (val & rightMost) {
      xor1 ^= val;
    } else {
      xor2 ^= val;
    }
  }

  if (xor1 < xor2)
    return {xor1, xor2};
  return {xor2, xor1};
}

int main() {}