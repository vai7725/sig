#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[minIdx])
            {
                minIdx = j;
            }
        }
        swap(nums[minIdx], nums[i]);
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
    vector<int> vec = {4, 5, 3, 2, 1};
    printVector(vec);

    selectionSort(vec);
    printVector(vec);
    return 0;
}