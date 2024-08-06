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
        int n;
        cin >> n;
        long long ans = -INF, sum = 0, a = 0, minVal = 0;

        for(int i = 0 ; i < n ; i++)
        {
            cin >> a;
            sum += a;
            ans = max(ans, sum - minVal);
            minVal = min(minVal, sum);
        }

        cout << ans;
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
