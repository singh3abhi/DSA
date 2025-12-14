#include <bits/stdc++.h>
using namespace std;

/*
tc - O(sqrt(N)) + O(klogk)
sc - O(k) where k is number of divisors at max sqrt(n)
*/
vector<int> divisors(int n) {
  vector<int> ans;

  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ans.push_back(i);

      if (n / i != i) {
        ans.push_back(n / i);
      }
    }
  }

  sort(ans.begin(), ans.end());

  return ans;
}

int main() {}