#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int first = 0, second = 1;

    for (int i = 2; i <= num; i++)
    {
        int third = second + first;
        cout << third << endl;
        first = second;
        second = third;
    }

    return 0;
}