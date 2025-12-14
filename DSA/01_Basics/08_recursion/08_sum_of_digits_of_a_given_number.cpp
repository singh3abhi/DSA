#include <bits/stdc++.h>
using namespace std;

/*
TC - O(logN)
SC - O(logN)
*/

int helper(int num) {
  if (num == 0) {
    return 0;
  }

  int digit = num % 10;
  return digit + helper(num / 10);
}
int addDigits(int num) {
  // your code goes here
  if (num < 10) {
    return num;
  }

  int sum = helper(num);

  return addDigits(sum);
}

int main() {}