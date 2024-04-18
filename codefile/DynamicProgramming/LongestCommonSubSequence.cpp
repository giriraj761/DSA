#include <bits/stdc++.h>
using namespace std;

// MEMOIZATION TO PRINT THE LENGTH ONLY

// int memo[INT8_MAX][INT8_MAX];

// int LCS(string s1, string s2, int m, int n)
// {
//     if (memo[m][n] == -1)
//     {
//         if (m == 0 || n == 0)
//             memo[m][n] = 0;
//         else
//         {
//             if (s1[m - 1] == s2[n - 1])
//                 memo[m][n] = 1 + LCS(s1, s2, m - 1, n - 1);
//             else
//             {
//                 memo[m][n] = max(LCS(s1, s2, m - 1, n), LCS(s1, s2, m, n - 1));
//             }
//         }
//     }
//     return memo[m][n];
// }
// int main()
// {
//     for (int i = 0; i < INT8_MAX; i++)
//     {
//         for (int j = 0; j < INT8_MAX; j++)
//         {
//             memo[i][j] = -1;
//         }
//     }
//     string s1="axyz",s2="baz";
//     cout << LCS(s1,s2,s1.length(),s2.length());
//     return 0;
// }

// TABULATION TO PRINT THE LCS

void lcs(string X, string Y, int m, int n)
{
    int L[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }
    
    string lcs = "";

    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (X[i - 1] == Y[j - 1])
        {
            lcs = lcs + X[i - 1];
            i--;
            j--;
        }
        else if (L[i - 1][j] > L[i][j - 1])
            i--;
        else
            j--;
    }
    reverse(lcs.begin(), lcs.end());
    cout << "LCS of " << X << " and " << Y << " is " << lcs;
}

int main()
{
    string x = "AGGTAB";
    string y = "GXTXAYB";
    int m = x.length();
    int n = y.length();
    lcs(x, y, m, n);
    return 0;
}
