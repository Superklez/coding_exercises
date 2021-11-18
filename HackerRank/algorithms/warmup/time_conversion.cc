/*
Problem name:
-------------
Time Convervsion

Description:
------------
Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.

Input format:
-------------
A single string s that represents a time in 12-hour clock format (i.e.: 
hh:mm:ssAM or hh:mm:ssPM).

Output format:
--------------
Print the converted string into miltiry (24-hour) time.

Constraints:
------------
All input times are valid.

Sample input:
-------------
07:05:45PM

Sample output:
--------------
19:05:45
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
  string time, pos;
  cin >> time;

  pos = time.substr(8, 2);
  time = time.erase(8, 2);

  if (time.substr(0, 2) != "12") {
    if (pos == "PM") {
      unsigned char hour = stoi(time.substr(0, 2)) + 12;
      time.replace(0, 2, to_string(hour));
    }
  } else if (pos == "AM") {
    time.replace(0, 2, "00");
  }

  cout << time << endl;

  return 0;
}
