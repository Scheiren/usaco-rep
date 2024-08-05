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
        int n;
        cin >> n;
        vector<int> v(n + 2, 1), prefix(n + 2, 1), suffix(n + 2, 1);

        for(int i = 1 ; i <= n ; i++)
        {
            cin >> v[i];
        }

        prefix[1] = v[1];
        suffix[n] = v[n];

        for(int i = 2 ; i <= n + 1 ; i++)
        {
            prefix[i] = __gcd(prefix[i - 1], v[i]);
        }

        for(int i = n - 1 ; i >= 0 ; i--)
        {
            suffix[i] = __gcd(suffix[i + 1], v[i]);
        }

        int ans = 0;

        ans = max(ans, suffix[2]);
        ans = max(ans, prefix[n - 1]);

        for(int i = 1 ; i <= n ; i++)
        {
            int wholeGCD = __gcd(prefix[i - 1], suffix[i + 1]);
            ans = max(ans, wholeGCD);
        }

        cout << ans;
    }
}; 

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    Solution().solve();

    return 0;
}
