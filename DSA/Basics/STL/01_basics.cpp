#include <bits/stdc++.h>
using namespace std;

void explainPair() {
  pair<int, int> pr1 = {2, 9};
  pair<int, int> pr2 = make_pair(2, 8);

  cout << pr1.first << " " << pr1.second << endl;

  pair<int, char> pr3 = {2, 'A'};
  pair<int, char> pr4 = make_pair(2, 'A');

  cout << pr3.first << " " << pr3.second << endl;

  // Nested Pair
  pair<pair<int, int>, int> pr5 = {{1, 2}, 3};
  cout << pr5.first.first << " " << pr5.second << endl;
}

void printVector(vector<int> vec) {
  for (auto i : vec) {
    cout << i << " ";
  }
  cout << endl;
}

void explainVector() {
  // In arrays we cannot increase/ expand the size where as in vectors we can

  vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(0);
  vec.emplace_back(3);  // Same as push_back

  cout << vec.size() << endl;

  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }
  cout << endl;

  // Iterator
  vector<int>::iterator beginItr = vec.begin();
  auto endItr = vec.end();  //  auto is short form for assining auto type iterator
  // vec.end() -> points to the next of last element of array

  // for (vector<int>::iterator i = beginItr; i < endItr; i++) {
  //   cout << *i << " ";
  // }
  // cout << endl;

  // More Short Form
  // for (auto i = vec.begin(); i < vec.end(); i++) {
  //   cout << *i << " ";
  // }

  // cout << endl;

  // Shortest form for vector

  // for (auto i : vec) {
  //   cout << i << " ";
  // }
  // cout << endl;

  // Reverse iterator
  auto reverseBegin = vec.rbegin();  // This points to last element
  auto reverseEnd = vec.rend();      // This points to before of first element

  // Here we are doing i++ because iterator moves in reverse order
  // for (auto i = reverseBegin; i < reverseEnd; i++) {
  //   cout << *i << " ";
  // }

  // cout << endl;

  // Declaring vector
  vector<int> vec2(5);  // Declated vector of size 5 with each element as 0
  // printVector(vec2);

  vector<int> vec3(5, 1);  // Declated vector of size 5 with each element as 1
  // printVector(vec3);

  // Duplicate vector
  vector<int> dupl(vec);
  // printVector(dupl);

  // Range Duplicate Vector
  vector<int> dupl2(vec.begin() + 1, vec.end());
  // printVector(dupl2);

  // Front
  // cout << vec.front() << endl;

  // Back
  // cout << vec.back() << endl;

  // PopBack
  // vec.pop_back();
  // cout << vec.back() << endl;

  // Erase (Can remove single or range of elements with pointer/pointers)
  // vec.erase(vec.begin());
  // vec.erase(vec.begin() + 1, vec.end() - 1);
  // printVector(vec);

  // Clear (For clearing whole vector)
  // vec.clear();
  // printVector(vec);

  // Swap (For swapping content of two vectors)
  // vector<int> v1 = {1, 2};
  // vector<int> v2 = {3, 4};

  // swap(v1, v2);
  // printVector(v1);
  // printVector(v2);

  // Insert (Used for inserting elements through pointer)
  vec.insert(vec.begin() + 2, 10);
  printVector(vec);
}

void explainList() {
  // It allows us to push in front unlike vector
  list<int> ls = {6, 7};

  ls.push_front(1);

  for (auto it : ls) {
    cout << it << " ";
  }
  cout << endl;
}

void explainDeque() {
  /*
  1. Vector -> dynamic array
  2. Dequeu -> Segmented array
  3. List -> LinkedList

  */

  deque<int> dq = {1, 2, 4};

  cout << dq[1] << endl;  // Can access elements with index like vector

  // We can push in front like list
  dq.push_front(0);

  for (auto it : dq) {
    cout << it << " ";
  }
  cout << endl;
}

void explainStack() {
  // Last in first out
  // If stack is empty and we try to access top then it will throw run time error

  stack<int> stk;

  stk.push(1);
  stk.push(2);
  stk.push(3);
  stk.push(4);

  while (stk.size() != 0) {
    cout << stk.top() << " ";
    stk.pop();
  }

  cout << endl;
}

void explainQueue() {
  /*
  First in first out

  */

  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);

  while (q.empty() == false) {
    cout << q.front() << " ";
    q.pop();
  }

  cout << endl;
}

