#include <bits/stdc++.h>
using namespace std;

int stocksProfit(vector<int> &stocks)
{
    int cur_profit = 0;
    int max_profit = 0;

    for (int i = stocks.size() - 1; i >= 0; --i)
    {
        for (int j = stocks.size() - 2; j >= 1; --j)
        {
            cur_profit = stocks[i] - stocks[j];
            if (cur_profit >= max_profit)
            {
                max_profit = cur_profit;
            }
        }
    }
    return max_profit;
}

int stocksProfit2(vector<int> stocks)
{
    int minSoFar = stocks[0];
    int maxProfit = 0;

    for (int i = 1; i < stocks.size(); i++)
    {
        minSoFar = min(minSoFar, stocks[i]);
        int profit = stocks[i] - minSoFar;

        maxProfit = max(maxProfit, profit);
    }
    return maxProfit;
}

int main()
{
    vector<int> stocks = {3, 5, 1, 7, 4, 9, 3};
    // stocks = {5, 2, 6, 1, 4}

    cout << stocksProfit2(stocks);
}