#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5 + 1;

class Solution
{
public:
    void solve()
    {
        int n  = 0, q = 0;
        cin >> n >> q;

        vector<vector<int>> pref(n + 1, vector<int> (n + 1, 0));

        for(int i = 1 ; i <= n ; i++)
        {
            string s;
            cin >> s;

            for(int j = 1 ; j <= n ; j++)
            {
                pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + (s[j - 1] == '*' ? 1 : 0);
            }
        }

        while(q--)
        {
            int y1 = 0, y2 = 0, x1 = 0, x2 = 0;
            cin >> y1 >> x1 >> y2 >> x2;
            cout << pref[y2][x2] - pref[y2][x1 - 1] - pref[y1 - 1][x2] + pref[y1 - 1][x1 - 1] << "\n";
        }
        
        return;
    }
}; 

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    Solution().solve();

    return 0;
}
