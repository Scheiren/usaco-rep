#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e9 + 10, mod = 1e9 + 7;
const long long maxN = 2e5 + 1;

class Solution
{
public:
    vector<int> readArray(int n)
    {
        vector<int> v(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> v[i];
        }
        return v;
    }

    long long madeUp(int n)
    {
        long long ans = 0;
        map<int, int> mp;
        vector<int> a, b, c;

        a = readArray(n);
        b = readArray(n);
        c = readArray(n);

        for(int i = 0 ; i < n ; i++)
        {
            mp[a[i]]++;
        }

        for(int j = 0 ; j < n ; j++)
        {
            ans += (long long)mp[b[c[j] - 1]];
        }
        return ans;
    }

}; 

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;
    
    Solution temp;

    cout << temp.madeUp(n);

    return 0;
}
