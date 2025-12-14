#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 4;
  int rows = n;
  int cols = 2 * n - 1;

  int stars = 1;
  int space = n - 1;

  for (int i = 0; i < rows; i++) {
    char ch = 'A';
    for (int j = 0; j < space; j++) {
      cout << " ";
    }

    for (int j = 0; j < stars; j++) {
      cout << ch;

      if (j < stars / 2) {
        ch++;
      } else {
        ch--;
      }
    }

    stars += 2;
    space--;
    cout << endl;
  }
}

/*
-> Pattern

   A
  ABA
 ABCBA
ABCDCBA


*/
