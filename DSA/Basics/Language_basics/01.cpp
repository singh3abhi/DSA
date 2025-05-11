#include <bits/stdc++.h>
using namespace std;

// Rough range Of Data Types
// -10^9 < int < 10^9
// -10^12 < long int < 10^12
// -10^18 < long long int < 10^18
// Different compilers may have different range
// but for Online CP use int or long long int only

int main() {
  int numInt = INT_MAX;
  cout << numInt << endl;

  long numLong = 10000000000;
  cout << numLong << endl;

  long long numLongLong = 10000000000000;
  cout << numLongLong << endl;

  // By default the precision value is 6
  float numFloat = 0.123456789123456;  // Can store upto 7 decimal places with precision
  cout << numFloat << endl;

  double numDouble = 0.123456789123456;  // Can store upto 15 decimal places with precision
  cout << numDouble << endl;

  cout << "Float:  " << setprecision(9) << numFloat << endl;
  cout << "Double: " << setprecision(17) << numDouble << endl;

  // Character
  char ch = 'a';
  cout << ch << endl;

  // String
  string str = "Hello World!";
  cout << str << endl;

  // I/O

  int a, b;
  cin >> a >> b;

  cout << a << endl << b << endl;
  // If we try to access variable before it is initialized then it will have random/garbage value

  // When taking char as input then single char's will be picked
  // When taking string as input then words will be picked without spacing
  // If we have to take complete string as input then

  string str1, str2;
  getline(cin, str1);
  getline(cin, str2);
  cout << str1 << endl;
  cout << str2 << endl;

  int arr[5] = {5, 2, 1, 2, 3};
  int len = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < len; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  string name = "abhinav";  // This is a array of char with size 8 (string size + '\0' which is a null terminator)
  int length = name.size();

  for (int i = 0; i < length; i++) {
    cout << name[i] << " ";
  }
  cout << endl;

  // Pass by value & reference (Only one impo note that arrays are by default passed by ref)

  return 0;
}