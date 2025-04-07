#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    if (num == 0)
        return false;

    if (num == 1)
        return false;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void printPrimes(int num)
{
    for (int i = 2; i <= num; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int num = 50;

    printPrimes(num);

    return 0;
}