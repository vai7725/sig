// program to calculate simpel interest

#include <iostream>
using namespace std;

int main()
{
    float principal, rate, time;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the rate of interest: ";
    cin >> rate;

    cout << "Enter the time period: ";
    cin >> time;

    cout << "The simple interest is: " << (principal * rate * time) / 100 << endl;

    return 0;
}