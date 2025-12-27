#include <bits/stdc++.h>
using namespace std;

/*
Kudos to Aditya Verma for OP Recursion Playlist

Hypothesis
Induction
Base

TC - O(N^2)
SC - 0(N)
*/

void insertAtRightPosition(stack<int>& st, int x) {
  if (st.size() == 0) {
    st.push(x);
    return;
  }

  int top = st.top();

  if (top <= x) {
    st.push(x);
    return;
  }

  st.pop();
  insertAtRightPosition(st, x);
  st.push(top);
}

void sortStack(stack<int>& st) {
  // Your code goes here
  if (st.size() == 1) {
    return;
  }

  int top = st.top();
  st.pop();
  sortStack(st);
  insertAtRightPosition(st, top);
}

int main() {}