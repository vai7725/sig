#include <iostream>
using namespace std;

// Reverse the array without using extra space
void revArr(int arr[], int arrSze)
{
    int startIdx = 0;
    int endIdx = arrSze - 1;

    while (startIdx < endIdx)
    {
        swap(arr[startIdx], arr[endIdx]);
        startIdx++;
        endIdx--;
    }
}

// printing the array
void printArr(int arr[], int arrSze)
{
    for (int i = 0; i < arrSze; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    printArr(arr, n);

    revArr(arr, n);

    printArr(arr, n);
    return 0;
}