#include <bits/stdc++.h>
using namespace std;

void countElements(vector<int> &nums)
{
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
    for (auto x : dict)
    {
        cout << x.first << " ";
    }
    cout << endl;
    cout << dict.size();
}

void countElements_2(vector<int> &nums)
{
    int n = nums.size();
    unordered_set<int> s(n);
    for (int i = 0; i < n; i++)
    {
        s.insert(nums[i]);
    }
    for (auto x : s)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << s.size();
}

int main()
{
    vector<int> nums = {5, 10, 15, 5, 4, 5};

    countElements(nums);
    cout << endl
         << "next->" << endl;
    countElements_2(nums);
}