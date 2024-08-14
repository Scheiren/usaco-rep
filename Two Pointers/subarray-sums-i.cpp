#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5 + 1;

class Solution
{
public:
    void solve()
    {
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> v(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        map<long long, long long> mp;
        mp[0]++;
        long long sum = 0, ans = 0;

        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            ans += mp[sum - x];
            mp[sum]++;
        }

        cout << ans;

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
