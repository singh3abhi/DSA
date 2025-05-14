#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 4;
  int rows = 2 * n;
  int cols = 2 * n;

  int stars = n;
  int space = 0;

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

    if (i < (rows / 2) - 1) {
      stars--;
      space += 2;
    } else if (i > (rows / 2) - 1) {
      stars++;
      space -= 2;
    }

    cout << endl;
  }
}

/*
-> Pattern

********
***  ***
**    **
*      *
*      *
**    **
***  ***
********


*/
