#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>

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
    sort(vec.begin(), vec.end());
    printVector(vec);

    return 0;
}