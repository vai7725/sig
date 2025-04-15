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

void reverse(char word[], int n)
{
    int st = 0, end = n - 1;

    while (st < end)
    {
        swap(word[st], word[end]);
        st++;
        end--;
    }
}

bool palindrome(char word[], int n)
{
    int st = 0, end = n - 1;

    while (st <= end)
    {
        if (word[st++] != word[end--])
            return false;
    }

    return true;
}

int main()
{
    char str[] = "VaIbhAv";
    cout << str << endl;

    toUpper(str, 7);
    cout << str << endl;

    toLower(str, 7);
    cout << str << endl;

    reverse(str, 7);
    cout << str << endl;

    cout << palindrome(str, 7) << endl;

    return 0;
}