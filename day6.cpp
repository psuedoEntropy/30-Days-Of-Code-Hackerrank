#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        string input;
        string evenString = "";
        string oddString = "";
        std::cin >> input;

        for (int j = 0; j < input.length(); ++j) {
            if (j % 2 == 0) {
                evenString += input[j];
            }
            else {
                oddString += input[j];
            }
        }
        std::cout << evenString << " " << oddString << std::endl;
    }

    return 0;
}
