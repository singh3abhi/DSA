#include <bits/stdc++.h>
using namespace std;

/*
TC - O(N + 2N)
SC - O(N)
*/
bool optimal(string& s, string& goal) {
  // your code goes here
  if (s.length() != goal.length()) {
    return false;
  }

  s += s;

  return s.find(goal) != string::npos;  // Under the hood uses robin karp which takes O(2N) time
}

/*
TC - O(N^2)
SC - O(N)
*/
bool rotateString(string& s, string& goal) {
  // your code goes here
  if (s.length() != goal.length()) {
    return false;
  }

  for (int i = 0; i < s.length(); i++) {
    string rotated = s.substr(i) + s.substr(0, i);

    if (goal == rotated) {
      return true;
    }
  }

  return false;
}

int main() {}