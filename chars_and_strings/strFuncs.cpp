#include <iostream>
using namespace std;

int main()
{
    string str = "Vaibhav Prajapat";

    cout << str.length() << endl;
    cout << str.find("Praj") << endl;
    cout << str.substr(3, 8) << endl;
    cout << str.at(4) << endl;

    return 0;
}