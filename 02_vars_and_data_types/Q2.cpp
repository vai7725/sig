#include <iostream>
using namespace std;

int main()
{
    float pencilePrice, eraserPrice, penPrice;

    cout << "Enter the price of a pencil: ";
    cin >> pencilePrice;

    cout << "Enter the price of an eraser: ";
    cin >> eraserPrice;

    cout << "Enter the price of a pen: ";
    cin >> penPrice;

    cout << "The total price of all the stationery items is: " << pencilePrice + eraserPrice + penPrice << endl;

    cout << "The total price of all items after adding 18% GST is: " << pencilePrice + eraserPrice + penPrice + 0.18 * (pencilePrice + eraserPrice + penPrice) << endl;

    return 0;
}