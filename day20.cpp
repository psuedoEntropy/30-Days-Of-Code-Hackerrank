#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int swap(int *a, int *b) {
  static int count = 0;
  int temp = *a;
  *a = *b;
  *b = temp;
  count++;
  std::cout << count;
  return count;
}

int main() {
  int n = 0;
  std::cin >> n;
  std::vector<int> arrayOfNum(n);

  for (int i = 0; i < n; ++i) {
    std::cin >> arrayOfNum[i];
  }

  for (int j = 0; j < n - 1; ++j) {
    for (int i = 0; i < n - j; ++i) {

      if (arrayOfNum[i] > arrayOfNum[i + 1]) {
        swap(arrayOfNum[i], arrayOfNum[i + 1]);

      }
    }
  }

  return 0;
}
