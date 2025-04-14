#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[4] = {'v', 'a', 'i', '\0'};
    cout << strlen(str) << endl;

    // another way of defining strings
    char str2[] = "Vaibhav";
    cout << str2 << endl;

    char str3[50];
    cin.getline(str3, 50);

    cout << str3 << endl;

    return 0;
}