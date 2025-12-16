#include <bits/stdc++.h>
using namespace std;

/*
Kadane's algorithm for printing the subarray
TC - O(N)
SC - O(1)
*/
int maxSubArray(vector<int>& nums) {
  int n = nums.size();
  int largestSum = INT_MIN;
  int sum = 0;
  int start = 0;
  int ansStart = -1;
  int ansEnd = -1;

  for (int i = 0; i < n; i++) {
    if (sum == 0)
      start = i;
    sum += nums[i];

    if (sum > largestSum) {
      ansStart = start;
      ansEnd = i;
      largestSum = sum;
    }

    if (sum < 0)
      sum = 0;
  }

  return largestSum;
}

/*
TC - O(N)
SC - O(1)
*/
int better(vector<int>& nums) {
  int n = nums.size();
  int largestSum = INT_MIN;
  int sum = 0;

  for (int v : nums) {
    sum += v;

    largestSum = max(largestSum, sum);

    if (sum < 0)
      sum = 0;
  }

  return largestSum;
}

/*
TC - O(N^2)
SC - O(1)
*/
int bruteForce(vector<int>& nums) {
  int largestSum = INT_MIN;
  int n = nums.size();

  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = i; j < n; j++) {
      sum += nums[j];

      largestSum = max(largestSum, sum);
    }
  }

  return largestSum;
}

int main() {}