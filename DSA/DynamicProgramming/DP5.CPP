#include <bits/stdc++.h>
using namespace std;

/*
Q5) You are given a array, find the maximum sum of subsequence of array such that no two consecutive elements are picked

We define f(n) as the maximum sum of subsequence in [0 ...... n] array

1) Recursive Solution
TC = O(2^N)
SC = O(N)

2) memoizationSolution
TC -> O(N)
SC -> O(N) + O(N)

3) tabulationSolution
TC = O(N)
SC = O(N)

4) spaceOptimizedSolution
TC = O(N)
SC = O(1)

*/

int spaceOptimizedSolution(vector<int> arr) {
  int pick = INT_MIN;

  int prev2 = 0;
  int prev = arr[0];

  for (int i = 1; i < arr.size(); i++) {
    pick = arr[i];

    if (i > 1) {
      pick += prev2;
    }

    int notPick = 0 + prev;

    int curr = max(pick, notPick);
    prev2 = prev;
    prev = curr;
  }

  return prev;
}

int tabulationSolution(vector<int>& dp, vector<int> arr) {
  dp[0] = arr[0];  // Assuming arr.size() > 1

  int pick = INT_MIN;
  for (int i = 1; i < arr.size(); i++) {
    pick = arr[i];

    if (i > 1) {
      pick += dp[i - 2];
    }

    int notPick = 0 + dp[i - 1];

    dp[i] = max(pick, notPick);
  }

  return dp[arr.size() - 1];
}

int count2 = 0;
int memoizationSolution(vector<int>& dp, vector<int> arr, int n) {
  count2++;
  if (n < 0) {
    return 0;
  }

  if (n == 0) {
    // As we arived at 0 that means 1 was not selected and now we can only choose arr[0]
    return arr[n];
  }

  if (dp[n] != -1) {
    return dp[n];
  }

  int pick = arr[n] + memoizationSolution(dp, arr, n - 2);

  int notPick = 0 + memoizationSolution(dp, arr, n - 1);

  return dp[n] = max(pick, notPick);
}

int count1 = 0;
int recursiveSolution(vector<int> arr, int n) {
  count1++;
  if (n < 0) {
    return 0;
  }

  if (n == 0) {
    // As we arived at 0 that means 1 was not selected and now we can only choose arr[0]
    return arr[n];
  }

  int pick = arr[n] + recursiveSolution(arr, n - 2);

  int notPick = 0 + recursiveSolution(arr, n - 1);

  return max(pick, notPick);
}

int main() {
  vector<int> arr = {2, 1, 4, 9};
  int n = arr.size();

  cout << recursiveSolution(arr, n - 1) << endl;
  cout << "Recurisve Solution ran for " << count1 << endl;

  vector<int> dp1(n, -1);
  cout << memoizationSolution(dp1, arr, n - 1) << endl;
  cout << "memoizationSolution ran for " << count2 << endl;

  vector<int> dp2(n, -1);
  cout << tabulationSolution(dp2, arr) << endl;

  cout << spaceOptimizedSolution(arr) << endl;
}