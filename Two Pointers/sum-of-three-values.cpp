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

        vector<pair<int, int>> v(n, {0, 0});

        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i + 1;
        }

        sort(v.begin(), v.end(), [&v](const pair<int, int> &a, const pair<int, int> &b) -> bool
             {
            if(a.first != b.first)
                return a.first < b.first;
            return a.second < b.second; });

        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                pair<int, int> p = {x - v[i].first - v[j].first, 0};
                int k = lower_bound(v.begin() + j + 1, v.end(), p) - v.begin();
                if (v[i].first + v[j].first + v[k].first == x)
                {
                    cout << v[i].second << " " << v[j].second << " " << v[k].second;
                    return;
                }
            }
        }

        cout << "IMPOSSIBLE";

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
