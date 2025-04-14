#include <iostream>
#include <cstring>
using namespace std;

void toUpper(char word[], int n)
{
    for (char i = 0; i < n; i++)
    {
        char ch = word[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            continue;
        }
        else
        {
            word[i] = ch - 'a' + 'A';
        }
    }
}

void toLower(char word[], int n)
{
    for (char i = 0; i < n; i++)
    {
        char ch = word[i];
        if (ch >= 'a' && ch <= 'z')
        {
            continue;
        }
        else
        {
            word[i] = ch - 'A' + 'a';
        }
    }
}

int main()
{
    char str[] = "VaIbhAv";
    cout << str << endl;

    toUpper(str, 7);
    cout << str << endl;

    toLower(str, 7);
    cout << str << endl;

    return 0;
}