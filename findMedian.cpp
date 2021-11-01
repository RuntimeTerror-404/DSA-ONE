#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &nums, int x){
    nums.push_back(x);
}

int findMedian(vector<int> &nums){
    sort(nums.begin(), nums.end());
    insert(nums, 7);
    if(nums.size() == 1) return nums[0];
    if(nums.size() == 2) return (nums[0]+nums[1])/2;
    if(nums.size() == 3) return (nums[0]+nums[1]+nums[2])/2;

}


int main(){
    vector<int> nums = {4};

    

}