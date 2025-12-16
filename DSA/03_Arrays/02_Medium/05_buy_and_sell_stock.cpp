#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(1)
*/
int optimal(vector<int> arr, int n) {
  int low = arr[0];
  int ans = 0;

  for (int i = 1; i < n; i++) {
    if (low < arr[i]) {
      ans = max(ans, arr[i] - low);
    } else {
      low = arr[i];
    }
  }

  return ans;
}

/*
TC - O(N)
SC - O(N)
*/
int better(vector<int> arr, int n) {
  stack<int> stk;
  int ans = 0;

  for (int val : arr) {
    if (stk.empty()) {
      stk.push(val);
      continue;
    }

    int top = stk.top();
    if (top < val) {
      ans = max(ans, val - top);
    } else {
      stk.pop();
      stk.push(val);
    }
  }

  return ans;
}

/*
TC - O(N^2)
SC - O(1)
*/
int bruteForce(vector<int> arr, int n) {
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] < arr[j]) {
        ans = max(ans, arr[j] - arr[i]);
      }
    }
  }

  return ans;
}

int main() {}