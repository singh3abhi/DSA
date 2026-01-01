#include <bits/stdc++.h>
using namespace std;

/*
TC - O(1)
SC - O(1)
*/
void optimal(int& a, int& b) {
  // Your code goes here
  a = a ^ b;
  b = a ^ b;  // b = (a ^ b) ^ b = a ^ 0 = a
  a = a ^ b;  // a = (a ^ b) ^ a = 0 ^ b = b
}

/*
TC - O(1)
SC - O(1)
*/
void optimal(int& a, int& b) {
  // Your code goes here
  a = a + b;
  b = a - b;  // b = (a + b) - b = a + 0 = a
  a = a - b;  // a = (a + b) - a = 0 + b = b
}

/*
TC - O(1)
SC - O(1)
*/
void bruteForce(int& a, int& b) {
  // Your code goes here
  int temp = a;
  a = b;
  b = temp;
}

int main() {}