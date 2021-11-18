/*
Problem name:
-------------
Staircase

Description:
------------
Given an integer, n, print a staircase using the '#' and ' ' characters. Its
base and height are both equal to n. It is drawn using '#' symbols and spaces.
The last line is not preceded by any spaces. Write a program that prints a
staircase of size n. 

Input format:
-------------
A single integer, n, denoting the size of the staircase.

Output format:
--------------
Print a staircase of size using '#' symbols and spaces.
Note: The last line must have spaces in it.

Constraints:
------------
0 < n <= 100

Sample input:
-------------
6

Sample output:
--------------
     #
    ##
   ###
  ####
 #####
######
*/
#include <iostream>

using namespace std;

int main() {
  unsigned n;
  cin >> n;

  for (unsigned i=0; i<n; ++i) {
    for (unsigned j=n-i-1; j>0; --j) {
      cout << ' ';
    }
    for (unsigned k=0; k<i+1; ++k) {
      cout << '#';
    }
    cout << endl;
  }

  return 0;
}
