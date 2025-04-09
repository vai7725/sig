#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArrSum(vector<int> nums)
{
    int maxSum = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        int currSum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            currSum += nums[j];
        }
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
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
    vector<int> vec = {2, -3, 6, -5, 4, 2};
    printVector(vec);

    cout << "Max sub array sum: " << maxSubArrSum(vec) << endl;

    return 0;
}