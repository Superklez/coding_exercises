/*
Problem name:
-------------
Compare the Triplets

Description:
------------
Alice and Bob each created one problem for HackerRank. A reviewer rates the two
challenges, awarding points on a scale from 1 to 100 for three categories:
problem clarity, originality, and difficulty. The rating for Alice's challenge
is the triplet a = (a[0], a[1], a[2]), and the rating for Bob's challenge is the
triplet b = (b[0], b[1], b[2]). The task is to find their comparison points by
comparing a[0] with b[0], a[1] with b[1], and a[2] with b[2].
  
  - If a[i] > b[i], then Alice is awarded 1 point.
  - If a[i] < b[i], then Bob is awarded 1 point.
  - If a[i] = b[i], then neither person receives a point.

Comparison points is the total points a person earned. Given a and b, determine
their respective comparison points.

Input format:
-------------
The first line contains 3 space-separated integers, a[0], a[1], and a[2], the
respective values in triplet a. The second line contains 3 space-separated
integers, b[0], b[1], and b[2], the respective values in triplet b.

Output format:
--------------
Return two space-separated integers. Alice's score is in the first position, and
Bob's score is in the second.

Constraints:
------------
1 <= a[i] <= 100
1 <= b[i] <= 100

Sample input:
-------------
5 6 7
3 6 10

Sample output:
1 1
*/
#include <iostream>

using namespace std;

int main() {
  int a[3], b[3];
  int score_a=0, score_b=0;

  cin >> a[0] >> a[1] >> a[2];
  cin >> b[0] >> b[1] >> b[2];

  for (size_t i=0; i<3; ++i) {
    if (a[i] > b[i]) {
      ++score_a;
    } else if (b[i] > a[i]) {
      ++score_b;
    }
  }

  cout << score_a << ' ' << score_b << endl;

  return 0;
}
