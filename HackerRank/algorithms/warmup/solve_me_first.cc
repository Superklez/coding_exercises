/*
Problem name:
-------------
Solve Me First

Description:
------------
Complete the function solveMeFirst to compute the sum of two integers.

Input format:
-------------
Two space-separated integers, a and b.

Output format:
--------------
Print the sum of a and b.

Constraints:
------------
1 <= a, b <= 1000

Sample input:
-------------
2 3


Sample output:
--------------
5
*/
#include <iostream>

using namespace std;

int SolveMeFirst(int a, int b) {
  return a + b;
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << SolveMeFirst(a, b) << endl;
  return 0;
}
