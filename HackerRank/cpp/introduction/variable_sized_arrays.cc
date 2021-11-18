/*
Problem name:
-------------
Variable Sized Arrays

Description:
------------
Consider an n-element array, a, where each index i in the array contains a
reference to an array of k_i integers (where the value of k_i varies from array
to array). Given a, you must answer q queries. Each query is in the format i j,
where i denotes an index in array a and j denotes an index in the array located
at a[i]. For each query, find and print the value of element j in the array at
location a[i] on a new line.

Input format:
-------------
The first line contains two space-separated integers denoting the respective
values of n (the number of variable-length arrays) and q (the number of
queries). Each line i of the n subsequent lines contains a space-separated
sequence in the format k a[i]_0 a[i]_1 ... a[i]_{k-1} describing the k-element
array located at a[i]. Each of the q subsequent lines contains two
space-separated integers describing the respective values of i (an index in
array a) and j (an index in the array referenced by a[i]) for a query.

Output format:
--------------
For each pair of i and j values (i.e., for each query), print a single integer
that denotes the element located at index j of the array referenced by a[i].
There should be a total of q lines of output.

Constraints:
------------
1 <= n <= 1e5
1 <= q <= 1e5
1 <= k <= 3e5
n <= sum(k) <= 3e5
0 <= i < n
0 <= j < k

All indices in this challenge are zero-based. All the given numbers are non
negative and are not greater than 1e6.

Sample input:
-------------
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3

Sample output:
--------------
5
9
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
  size_t n, k;
  unsigned q;
  vector<vector<int>> vec;

  cin >> n >> q;
  
  while (n--) {
    cin >> k;
    int val;
    vector<int> temp;

    while (k--) {
      cin >> val;
      temp.push_back(val);
    }

    vec.push_back(temp);
  }

  while (q--) {
    size_t i, j;
    cin >> i >> j;
    cout << vec[i][j] << '\n';
  }

  return 0;
}
