/*
Problem name:
-------------
Mini-Max Sum

Description:
------------
Given five positive integers, find the minimum and maximum values that can be
calculated by summing exactly four of the five integers. Then print the
respective minimum and maximum values as a single line of two space-separated
long integers.

Input format:
-------------
A single line of five space-separated integers.

Output format:
--------------
Print two space-separated long integers denoting the respective minimum and
maximum values that can be calculated by summing exactly four of the five
integers. (The output can be greater than a 32 bit integer.)

Constraints:
------------
1 <= arr[i] <= 1e9

Sample input:
-------------
1 2 3 4 5

Sample output:
--------------
10 14
*/
#include <iostream>

using namespace std;

int main() {
  long long num, min_num, max_num, sum;
  cin >> num;
  sum = min_num = max_num = min_num = num;

  for (unsigned i=0; i<4; ++i) {
    cin >> num;
    sum += num;
    if (num < min_num) {
      min_num = num;
    } else if (num > max_num) {
      max_num = num;
    }
  }

  cout << (sum - max_num) << ' ' << (sum - min_num) << endl;

  return 0;
}
