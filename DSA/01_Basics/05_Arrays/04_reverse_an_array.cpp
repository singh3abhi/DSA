#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(1)
*/

void reverse(int arr[], int n) {
  int i = 0;
  int j = n - 1;

  while (i < j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    i++;
    j--;
  }
}

int main() {}