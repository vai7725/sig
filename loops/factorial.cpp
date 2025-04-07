#include <iostream>
using namespace std;

int factorial(int num)
{
    // int fact = 1;
    // for (int i = num; i > 0; i--)
    // {
    //     fact *= i;
    // }
    // return fact;

    int fact = 1;
    int i = 1;
    while (i <= num)
    {
        fact *= i;
        i++;
    }

    return fact;
}

int main()
{
    int num = 5;
    int fact = factorial(num);

    cout << "Factorial: " << fact << endl;

    return 0;
}