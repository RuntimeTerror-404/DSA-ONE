#include <bits/stdc++.h>
using namespace std;

int solution(int k)
{
    int sum = 0;
    for (int i = 1; i <= k; i++)
    {
        if (i % 2 == 0)
        {
            sum += -1;
        }
        else
        {
            sum += 3;
        }
    }
    return sum;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k; // seconds
        int ans = solution(k);
        cout << ans << endl;
    }
}