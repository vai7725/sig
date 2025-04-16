#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
    int start = 0, end = nums.size() - 1;
    int currSum = 0;

    vector<int> resultVec;

    while (start < end)
    {
        currSum = nums[start] + nums[end];

        if (currSum == target)
        {
            resultVec.push_back(start);
            resultVec.push_back(end);
            return resultVec;
        }
        else if (currSum > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }

    return resultVec;
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
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;
    printVector(vec);

    printVector(pairSum(vec, target));

    return 0;
}