#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(1)
*/
int optimal(vector<int>& nums) {
  // your code goes here
  int ones = 0;
  int twos = 0;

  for (int val : nums) {
    ones = (ones ^ val) & (~twos);
    twos = (twos ^ val) & (~ones);
  }

  return ones;
}

/*
TC - O(N*logN)
SC - O(1)
*/
int better2(vector<int>& nums) {
  // your code goes here
  sort(nums.begin(), nums.end());

  for (int i = 1; i < nums.size() - 2; i = i + 3) {
    if (nums[i] != nums[i - 1]) {
      return nums[i - 1];
    }
  }

  return nums[nums.size() - 1];
}

/*
TC - O(N*32)
SC - O(1)
*/
int better1(vector<int>& nums) {
  // your code goes here
  int ans = 0;

  for (int bit = 0; bit < 32; bit++) {
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] & (1 << bit)) {
        count++;
      }
    }

    if (count % 3 != 0) {
      ans |= (1 << bit);
    }
  }

  return ans;
}

/*
TC - O(M + NlogM)
SC - O(M)
*/
int bruteForce(vector<int>& nums) {
  // your code goes here
  unordered_map<int, int> mp;

  for (int val : nums) {
    mp[val]++;
  }

  for (auto it : mp) {
    if (it.second == 1) {
      return it.first;
    }
  }

  return -1;
}
int main() {}