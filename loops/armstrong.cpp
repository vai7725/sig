#include <iostream>
using namespace std;

bool checkArmstrong(int n)
{
    int cubed = 0;
    int num = n;
    while (num > 0)
    {
        int lastDig = num % 10;
        cubed += lastDig * lastDig * lastDig;
        num /= 10;
    }

    if (cubed == n)
    {
        return true;
    }
    return false;
}

int main()
{
    int isArmStr = checkArmstrong(152);
    cout << isArmStr << endl;

    return 0;
}