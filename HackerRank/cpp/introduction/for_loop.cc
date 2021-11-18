/*
Problem name:
-------------
For Loop

Description:
------------
In this challenge, you will use a for loop to increment a variable through a
range.

Input format:
-------------
You will be given two positive integers, a and b (a <= b), separated by a
newline.

Output format:
--------------
For each integer n in the inclusive interval [a, b]:
  - If 1 <= n <= 9, then print the English representation of it in lowercase.
    That is "one" for 1, "two" for 2, and so on.
  - Else if n > 9, and it is an even number, then print "even".
  - Else if n > 9 and it is an odd number, then print "odd".

Constraints:
------------
a <= b, where a and b can be any integer.

Sample input:
-------------
8
11

Sample output:
--------------
eight
nine
even
odd
*/
#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  for (int n=a; n<=b; ++n) {
    if (n <= 9 && n >= 1) {
      if (n == 1) {
        cout << "one" << endl;
      } else if (n == 2) {
        cout << "two" << endl;
      } else if (n == 3) {
        cout << "three" << endl;
      } else if (n == 4) {
        cout << "four" << endl;
      } else if (n == 5) {
        cout << "five" << endl;
      } else if (n == 6) {
        cout << "six" << endl;
      } else if (n == 7) {
        cout << "seven" << endl;
      } else if (n == 8) {
        cout << "eight" << endl;
      } else {
        cout << "nine" << endl;
      }
    } else if (n > 9) {
      if (n % 2 == 0) {
        cout << "even" << endl;
      } else {
        cout << "odd" << endl;
      }
    }
  }

  return 0;
}
