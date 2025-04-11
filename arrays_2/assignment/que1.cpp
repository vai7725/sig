#include <iostream>
#include <vector>
using namespace std;

bool findRepeat(vector<int> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                cout << nums[i] << nums[j] << endl;
                return true;
            }
        }
    }

    return false;
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
    vector<int> vec = {34, 56, 56, 65, 23};
    // printVector(vec);

    cout << findRepeat(vec) << endl;

    return 0;
}