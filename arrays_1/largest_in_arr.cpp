#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {23, 12, 34, 56, 54};

    int n = sizeof(arr) / sizeof(int);

    int maxVal = arr[0];
    int minVal = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }

    cout << "Max value in arr: " << maxVal << endl;
    cout << "Min value in arr: " << minVal << endl;

    return 0;
}