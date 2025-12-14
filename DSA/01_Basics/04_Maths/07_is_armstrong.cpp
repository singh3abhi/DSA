#include <bits/stdc++.h>
using namespace std;

int getDigitCount(int n) {
  if (n == 0)
    return 1;
  int len = 0;

  while (n > 0) {
    len++;
    n = n / 10;
  }

  return len;
}

bool isArmstrong(int n) {
  int len = getDigitCount(n);

  int num = 0;
  int tempN = n;

  while (tempN > 0) {
    int d = tempN % 10;
    num += pow(d, len);
    tempN = tempN / 10;
  }

  return num == n;
}

int main() {}

/*
tc - O(Log(num) base 10) // No of digits
sc - O(1)
*/
