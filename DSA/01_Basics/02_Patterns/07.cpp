#include <bits/stdc++.h>
using namespace std;

int main() {
  int rows = 4;
  int col = rows * 2 - 1;

  int space = rows - 1;
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
    space--;
    stars += 2;
  }
}

/*
-> Pattern

       *
     * * *
   * * * * *
 * * * * * * *

*/
