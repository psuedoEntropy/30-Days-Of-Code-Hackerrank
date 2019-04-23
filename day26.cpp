#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int calculateFine(int rd, int rm, int ry, int ed, int em, int ey) {
  int fine = 0;
  if (ry > ey) {
    fine = 10000;
  } else if (rm > em && ry == ey) {
    fine = 500 * (rm - em);
  } else if (rd > ed && em == rm) {
    fine = 15 * (rd - ed);
  } else {
    fine = 0;
  }

  return fine;
}

int main() {

  int rdate, rmonth, ryear;
  int edate, emonth, eyear;

  std::cin >> rdate >> rmonth >> ryear;
  std::cin >> edate >> emonth >> eyear;

  int fine = calculateFine(rdate, rmonth, ryear, edate, emonth, eyear);
  std::cout << fine;
  return 0;
}
