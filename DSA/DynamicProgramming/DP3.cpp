#include <bits/stdc++.h>
using namespace std;

/*
Q3) Calculate the minimum possible work the from has to do to climb n stairs. Frog can jump either 1 stair or 2 stairs,
    and everytime frog takes a jump his work increases by height[j] - height[i].

Let's understand why greedy doesn't work here.
The thing is greedily it is possbile that we choose a path which looked promsing but in long run it might not be the
optimal solution that is why we need to try every path

eg

30 10 60 10 60 50

Greedily -> 30 -> 10 -> 10 -> 50 = 60
Solution -> 30 -> 60 -> 60 -> 50 = 40

1) memoizationSolution
TC = O(n)
SC = O(n) + O(n)

2) tabulationSolution
TC = O(n)
SC = O(n)

3) spaceOptimizedSolution
TC = O(n)
SC = O(1)

*/

int spaceOptimizedSolution(int n, vector<int> height) {
  int prev2i = 0;
  int previ = abs(height[1] - height[0]);

  for (int i = 2; i <= n; i++) {
    int oneStep = previ + abs(height[i] - height[i - 1]);
    int twoStep = prev2i + abs(height[i] - height[i - 2]);

    int curri = min(oneStep, twoStep);
    prev2i = previ;
    previ = curri;
  }

  return previ;
}

int tabulationSolution(int n, vector<int>& dp, vector<int> height) {
  dp[0] = 0;
  dp[1] = abs(height[1] - height[0]);

  for (int i = 2; i <= n; i++) {
    int oneStep = dp[i - 1] + abs(height[i] - height[i - 1]);
    int twoStep = dp[i - 2] + abs(height[i] - height[i - 2]);

    dp[i] = min(oneStep, twoStep);
  }

  return dp[n];
}

int memoizationSolution(int n, vector<int>& dp, vector<int> height) {
  if (n == 0)
    return 0;  // No work needs to be done

  if (dp[n] != -1)
    return dp[n];

  int oneStep = memoizationSolution(n - 1, dp, height) + abs(height[n] - height[n - 1]);

  int twoStep = INT_MAX;

  if (n > 1) {
    // Only then we can take 2 step
    twoStep = memoizationSolution(n - 2, dp, height) + abs(height[n] - height[n - 2]);
  }

  dp[n] = min(oneStep, twoStep);
  return dp[n];
}
int main() {
  int n = 5;

  vector<int> height = {30, 10, 60, 10, 60, 50};
  vector<int> dp1(n + 1, -1);
  vector<int> dp2(n + 1, -1);

  cout << memoizationSolution(5, dp1, height) << endl;
  cout << tabulationSolution(5, dp2, height) << endl;
  cout << spaceOptimizedSolution(5, height) << endl;
}