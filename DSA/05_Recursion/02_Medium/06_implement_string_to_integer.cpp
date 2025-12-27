#include <bits/stdc++.h>
using namespace std;

/*
Iterative
TC - O(N) where n is length of s
SC - O(1)
*/
int iterative(string s) {
  int n = s.size();
  int i = 0;
  long long ans = 0;

  // Removing leading white spaces
  while (i < n && s[i] == ' ') {
    i++;
  }

  int sign = 1;

  if (i == n) {
    return ans;
  }

  // Sign
  if (s[i] == '-') {
    sign = -1;
    i++;
  } else if (s[i] == '+') {
    i++;
  }

  // Leading zeros
  while (i < n && s[i] == '0') {
    i++;
  }

  while (i < n) {
    int val = s[i] - '0';
    if (val >= 0 && val <= 9) {
      ans = ans * 10 + val;

      if (sign * ans < INT_MIN) {
        return INT_MIN;
      } else if (sign * ans > INT_MAX) {
        return INT_MAX;
      }

      i++;
    } else {
      break;
    }
  }

  return sign * ans;
}

/*
Recursive
TC - O(N) where n is length of s
SC - O(N)
*/
long long solve(const string& s, int i, int sign, long long ans) {
  if (i >= s.size()) {
    return sign * ans;
  }

  if (!isdigit(s[i])) {
    return sign * ans;
  }

  int digit = s[i] - '0';
  ans = ans * 10 + digit;

  // Overflow check
  if (sign * ans <= INT_MIN)
    return INT_MIN;
  if (sign * ans >= INT_MAX)
    return INT_MAX;

  return solve(s, i + 1, sign, ans);
}

int recursive(string s) {
  int n = s.size();
  int i = 0;

  // Remove leading spaces
  while (i < n && s[i] == ' ') {
    i++;
  }

  if (i == n)
    return 0;

  int sign = 1;

  // Handle sign
  if (s[i] == '-') {
    sign = -1;
    i++;
  } else if (s[i] == '+') {
    i++;
  }

  // Skip leading zeros
  while (i < n && s[i] == '0') {
    i++;
  }

  return (int)solve(s, i, sign, 0);
}

int main() {}