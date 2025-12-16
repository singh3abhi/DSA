#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(1)
*/

void reverse(vector<int>& nums, int left, int right) {
  while (left < right) {
    int temp = nums[left];
    nums[left] = nums[right];
    nums[right] = temp;

    left++;
    right--;
  }
}

void optimal(vector<int>& nums, int k) {
  int n = nums.size();

  if (n <= 1)
    return;

  k = k % n;
  reverse(nums, 0, k - 1);
  reverse(nums, k, n - 1);
  reverse(nums, 0, n - 1);
}

/*
TC - O(N)
SC - O(K)
*/
void rotateArray(vector<int>& nums, int k) {
  int n = nums.size();
  k = k % n;

  vector<int> temp;

  for (int i = 0; i < k; i++) {
    temp.push_back(nums[i]);
  }

  for (int i = k; i < n; i++) {
    nums[i - k] = nums[i];
  }

  for (int i = 0; i < k; i++) {
    nums[n - k + i] = temp[i];
  }
}

int main() {}