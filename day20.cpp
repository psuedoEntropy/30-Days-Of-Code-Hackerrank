#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void printOutput(std::vector<int> v, int count) {
	std::cout << "Array is sorted in " << count << " swaps." << std::endl;
	std::cout << "First Element: " << v[0] << std::endl;
	std::cout << "Last Element: " << v[v.size() - 1] << std::endl;
}

int main() {
  int n = 0;
  int count = 0;
  std::cin >> n;
  std::vector<int> arrayOfNum(n);

  for (int i = 0; i < n; ++i) {
    std::cin >> arrayOfNum[i];
  }

  for (int j = 0; j < n - 1; ++j) {
    for (int i = 0; i < n - j - 1; ++i) {

      if (arrayOfNum[i] > arrayOfNum[i + 1]) {
        swap(arrayOfNum[i], arrayOfNum[i + 1]);
        count++;
      }
    }
  }

  printOutput(arrayOfNum, count);

  return 0;
}
