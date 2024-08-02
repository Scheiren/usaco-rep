#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5 + 1;

class Solution
{
public:
    int ans = 0;
    void queenPermutation(int currCol, vector<vector<bool>> blocked, vector<bool> row, vector<bool> diag, vector<bool>revDiag)
    {
        if(currCol == 8)
        {
            ans++;
            return;
        }

        for(int i = 0 ; i < 8 ; i++)
        {
            if(row[i] == 0 && diag[i + currCol] == 0 && revDiag[i - currCol + 16] == 0 && blocked[i][currCol] == 0)
            {
                row[i] = 1;
                diag[i + currCol] = 1;
                revDiag[i - currCol + 16] = 1;
                currCol++;
                queenPermutation(currCol, blocked, row, diag, revDiag);
                currCol--;
                row[i] = 0;
                diag[i + currCol] = 0;
                revDiag[i - currCol + 16] = 0;
            }
        }
    }
};

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    string s;
    vector<vector<bool>> blocked(8, vector<bool>(8, 0));
    vector<bool> row(8, 0), diag(32, 0), revDiag(32, 0);

    for(int i = 0 ; i < 8 ; i++)
    {
        getline(cin, s);
        //cin.ignore();
        for(int j = 0 ; j < 8 ; j++)
        {
            if(s[j] == '*')
                blocked[i][j] = 1;
        }
    }

    Solution temp;

    temp.queenPermutation(0, blocked, row, diag, revDiag);

    cout << temp.ans;

    return 0;
}
