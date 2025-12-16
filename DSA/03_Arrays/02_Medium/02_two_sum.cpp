#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(N)
*/
vector<int> better(vector<int>& nums, int target) {
  int n = nums.size();
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int first = nums[i];
    int second = target - first;

    if (mp.find(second) != mp.end()) {
      return {i, mp[second]};
    }

    mp[first] = i;
  }

  return {};
}

/*
TC - O(N^2)
SC - O(1)
*/
vector<int> bruteForce(vector<int>& nums, int target) {
  int n = nums.size();

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (nums[i] + nums[j] == target) {
        return {i, j};
      }
    }
  }

  return {};
}

int main() {}