#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
int solve(double meal_cost, int tip_percent, int tax_percent) {
    double totalBill =  meal_cost * (1 + tip_percent / 100.0 + tax_percent / 100.0);
    return round(totalBill);
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int bill = solve(meal_cost, tip_percent, tax_percent);
    cout << bill;
    return 0;
}