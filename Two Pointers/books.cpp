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
        int n, t;
        cin >> n >> t;

        vector<int> v(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int i = 0, j = 0, curr = 0, ans = 0;

        while (j < n)
        {
            if (curr + v[j] > t)
            {
                curr -= v[i];
                i++;
                continue;
            }
            curr += v[j];
            j++;
            ans = max(ans, j - i);
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
