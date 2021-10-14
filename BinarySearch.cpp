#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums, int key, int l, int r){
    int mid = l+(r-l)/2;
    if(key == nums[mid]){
        return mid+1;
    }
    if(key < nums[mid]) return binarySearch(nums, key, l, mid-1);

    return binarySearch(nums, key, mid+1, r);

};

int iterativeWay(vector<int> nums, int key, int l, int r){
    while(l <= r){
        int mid = l+(r-l)/2;
        if(key == nums[mid]){
            return mid+1;
        }
        if(key < nums[mid]){
            r = mid-1;
        }
        if(key > nums[mid]){
            l = mid+1;
        }
    }
    return -1;
};

int main(){
    vector<int> nums = {2, 9, 18, 23, 34, 100, 300, 562};
    int key = 23;
    int l = 0;
    int r = nums.size()-1;

    int res1 = binarySearch(nums, key, l, r);
    int res2 = iterativeWay(nums, key, l, r);

    cout<<res1<<endl;

    cout<<res2<<endl;

}