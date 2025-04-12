#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        int curr = nums[i];
        int prev = i - 1;

        while (prev >= 0 && nums[prev] > curr)
        {
            cout << prev << " ";
            swap(nums[prev], nums[prev + 1]);
            prev--;
        }
        nums[prev + 1] = curr;
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

    insertionSort(vec);

    cout << endl;

    printVector(vec);

    return 0;
}