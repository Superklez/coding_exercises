/*
Problem name:
-------------
Strings

Description:
------------
In this challenge, you will familiarize yourself with strings. Given two
strings, return the length of each string, the concatenation of both strings,
and finally both strings but their first characters are swapped.

Input format:
-------------
You are given two strings, a and b, separated by a new line.

Output format:
--------------
In the first line print two space-separated integers, representing the length of
a and b respectively. In the second line print the string produced by
concatenating a and b (a + b). In the third line print two strings separated by
a space, a' and b'. a' and b' are the same as a and b, respectively, except that
their first characters are swapped.

Constraints:
------------
Each string will consist of lower case Latin characters ('a'-'z').

Sample input:
-------------
abcd
ef

Sample output:
--------------
4 2
abcdef
ebcd af
*/
#include <iostream>
#include <string>

int main() {
  std::string string_a;
  std::string string_b;

  std::cin >> string_a >> string_b;
  
  std::cout << string_a.length() << ' ' << string_b.length() << std::endl;
  std::cout << string_a + string_b << std::endl;
  
  std::swap(string_a[0], string_b[0]);
  std::cout << string_a << ' ' << string_b;
  return 0;
}
