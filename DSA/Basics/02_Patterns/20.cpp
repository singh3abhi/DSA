#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 4;
  int rows = 2 * n - 1;
  int cols = 2 * n;

  int stars = 1;
  int space = cols - 2;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < stars; j++) {
      cout << "*";
    }

    for (int j = 0; j < space; j++) {
      cout << " ";
    }

    for (int j = 0; j < stars; j++) {
      cout << "*";
    }

    if (i < (rows / 2)) {
      stars++;
      space -= 2;
    } else {
      stars--;
      space += 2;
    }

    cout << endl;
  }
}

/*
-> Pattern

*      *
**    **
***  ***
********
***  ***
**    **
*      *


*/
