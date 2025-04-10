#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int bestBuy(vector<int> prices)
{
    int bestBuy[prices.size()];
    bestBuy[0] = INT_MAX;
    for (int i = 1; i < prices.size(); i++)
    {
        bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
    }

    int maxProfit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(currProfit, maxProfit);
    }

    return maxProfit;
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
    vector<int> vec = {7, 1, 5, 3, 6, 4};
    printVector(vec);

    cout << "Max profit: " << bestBuy(vec) << endl;

    return 0;
}