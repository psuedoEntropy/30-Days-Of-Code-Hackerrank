#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int cases = 0;
	std::cin >> cases;
	for (int z = 0; z < cases; ++z)
	{
		int n = 0;
		std::cin >> n;

	    int prime = 1;
	    for (int i = 2; i <= std::sqrt(n); ++i)
	    {
	    	if (n == 1) {
	    		prime = 0;
	    		break;
	    	}
	    	if (n%i == 0) {
	    		prime = 0;
	    		break;
	    	}
	    }

	    string toPrint = "";
	    if (n!=1) {
	    	toPrint = prime? "Prime": "Not prime";
	    }
	    else {
	    	toPrint = "Not Prime";
	    }

	    std::cout << toPrint << std::endl;
	}

    return 0;
}
