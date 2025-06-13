#include <bits/stdc++.h>
using namespace std;

int main() {
  int rows = 4;
  int col = rows * 2 - 1;

  int space = 0;
  int stars = col;

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
    space += 1;
    stars -= 2;
  }
}

/*
-> Pattern

 * * * * * * *
   * * * * *
     * * *
       *

*/
