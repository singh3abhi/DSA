#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 4;
  int rows = 2 * n;
  int col = rows * 2 - 1;

  int space = n - 1;
  int stars = 1;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < space; j++) {
      cout << "  ";
    }

    for (int j = 0; j < stars; j++) {
      cout << " *";
    }

    for (int j = 0; j < space; j++) {
      cout << " ";
    }

    cout << endl;

    if (i < (rows / 2) - 1) {
      space--;
      stars += 2;
    } else if (i >= rows / 2) {
      stars -= 2;
      space++;
    }
  }
}

/*
-> Pattern

       *
     * * *
   * * * * *
 * * * * * * *
 * * * * * * *
   * * * * *
     * * *
       *

*/
