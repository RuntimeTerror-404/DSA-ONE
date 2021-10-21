#include <bits/stdc++.h>
using namespace std;

void bruteForce(vector<int> &nums1, vector<int> &nums2){
    int n1 = nums1.size();
    int n2 = nums2.size();
    unordered_set<int> ans;

    for(int i=0; i<n1; i++){
        ans.insert(nums1[i]);
    }
    for(int i=0; i<n2; i++){
        ans.insert(nums2[i]);
    }
    cout<<"array size -> "<<ans.size()<<endl;
    for(int x:ans){
        cout<<x<<" ";
    }
}

void unionArray(vector<int> &nums1, vector<int> &nums2){
    int n1 = nums1.size();
    int n2 = nums2.size();
    int n = max(n1, n2);
    unordered_map<int, int> dict;
    for(int i=0; i<n; i++){
        if(dict[nums1[i]] && dict[nums2[i]]){
            dict[nums1[i]] += 1;
            dict[nums2[i]] += 1;
        }
        if(!dict[nums1[i]] && dict[nums2[i]]){
            dict[nums1[i]] = 1;
            dict[nums2[i]] += 1;
        }
        if(dict[nums1[i]] && !dict[nums2[i]]){
            dict[nums1[i]] += 1;
            dict[nums2[i]] = 1;
        }
        else{
            dict[nums1[i]] = 1;
            dict[nums2[i]] = 1;
        }
    }
    cout<<endl<<endl<<"Union Array size -> "<<dict.size()<<endl;
    for(auto i:dict){
        cout<<i.first<<" ";
    }
}


int main(){
    vector<int> nums1 = {5, 10, 15, 5, 11};
    vector<int> nums2 = {10, 15, 4, 5, 7};

    bruteForce(nums1, nums2);

    unionArray(nums1, nums2);
}