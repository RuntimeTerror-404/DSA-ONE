// print all possible permutations of a string
#include<bits/stdc++.h>
using namespace std;

vector<string> Permutations(string s, int l,int r, vector<string> &store){
    if(l == r){
        store.push_back(s);
    }

    for(int i=l; i<=r; i++){
        swap(s[l], s[i]);
        Permutations(s, l+1, r, store);
        swap(s[l],s[i]);
    }
    
    return store;

};


int main(){
    // abc = {abc, acb, bac, bca, cab, cba}
    string s = "xyz";
    vector<string> store;
    vector<string> res = Permutations(s, 0, s.size()-1,store);

    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    

    
}