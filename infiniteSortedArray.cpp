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
    int low = 0;
    int high = 1;
    while (nums[high] < key)
    {
        low = high;
        high = 2 * high;
    }
    return binarySearch(nums, key, low, high);
}

int main()
{
    vector<int> nums = {1, 3, 5, 6, 10, 19, 30, 43, 87, 98, 100, 122, 150, 199};

    int key = 30;
    int result = findPos(nums, key);

    cout<<result<<endl;
}