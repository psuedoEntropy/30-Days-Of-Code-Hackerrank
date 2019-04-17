#include <bits/stdc++.h>
#include <vector>

using namespace std;

int isGreaterOf(int max, int count) {
  return max > count ? max : count;
}

int main() {
  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  int max = 0;
  int count = 0;

  while (n) {
    if (n % 2) {
      count++;
      max = isGreaterOf(max, count);
    } else {
      count = 0;
    }
    n /= 2;
  }

  std::cout << max << std::endl;
  return 0;
}
