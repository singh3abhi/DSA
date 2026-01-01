#include <bits/stdc++.h>
using namespace std;

/*
TC - O(n)
SC - O(1)
*/
int singleNumber(vector<int>& nums) {
  // your code goes here
  int ans = 0;
  for (int val : nums) {
    ans ^= val;
  }

  return ans;
}

int main() {}