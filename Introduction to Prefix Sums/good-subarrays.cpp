#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5 + 1;

class Solution
{
public:
    void queries()
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> p(n + 1, 0), f(n + 1, 0);
        p[0] = 0;
        f[0] = 0;

        for(int i = 1 ; i <= n ; i++)
        {
            p[i] = p[i - 1] + s[i - 1] - '0';
            f[i] = p[i] - i;
        }

        map<int, int> mp;
        mp[0] = 1;
        long long ans = 0;

        for(int i = 1 ; i <= n ; i++)
        {
            ans += mp[f[i]];
            mp[f[i]]++;
        }

        cout << ans << "\n";
    }
    void solve()
    {
        int t;
        cin >> t;

        while(t--)
        {
            queries();
        }
    }
}; 

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    Solution().solve();

    return 0;
}
