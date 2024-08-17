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
        int n, m, k;
        cin >> n >> m >> k;

        vector<long long> a(n, 0), b(m, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        long long i = 0, j = 0, ans = 0;

        while (i < n && j < m)
        {
            if (b[j] >= a[i] - k && b[j] <= a[i] + k)
            {
                ans++;
                i++;
                j++;
            }
            else if (b[j] < a[i] - k)
            {
                j++;
            }
            else if (b[j] > a[i] + k)
            {
                i++;
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
