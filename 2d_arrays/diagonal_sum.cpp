#include <iostream>
using namespace std;

int diagSum(int nums[4][4], int n, int m)
{
    int leftDiag = 0, rightDiag = 0;

    for (int i = 0, j = 0; i < n; i++, j++)
    {
        if (n % 2 != 0 && i == (n / 2) && j == (n / 2))
            continue;
        leftDiag += nums[i][j];
    }

    cout << endl;

    for (int i = 0, j = m - 1; i < n; i++, j--)
    {
        rightDiag += nums[i][j];
    }

    cout << "leftDiag: " << leftDiag << " rightDiag: " << rightDiag << " = " << leftDiag + rightDiag << endl;
    return leftDiag + rightDiag;
}

int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    // int arr[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}};

    diagSum(arr, 4, 4);

    return 0;
}