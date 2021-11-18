/*
Problem name:
-------------
Arrays Introduction

Description:
------------
Given an array of N integers, print the integers in reverse order.

Input format:
-------------
The first line of the input contains N, where N is the number of integers. The
next line contains N space-separated integers.

Output format:
--------------
Print the N integers of the array in the reverse order, space-separated on a
single line.

Constraints:
------------
1 <= N <= 1000
1 <= A[i] <= 10000, where A[i] is the ith integer in the array

Sample input:
-------------
4
1 4 3 2

Sample output:
--------------
2 3 4 1
*/
#include <iostream>

using namespace std;

int main() {
  size_t N;
  cin >> N;

  int val, arr[N];

  while (N--) {
    cin >> val;
    arr[N] = val;
  }

  for (int &num: arr) {
    cout << num << ' ';
  }
  cout << endl;

  return 0;
}   
