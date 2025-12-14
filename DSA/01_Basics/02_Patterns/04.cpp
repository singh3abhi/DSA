#include <bits/stdc++.h>
using namespace std;

int main() {
  int stars = 5;

  for (int i = 0; i < stars; i++) {
    for (int j = 0; j <= i; j++) {
      cout << i + 1 << " ";
    }
    cout << endl;
  }
}

/*
-> Pattern

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/
