#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 4;
  int rows = n;

  int val = 1;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j <= i; j++) {
      cout << val++ << " ";
    }

    cout << endl;
  }
}

/*
-> Pattern

1
2 3
4 5 6
7 8 9 10


*/
