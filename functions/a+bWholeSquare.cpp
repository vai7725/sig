#include <iostream>
using namespace std;

int wholeSquare(int a, int b)
{
    return (a * a) + (b * b) + (2 * a * b);
}

int main()
{
    cout << wholeSquare(2, 2) << endl;

    return 0;
}