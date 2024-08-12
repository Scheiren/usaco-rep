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

        vector<string> s(n);

        for (string &x : s)
        {
            cin >> x;
        }

        sort(s.begin(), s.end(), [&s](const string &a, const string &b)
             { return a + b < b + a; });

        for (const string &x : s)
        {
            cout << x;
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
