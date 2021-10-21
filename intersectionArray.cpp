#include <bits/stdc++.h>
using namespace std;

void intersactionArray(vector<int> &nums1, vector<int> &nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();
    int n = min(n1, n2);

    set<int> ans;
    for (int i = 0; i < n1; i++)
    {
        ans.insert(nums1[i]);
    }

    int count = 0;
    vector<int> res;
    for (int x : nums2)
    {
        if (ans.find(x) != ans.end())
        {
            count += 1;
            res.push_back(x);
        }
    }

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}

int main()
{
    vector<int> nums1 = {5, 10, 15, 5, 4, 7};
    vector<int> nums2 = {10, 15, 4, 5, 7, 11};
    // ans = {5, 10, 15}
    intersactionArray(nums1, nums2);
}