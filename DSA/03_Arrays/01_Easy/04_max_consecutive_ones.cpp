#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(1)
*/

int findMaxConsecutiveOnes(vector<int>& nums) {
  int n = nums.size();
  int sum = 0;
  int largest = 0;

  for (int i = 0; i < n; i++) {
    if (nums[i] == 1) {
      sum++;
      largest = max(sum, largest);
    } else {
      sum = 0;
    }
  }

  return largest;
}

int main() {}