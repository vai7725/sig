#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    if (num < 2)
        return false;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int num = 25;
    for (int i = 2; i <= num; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}