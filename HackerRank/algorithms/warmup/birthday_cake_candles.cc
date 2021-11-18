/*
Problem name:
-------------
Birthday Cake Candles

Description:
------------
You are in charge of the cake for a child's birthday. You have decided the cake
will have one candle for each year of their total age. They will only be able to
blow out the tallest of the candles. Count how many candles are tallest.

Input format:
-------------
The first line contains a single integer, n, the size of candles[].
The second line contains n space-separated integers, where each integer i
describes the height of candles[i].

Output format:
--------------
Return an integer of the number of candles that are tallest.

Constraints:
------------
1 <= n <= 1e5
1 <= candles[i] <= 1e7

Sample input:
-------------
4
3 2 1 3

Sample output:
--------------
2
*/
#include <iostream>

using namespace std;

int main() {
  size_t n;
  cin >> n;
  unsigned val, max=0, ans=0, arr[n];

  for (size_t i=0; i<n; ++i) {
    cin >> val;
    arr[i] = val;
    if (val > max) {
      max = val;
    }
  }

  for (size_t i=0; i<n; ++i) {
    if (arr[i] == max) {
      ++ans;
    }
  }

  cout << ans << endl;

  return 0;
}
