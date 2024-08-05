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
        long long n;
        cin >> n;
        vector<long long> v(n, 0);
        map<long long, pair<long long, vector<long long>>> mp;
        mp[0].first++;
        mp[0].second.push_back(-1);

        long long currSum = 0, longestSub = 0;
        
        for(int i = 0 ; i < n ; i++)
        {
            cin >> v[i];
            currSum += v[i];
            if(mp[currSum % 7].first)
            {
                longestSub = i - mp[currSum % 7].second[0];
            }
            mp[currSum % 7].first++;
            mp[currSum % 7].second.push_back(i);
        }

        cout << longestSub;

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
