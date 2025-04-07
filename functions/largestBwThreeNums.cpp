#include <iostream>
using namespace std;

int printLargest(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > c && b > a)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    cout << printLargest(5, 2, 3) << endl;

    return 0;
}