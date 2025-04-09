#include <iostream>
#include <vector>
using namespace std;

void printSubArr(vector<int> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            cout << nums[j] << " ";
        }
        cout << endl;
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
    vector<int> vec = {1, 2, 3, 4, 5};
    printVector(vec);

    printSubArr(vec);

    return 0;
}