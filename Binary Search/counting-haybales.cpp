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
        int n, q;
        cin >> n >> q;

        vector<long long> v(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        while (q--)
        {
            int a, b;
            cin >> a >> b;

            cout << upper_bound(v.begin(), v.end(), b) - lower_bound(v.begin(), v.end(), a) << endl;
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
