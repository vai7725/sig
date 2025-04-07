#include <iostream>
using namespace std;

int main()
{
    int num = 5;

    for (int i = 1; i <= num; i++)
    {
        for (int j = num; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}