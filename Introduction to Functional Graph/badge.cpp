#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5;

class Solution
{
public:
    int cycleNode = -1;
    map<int, int> tortoiseAndHare2(vector<int> &base, int startingNode)
    {
        int t, h;
        map<int, int> mp;
        t = base[startingNode];
        h = base[base[startingNode]];

        while (t != h)
        {
            t = base[t];
            h = base[base[h]];
        }

        t = startingNode;

        while (t != h)
        {
            t = base[t];
            h = base[h];
        }

        mp[t]++;
        t = base[t];
        mp[t]++;

        while (t != h)
        {
            t = base[t];
            mp[t]++;
        }
        return mp;
    }

    void solve()
    {
        int n;
        cin >> n;

        vector<int> base(n, 0);
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            base[i] = --a;
        }

        map<int, int> cycle;

        cycle = tortoiseAndHare2(base, 0);

        for (int i = 0; i < n; i++)
        {
            if (cycle[i])
            {
                cout << i + 1 << " ";
                continue;
            }

            int t = i;

            while (!cycle[t] && cycleNode == -1)
            {
                t = base[t];
                if (cycle[t])
                {
                    cycleNode = t;
                    break;
                }
            }
            cout << t + 1 << " ";
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
