#include<bits/stdc++.h>
using namespace std;

int bruteForce(vector<int> &nums, int k){
    int n = nums.size();
    int st1 = 0, st2 = 0;
    int minSoFar;

    for(int i=0; i<n-1; i++){
        st1 += nums[i];
        for(int j=i+1; j<n; j++){
            st2 += nums[j];
        }
        minSoFar = min(minSoFar, abs(st1-st2));
        st2 = 0;
    }
    return minSoFar;
}


int main(){
    vector<int> nums = {10, 20, 5, 15, 5};

    int ans = bruteForce(nums, 2);
    cout<<ans;
}