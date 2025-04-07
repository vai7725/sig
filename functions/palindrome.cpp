#include <iostream>
using namespace std;

bool checkPalindrome(int num)
{
    int orgNum = num;
    int palNum = 0;

    while (num > 0)
    {
        palNum *= 10;
        palNum += num % 10;

        num /= 10;
    }

       if (palNum == orgNum)
    {
        return true;
    }
    return false;
}

int main()
{
    cout << checkPalindrome(101) << endl;
    cout << checkPalindrome(123) << endl;

    return 0;
}