#include <bits/stdc++.h>
using namespace std;

bool board[10][10];
int n = 10;

void printBoard()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
bool isSafe(int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (board[row][i])
            return false;
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j])
            return false;
    }
    for (int i = row, j = col; j >= 0 && i < n; i++, j--)
    {
        if (board[i][j])
            return false;
    }
    return true;
}
bool Nqueen(int col)
{
    if (col == n)
        return true;

    for (int i = 0; i < n; i++)
    {
        if (isSafe(i, col))//        backtracking 
        {
            board[i][col] = 1;
            if (Nqueen(col + 1))
                return true;
            board[i][col] = 0;
        }
    }
    return false;
}
void solve()
{
    if (Nqueen(0) == false)
    {
        cout << " not possible";
    }
    else
    {
        printBoard();
    }
}
int main()
{
    cout << "\nInitially :\n";
    printBoard();
    cout << "\n solution :\n";
    solve();
    return 0;
}