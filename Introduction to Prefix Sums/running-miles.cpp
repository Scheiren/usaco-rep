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

        vector<long long> b(n + 1, 0);

        for(int i = 0 ; i < n ; i++)
        {
            cin >> b[i];
        }

        vector<long long> p(n , 0), s(n, 0);

        for(int i = 0 ; i < n ; i++)
        {
            p[i] = b[i] + i;
            s[i] = b[i] - i;
        }

        for(int i = 1 ; i < n ; i++)
        {
            p[i] = max(p[i - 1], p[i]);
        }

        for(int i = n - 2 ; i >= 0 ; i--)
        {
            s[i] = max(s[i + 1], s[i]);
        }
        long long ans = 0;
        for(int i = 1 ; i < n - 1 ; i++)
        {
            ans = max(ans, p[i - 1] + s[i + 1] + b[i]);
        }

        cout << ans << "\n";

        return;
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
