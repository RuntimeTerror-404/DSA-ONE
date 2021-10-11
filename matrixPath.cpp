#include <bits/stdc++.h>
using namespace std;

int totalPaths(int row, int col)
{
    if (row == 1 || col == 1)
    {
        return 1;
    }

    return (totalPaths(row - 1, col) + totalPaths(row, col - 1));
}

int main()
{
    vector<vector<int>> matrix;
    // matrix = {
    // 	{1,0,2},
    // 	{3,0,1},
    // 	{5,1,4},
    // 	{7,2,10}
    // };

    int row, col;
    row = 3;
    col = 3;
    cout << totalPaths(row, col);
}