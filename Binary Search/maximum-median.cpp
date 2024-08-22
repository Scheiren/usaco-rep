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

        vector<long long> v(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        long long l = 0, r = v.back() + k;

        while (l < r)
        {
            long long mid = l + (r - l + 1) / 2;
            long long currOps = 0;
            for (int i = (n - 1) / 2; i < n; i++)
            {
                currOps += max(0LL, mid - v[i]);
            }
            if (currOps > k)
            {
                r = mid - 1;
            }
            else
            {
                l = mid;
            }
        }

        cout << l;

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
