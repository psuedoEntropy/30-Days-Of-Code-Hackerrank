#include <bits/stdc++.h>

    using namespace std;

    void printWeirdOrNot(int n) {
        if(n%2) {
            std::cout << "Weird";
        }
        else if (n >= 6 && n <= 20){
            std::cout << "Weird";
        }
        else {
            std::cout << "Not Weird";
        }
    }

    int main()
    {
        int N;
        cin >> N;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        printWeirdOrNot(N);

        return 0;
    }