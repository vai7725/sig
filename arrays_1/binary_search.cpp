#include <iostream>
#include <vector>
using namespace std;

int binSrch(vector<int> vec, int target)
{
    int st = 0, end = vec.size() - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (vec[mid] == target)
        {
            return mid;
        }

        else if (target < vec[mid])
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

    return -1;
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
    vector<int> vec = {34, 56, 78, 65, 23};
    printVector(vec);

    int target = 78;

    cout << "Target " << target << " is at: " << binSrch(vec, target) << endl;

    return 0;
}