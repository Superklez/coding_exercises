/*
Problem name:
-------------
Plus Minus

Description:
------------
Given an array of integers, calculate the ratios of its elements that are
positive, negative, and zero. Print the decimal value of each fraction on a new
line with 6 places after the decimal.

Input format:
-------------
The first line contains an integer, n, the size of the array. The second line
contains n space-separated integers that describe arr[n].

Output format:
--------------
Print the following 3 lines, each to 6 decimals:
  1. proportion of positive values
  2. proportion of negative values
  3. proportion of zeros

Constraints:
------------
0 <= n <= 100
-100 <= arr[i] <= 100

Sample input:
-------------
6
-4 3 -9 0 4 1

Sample output:
--------------
0.500000
0.333333
0.166667
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int val;
  unsigned n, pos=0, neg=0, zer=0;
  cin >> n;
  
  for (unsigned i=0; i<n; ++i) {
    cin >> val;
    if (val > 0) {
      ++pos;
    } else if (val < 0) {
      ++neg;
    } else {
      ++zer;
    }
  }

  cout << fixed << showpoint << setprecision(6);
  cout << (pos / static_cast<double>(n)) << endl; 
  cout << (neg / static_cast<double>(n)) << endl; 
  cout << (zer / static_cast<double>(n)) << endl; 

  return 0;
}
