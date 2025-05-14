#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 4;
  int rows = n;
  int cols = n;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < rows; j++) {
      if (i == 0 || j == 0 || i == rows - 1 || j == cols - 1) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}

/*
-> Pattern

****
*  *
*  *
****


*/
