#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5;

class Solution
{
public:
    int read(string s, int a, int b)
    {
        ++a;
        ++b;
        cout << s << " " << a << " " << b << endl;
        int res;
        cin >> res;
        return res;
    }

    int sum(int a, int b)
    {
        int and_ = read("and", a, b);
        int or_ = read("or", a, b);
        int xor_ = ~and_ & or_;

        int sum = and_ * 2 + xor_;

        return sum;
    }

    void solve()
    {
        int n, k;
        cin >> n >> k;

        int ab = sum(0, 1), ac = sum(0, 2), bc = sum(1, 2);

        vector<int> res;
        res.push_back((ab + ac - bc) / 2);
        res.push_back(ab - res[0]);
        res.push_back(ac - res[0]);

        for (int i = 3; i < n; i++)
        {
            res.push_back(sum(i - 1, i) - res[i - 1]);
        }

        sort(res.begin(), res.end());

        cout << "finish " << res[k - 1] << endl;

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
