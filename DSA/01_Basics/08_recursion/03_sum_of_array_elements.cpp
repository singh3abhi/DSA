#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(N)
*/

int sum(vector<int>& nums, int index) {
  if (index == nums.size()) {
    return 0;
  }

  return nums[index] + sum(nums, index + 1);
}
int arraySum(vector<int>& nums) {
  // your code goes here

  return sum(nums, 0);
}

int main() {}