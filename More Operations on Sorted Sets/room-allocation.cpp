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
        vector<int> ans(n);
        vector<array<int, 3>> v(n);
        set<array<int, 2>> s;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i][1] >> v[i][0];
            v[i][2] = i;
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            set<array<int, 2>>::iterator it = s.lower_bound({v[i][1]});
            if (it != s.begin())
            {
                --it;
                ans[v[i][2]] = (*it)[1];
                s.erase(it);
            }
            else
            {
                ans[v[i][2]] = s.size();
            }
            s.insert({v[i][0], ans[v[i][2]]});
        }

        cout << s.size() << endl;

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] + 1 << " ";
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
