#include <bits/stdc++.h>
using namespace std;

int main() {
  int stars = 5;

  for (int i = stars; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
}

/*
-> Pattern

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/
