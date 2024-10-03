#include <bits/stdc++.h>
using namespace std;

/*
Q4) Follow up to the Q3
What if the frog can jump atmost k stairs then what would be the minimum work taken by frog


1) memoizationSolution
TC -> O(N*K)
SC -> O(N) + O(N)

2) tabulationSolution
TC = O(N*K)
SC = O(N)

3) spaceOptimizedSolution
We can space optimize it by keeping k variables or a vector size k as at any moment we need values of last k states
but thing is it doesn't make much of difference as in worst case (k = n). The space complexity will be O(N)

TC = O(N*K)
SC = O(K) (Worst case: K = N)

*/

int tabulationSolution(int n, vector<int>& dp, vector<int>& height, int k) {
  dp[0] = 0;

  if (dp[n] != -1)
    return dp[n];

  for (int i = 1; i <= n; i++) {
    int work = INT_MAX;

    for (int j = 1; j <= k && j <= i; j++) {
      int worki = dp[i - j] + abs(height[i] - height[i - j]);
      work = min(worki, work);
    }

    dp[i] = work;
  }

  return dp[n];
}

int memoizationSolution(int n, vector<int>& dp, vector<int>& height, int k) {
  if (n == 0)
    return 0;  // No work needs to be done

  if (dp[n] != -1)
    return dp[n];

  int work = INT_MAX;
  for (int i = 1; i <= k && i <= n; i++) {
    int worki = memoizationSolution(n - i, dp, height, k) + abs(height[n] - height[n - i]);

    work = min(worki, work);
  }

  return dp[n] = work;
}

int main() {
  int n = 5;
  int k = 10;

  vector<int> height = {30, 10, 60, 10, 60, 50};
  vector<int> dp1(n + 1, -1);
  vector<int> dp2(n + 1, -1);

  cout << memoizationSolution(5, dp1, height, k) << endl;
  cout << tabulationSolution(5, dp2, height, k) << endl;
  //   cout << spaceOptimizedSolution(5, height) << endl;
}