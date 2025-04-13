#include <iostream>
using namespace std;

bool stairCase(int arr[4][4], int n, int m, int target)
{
    int i = 0, j = m - 1;

    while (i < n && j >= 0)
    {
        if (arr[i][j] == target)
        {
            cout << "Target found at index: (" << i << ", " << j << ")";

            return true;
        }
        else if (arr[i][j] > target)
        {
            // left
            j--;
        }
        else
        {
            // down
            i++;
        }
    }
    return false;
}

int main()
{
    int nums[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    stairCase(nums, 4, 4, 33);

    cout << endl;

    return 0;
}