/*
Problem name:
-------------
Vector-Sort

Description:
------------
You are given N integers. Sort the N integers and print the sorted order. Store
the integers in a vector. Vectors are sequence containers representing arrays
that can change in size.

Input format:
-------------
The first line of the input contains N where N is the number of integers. The
next line contains N integers.

Output format:
--------------
Print the integers in the sorted order one by one in a single line followed by a
space.

Constraints:
------------
1 <= N <= 1e5
1 <= V_i <= 1e9, where V_i is the ith integer in the vector.

Sample input:
-------------
5
1 6 10 8 4

Sample output:
--------------
1 4 6 8 10
*/
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  size_t n;
  int inp;
  std::vector<int> vec;

  std::cin >> n;
  while (n--) {
   std::cin >> inp;
   vec.push_back(inp); 
  }

  std::sort(vec.begin(), vec.end());
  for (int &num: vec) {
    std::cout << num << ' ';
  }
  std::cout << std::endl;

  return 0;
}
