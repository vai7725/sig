#include <iostream>
using namespace std;

void printTable(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << num << "*" << i << "=" << num * i << endl;
    }
}

int main()
{

    printTable(10);

    return 0;
}