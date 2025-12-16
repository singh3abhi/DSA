#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(1)
*/

int singleNumber(vector<int>& nums) {
  int res = 0;

  for (int n : nums) {
    res ^= n;
  }

  return res;
}

/*
TC - O(NlogN)
SC - O(1)
*/

int better(vector<int>& nums) {
  sort(nums.begin(), nums.end());

  for (int i = 0; i < nums.size() - 1; i = i + 2) {
    if (nums[i] != nums[i + 1]) {
      return nums[i];
    }
  }

  return nums.back();
}

/*
TC - O(N)
SC - O(N)
*/

int bruteForce(vector<int>& nums) {
  set<int> s;
  int sum = 0;

  for (int val : nums) {
    if (s.contains(val)) {
      sum -= val;
    } else {
      sum += val;
      s.insert(val);
    }
  }

  return sum;
}

int main() {}