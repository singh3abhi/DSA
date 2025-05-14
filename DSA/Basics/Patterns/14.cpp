#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 4;
  int rows = n;

  for (int i = 0; i < rows; i++) {
    char ch = 'A';
    for (int j = 0; j <= i; j++) {
      cout << ch++ << " ";
    }

    cout << endl;
  }
}

/*
-> Pattern

A
A B
A B C
A B C D


*/
