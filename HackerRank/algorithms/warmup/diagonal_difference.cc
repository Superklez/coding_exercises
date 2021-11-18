/*
Problem name:
-------------
Diagonal difference

Description:
------------
Given a square matrix, calculate the absolute difference between the sums of its
diagonals

Input format:
-------------
The first line contains a single integer, n, the number of rows and columns in
the square matrix arr. Each of the next n lines describes a row, arr[i], and
consists of n space-separated integers ar[i][j].

Output format:
--------------
Return the absolute difference between the sums of the matrix's two diagonals as
a single integer.

Constraints:
------------
-100 <= arr[i][j] <= 100

Sample input:
-------------
3
11 2 4
4 5 6
10 8 -12

Sample output:
--------------
15
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  size_t n;
  cin >> n;

  int val, d1=0, d2=0, ans=0, arr[n][n];

  for (size_t i=0; i<n; ++i) {
    for (size_t j=0; j<n; ++j) {
      cin >> val;
      arr[i][j] = val;
    }
  }

  for (size_t i=0; i<n; ++i) {
    d1 += arr[i][i];
    d2 += arr[i][n-i-1];
  }

  ans = abs(d1 - d2);
  cout << ans << endl;

  return 0;
}
