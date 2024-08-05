#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5 + 1;

class Solution
{
public:
    void solve()
    {
        string s;
        cin >> s;

        long long suf = 0, pow10 = 1;
        map<int, int> mp;
        mp[0]++;
        int ans = 0;

        for(int i = s.size() - 1 ; i >= 0 ; i--)
        {
            suf = ((s[i] - '0') * pow10 + suf) % 2019;
            ans += mp[suf];
            pow10 = pow10 * 10 % 2019;
            mp[suf]++;
        }

        cout << ans;
    }
}; 

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    Solution().solve();

    return 0;
}
