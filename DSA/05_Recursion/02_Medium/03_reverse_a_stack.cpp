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

void insertAtEnd(stack<int>& st, int x) {
  if (st.empty()) {
    st.push(x);
    return;
  }

  int top = st.top();
  st.pop();
  insertAtEnd(st, x);
  st.push(top);
}

void reverseStack(stack<int>& st) {
  // Your code goes here
  if (st.size() == 1) {
    return;
  }

  int top = st.top();
  st.pop();
  reverseStack(st);
  insertAtEnd(st, top);
}
int main() {}