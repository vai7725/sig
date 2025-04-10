#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void maxTrappedWater(vector<int> heights)
{
    int heightSize = heights.size();
    int leftMax[heightSize];
    leftMax[0] = INT_MIN;

    for (int i = 1; i < heightSize; i++)
    {
        leftMax[i] = max(leftMax[i - 1], heights[i - 1]);
    }

    int rightMax[heightSize];
    rightMax[heightSize - 1] = INT_MIN;

    for (int i = heightSize - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], heights[i + 1]);
    }

    int storedWater = 0;
    for (int i = 1; i < heightSize - 1; i++)
    {
        int currWater = min(leftMax[i], rightMax[i]) - heights[i];
        if (currWater > 0)
        {
            storedWater += currWater;
        }
    }

    cout << storedWater << endl;
}

void printVector(const vector<int> &v)
{
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec = {4, 2, 0, 6, 3, 2, 5};
    printVector(vec);

    maxTrappedWater(vec);

    return 0;
}