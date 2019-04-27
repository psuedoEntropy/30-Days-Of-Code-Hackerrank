#include <string>
#include <cstring>
#include <iostream>


using namespace std;


int main(){
    string S;
    cin >> S;
    try {
	    int convertedInt = stoi(S);
    	std::cout << convertedInt;
    }
    catch (...) {
    	std::cout << "Bad String";
    }
    return 0;
}