void explainPriorityQueue() {
  /*
  Internally uses heap data structure
  */

  // max heap (gives max element always)
  priority_queue<int> pq;
  pq.push(10);
  pq.push(20);
  pq.push(1);
  pq.push(0);
  pq.push(2);

  while (pq.empty() == false) {
    cout << pq.top() << " ";
    pq.pop();
  }

  cout << endl;

  priority_queue<int, vector<int>, greater<int>> minHeap;
  minHeap.push(10);
  minHeap.push(20);
  minHeap.push(1);
  minHeap.push(0);
  minHeap.push(2);

  while (minHeap.empty() == false) {
    cout << minHeap.top() << " ";
    minHeap.pop();
  }

  cout << endl;
}

void explainSet() {
  /*
  Stores only unique elements and that too in ascending order
  */

  set<int> st;
  st.insert(2);
  st.insert(21);
  st.insert(3);
  st.insert(3);
  st.insert(2);
  st.insert(10);
  st.insert(21);
  st.insert(30);
  st.insert(15);
  st.insert(12);

  for (auto it : st) {
    cout << it << " ";
  }
  cout << endl;

  auto it = st.find(2);
  if (it != st.end()) {
    cout << "2 found in set " << *it << endl;
  }

  /*
  We can also use count to checking if element exists or not
  */

  int val = st.count(2);  // Will give 1 or 0
  cout << "2 exists count " << val << endl;

  // Erase element
  st.erase(21);  // we can give value as well as iterator

  for (auto it : st) {
    cout << it << " ";
  }
  cout << endl;

  // we can erase range as well with iterators
  // auto it1 = st.begin();
  // it1++;

  // auto it2 = st.end();
  // it2--;

  // st.erase(it1, it2);

  // for (auto it : st) {
  //   cout << it << " ";
  // }
  // cout << endl;

  /*
  lower bound = returns an iterator that points to an element that is >= number given
  upper bound = returns an iterator that points to an element that is > number given

  */

  auto it3 = st.lower_bound(12);
  if (it3 != st.end()) {
    cout << *it3 << endl;
  }

  auto it4 = st.upper_bound(12);
  if (it4 != st.end()) {
    cout << *it4 << endl;
  }
}

void explainMultiSet() {
  /*
  Similar to set but stores repetitive elements in ascending order
  */

  multiset<int> ms;

  ms.insert(1);
  ms.insert(1);
  ms.insert(1);
  ms.insert(0);
  ms.insert(0);
  ms.insert(5);
  ms.insert(5);
  ms.insert(5);
  ms.insert(50);
  ms.insert(50);

  for (auto it : ms) {
    cout << it << " ";
  }
  cout << endl;

  auto it = ms.find(1);  // This will find address of first 1

  ms.erase(it);  // This will erase the first 1;

  for (auto it : ms) {
    cout << it << " ";
  }
  cout << endl;

  ms.erase(1);  // This will erase all 1's
  for (auto it : ms) {
    cout << it << " ";
  }
  cout << endl;

  cout << "5 count: " << ms.count(5) << endl;

  // Lower bound and upper bound are same
}

void explainUnorderedSet() {
  // Stores unique elements but in random order
  // Good with time complexity

  unordered_set<int> st;
  st.insert(1);
  st.insert(2);
  st.insert(1);
  st.insert(11);
  st.insert(11);
  st.insert(12);
  st.insert(12);

  for (auto it : st) {
    cout << it << " ";
  }
  cout << endl;
}

void explainMap() {
  map<int, string> mpp;
  mpp[1] = "abc";
  mpp[1] = "xyz";
  mpp[2] = "bcd";
  mpp[3] = "cde";

  mpp.insert({4, "def"});

  for (auto it : mpp) {
    cout << it.first << " -> " << it.second << endl;
  }
  // Stores in ascending order of keys

  auto it = mpp.find(2);

  if (it == mpp.end()) {
    // Not found
  } else {
    cout << (*it).first << " -> " << (*it).second << endl;
  }
}

void explainUnorderedMap() {
  unordered_map<int, string> mpp;
  mpp.insert({4, "def"});
  mpp[1] = "abc";
  mpp[1] = "xyz";
  mpp[2] = "bcd";
  mpp[3] = "cde";

  for (auto it : mpp) {
    cout << it.first << " -> " << it.second << endl;
  }
  // Stores in unordered order, better in time complexity

  auto it = mpp.find(20);

  if (it == mpp.end()) {
    // Not found
  } else {
    cout << (*it).first << " -> " << (*it).second << endl;
  }
}

