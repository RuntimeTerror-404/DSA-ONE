#include <bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        int temp = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > temp)
        {
            nums[j + 1] = nums[j];
            j = j - 1;
        }
        nums[j + 1] = temp;
    }
    return nums;
}

int main()
{
    vector<int> nums = {8, 4, 1, 5, 9, 2};
    // sorted array = {1, 2, 4, 5, 8, 9}

    vector<int> res = insertionSort(nums);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}