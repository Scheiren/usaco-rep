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

        set<pair<int, int>> s;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            pair<int, int> t = {a, i};
            s.insert(t);
        }

        for (int i = 0; i < m; i++)
        {
            int money;
            cin >> money;
            auto it = s.lower_bound({money + 1, 0});
            if (it == s.begin())
            {
                cout << "-1\n";
                continue;
            }
            --it;
            cout << it->first << "\n";
            s.erase(it);
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
