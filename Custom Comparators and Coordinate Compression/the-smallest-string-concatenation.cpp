#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5 + 1;

class Solution
{
public:
    bool cmp(string a, string b)
    {
        return (a + b) < (b + a);
    }
    void solve()
    {
        int n;
        cin >> n;

        vector<string> v;

        for (int i = 0; i < n; i++)
        {
            string t;
            cin >> t;
            v.push_back(t);
        }
        sort(v.begin(), v.end(), cmp);

        for (int i = 0; i < n; i++)
        {
            cout << v[i];
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
