#include <bits/stdc++.h>
using namespace std;

int kadens(vector<int> &nums)
{
    int cur_sum = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        cur_sum += nums[i];
        if (nums[i] >= cur_sum)
        {
            cur_sum = nums[i];
        }
    }

    return cur_sum;
}

int main()
{
    vector<int> nums = {-4, -3, 3, -1, 5, 3};
    // sub array which has maximum sum

    int result = kadens(nums);

    cout << result;
}