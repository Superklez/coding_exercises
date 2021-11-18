/*
Problem name:
-------------
Input and Output

Description:
------------
In this challenge, we practice reading input from stdin and printing output to
stdout. Read 3 numbers from stdin and print their sum to stdout.

Input format:
-------------
One line that contains 3 space-separated integers: a, b, and c.

Output format:
--------------
Print the sum of the three numbers on a single line.

Constraints:
------------
1 <= a, b, c <= 1000

Sample input:
-------------
1 2 7

Sample output:
--------------
10
*/
#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << (a + b + c) << endl;
  return 0;
}
