#include <iostream>
using namespace std;

void printSpiral(int nums[4][4], int n, int m)
{
    int sRow = 0, sCol = 0, eRow = n - 1, eCol = m - 1;

    while (sRow <= eRow && sCol <= eCol)
    {
        for (int j = sCol; j <= eCol; j++)
        {
            cout << nums[sRow][j] << " ";
        }

        for (int i = sRow + 1; i <= eRow; i++)
        {
            cout << nums[i][eCol] << " ";
        }

        for (int j = eCol - 1; j >= sCol; j--)
        {
            if (sRow == eRow)
            {
                break;
            }
            cout << nums[eRow][j] << " ";
        }

        for (int i = eRow - 1; i >= sRow + 1; i--)
        {
            if (sCol == eCol)
            {
                break;
            }
            cout << nums[i][sCol] << " ";
        }

        sRow++, sCol++;
        eRow--, eCol--;
    }
    cout << endl;
}

int main()
{
    int nums[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    printSpiral(nums, 4, 4);

    return 0;
}