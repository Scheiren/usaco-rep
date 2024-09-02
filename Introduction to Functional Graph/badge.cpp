#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5;
 
class Solution
{
public:
    void tortoiseAndHare2(vector<int> &base, int startingNode)
    {
        int t, h;
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
 
        cout << t + 1 << " ";
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
 
        for (int i = 0; i < n; i++)
        {
            tortoiseAndHare2(base, i);
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
