#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> &nums, int sum)
{
    int n = nums.size();
    unordered_map<int, int> ans;
    int start, end;
    int curr_sum = 0;
    for (int i = 0; i < n; i++)
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
    cout << start << " , " << end << endl;
}

int main()
{
    vector<int> nums = {10, 15, -5, 15, -10, 5};
    int sum = 5;
    solution(nums, sum);
}