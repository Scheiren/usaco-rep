#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5 + 1;

class Solution
{
public:
    void cordinateCompress(vector<int> &v)
    {
        vector<int> t = v;
        sort(t.begin(), t.end());

        for (int i = 0; i < v.size(); i++)
        {
            v[i] = lower_bound(t.begin(), t.end(), v[i]) - t.begin();
        }
        return;
    }
    void solve()
    {
        vector<int> v = {7, 0, 1, 8, 4, 3};
        cordinateCompress(v);

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
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
