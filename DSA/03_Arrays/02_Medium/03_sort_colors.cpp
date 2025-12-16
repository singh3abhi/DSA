#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(1)
*/
void sortColors(vector<int>& nums) {
  int n = nums.size();
  int low = 0;
  int mid = 0;
  int high = n - 1;

  while (mid <= high) {
    if (nums[mid] == 0) {
      swap(nums[low], nums[mid]);
      low++;
      mid++;
    } else if (nums[mid] == 1) {
      mid++;
    } else {
      swap(nums[mid], nums[high]);
      high--;
    }
  }
}

/*
TC - O(N + N)
SC - O(1)
*/

void better(vector<int>& nums) {
  int zeros = 0;
  int ones = 0;
  int twos = 0;
  int n = nums.size();

  for (int v : nums) {
    if (v == 0) {
      zeros++;
    } else if (v == 1) {
      ones++;
    } else {
      twos++;
    }
  }

  for (int i = 0; i < n; i++) {
    if (zeros > 0) {
      nums[i] = 0;
      zeros--;
    } else if (ones > 0) {
      nums[i] = 1;
      ones--;
    } else {
      nums[i] = 2;
      twos--;
    }
  }
}

/*
TC - O(NlogN)
SC - O(1)
*/
void bruteForce(vector<int>& nums) {
  sort(nums.begin(), nums.end());
}

int main() {}