#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 4;
  int rows = 2 * n - 1;
  int col = n;

  int stars = 1;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < stars; j++) {
      cout << " * ";
    }

    cout << endl;

    if (i < (rows / 2)) {
      stars++;
    } else {
      stars--;
    }
  }
}

/*
-> Pattern

 *
 *  *
 *  *  *
 *  *  *  *
 *  *  *
 *  *
 *

*/
