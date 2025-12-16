#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(1)
*/
vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
  vector<int> res;

  int i = 0, j = 0;

  int n1 = nums1.size(), n2 = nums2.size();

  while (i < n1 && j < n2) {
    if (nums1[i] <= nums2[j]) {
      if (res.size() == 0 || res.back() != nums1[i]) {
        res.push_back(nums1[i]);
      }
      i++;
    } else {
      if (res.size() == 0 || res.back() != nums2[j]) {
        res.push_back(nums2[j]);
      }
      j++;
    }
  }

  while (i < n1) {
    if (res.back() != nums1[i])
      res.push_back(nums1[i]);
    i++;
  }

  while (j < n2) {
    if (res.back() != nums2[j])
      res.push_back(nums2[j]);
    j++;
  }

  return res;
}

/*
TC - O(N)
SC - O(N)
*/

vector<int> bruteForce(vector<int>& nums1, vector<int>& nums2) {
  set<int> s;
  vector<int> res;

  for (int val : nums1) {
    s.insert(val);
  }

  for (int val : nums2) {
    s.insert(val);
  }

  for (int num : s) {
    res.push_back(num);
  }

  return res;
}

int main() {}