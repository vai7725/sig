#include <iostream>
using namespace std;

char nextChars(char ch)
{

    if (ch == 'z')
        return 'a';
    return ch + 1;
}

int main()
{
    cout << nextChars('z') << endl;

    return 0;
}