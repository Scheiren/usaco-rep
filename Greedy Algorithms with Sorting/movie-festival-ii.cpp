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
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i].second >> v[i].first;
        }

        sort(v.begin(), v.end());

        multiset<int> ms;
        int ans = 0;

        for (int i = 0; i < k; i++)
        {
            ms.insert(0);
        }

        for (int i = 0; i < n; i++)
        {
            auto it = ms.upper_bound(v[i].second);
            if (it == ms.begin())
                continue;

            --it;
            ms.erase(it);
            ms.insert(v[i].first);
            ans++;
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
