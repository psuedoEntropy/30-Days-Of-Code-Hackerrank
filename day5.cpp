#include <bits/stdc++.h>

using namespace std;

void printMultiplesOf(int n) {
    for (int i = 1; i <= 10; ++i) {
        std::cout << n << " x " << i << " = " << n*i << std::endl;
    }
}


int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    printMultiplesOf(n);

    return 0;
}
