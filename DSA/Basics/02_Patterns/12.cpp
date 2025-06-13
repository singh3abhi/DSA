#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 4;
  int rows = n;
  int cols = 2 * n;

  int stars = 1;
  int space = cols - 2;

  for (int i = 0; i < rows; i++) {
    int val = 0;

    for (int j = 0; j < stars; j++) {
      cout << ++val;
    }

    for (int j = 0; j < space; j++) {
      cout << " ";
    }

    for (int j = 0; j < stars; j++) {
      cout << val--;
    }

    stars++;
    space -= 2;
    cout << endl;
  }
}

/*
-> Pattern

1      1
12    21
123  321
12344321

*/
