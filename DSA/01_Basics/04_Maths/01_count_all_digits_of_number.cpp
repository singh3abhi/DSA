#include <bits/stdc++.h>
using namespace std;

int countDigit(int num) {
  if (num == 0)
    return 1;

  int len = 0;
  while (num > 0) {
    num = num / 10;
    len++;
  }

  return len;
}

int main() {
  cout << countDigit(12345) << endl;

  return 0;
}

/*
tc - O(Log(num) base 10) // No of digits
sc - O(1)
*/