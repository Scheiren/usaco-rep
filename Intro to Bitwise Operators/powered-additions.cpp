#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5;

class Solution
{
public:
    void solve()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int n;
            cin >> n;
            vector<long long> v(n);
            for (long long &x : v)
            {
                cin >> x;
            }
            long long curr = v[0];
            vector<long long> add;
            for (int i = 1; i < n; i++)
            {
                if (curr > v[i])
                {
                    add.push_back(curr - v[i]);
                }
                else
                {
                    curr = v[i];
                }
            }
            long long ans = 0;
            for (long long x : add)
            {
                ans = max(ans, (long long)log2(x) + 1);
            }
            cout << ans << "\n";
        }

        return;
    }

private:
};

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    Solution().solve();

    return 0;
}
