#include <bits/stdc++.h>
using namespace std;

int reverseNum(int n) {
  int revNum = 0;

  while (n > 0) {
    int lastDigit = n % 10;

    revNum += (revNum * 10) + lastDigit;
    n = n / 10;
  }

  return revNum;
}

bool isPalindrome(int n) {
  int revNum = reverseNum(n);
  if (revNum == n) {
    return true;
  }

  return false;
}

int main() {}

/*
tc - O(Log(num) base 10) // No of digits
sc - O(1)
*/