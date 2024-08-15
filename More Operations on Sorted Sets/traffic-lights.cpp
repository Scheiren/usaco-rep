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
        int x, n;
        cin >> x >> n;
 
        set<int> s;
        s.insert(x);
        s.insert(0);
        map<int, int> mp;
        mp[x]++;
 
        for (int i = 0; i < n; i++)
        {
            int currLamp = 0;
            cin >> currLamp;
 
            set<int>::iterator it = s.lower_bound(currLamp + 1);
            int r = *it;
            int l = *(--it);
 
            mp[r - l]--;
            if (!mp[r - l])
            {
                mp.erase(r - l);
            }
 
            s.insert(currLamp);
            mp[r - currLamp]++;
            mp[currLamp - l]++;
            cout << (--mp.end())->first << " ";
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
