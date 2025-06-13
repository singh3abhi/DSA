#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 4;
  int rows = n;
  char ch = 'A' + n - 1;

  for (int i = 0; i < rows; i++) {
    char tch = ch - i;
    for (int j = 0; j <= i; j++) {
      cout << tch++ << " ";
    }

    cout << endl;
  }
}

/*
-> Pattern

D
C D
B C D
A B C D


*/
