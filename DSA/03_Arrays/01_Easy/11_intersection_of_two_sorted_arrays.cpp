#include <bits/stdc++.h>
using namespace std;

/*
TC - O(min(N1,N2))
SC - O(1)
*/

vector<int> optimal(vector<int>& nums1, vector<int>& nums2) {
  vector<int> ans;

  int n = nums1.size();
  int m = nums2.size();

  int i = 0, j = 0;

  while (i < n && j < m) {
    if (nums1[i] < nums2[j]) {
      i++;
    } else if (nums1[i] > nums2[j]) {
      j++;
    } else {
      ans.push_back(nums1[i]);
      i++, j++;
    }
  }

  return ans;
}

/*
TC - O(N1 + N2)
SC - O(N1 + N2)
*/
vector<int> better(vector<int>& nums1, vector<int>& nums2) {
  map<int, int> mp1, mp2;

  for (int v : nums1)
    mp1[v]++;
  for (int v : nums2)
    mp2[v]++;

  vector<int> res;

  for (const auto& [key, count1] : mp1) {
    auto it = mp2.find(key);
    if (it != mp2.end()) {
      int common = min(count1, it->second);
      res.insert(res.end(), common, key);
    }
  }

  return res;
}

/*
TC - O(N1*N2)
SC - O(N2)
*/
vector<int> brute(vector<int>& nums1, vector<int>& nums2) {
  vector<int> ans;

  int n = nums1.size();
  int m = nums2.size();

  vector<int> visited(m, 0);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (nums1[i] == nums2[j] && visited[j] == 0) {
        ans.push_back(nums1[i]);
        visited[j] = 1;
        break;
      }

      if (nums2[j] > nums1[i])
        break;
    }
  }

  return ans;
}

int main() {}