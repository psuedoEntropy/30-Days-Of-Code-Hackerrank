#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n;
  std::cin >> n;
  std::map<string, string> nameNumber;

  for (int z = 0; z < n; ++z) {
    string name = "";
    string num = "";
    std::cin >> name;
    std::cin >> num;
    nameNumber[name] = num;
  }

  string askedName = "";
  while(std::cin >> askedName) {
    auto search = nameNumber.find(askedName);
    if (search != nameNumber.end()) {
      std::cout << search->first << "=" << search->second << std::endl;
    } else {
      std::cout << "Not found" << std::endl;
    }
  }
  return 0;
}
