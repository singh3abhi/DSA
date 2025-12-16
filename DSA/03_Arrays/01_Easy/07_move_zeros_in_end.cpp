#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(1)
*/

void optimal(vector<int>& nums) {
  int i = 0;

  for (int j = 0; j < nums.size(); j++) {
    if (nums[j] != 0) {
      swap(nums[j], nums[i]);
      i++;
    }
  }
}

/*
TC - O(N)
SC - O(N)
*/

void bruteForce(vector<int>& nums) {
  int n = nums.size();

  vector<int> temp;

  for (int v : nums) {
    if (v != 0) {
      temp.push_back(v);
    }
  }

  int k = temp.size();
  for (int i = 0; i < n; i++) {
    if (i < k) {
      nums[i] = temp[i];
    } else {
      nums[i] = 0;
    }
  }
}

int main() {}