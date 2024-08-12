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

        set<pair<int, int>> s;

        for (int i = 0; i < n; i++)
        {
            int fi, se;
            cin >> fi >> se;
            s.insert({fi, 1});
            s.insert({se + 1, -1});
        }

        int ans = 0, curr = 0;
        for (pair<int, int> x : s)
        {
            curr += x.second;
            ans = max(ans, curr);
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
