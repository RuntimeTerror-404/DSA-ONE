#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums, int key, int l, int r)
{
    int mid = l + (r - l) / 2;
    if (key == nums[mid])
    {
        return mid + 1;
    }
    if (key < nums[mid])
        return binarySearch(nums, key, l, mid - 1);

    return binarySearch(nums, key, mid + 1, r);
};

int findPos(vector<int> &nums, int key)
{
    int n = nums.size() - 1;
    int mid = n / 2;
    if (nums[mid] == key)
        return mid + 1;
    if (nums[0] < nums[mid] && key < nums[mid] && key > nums[0])
    {
        return binarySearch(nums, key, 0, mid - 1);
    }
    else
    {
        return binarySearch(nums, key, mid + 1, n);
    }
}

int main()
{
    vector<int> nums1 = {120, 130, 40, 50, 90, 100, 110};
    vector<int> nums2 = {50, 60, 90, 100, 20, 30, 40};
    vector<int> nums3 = {20, 30, 40, 50, 60, 5, 10};

    int ans = findPos(nums3, 5);

    cout << ans;
}