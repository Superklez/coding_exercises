/*
Problem name:
-------------
Pointer

Description:
------------
In this challenge, you will familiarize yourself with pointers. Given two
integers, a and b, write a function that takes in pointers to the two integers
and updates them as follows:
  a' = |a + b|
  b' = |a - b|

Input format:
-------------
Input will contain two integers, a and b, separated by a newline.

Output format:
--------------
Print the updated integers in separate lines. The update rules are given in the
problem description.

Constraints:
------------
All inputs are valid integers.

Sample input:
-------------
4
5

Sample output:
--------------
9
5
*/
#include <iostream>
#include <cmath>

using namespace std;

void Update(int *pa, int *pb) {
  int temp = *pa;
  *pa += *pb;
  *pb = abs(temp - *pb);
}

int main() {
  int a, b;

  cin >> a >> b;
  Update(&a, &b);
  cout << a << '\n' << b << endl;

  return 0;
}
