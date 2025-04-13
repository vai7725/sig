#include <iostream>
using namespace std;

int secondRowSum(int arr[3][3], int n, int m)
{
    int sum = 0;

    for (int i = 0; i < m; i++)
    {
        sum += arr[1][i];
    }

    return sum;
}

int main()
{
    int nums[3][3] = {
        {1, 4, 9},
        {11, 4, 3},
        {2, 2, 3}};

    cout << secondRowSum(nums, 3, 3) << endl;

    return 0;
}