/*
Problem name:
-------------
Basic Data Types

Description:
------------
Given inputs of different data types, store each data type correctly.
Afterwards, print each value in a new line in the same order they were read.

Input format:
-------------
Input consists of the following space-separated values: int, long, char, float,
and double, respectively

Output format:
--------------
Print each element on a new line in the same order it was received as input.
Note that the floating point value should be correct up to 3 decimal places and
the double to 9 decimal places.

Constraints:
------------
All inputs are valid.

Sample input:
-------------
3 12345678912345 a 334.23 14049.30493

Sample output:
--------------
3
12345678912345
a
334.230
14049.304930000
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int a;
  long b;
  char c;
  float d;
  double e;

  cin >> a >> b >> c >> d >> e;
  cout << a << '\n' << b << '\n' << c << '\n';
  cout << setprecision(6) << d << '\n';
  cout << setprecision(9) << e << endl;

  return 0;
}
