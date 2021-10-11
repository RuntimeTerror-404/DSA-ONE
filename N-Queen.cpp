#include <bits/stdc++.h>
using namespace std;

bool isSafe(int board[4][4], int i, int j, int n)
{
    // check for columns
    for (int row = 0; row < i; row++)
    {
        if (board[row][j] == 1)
        {
            return false;
        }
    }

    // check for left diagonals
    int x = i;
    int y = j;
    while (x >= 0 && y >= 0)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        x--;
        y--;
    }

    // check for right diagonals
    while (x >= 0 && y < n)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        x--;
        y++;
    }

    return true;
};

bool N_Queen(int board[4][4], int i, int n)
{
    if (i == n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == 1)
                {
                    cout << "Q ";
                }
                else
                {
                    cout << ". ";
                }
            }
            cout << endl;
        }

        return true;
    }

    // j = columns
    for (int j = 0; j < n; j++)
    {
        if (isSafe(board, i, j, n))
        {
            board[i][j] = 1;

            bool nextQueenRakhPaye = N_Queen(board, i + 1, n);
            if (nextQueenRakhPaye)
            {
                return true;
            }
            board[i][j] = 0;
        }
    }

    return false;
}

int main()
{
    int n = 4; /* total number of rows and columns */
    int board[4][4] = {0};
    bool result = N_Queen(board, 0, n);

    cout << result << endl;
}