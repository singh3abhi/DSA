#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 4;
  int rows = n;

  char ch = 'A';
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j <= i; j++) {
      cout << ch << " ";
    }
    ch++;
    cout << endl;
  }
}

/*
-> Pattern

A
B B
C C C
D D D D


*/
