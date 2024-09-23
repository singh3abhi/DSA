#include <bits/stdc++.h>
using namespace std;

/*
Key Points for DP

a) Try to represent the problem in terms of index
b) Do all possible stuff on that index according to the
   problem statement
c) If count is asked -> sum the sub problems
   if min is asked -> take min of sub problems
   if max is asked -> take max of sub problems

Q2) Give the distinct ways to Climb the stairs with either one or two steps

for ex n = 3 then ways are

0 -> 1 -> 2 -> 3 (111)
0 -> 2 -> 3 (21)
0 -> 1 -> 3 (12)

Total of 3 distinct ways to climb till 3

Afte looking at the code we can understand that it is the same problem as fibonacci number
*/

int climbStairsWithMemoization(int n, vector<int>& dp) {
  if (n == 0)
    return 0;  // We are already at our position no need to jump

  if (n == 1)
    return 1;  // We can only move 1 step

  if (dp[n] != -1)
    return dp[n];

  int jumpOneStep = climbStairsWithMemoization(n - 1, dp);

  int jumpTwoStep = climbStairsWithMemoization(n - 1, dp);

  dp[n] = jumpOneStep + jumpTwoStep;

  return dp[n];
}

int main() {
  int n;
  cin >> n;

  vector<int> dp(n + 1, -1);
  cout << climbStairsWithMemoization(n, dp) << endl;
}