#include <bits/stdc++.h>
using namespace std;

int reverseANumber(int num) {
  int revNum = 0;

  while (num > 0) {
    int lastDigit = num % 10;
    revNum = (revNum * 10) + lastDigit;
    num = num / 10;
  }

  return revNum;
}

int main() {
  cout << reverseANumber(12345);
  return 0;
}

/*
tc - O(Log(num) base 10) // No of digits
sc - O(1)
*/