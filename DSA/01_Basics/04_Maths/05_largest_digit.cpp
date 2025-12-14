#include <bits/stdc++.h>
using namespace std;

int largestDigit(int n) {
  int greatestDigit = 0;

  while (n > 0) {
    greatestDigit = max(n % 10, greatestDigit);
    n = n / 10;
  }

  return greatestDigit;
}

int main() {}

/*
tc - O(Log(num) base 10) // No of digits
sc - O(1)
*/