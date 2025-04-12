#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void counterSort(vector<int> &nums)
{
    int freq[nums.size()] = {0};
    int minVal = INT_MAX, maxVal = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        minVal = min(nums[i], minVal);
        maxVal = max(nums[i], maxVal);
    }

    for (int i = 0; i < nums.size(); i++)
    {
        freq[nums[i]]++;
    }

    for (int i = minVal, j = 0; i < maxVal; i++)
    {
        while (freq[i] > 0)
        {
            nums[j++] = i;
            freq[i]--;
        }
    }
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
    vector<int> vec = {2, 3, 1, 4, 3, 7, 4};
    printVector(vec);

    counterSort(vec);

    printVector(vec);

    return 0;
}