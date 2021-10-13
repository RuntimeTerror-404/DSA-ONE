#include <bits/stdc++.h>
using namespace std;

void majorityElements(vector<int> &nums)
{
    // int n = nums.size()/2;    // n = 3;
    int n = 2;
    unordered_map<int, int> dict;

    for (int i = 0; i < nums.size(); i++)
    {
        if (dict[nums[i]])
        {
            dict[nums[i]] += 1;
        }
        else
        {
            dict[nums[i]] = 1;
        }
    }

    for (auto i : dict)
    {
        if (i.second > n)
        {
            cout << i.first << endl;
        }
    }
};

int main()
{
    vector<int> nums = {5, 1, 4, 1, 1, 9, 4, 3, 4, 5, 9, 5};
    // majority elements - 1

    majorityElements(nums);
}