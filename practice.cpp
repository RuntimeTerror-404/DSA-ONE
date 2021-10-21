#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> &nums, int sum)
{
    int curr_sum = 0;
    int start = 0;
    int end = -1;
    unordered_map<int, int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        curr_sum += nums[i];
        if (curr_sum == sum)
        {
            start = 0;
            end = i;
            break;
        }
        if (ans.find(curr_sum - sum) != ans.end())
        {
            start = ans[curr_sum - sum] + 1;
            end = i;
            break;
        }
        ans[curr_sum] = i;
    }
    cout << start << " , " << end;
}

int main()
{
    vector<int> nums = {1, 4, 20, 3, 10, 5};
    int sum = 33;
    /*
    [1] = 0
    [5] = 1
    [25] = 2
    [28] = 3
    [38] = 4
    [43] = 5
    */
    solution(nums, sum);
}