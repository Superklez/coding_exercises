/*
Problem name:
-------------
Functions

Description:
------------
Write a function that returns the maximum of four integers input arguments.

Input format:
-------------
Input will contain four integers - a, b, c, d, one per line.

Output format:
--------------
Return the greatest of the four integers. 

Constraints:
------------
All inputs are valid integers.

Sample input:
-------------
3
4
6
5

Sample output:
--------------
6
*/
#include <iostream>
#include <algorithm>

using namespace std;

int MaxNumber(int arr[], size_t size) {
  return *max_element(arr, arr + size);
}

int main() {
  int arr[4];
  cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
  cout << MaxNumber(arr, 4) << endl;
  return 0;
} 
