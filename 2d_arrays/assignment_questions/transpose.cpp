#include <iostream>
using namespace std;

void transpose(int nums[3][3], int n, int m)
{
    int arr[3][3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = nums[j][i];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int nums[3][3] = {
        {1, 4, 9},
        {11, 4, 3},
        {2, 2, 3}};

    transpose(nums, 3, 3);

    return 0;
}