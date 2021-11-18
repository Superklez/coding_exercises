/*
Problem name:
-------------
A Very Big Sum

Description:
------------
In this challenge, you are required to calculate and print the sum of the
elements in an array, keeping in mind that some of those integers may be quite
large.

Input format:
-------------
The first line of the input consists of an integer n.
The next line contains n space-separated integers contained in the array.

Output format:
--------------
Return the integer sum of the elements in the array.

Constraints:
-----------
1 <= n <= 10
0 <= arr[i] <= 1e10

Sample input:
-------------
5
1000000001 1000000002 1000000003 1000000004 1000000005

Sample output:
--------------
5000000015
*/
#include <iostream>
#include <numeric>

using namespace std;

int main() {
  size_t n;
  cin >> n;

  long long val, ans=0;

  for (size_t i=0; i<n; ++i) {
    cin >> val;
    ans += val;
  }

  cout << ans << endl;

  return 0;
}
