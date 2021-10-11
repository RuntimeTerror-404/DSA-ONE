#include <bits/stdc++.h>
using namespace std;

vector<string> subsequences(vector<string> &res, string t, int i, string s)
{
    if (i == s.size())
    {
        res.push_back(t);
    }
    else
    {
        subsequences(res, t, i + 1, s);
        t = t + s[i];
        subsequences(res, t, i + 1, s);
    }

    return res;
};

int main()
{
    string s = "mohit";
    vector<string> res;
    vector<string> ans = subsequences(res, "", 0, s);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ", ";
    }
}