#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N)
SC - O(1)

This is slightly better because optimal1 could have overflow and we will need long long
where as xor at max will store 10^5 and wont overflow
*/

int optimal2(vector<int>& nums) {
  int n = nums.size();
  int xor1 = 1;
  int xor2 = 1;

  for (int i = 0; i < n; i++) {
    xor1 = xor1 ^ (i + 1);
    xor2 = xor2 ^ nums[i];
  }

  return xor1 ^ xor2;
}

int optimal1(vector<int>& nums) {
  int sum = 0;
  int n = nums.size();
  for (int val : nums) {
    sum += val;
  }

  return (n * (n + 1) / 2) - sum;
}

/*
TC - O(N)
SC - O(N)
*/
int better(vector<int>& nums) {
  int n = nums.size();
  int arr[n + 1];

  for (int val : nums) {
    arr[val] = 1;
  }

  for (int i = 0; i <= n; i++) {
    if (arr[i] == 0) {
      return i;
    }
  }

  return -1;
}

/*
TC - O(N^2)
SC - O(1)
*/
int bruteForce(vector<int>& nums) {
  int n = nums.size();

  for (int i = 0; i <= n; i++) {
    int flag = 0;

    for (int j = 0; j < n; j++) {
      if (nums[j] == i) {
        flag = 1;
        break;
      }
    }

    if (flag == 0)
      return i;
  }

  return -1;
}

int main() {}