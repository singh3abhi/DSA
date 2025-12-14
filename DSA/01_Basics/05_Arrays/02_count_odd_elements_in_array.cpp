#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(1)
*/

int countOdd(int arr[], int n) {
  int ans = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 != 0) {
      ans++;
    }
  }

  return ans;
}

int main() {}