#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{

    if (s.size() == 1)
        return true;

    int l = 0;
    int r = s.size() - 1;

    while (l <= r)
    {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }
    return true;
};

bool recursion(string s, int l, int r)
{
    if (l >= r)
        return true;
    if (s[l] != s[r])
        return false;

    return recursion(s, l + 1, r - 1);
};

int main()
{
    string s;
    cin >> s;
    // s = racecar
    // s = mohit
    // bool res1 = isPalindrome(s);
    bool res2 = recursion(s, 0, s.size() - 1);
    // cout << res1 << endl;
    cout << res2 << endl;
}