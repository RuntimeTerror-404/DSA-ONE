#include <bits/stdc++.h>
using namespace std;

int solution(string s, int n)
{
    sort(s.begin(), s.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = (i + 1) * (s[i] & 31);
        ans += sum;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int ans = solution(s, n);
        cout << ans << endl;
    }
}
