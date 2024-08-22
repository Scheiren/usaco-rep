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
        long long t;
        cin >> n >> t;

        vector<long long> v(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        long long l = 1, r = INF * INF;

        while (l < r)
        {
            long long mid = (l + r) / 2;
            long long currProducts = 0;
            for (int i = 0; i < n; i++)
            {
                currProducts += mid / v[i];
                if (currProducts > t)
                    break;
            }

            if (currProducts >= t)
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
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
