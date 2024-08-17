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
        int n, x;
        cin >> n >> x;
        vector<int> v(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int curr = 0, i;

        for (i = 0; i < n; i++)
        {
            if (curr + v[i] > x)
            {
                break;
            }
            curr += v[i];
        }

        cout << i;

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
