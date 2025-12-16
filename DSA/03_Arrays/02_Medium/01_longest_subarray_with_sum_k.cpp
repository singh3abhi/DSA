#include <bits/stdc++.h>
using namespace std;

/*
Two Pointer Approach
Can only be used when elements are non negative in the list
TC - O(N)
SC - O(1)
*/
int optimal(vector<int>& nums, int k) {
  int left = 0;
  int right = 0;
  int n = nums.size();

  int sum = 0;
  int maxLen = 0;
  while (right < n) {
    sum += nums[right];

    while (left <= right && sum > k) {
      sum -= nums[left];
      left++;
    }

    if (sum == k) {
      maxLen = max(right - left + 1, maxLen);
    }

    right++;
  }

  return maxLen;
}

/*
Prefix Sum
TC - O(N)
SC - O(N)
*/

int better(vector<int>& nums, int k) {
  long long sum = 0;
  map<long long, int> prefixSumMap;
  int maxLen = 0;

  for (int i = 0; i < nums.size(); i++) {
    sum += nums[i];

    if (sum == k) {
      maxLen = max(maxLen, i + 1);
    }

    int rem = sum - k;
    if (prefixSumMap.find(rem) != prefixSumMap.end()) {
      int len = i - prefixSumMap[rem];
      maxLen = max(maxLen, len);
    }

    if (prefixSumMap.find(sum) == prefixSumMap.end()) {
      // This will save issues when number will be 0 or negative
      prefixSumMap[sum] = i;
    }
  }

  return maxLen;
}

/*
TC - O(N^2)
SC - O(1)
*/
int bruteForce2(vector<int>& nums, int k) {
  int n = nums.size();

  int ans = 0;

  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = i; j < n; j++) {
      sum += nums[j];
      if (sum == k) {
        ans = max(ans, j - i + 1);
      }
    }
  }

  return ans;
  ;
}

/*
TC - O(N^3)
SC - O(1)
*/

int bruteForce1(vector<int>& nums, int k) {
  int n = nums.size();

  int ans = 0;

  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int sum = 0;
      for (int k = i; k <= j; k++) {
        sum += nums[k];
      }
      if (sum == k) {
        ans = max(ans, j - i + 1);
      }
    }
  }

  return ans;
  ;
}

int main() {}