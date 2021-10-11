#include <bits/stdc++.h>
using namespace std;

int joshphus(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }

    return joshphus(n - 1, k) % n;
}

int main()
{
    int x = 5;
    int k = 3;

    cout << joshphus(x, k);
}