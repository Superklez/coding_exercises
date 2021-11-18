/*
Problem name:
-------------
Simple Array Sum

Description:
------------
Given an array of integers, find the sum of its elements.

Input format:
-------------
The first line contains an integer, n, denoting the size of the array. The
second line contains n space-separated integers representing the array's
elements.

Output format:
--------------
Print the sum of the array's elements as a single integer.

Constraints:
------------
0 < n, ar[i] <= 1000

Sample input:
-------------
6
1 2 3 4 10 11

Sample output:
--------------
31
*/
#include <iostream>
#include <numeric>

using namespace std;

int main() {
  size_t n;
  cin >> n;
  int val, ans, arr[n];

  for (size_t i=0; i<n; ++i) {
    cin >> val;
    arr[i] = val;
  }

  ans = accumulate(arr, arr+n, 0);
  cout << ans << endl;

  return 0;
}
