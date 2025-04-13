#include <iostream>
using namespace std;

int coutTarget(int arr[2][3], int n, int m, int target)
{
    int targetCount = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == target)
            {
                targetCount++;
            }
        }
    }
    return targetCount;
}

int main()
{
    int nums[2][3] = {
        {4, 7, 8},
        {8, 8, 7},
    };

    cout << coutTarget(nums, 2, 3, 8) << endl;

    return 0;
}