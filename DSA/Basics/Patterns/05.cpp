#include <bits/stdc++.h>
using namespace std;

int main() {
  int stars = 5;

  for (int i = stars; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

/*
-> Pattern

* * * * *
* * * *
* * *
* *
*

*/
