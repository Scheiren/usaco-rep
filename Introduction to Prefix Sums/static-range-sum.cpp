#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5 + 1;

class Solution
{
public:
    long long queries(vector<long long> v, vector<long long> prefix, long long l, long long r)
    {
        if(l == 0)
            return prefix[r - 1];
        return prefix[r - 1] - prefix[l - 1];
    }
    vector<long long> createPrefixSum(vector<long long> v, int n)
    {
        vector<long long> prefix(n, 0);
        prefix[0] = v[0];

        for(int i = 1 ; i < n ; i++)
        {
            prefix[i] = prefix[i - 1] + v[i];
        }

        return prefix;
    }
    void solve()
    {
        int n, q;
        cin >> n >> q;
        vector<long long> v(n, 0);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> v[i];
        }

        vector<long long> prefix = createPrefixSum(v, n);

        while(q--)
        {
            int l, r;
            cin >> l >> r;
            cout << queries(v, prefix, l, r) << "\n";
        }
    }
}; 

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    Solution temp;

    temp.solve();

    return 0;
}
