#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 4;
  int rows = n;

  for (int i = rows - 1; i >= 0; i--) {
    char ch = 'A';
    for (int j = 0; j <= i; j++) {
      cout << ch++ << " ";
    }

    cout << endl;
  }
}

/*
-> Pattern

A B C D
A B C
A B
A


*/
