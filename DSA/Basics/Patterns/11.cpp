#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 4;
  int rows = n;

  int val;

  for (int i = 0; i < rows; i++) {
    if (i % 2 == 0) {
      val = 1;
    } else {
      val = 0;
    }
    for (int j = 0; j <= i; j++) {
      cout << val << " ";
      val ^= 1;
    }

    cout << endl;
  }
}

/*
-> Pattern

1
0 1
1 0 1
0 1 0 1

*/
