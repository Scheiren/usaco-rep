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

        vector<pair<int, int>> v(n, {0, 0});

        for (int i = 0; i < n; i++)
            cin >> v[i].first >> v[i].second;

        sort(v.begin(), v.end(), [&v](const pair<int, int> &a, const pair<int, int> &b)
             {
            if(a.second != b.second)
                return a.second < b.second;
            return a.first < b.first; });

        int start = 0, end = 0, ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i].first >= end)
            {
                ans++;
                start = v[i].first;
                end = v[i].second;
            }
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
