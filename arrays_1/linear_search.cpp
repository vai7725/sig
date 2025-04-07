#include <iostream>
using namespace std;

int linSrch(int arr[], int arrSize, int target)
{

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

// Time complexity of linear search: O(n);

int main()
{
    int arr[5] = {23, 12, 34, 56, 54};

    int n = sizeof(arr) / sizeof(int);

    int target = 34;

    cout << "Target found at the index: " << linSrch(arr, n, target) << endl;

    return 0;
}