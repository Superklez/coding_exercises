/*
Problem name:
-------------
Conditional Statements

Description:
------------
Given a positive integer n, do the following:
  - If 1 <= n <= 9, print the lowercase English word corresponding to the number
    (e.g., "one" for , "two" for , etc.).
  - If n > 9, print "Greater than 9".

Input format:
-------------
A single integer, n.

Output format:
--------------
If 1 <= n <= 9, then print the lowercase English word corresponding to the
number (e.g., "one" for , "two" for , etc.); otherwise, print "Greater than 9."

Constraints:
------------
1 <= n <= 1e9

Sample input:
-------------
5

Sample output:
--------------
five
*/
#include <iostream>

using namespace std;

int main() {
  unsigned num;
  cin >> num;

  if (num == 1) {
    cout << "one" << endl;
  } else if (num == 2) {
    cout << "two" << endl;
  } else if (num == 3) {
    cout << "three" << endl;
  } else if (num == 4) {
    cout << "four" << endl;
  } else if (num == 5) {
    cout << "five" << endl;
  } else if (num == 6) {
    cout << "six" << endl;
  } else if (num == 7) {
    cout << "seven" << endl;
  } else if (num == 8) {
    cout << "eight" << endl;
  } else if (num == 9) {
    cout << "nine" << endl;
  } else {
    cout << "Greater than 9" << endl;
  }

  return 0;
}