void explainMultiMap() {
  multimap<int, char> mpp;
  mpp.insert({1, 'd'});
  mpp.insert({1, 'b'});
  mpp.insert({1, 'a'});
  mpp.insert({2, 'a'});
  mpp.insert({2, 'b'});
  mpp.insert({2, 'c'});
  mpp.insert({2, 'a'});
  mpp.insert({3, 'a'});
  mpp.insert({3, 'd'});

  // for (auto it : mpp) {
  //   cout << it.first << " -> " << it.second << endl;
  // }

  // Stores not just unique keys but all of the keys
  // Also it is only sorted in the ascending order of keys and then in order of it inserted

  auto it = mpp.equal_range(2);
  for (auto i = it.first; i != it.second; i++) {
    cout << (*i).first << " -> " << (*i).second << endl;
  }
}

void explainSort() {
  int arr[5] = {6, 9, 1, 0, 2};
  sort(arr, arr + 5);  // First to last element

  for (auto it : arr) {
    cout << it << " ";
  }
  cout << endl;

  vector<int> vec = {6, 9, 1, 0, 2};

  sort(vec.begin() + 1, vec.end());
  for (auto it : vec) {
    cout << it << " ";
  }
  cout << endl;
}

void explainAccumulate() {
  int arr[5] = {6, 9, 1, 0, 2};
  int initialSum = 0;
  cout << accumulate(arr, arr + 5, initialSum) << endl;  // Gives sum of container + initial sum
}

void explainCount() {
  int arr[5] = {6, 9, 1, 1, 2};
  int num = 1;
  cout << count(arr, arr + 5, num) << endl;  // Gives count of num
}

void explainFind() {
  int arr[5] = {6, 2, 1, 9, 0};
  auto it = find(arr, arr + 5, 8);
  if (it == arr + 5) {
    // not found
  } else {
    cout << (*it) << endl;
  }
}

void explainNextPermutation() {
  string str = "abc";

  do {
    cout << str << endl;
  } while (next_permutation(str.begin(), str.end()));

  /*
  So it gives us next permutation in sorted order
  If we start with bca then it will only print
  bca
  cab
  cba

  Also we can play with the iterators like for part of string
  */
}

void explainPrevPermutation() {
  string str = "cba";

  do {
    cout << str << endl;
  } while (prev_permutation(str.begin(), str.end()));

  /*
  So it gives us next permutation in descending sorted order
  If we start with bca then it will only print
  bca
  bac
  acb
  abc

  Also we can play with the iterators like for part of string
  */
}

void explainMaxElement() {
  int arr[5] = {6, 2, 1, 9, 0};
  auto it = max_element(arr, arr + 5);
  cout << *it << endl;
}

void explainMinElement() {
  int arr[5] = {6, 2, 1, 9, 0};
  auto it = min_element(arr, arr + 5);
  cout << *it << endl;
}

void explainReverse() {
  int arr[5] = {6, 2, 1, 9, 0};
  reverse(arr, arr + 5);

  for (auto it : arr) {
    cout << it << " ";
  }
  cout << endl;
}

bool newComparator(int el1, int el2) {
  if (el1 < el2)
    return false;

  return true;
}

bool customComparator(pair<int, int> p1, pair<int, int> p2) {
  if (p1.second < p2.second)
    return false;

  else if (p1.second > p2.second)
    return true;

  return p1.first < p2.first;
}

void explainComparator() {
  int arr[5] = {6, 2, 1, 9, 0};
  sort(arr, arr + 5);                 // Sorts with ascending order with internal comparator
  sort(arr, arr + 5, newComparator);  // Sorts with descending order with new comparator

  for (auto it : arr) {
    cout << it << " ";
  }
  cout << endl;

  pair<int, int> prr[] = {{1, 6}, {1, 5}, {2, 6}, {2, 9}, {3, 9}};

  // Sort it acc to largest second element and then first smallest element if second elements are same

  sort(prr, prr + 5, customComparator);
  for (auto it : prr) {
    cout << "{ " << it.first << " , " << it.second << "}" << " ";
  }
  cout << endl;
}

int main() {
  // explainPair();
  // explainVector();
  // explainList();
  // explainDeque();
  // explainStack();
  // explainQueue();
  // explainPriorityQueue();
  // explainSet();
  // explainMultiSet();
  // explainUnorderedSet();
  // explainMap();
  // explainUnorderedMap();
  // explainMultiMap();
  // explainSort();
  // explainAccumulate();
  // explainCount();
  // explainFind();
  // explainNextPermutation();
  // explainPrevPermutation();
  // explainMaxElement();
  // explainMinElement();
  // explainReverse();
  // explainComparator();

  return 0;
}