#include <bits/stdc++.h>
using namespace std;

int waterBlocks(vector<int> &nums)
{
    int n = nums.size();
    vector<int> left(n);
    vector<int> right(n);
    left[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], nums[i]);
        // maxLeft = max(maxLeft, nums[i]);
        // left.push_back(maxLeft);
    }
    right[n - 1] = nums[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], nums[i]);
        // maxRight = max(maxRight, nums[i]);
        // right.push_back(maxRight);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += (min(left[i], right[i]) - nums[i]);
    }

    return count;
};

int main()
{
    vector<int> nums = {3, 1, 2, 4, 0, 1, 3, 2};

    int result = waterBlocks(nums);

    cout << result;
}