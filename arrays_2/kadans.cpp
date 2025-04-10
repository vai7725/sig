#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kadans(vector<int> nums)
{
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        currSum += nums[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
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

    cout << "Max sum of subArr: " << kadans(vec) << endl;

    return 0;
}