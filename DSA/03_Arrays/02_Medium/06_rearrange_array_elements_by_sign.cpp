#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(N)
*/
vector<int> optimal(vector<int>& nums) {
  int positiveInt = 0;
  int negativeInt = 1;
  int n = nums.size();
  vector<int> ans(n, 0);

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] < 0) {
      ans[negativeInt] = nums[i];
      negativeInt += 2;
    } else {
      ans[positiveInt] = nums[i];
      positiveInt += 2;
    }
  }

  return ans;
}

/*
TC - O(N + N)
SC - O(N + N)
*/
vector<int> bruteForce(vector<int>& nums) {
  vector<int> positives;
  vector<int> negatives;

  for (int val : nums) {
    if (val < 0) {
      negatives.push_back(val);
    } else {
      positives.push_back(val);
    }
  }

  for (int i = 0; i < nums.size(); i++) {
    if (i % 2 == 0) {
      nums[i] = positives[i / 2];
    } else {
      nums[i] = negatives[i / 2];
    }
  }

  return nums;
}

int main() {}