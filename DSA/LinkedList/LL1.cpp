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

// Array to LinkedList
// TC = O(N), SC = O(1)
Node* convertArrToLL(vector<int>& arr) {
  Node* head = nullptr;
  Node* mover = nullptr;

  for(auto& x : arr){
    Node* temp = new Node(x);
    if(head == nullptr){
      head = temp;
      mover = temp;
    } else{
      mover->next = temp;
      mover = mover->next;
    }
  }

  return head;
}

// Traversal Of LinkedList
// TC = O(N), SC = O(1)
void traversalOfLL(Node* temp) {
  cout << "LinkedList -> " << endl;
  while(temp != nullptr){
    cout << temp -> data;
    if(temp->next != nullptr) {
      cout << " -> ";
    }
    temp = temp->next;
  }
  cout << endl;
}

// Length Of LinkedList
// TC = O(N), SC = O(1)
int lengthOfLL(Node* temp){
  int len = 0;

  while(temp) {
    len++;
    temp = temp->next;
  }

  return len;
}

// Check if a element is present in LinkedList or not
bool checkIfPresent(Node* temp, int val) {
  while(temp){
    if(temp->data == val) {
      return true;
    }

    temp = temp->next;
  }

  return false;
}


int main() {

  /* 
  LinkedList Basics

  1) LinkedList elements are not stored contagious in memory.
  2) LinkedList node's are stored in heap memory.
  3) LinkedList can be increased or decreased.
  4) Head of LL = Starting Node
     Tail of LL = Ending Node

  5) Memory Space
  a) If sysem is 32 bit then
     int = 4 bytes
     Node* pointer = 4 bytes
     Total Size of Node = 8 bytes

  b) If system is 63 bit then
     int = 4 bytes
     Node* pointer = 8 bytes
     Total Size of Node = 12 bytes 
  
  */
  vector<int> arr = {2,4,6,8,10};
  Node* y = new Node(arr[0]);
  Node* x = new Node(arr[1], y);
  cout << "y -> data " << y->data << endl;  // 2
  cout << "y -> next " << y->next << endl;  // 0
  cout << "x -> data " << x->data << endl;  // 4
  cout << "x -> next " << x->next->data << endl; // 2

  Node* head = convertArrToLL(arr);
  cout << "Head At " << head->data << endl;

  traversalOfLL(head);
  cout << "Head at " << head->data << endl;

  int len = lengthOfLL(head);
  cout << "Length of LL : " << len << endl;

  int num = 10;
  bool isExists = checkIfPresent(head, num);
  cout << num << " exists in LinkedList : " << isExists << endl; // false is printed as 0 && true is printed as 1

}

