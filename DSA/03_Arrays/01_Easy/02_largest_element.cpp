#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(1)
*/

int largestElement(vector<int>& nums) {
  int ans = INT_MIN;

  for (int val : nums) {
    ans = max(ans, val);
  }

  return ans;
}

int main() {}