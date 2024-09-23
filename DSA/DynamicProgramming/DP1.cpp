#include <bits/stdc++.h>
using namespace std;

/*

Dynamic Programming
-> Those who cannot remember the past are condemned to repeat it

1) Tabulation (Bottom up dynamic programming)
2) Memoization (Top down dynamic programming)

Q1) Fibonacci Number

Fibonacci Series
0 1 1 2 3 5 8 13 21 34

Recurrence relation of fibonacci number of number n
f(n) = f(n-1) + f(n-2)

Memoization
We often face overlapping subproblems and that is
why we save the subproblem solutions in map/table


Top Down -> We go from the answer to base case and bring answer with recursion
Bottom Up -> We go from base case to required answer

1) fiboWithDpMemoization ( Top Down )
TC = O(n)
SC = O(n) + O(n) (Stack space + Array space)

2) fiboWithDpTabulation (Bottom Up)
TC = O(n)
SC = O(n) (Array space)

3) optimizedFibo Space Optimized solution
TC = O(n)
SC = O(1)

*/

int optimizedFibo(int n) {
  if (n == 0)
    return 0;

  int a = 0;
  int b = 1;

  for (int i = 2; i <= n; i++) {
    b = a + b;
    a = b - a;
  }

  return b;
}

int fiboWithDpTabulation(int n, vector<int>& dp) {
  dp[0] = 0;
  dp[1] = 1;

  for (int i = 2; i <= n; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }

  return dp[n];
}

int fiboWithDpMemoization(int n, vector<int>& dp) {
  if (n <= 1)
    return n;

  if (dp[n] != -1)
    return dp[n];

  dp[n] = fiboWithDpMemoization(n - 1, dp) + fiboWithDpMemoization(n - 2, dp);

  return dp[n];
}

int main() {
  int n;
  cin >> n;

  vector<int> dp1(n + 1, -1);
  vector<int> dp2(n + 1, -1);

  cout << fiboWithDpMemoization(n, dp1) << endl;
  cout << fiboWithDpTabulation(n, dp2) << endl;
  cout << optimizedFibo(n) << endl;
}