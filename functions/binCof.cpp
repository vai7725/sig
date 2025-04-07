#include <iostream>
using namespace std;

int findFact(int num)
{
    int fact = 1;

    if (num == 0 || num == 1)
        return 1;

    for (int i = 2; i <= num; i++)
    {
        fact *= i;
    }

    return fact;
}

int binCof(int n, int r)
{
    int factN = findFact(n);
    int factR = findFact(r);
    int factNR = (findFact(n - r));

    return (factN) / (factR * factNR);
}

int main()
{
    int combs = binCof(4, 2);
    cout << combs << endl;

    return 0;
}