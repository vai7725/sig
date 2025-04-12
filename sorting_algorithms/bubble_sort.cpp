#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &nums)
{
    int isSwapped = false;
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                isSwapped = true;
            }
        }

        if (isSwapped == false)
        {
            break;
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
    vector<int> vec = {5, 4, 1, 2, 3};
    printVector(vec);

    bubbleSort(vec);

    printVector(vec);

    return 0;
}