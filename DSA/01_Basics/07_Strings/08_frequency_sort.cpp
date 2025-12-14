#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N) + O(26) + O(26log26) + O(26)
SC - O(26) + O(26) + O(26)
*/

vector<char> frequencySort(string& s) {
  // your code goes here
  unordered_map<char, int> freq;
  for (char c : s)
    freq[c]++;

  vector<pair<int, char>> v;
  for (auto& it : freq) {
    v.push_back({it.first, it.second});
  }

  sort(v.begin(), v.end(), [](auto& a, auto& b) {
    if (a.second == b.second) {
      return a.first < b.first;
    }

    return a.second > b.second;
  });

  vector<char> res;
  for (auto& it : v) {
    res.push_back(it.first);
  }

  return res;
}

int main() {}