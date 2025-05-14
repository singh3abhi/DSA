#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 4;
  int rows = n;
  int cols = n;

  // Assuming it to be a graph and center is centered
  for (int i = -rows + 1; i < rows; i++) {
    for (int j = -cols + 1; j < cols; j++) {
      cout << max(abs(i), abs(j)) + 1 << " ";
    }
    cout << endl;
  }
}

/*
-> Pattern

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4


*/
