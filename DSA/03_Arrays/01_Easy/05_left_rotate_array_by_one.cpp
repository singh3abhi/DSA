#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int>& nums, int left, int right) {
  while (left < right) {
    int temp = nums[left];
    nums[left] = nums[right];
    nums[right] = temp;

    left++;
    right--;
  }
}

void rotateArrayByOne(vector<int>& nums) {
  int n = nums.size();

  if (n <= 1)
    return;

  reverse(nums, 1, n - 1);
  reverse(nums, 0, n - 1);
}

/*
TC - O(N)
SC - O(1)
*/
void rotateArrayByOne(vector<int>& nums) {
  int temp = nums[0];

  for (int i = 1; i < nums.size(); i++) {
    nums[i - 1] = nums[i];
  }

  nums[nums.size() - 1] = temp;
}

int main() {}