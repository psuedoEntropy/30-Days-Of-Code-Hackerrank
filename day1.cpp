#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int j = 0;
    double e = 0.0;
    string t;

    std::cin >> j >> e;
    cin.ignore();
    getline(cin, t);

    std::cout << i + j << std::endl;
    std::cout.precision(1);
    std::cout << fixed << d + e << std::endl;
    std::cout << s + t << std::endl;

    return 0;
}