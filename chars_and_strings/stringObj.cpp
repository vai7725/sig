#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Vaibhav Prajapat";

    cout << str << endl;

    for (char i = 0; i < str.length(); i++)
    {
        cout << str[i] << "_";
    }

    cout << endl;

    for (char ch : str)
    {
        cout << ch << "-";
    }

    cout << endl;

    return 0;
}