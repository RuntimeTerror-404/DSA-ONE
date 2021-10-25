#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> &nums, int k)
{
    vector<int> ans;
    set<int> s;
    int n = nums.size();
    for (int i = 0; i <= n - k; i++)
    {
        for (int j = i; j <= i + 3; j++)
        {
            s.insert(nums[j]);
        }
        ans.push_back(s.size());
        s.clear();
    }
    return ans;
}

vector<int> solution_2(vector<int> &nums, int k)
{
    vector<int> ans;
    unordered_map<int, int> dict;
    int n = nums.size();
    for (int i = 0; i < k; i++)
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
    for (int i = k; i < n; i++)
    {
        if (dict[nums[i - k]] == 1)
        {
            dict.erase(nums[i - k]);
        }
        else
        {
            dict[nums[i - k]] -= 1;
        }
        if (dict[nums[i]])
        {
            dict[nums[i]] += 1;
        }
        else
        {
            dict[nums[i]] = 1;
        }
        ans.push_back(dict.size());
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 2, 1, 3, 1, 1, 3};
    int k = 4;

    vector<int> res = solution_2(nums, k);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}