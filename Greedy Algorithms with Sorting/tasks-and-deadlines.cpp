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
        cin >> n;

        vector<pair<long long, long long>> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first >> v[i].second;
        }

        sort(v.begin(), v.end());

        long long ans = 0, currTime = 0;

        for (int i = 0; i < n; i++)
        {
            currTime += v[i].first;
            ans += v[i].second - currTime;
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
