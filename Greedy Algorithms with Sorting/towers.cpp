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

        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            int p = upper_bound(v.begin(), v.end(), a) - v.begin();
            if (p == v.size())
            {
                v.push_back(a);
            }
            else
                v[p] = a;
        }

        cout << v.size();

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
