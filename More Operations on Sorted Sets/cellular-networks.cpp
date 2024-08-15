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
        int n, m;
        cin >> n >> m;

        vector<int> cities(n, 0), towers(m, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> cities[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> towers[i];
        }
        int r = -1;

        for (int i = 0; i < n; i++)
        {
            auto it = lower_bound(towers.begin(), towers.end(), cities[i] + 1);
            int x = *it, y = *(--it);
            ++it;
            if (it == towers.end())
            {
                r = max(r, cities[i] - y);
                continue;
            }
            if (it == towers.begin())
            {
                r = max(r, x - cities[i]);
                continue;
            }

            int temp = min(x - cities[i], cities[i] - y);
            r = max(r, temp);
        }

        cout << r;

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
