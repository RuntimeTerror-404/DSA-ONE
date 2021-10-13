#include <bits/stdc++.h>
using namespace std;

int Partition(vector<int> &nums, int l, int h)
{
    int pivot = nums[h];
    int i = (l - 1);
    for (int j = l; j <= h - 1; j++)
    {
        if (nums[j] <= pivot)
        {
            i++;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i + 1], nums[h]);
    return (i + 1);
}

void quickSort(vector<int> &nums, int l, int h)
{
    if (l < h)
    {
        int pi = Partition(nums, l, h);
        quickSort(nums, l, pi - 1);
        quickSort(nums, pi + 1, h);
    }
}

int main()
{
    vector<int> nums = {4, 6, 2, 5, 7, 9};

    quickSort(nums, 0, nums.size() - 1);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}