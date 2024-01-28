#include <bits/stdc++.h> 
using namespace std;   

class Node {
  public:
  int data;
  Node* next;

  Node(int data, Node* next){
    this->data = data;
    this->next = next;
  };

  Node(int data){
    this->data = data;
    this->next = nullptr;
  }
};


int main()
{
  vector<int> arr = {2,4,6,8,10};
  Node* y = new Node(arr[0]);
  Node* x = new Node(arr[1], y);
  cout << "y -> data " << y->data << endl;  // 2
  cout << "y -> next " << y->next << endl;  // 0
  cout << "x -> data " << x->data << endl;  // 4
  cout << "x -> next " << x->next->data << endl; // 2

  // x(4) -> y(2) -> nullptr
}