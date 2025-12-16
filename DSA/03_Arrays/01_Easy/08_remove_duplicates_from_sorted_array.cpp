#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(1)
*/

int optimal(vector<int>& nums) {
  int i = 0;

  for (int j = 0; j < nums.size(); j++) {
    if (nums[i] != nums[j]) {
      i++;
      nums[i] = nums[j];
    }
  }

  return i + 1;
}

/*
TC - O(N)
SC - O(N)
*/
int bruteForce(vector<int>& nums) {
  set<int> s;

  for (int val : nums) {
    s.insert(val);
  }

  int k = s.size();

  int j = 0;
  for (int val : s) {
    nums[j++] = val;
  }

  return k;
}

int main() {}